#ifndef ABOUTFRM_H
#define ABOUTFRM_H

#include <QtWidgets/QWidget>

namespace Ui {
class AboutFrm;
}

class AboutFrm : public QWidget
{
    Q_OBJECT
    
public:
    explicit AboutFrm(QWidget *parent = 0);
    ~AboutFrm();
    
private:
    Ui::AboutFrm *ui;
};

#endif // ABOUTFRM_H
