__author__ = 'SKOR'

import sys

from PySide import QtGui, QtCore

class SolutionResolver(QtGui.QWidget):
    def __init__(self):
        super(SolutionResolver, self).__init__()
        self.x_text = str()
        self.y_text = str()
        self.z_text = str()
        self.minChecked = False
        self.maxChecked = False
        self.initUI()

    def initUI(self):
        #textarea

        #editboxes
        edit_x = QtGui.QLineEdit(self)
        edit_x.setGeometry(70,10,200,20)
       # edit_x.textChanged.connect(self.x_text)
        edit_y = QtGui.QLineEdit(self)
        edit_y.setGeometry(70,35,200,20)
        #edit_y.textChanged.connect(self.y_text)
        edit_z = QtGui.QLineEdit(self)
        edit_z.setGeometry(70,60,200,20)
        #edit_z.textChanged.connect(self.z_text)
        #labels
        label_x = QtGui.QLabel("X=", self)
        label_x.move(50,10)
        label_y = QtGui.QLabel("Y=", self)
        label_y.move(50,35)
        label_z = QtGui.QLabel("Z=", self)
        label_z.move(50,60)
        #checkboxes
        max = QtGui.QCheckBox("Max", self)
        max.move(320,10)
        #max.stateChanged.connect(self.minChecked)
        min = QtGui.QCheckBox("Min", self)
        min.move(370,10)
        min.stateChanged.connect(self.PrintResults)
        #radiobuttons
        func_qroup = QtGui.QGroupBox("Functions", self)
        radio_layout = QtGui.QVBoxLayout(self)
        cos_rd = QtGui.QRadioButton("Cos(x)", self)
        cos_rd.setChecked(True)
        sin_rd = QtGui.QRadioButton("Sin(x)", self)
        tg_rd = QtGui.QRadioButton("Tg(x)", self)
        radio_layout.addWidget(cos_rd)
        radio_layout.addWidget(sin_rd)
        radio_layout.addWidget(tg_rd)
        radio_layout.addStretch(1)
        func_qroup.setLayout(radio_layout)
        func_qroup.move(320,30)
        #buttons
        btn_ok = QtGui.QPushButton("OK", self)
        btn_ok.move(420,20)
        btn_ok.clicked.connect(self.PrintResults)
        btn_cancel = QtGui.QPushButton("Close", self)
        btn_cancel.move(420,45)
        btn_cancel.clicked.connect(self.CancelCalculation)
        self.setWindowTitle("Lab 3")
        self.resize(500,300)
        self.show()

    def PrintResults(self, e):
        pass

    def CancelCalculation(self):
        pass


def main():
    app = QtGui.QApplication(sys.argv)
    wid = SolutionResolver()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()