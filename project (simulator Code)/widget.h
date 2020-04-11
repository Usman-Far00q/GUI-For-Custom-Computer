#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    int val1, val2, val3;
    void clear_all();

private slots:
    void on_run_clicked();

    void on_clear_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
