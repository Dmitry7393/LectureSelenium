#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <QtGui/QMessageBox>
#include <math.h>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	connect(ui->m_BtnCalculate, SIGNAL(released()), this, SLOT(calculateRoot()));
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::calculateRoot()
{
	QString number = ui->m_LineEditForNumber->text();
	QRegExp re("\\d*");
	if (!re.exactMatch(number))
	{
		QMessageBox msgBox(this);
		msgBox.setText("Enter the number");
		msgBox.exec();
	}

	double result = sqrt(number.toInt());
	ui->m_ResultSqrt->setText(QString::number(result));
}
