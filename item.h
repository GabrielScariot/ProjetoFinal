#ifndef ITEM_H
#define ITEM_H

#include <QLabel>
#include <QPainter>
#include <QPaintEvent>
#include <QPixmap>
#include <QImage>
#include <vector>
class Item : public QLabel
{
    Q_OBJECT
    char valor;
public:
    Item(QWidget* parent = nullptr);
    void mousePressEvent(QMouseEvent* event);
     void setLugar(char tipo);
     void setImagemX();
     void setImagemO();
    QImage *ImagemX,*ImagemO,ResizedX,ResizedO;
    char getLugar();
signals:
    fuiClicado();
};

#endif // ITEM_H
