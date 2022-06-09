#ifndef JANELA_H
#define JANELA_H
#include <QMainWindow>
#include <QPushButton>
#include <QPaintEvent>
#include <QPixmap>
#include <QPainter>
#include <QLabel>
#include <QObject>
#include <iostream>
#include <vector>
#include "item.h"
#include "jogador.h"
#include "jogadoro.h"
#include "jogadorx.h"

using namespace std;


class Janela: public QMainWindow{
    Q_OBJECT
    static Janela* instancia;
    QPushButton *X, *Y;
    QImage *tabuleir;
    int Empate;
    char player;
    int JogoComeco;
    Jogador *PlayerX = new JogadorX;
    Jogador *PlayerO = new JogadorO;
    std::vector<std::vector<Item*>*> tabuleiro;
public:
    Janela(const Janela &obj)= delete;
    Janela operator=(Janela obj) = delete;
    ~Janela(){}
    static Janela *getInstancia(){
        if(instancia == nullptr)
        {
            instancia = new Janela();
        }
        return instancia;
    }
    explicit Janela(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void verificaVencedor();

signals:
public slots:
    void verificarJogada();
    void setPlayerX();
    void setPlayerO();
    void mostraVencedor();
    void hideLabel();
    void salvarJogo();
    void carregarJogo();
    void abrirArquivo();
};
#endif // JANELA_H
