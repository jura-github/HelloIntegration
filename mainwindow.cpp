#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QCompleter>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList wordList;
    wordList << "alpha" << "omega" << "omicron" << "zeta";

    QLineEdit *lineEdit = new QLineEdit(this);

    QCompleter *completer = new QCompleter(wordList, this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    lineEdit->setCompleter(completer);
}

MainWindow::~MainWindow()
{
    delete ui;
}
