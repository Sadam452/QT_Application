/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionBold;
    QAction *actionUnbold;
    QAction *actionSuperscript;
    QAction *actionSubscript;
    QAction *actionView_Resume;
    QAction *actionNeed_Help;
    QAction *actionBack_to_normal;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout_Me;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionUnbold = new QAction(MainWindow);
        actionUnbold->setObjectName(QString::fromUtf8("actionUnbold"));
        actionSuperscript = new QAction(MainWindow);
        actionSuperscript->setObjectName(QString::fromUtf8("actionSuperscript"));
        actionSubscript = new QAction(MainWindow);
        actionSubscript->setObjectName(QString::fromUtf8("actionSubscript"));
        actionView_Resume = new QAction(MainWindow);
        actionView_Resume->setObjectName(QString::fromUtf8("actionView_Resume"));
        actionNeed_Help = new QAction(MainWindow);
        actionNeed_Help->setObjectName(QString::fromUtf8("actionNeed_Help"));
        actionBack_to_normal = new QAction(MainWindow);
        actionBack_to_normal->setObjectName(QString::fromUtf8("actionBack_to_normal"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(7, 10, 771, 581));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 39));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAbout_Me = new QMenu(menubar);
        menuAbout_Me->setObjectName(QString::fromUtf8("menuAbout_Me"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout_Me->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave);
        menuEdit->addAction(actionBold);
        menuEdit->addAction(actionUnbold);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSuperscript);
        menuEdit->addAction(actionSubscript);
        menuEdit->addAction(actionBack_to_normal);
        menuAbout_Me->addAction(actionView_Resume);
        menuHelp->addAction(actionNeed_Help);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionBold->setText(QApplication::translate("MainWindow", "Bold", nullptr));
        actionUnbold->setText(QApplication::translate("MainWindow", "Unbold", nullptr));
        actionSuperscript->setText(QApplication::translate("MainWindow", "Superscript", nullptr));
        actionSubscript->setText(QApplication::translate("MainWindow", "Subscript", nullptr));
        actionView_Resume->setText(QApplication::translate("MainWindow", "View Resume", nullptr));
        actionNeed_Help->setText(QApplication::translate("MainWindow", "Need Help?", nullptr));
        actionBack_to_normal->setText(QApplication::translate("MainWindow", "Back to normal", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuAbout_Me->setTitle(QApplication::translate("MainWindow", "About Me", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
