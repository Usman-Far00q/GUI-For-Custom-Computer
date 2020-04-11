#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    clear_all();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::clear_all()
{
    ui->acbox->setText("0");
    ui->irbox->setText("0");
    ui->pcbox->setText("0");
    ui->ar1box->setText("0");
    ui->ar2box->setText("0");
    ui->redrbox->setText("0");
    ui->tempbox->setText("0");
    ui->pcbox->setText("0");
    ui->Operationbox->setText("");
}

void Widget::on_run_clicked()
{
    QString text = ui->Operationbox->toPlainText();
    QString a1text = ui->ar1box->toPlainText();
    QString a2text = ui->ar2box->toPlainText();
    if(text == "ADD II")
    {
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        ui->tempbox->setText(QString::number(val2));
        val3 = val1 + val2;
        ui->acbox->setText(QString::number(val3));
        ui->pcbox->setText(QString::number(1));
        QMessageBox::information(this,"Success",text +" Complete");
    }
    else if (text == "SUB II")
    {
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        ui->tempbox->setText(QString::number(val2));
        val3 = val1 - val2;
        ui->acbox->setText(QString::number(val3));
        ui->pcbox->setText(QString::number(1));
        QMessageBox::information(this,"Success",text +" Complete");
    }
    else if(text == "ADD I")
    {
        QString a2text = ui->acbox->toPlainText();
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        val3 = val2 + val1;
        ui->acbox->setText(QString::number(val3));
        ui->pcbox->setText(QString::number(1));
        QMessageBox::information(this,"Success",text +" Complete");
    }
    else if(text == "SUB I")
    {
        QString a2text = ui->acbox->toPlainText();
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        val3 = val2 - val1;
        ui->acbox->setText(QString::number(val3));
        ui->pcbox->setText(QString::number(1));
        QMessageBox::information(this,"Success",text +" Complete");
    }
    else if(text == "MUL I")
    {
        QString a2text = ui->acbox->toPlainText();
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        val3 = val2 * val1;
        ui->acbox->setText(QString::number(val3));
        ui->pcbox->setText(QString::number(1));
        QMessageBox::information(this,"Success",text +" Complete");
    }
    else if(text == "MUL II")
    {
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        ui->tempbox->setText(QString::number(val2));
        val3 = val1 * val2;
        ui->acbox->setText(QString::number(val3));
        ui->pcbox->setText(QString::number(1));
        QMessageBox::information(this,"Success",text +" Complete");
    }
    else if(text == "SWAP")
    {
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        ui->tempbox->setText(QString::number(val1));
        ui->acbox->setText(QString::number(val2));
        ui->ar1box->setText(QString::number(val2));
        ui->ar2box->setText(QString::number(val1));
        ui->pcbox->setText(QString::number(1));
        QMessageBox::information(this,"Success",text +" Complete");
    }
    else if(text == "TRNF")
    {
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        ui->acbox->setText(QString::number(val2));
        ui->ar1box->setText(QString::number(val2));
        ui->pcbox->setText(QString::number(1));
        QMessageBox::information(this,"Success",text +" Complete");
    }
    else if (text == "GRTN")
    {
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        if(val1>val2)
        {
            ui->acbox->setText(QString::number(val1));
        }
        else
        {
             ui->acbox->setText(QString::number(val2));
        }
        QMessageBox::information(this,"Success",text +" Complete");
        ui->pcbox->setText(QString::number(1));
    }
    else if (text == "ISZ I")
    {
        val1 = a1text.toInt(nullptr,10);
        if (val1 == -1)
        {
           ui->pcbox->setText(QString::number(2));
        }
        else {ui->pcbox->setText(QString::number(1));}
        ui->tempbox->setText(QString::number(val1+1));
        QMessageBox::information(this,"Success",text +" Complete");
        ui->pcbox->setText(QString::number(1));
    }
    else if (text == "ISZ II")
    {
        val1 = a2text.toInt(nullptr,10);
        if (val1 == -1)
        {
           ui->pcbox->setText(QString::number(2));
        }
        else {ui->pcbox->setText(QString::number(1));}
        ui->tempbox->setText(QString::number(val1+1));
        QMessageBox::information(this,"Success",text +" Complete");
        ui->pcbox->setText(QString::number(1));
    }
    else if (text == "STR I")
    {
        QString a1text = ui->acbox->toPlainText();
        val1 = a1text.toInt(nullptr,10);
        ui->ar1box->setText(QString::number(val1));
        QMessageBox::information(this,"Success",text +" Complete");
        ui->pcbox->setText(QString::number(1));
    }
    else if (text == "STR II")
    {
        QString a1text = ui->acbox->toPlainText();
        val1 = a1text.toInt(nullptr,10);
        ui->ar2box->setText(QString::number(val1));
        QMessageBox::information(this,"Success",text +" Complete");
        ui->pcbox->setText(QString::number(1));
    }
    else if(text =="AND")
    {
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        if((val1==1 || val1 ==0)&&(val2 == 1 ||val2 == 0))
        {
            ui->tempbox->setText(QString::number(val2));
            if(val1 == 1 && val2 ==1)
            {
               ui->acbox->setText(QString::number(1));
            }
            else
            {
                ui->acbox->setText(QString::number(0));
            }
              ui->tempbox->setText(QString::number(val2));
            QMessageBox::information(this,"Success",text +" Complete");
            ui->pcbox->setText(QString::number(1));
        }
        else
        {
            QMessageBox::information(this,"Invalid","AR I And AR II Both Can Only Have Binary Values (Either 1 0r 0)");
        }
    }
    else if(text =="AND I")
    {
        QString a2text = ui->acbox->toPlainText();
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        if((val1==1 || val1 ==0)&&(val2 == 1 ||val2 == 0))
        {
            ui->tempbox->setText(QString::number(val2));
            if(val1 == 1 && val2 ==1)
            {
               ui->acbox->setText(QString::number(1));
            }
            else
            {
                ui->acbox->setText(QString::number(0));
            }
              ui->tempbox->setText(QString::number(val1));
            QMessageBox::information(this,"Success",text +" Complete");
            ui->pcbox->setText(QString::number(1));
        }
        else
        {
            QMessageBox::information(this,"Invalid","AR I And AC Both Can Only Have Binary Values (Either 1 0r 0)");
        }
    }
    else if(text =="AND II")
    {
        QString a1text = ui->acbox->toPlainText();
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        if((val1==1 || val1 ==0)&&(val2 == 1 ||val2 == 0))
        {
            ui->tempbox->setText(QString::number(val2));
            if(val1 == 1 && val2 ==1)
            {
               ui->acbox->setText(QString::number(1));
            }
            else
            {
                ui->acbox->setText(QString::number(0));
            }
              ui->tempbox->setText(QString::number(val2));
            QMessageBox::information(this,"Success",text +" Complete");
            ui->pcbox->setText(QString::number(1));
        }
        else
        {
            QMessageBox::information(this,"Invalid","AR II And AC Both Can Only Have Binary Values (Either 1 0r 0)");
        }
    }
    else if(text =="OR")
    {
        val1 = a1text.toInt(nullptr,10);
        val2 = a2text.toInt(nullptr,10);
        if((val1==1 || val1 ==0)&&(val2 == 1 ||val2 == 0))
        {
            ui->tempbox->setText(QString::number(val2));
            if(val1 == 0 && val2 ==0)
            {
               ui->acbox->setText(QString::number(0));
            }
            else
            {
                ui->acbox->setText(QString::number(1));
            }
              ui->tempbox->setText(QString::number(val2));
            QMessageBox::information(this,"Success",text +" Complete");
            ui->pcbox->setText(QString::number(1));
        }
        else
        {
            QMessageBox::information(this,"Invalid","AR II And AC Both Can Only Have Binary Values (Either 1 0r 0)");
        }
    }
    else if (text == "LDA I")
    {
        val1 = a1text.toInt(nullptr,10);
        ui->acbox->setText(QString::number(val1));
        QMessageBox::information(this,"Success",text +" Complete");
        ui->pcbox->setText(QString::number(1));
    }
    else if (text == "LDA II")
    {
        val1 = a2text.toInt(nullptr,10);
        ui->acbox->setText(QString::number(val1));
        QMessageBox::information(this,"Success",text +" Complete");
        ui->pcbox->setText(QString::number(1));
    }
    else if (text == "CMP I")
    {
        val1 = a1text.toInt(nullptr,10);
        ui->tempbox->setText(QString::number(val1));
        ui->acbox->setText(QString::number(val1*(-1)));
        QMessageBox::information(this,"Success",text +" Complete");
        ui->pcbox->setText(QString::number(1));
    }
    else if (text == "CMP II")
    {
        val1 = a2text.toInt(nullptr,10);
        ui->tempbox->setText(QString::number(val1));
        ui->acbox->setText(QString::number(val1*(-1)));
        QMessageBox::information(this,"Success",text +" Complete");
        ui->pcbox->setText(QString::number(1));
    }
    else
    {
        QMessageBox::information(this,"ERROR","Invalid Operation");
    }
}
void Widget::on_clear_clicked()
{
    QMessageBox::information(this,"Cleared All Data","All Fields Have Been Cleared");
    clear_all();
}
