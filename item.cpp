#include "item.h"
#include "janela.h"

Item::Item(QWidget* parent) : QLabel(parent)
{
    this->valor = 'v';

}

void Item::mousePressEvent(QMouseEvent *event) {
    emit fuiClicado();
}


    void Item::setImagemX(){
            ImagemX = new QImage;
            ImagemX->load("C:/Users/Gabriel/Desktop/JOGODAVELHA/X.png");
            ResizedX = ImagemX->scaled(150,150,Qt::IgnoreAspectRatio);
            this->setPixmap(QPixmap::fromImage(ResizedX));

    }
    void Item::setImagemO() {

            ImagemO = new QImage;
            ImagemO->load("C:/Users/Gabriel/Desktop/JOGODAVELHA/O.png");
            ResizedO = ImagemO->scaled(130,130,Qt::IgnoreAspectRatio);
            this->setPixmap(QPixmap::fromImage(ResizedO));
        }
void Item::setLugar(char tipo){
    if(this->valor=='v'){
        this->valor = tipo;
    }
}
char Item::getLugar(){
    return this->valor;
}


