#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "binaryheap.h"
#include "binaryheap.cpp"

#include "binaryheapbylist.h"
#include "binaryheapbylist.cpp"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void printHeapAsArray(BinaryHeap<int> &h);
    void printHeapAsList(BinaryHeapByList<int> &h);

private slots:
    void on_insertButton_clicked();

    void on_extractMax_clicked();

    void on_getMaxButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

private:
    Ui::MainWindow *ui;
    BinaryHeap<int> h2;
    BinaryHeapByList<int> h;
    int currentBH = 0;
};
#endif // MAINWINDOW_H
