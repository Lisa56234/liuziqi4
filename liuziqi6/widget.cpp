#include "widget.h"
#include "ui_widget.h"
#include"manvsman.h"
#include"mamvscomputer.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap("://Image/u=1869757711,2217152015&fm=26&gp=0.jpg"));  //导入背景图片
    ui->label_2->setPixmap(QPixmap("://Image/614356656556334208.png"));
    setMaximumSize(400,380);  //设置窗口大小
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_pushButton_mm_clicked(){
  Manvsman *mm=new Manvsman();
  mm->show();
}
void Widget::on_pushButton_mc_clicked(){
  Mamvscomputer *mc=new Mamvscomputer();
  mc->show();
}
