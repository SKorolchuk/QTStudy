#include <opencv/cv.h>
#include <opencv/highgui.h>

using namespace cv;

void salt(Mat&, int);
void colorReduce(Mat&, int);

int main_camera_capture(){

    //create Matrix to store image

    Mat image, gray_image, blured_image;

    // initialize capture

    VideoCapture cap;

    cap.open(0);

    namedWindow("window", CV_WINDOW_AUTOSIZE);

    while(1){

        // copy webcam stream to image

        cap>>image;
        //salt(image, 100);
       // colorReduce(image, 64);
       // resize(image, image, Size(image.cols*2, image.rows*2));
       // cvtColor(image,gray_image, CV_RGB2GRAY);
      //  blur(gray_image, blured_image, Size(5,5));
        flip(image, image, 1);

         imshow("window", image);

         waitKey(10);

    }

    return 0;

}

void salt(Mat &image, int n) {
    for (int k = 0; k < n; k++) {
        int i = rand() % image.rows;
        int j = rand() % image.cols;
        if (image.channels() == 1) {
            image.at<uchar>(i, j) = 255;
        } else if (image.channels() == 3){
            image.at<Vec3b>(i,j)[0] = 255;
            image.at<Vec3b>(i,j)[1] = 255;
            image.at<Vec3b>(i,j)[2] = 255;
        }
    }
}

void colorReduce(Mat &image, int div = 64){
    int nl = image.rows;
    int nc = image.cols;
    for (int j = 0; j < nl; j++){
        uchar* data = image.ptr<uchar>(j);
        for (int i = 0; i < nc; i++){
            data[i] = data[i]/div*div + div/2;
        }
    }
}

void colorReduceWithIterators(Mat &image, int div = 64){
    Mat_<Vec3b>::iterator it = image.begin<Vec3b>();
    Mat_<Vec3b>::iterator itend = image.end<Vec3b>();
    for (;it!=itend; ++it){
        (*it)[0] = (*it)[0] /div*div + div/2;
    }
}

int main(){
    return main_camera_capture();
}
