#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QDebug"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void init();
    void initBicudoTab();

private slots:
    void handleCreateOwner();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
