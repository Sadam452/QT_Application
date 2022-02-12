#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionSave_triggered()
{

}

void MainWindow::on_actionBold_triggered()
{
    ui->textEdit->setFontWeight(QFont::Bold);
}

void MainWindow::on_actionUnbold_triggered()
{
    ui->textEdit->setFontWeight(QFont::Normal);
}

void MainWindow::on_actionSuperscript_triggered()
{
    QTextCharFormat format;
    format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::on_actionSubscript_triggered()
{
    QTextCharFormat format;
    format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::on_actionView_Resume_triggered()
{
    QString title = "View My Resume";
    QFile file(":/new/rsc/resume.html");
    QString description = "";
    if(file.open(QFile::ReadOnly | QFile::Text))
    {
        QTextStream in(&file);
        description = in.readAll();
        file.close();
    }
    QMessageBox::information(this,title,description);
}

void MainWindow::on_actionNeed_Help_triggered()
{

}

void MainWindow::on_actionBack_to_normal_triggered()
{
    QTextCharFormat format;
    format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    ui->textEdit->mergeCurrentCharFormat(format);
}
