#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextCursor>
#include <QTextCharFormat>
#include <QtWidgets>
#include <QFile>
#include <QFileDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionSave_triggered();

    void on_actionBold_triggered();

    void on_actionUnbold_triggered();

    void on_actionSuperscript_triggered();

    void on_actionSubscript_triggered();

    void on_actionView_Resume_triggered();

    void on_actionNeed_Help_triggered();

    void on_actionBack_to_normal_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
