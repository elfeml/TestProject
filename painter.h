#ifndef PAINTER_H
#define PAINTER_H

#include <QWidget>
#include <QtGui>

class Painter : public QWidget
{
    Q_OBJECT
public:
    explicit Painter(QWidget *parent = nullptr);
   void MyWidget();

 protected:
     void paintEvent(QPaintEvent *);

signals:

public slots:
};

#endif // PAINTER_H
