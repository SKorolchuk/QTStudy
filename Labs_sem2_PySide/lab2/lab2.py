__author__ = 'SKOR'

import sys

from PySide import QtGui, QtCore

class DrawResolver(QtGui.QWidget):
    def __init__(self):
        super(DrawResolver, self).__init__()
        self.initUI()

    def initUI(self):
        self.setWindowTitle("Lab 2")
        self.setGeometry(300, 300, 350, 120)
        label = QtGui.QLabel('Variant #10', self)
        label.move(10,10)
        btn = QtGui.QPushButton('Close', self)
        btn.clicked.connect(QtCore.QCoreApplication.instance().quit)
        btn.move(260, 90)
        self.show()

    def paintEvent(self, e):
        painter = QtGui.QPainter()
        painter.begin(self)
        self.DrawFigure(painter)
        painter.end()

    def DrawFigure(self, painter):
        color = QtGui.QColor(0,0,0)
        color.setNamedColor('#000000')
        painter.setPen(color)
        startAngle = -0 * 16
        spanAngle = -180 * 16
        painter.setBrush(QtGui.QColor(200, 0, 0))
        painter.drawArc(30.0, 60.0, 80.0, 20.0, startAngle, spanAngle)
        painter.drawEllipse(30, 30, 80, 20)
        painter.drawLine(30, 40, 30, 70)
        painter.drawLine(110, 40, 110, 70)


def main():
    app = QtGui.QApplication(sys.argv)
    drawObj = DrawResolver()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()