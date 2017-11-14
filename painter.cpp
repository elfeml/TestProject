#include "painter.h"


Painter::Painter(QWidget *parent) : QWidget(parent)
{

}

void Painter::MyWidget()
{
    QPalette palette(Painter::palette());
    palette.setColor(backgroundRole(), Qt::white);
    setPalette(palette);
}

void Painter::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::darkGreen);
   // painter.drawRect(10, 10, 40, 40);
    int x = 400;
    int y = 50;
    int width = 100;
    int height = 800;
    int seperator = 10;

    for(int i =0; i < 5; ++i)
    {
       painter.drawRect(x+(i*width)+(i*seperator),
                        y, width, height);



    }

    //painter.setPen(Qt::darkGray);
   // painter.drawLine(2, 8, 6, 2);
}
