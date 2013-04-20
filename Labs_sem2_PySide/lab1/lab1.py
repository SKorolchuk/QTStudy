__author__ = 'SKorolchuk'

import sys

from PySide import QtGui, QtCore

class Math():
    def __init__(self, a = 0, b = 0):
        self.A = a
        self.B = b

    def set(self, widget):
        text, ok = QtGui.QInputDialog.getText(widget, 'Input Dialog',
            'Enter a, b:')
        if ok:
            self.A, self.B = str(text).split(',')
            self.A = float(self.A)
            self.B = float(self.B)

    def calc(self):
        self.Z1 = (self.A-1)*self.A**0.5 - (self.B - 1)*self.B**0.5
        self.Z1 /= (self.A**3*self.B)**0.5 + self.B*self.A + self.A**2 - self.A
        self.Z2 = (self.A**0.5 - self.B**0.5)/self.A


class SolutionResolver(QtGui.QWidget):
    def __init__(self):
        super(SolutionResolver, self).__init__()
        self.initUI()

    def initUI(self):
        btn = QtGui.QPushButton(self)
        btn.setText("Close")
        btn.move(170,50)
        btn.clicked.connect(QtCore.QCoreApplication.instance().quit)
        self.setWindowTitle("Lab 1")
        self.resize(400,80)
        info = QtGui.QMessageBox.information(self, 'Message',
            "Object initialized!")

    def set(self):
        self.m = Math()
        self.m.set(self)

    def calc(self):
        self.m.calc()
        label = QtGui.QLabel(self)
        label.setText('<p color="red"> A = ' + str(self.m.A) +
                  '; B = ' + str(self.m.B) +
                  '; Z1 = ' + str(self.m.Z1) +
                  '; Z2 = ' + str(self.m.Z2) +
                  '</p>')
        label.move(10,10)

    def print(self):
        self.show()


def main():
    app = QtGui.QApplication(sys.argv)
    wid = SolutionResolver()
    wid.set()
    wid.calc()
    wid.print()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()