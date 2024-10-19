/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *connect_bluetooth;
    QPushButton *send_program;
    QPushButton *upload;
    QPushButton *send_msg;
    QTextBrowser *log_browser;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *msg_edit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(278, 445);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        connect_bluetooth = new QPushButton(centralwidget);
        connect_bluetooth->setObjectName("connect_bluetooth");
        connect_bluetooth->setGeometry(QRect(20, 310, 111, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(12);
        connect_bluetooth->setFont(font);
        connect_bluetooth->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        connect_bluetooth->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(33, 166, 117);"));
        send_program = new QPushButton(centralwidget);
        send_program->setObjectName("send_program");
        send_program->setGeometry(QRect(20, 360, 111, 41));
        send_program->setFont(font);
        send_program->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        send_program->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(33, 166, 117);"));
        upload = new QPushButton(centralwidget);
        upload->setObjectName("upload");
        upload->setGeometry(QRect(140, 310, 111, 41));
        upload->setFont(font);
        upload->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        upload->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(33, 166, 117);"));
        send_msg = new QPushButton(centralwidget);
        send_msg->setObjectName("send_msg");
        send_msg->setGeometry(QRect(140, 360, 111, 41));
        send_msg->setFont(font);
        send_msg->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        send_msg->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(33, 166, 117);"));
        log_browser = new QTextBrowser(centralwidget);
        log_browser->setObjectName("log_browser");
        log_browser->setGeometry(QRect(20, 30, 231, 192));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 0, 71, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 230, 71, 21));
        label_2->setFont(font1);
        msg_edit = new QLineEdit(centralwidget);
        msg_edit->setObjectName("msg_edit");
        msg_edit->setGeometry(QRect(20, 260, 231, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cascadia Code")});
        font2.setPointSize(12);
        msg_edit->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 278, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        connect_bluetooth->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\345\210\260\350\223\235\347\211\231", nullptr));
        send_program->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\344\273\245\347\203\247\345\275\225", nullptr));
        upload->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\274\240\346\226\207\344\273\266", nullptr));
        send_msg->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\227\245\345\277\227", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
