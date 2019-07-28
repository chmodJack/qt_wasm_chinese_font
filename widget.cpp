#include "widget.h"
#include "ui_widget.h"




widget::widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget)
{
    ui->setupUi(this);
}

widget::~widget()
{
    delete ui;
}

void widget::on_pushButton_clicked()
{
    ui->textEdit->append("hello");
    ui->textEdit->append("你好");
}

void widget::on_pushButton_2_clicked()
{
    ui->textEdit->append("world");
    ui->textEdit->append("世界");
}

void widget::on_pushButton_3_clicked()
{
    ui->textEdit->clear();
}
