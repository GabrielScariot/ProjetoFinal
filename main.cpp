#include <QApplication>
#include "janela.h"
#include "jogador.h"
#include "jogadoro.h"
#include "jogadorx.h"

int main(int argc, char* argv[]){
    QApplication app(argc,argv);

    Janela *j= Janela::getInstancia();
    j->show();
     return app.exec();
}
