#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString db_name;
    QSqlDatabase db;
    QSqlTableModel * model;
    std::vector<QString> mapleDict;

public slots:
    void loadDB();
    void sendSelection();
    void showMapping();
};

#endif // MAINWINDOW_H
