// CLASSE REFERENTE AO PERSONAGEM JOGADOR DO JOGO
// DATA DE MODIFICACAO: 18/05/2016

#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED
#include "GerenciadorGrafico.h"
#include <iostream>

enum TECLAS{CIMA, BAIXO, DIREITA, ESQUERDA};

using namespace std;

class Jogador
{
private:
    ALLEGRO_BITMAP *Sonic[10]; // ATRIBUTO REFERENTE AO PONTEIRO DOS SPRITES DO SONIC

    int posx; // ATRIBUTO REFERENTE A COORDENADA X DA POSICAO DO PERSONAGEM
    int posy; // ATRIBUTO REFERENTE A COORDENADA Y DA POSICAO DO PERSONAGEM
    bool direcao[4]; // VETOR REFERENTE AS DIRECOES
    bool sentido; // ATRIBUTO AUXILIAR PARA DESENHAR O SENTIDO DA IMAGEM DO JOGADOR

public:
    // CONSTRUTORA DA CLASSE JOGADOR
    Jogador();

    // DESTRUTORA DA CLASSE JOGADOR
    ~Jogador();

    // METODO PARA CARREGAR AS IMAGENS DO PERSONAGEM
    void CarregaImagem();

    // METODO PARA CONVERTER A MASCARA DE CORES DO PERSONAGEM
    void ConvertMask();

    // METODO PARA OBTER A COORDENADA X DA POSICAO DO PERSONAGEM
    int GetX();

    // METODO PARA ALTERAR A COORDENADA X DA POSICAO DO PERSONAGEM
    void SetX();
    void SetposX(int x);
    // METODO PARA ALTERAR A DIRECAO
    void SetDirecao(int i, bool Direcao);

    // METODO PARA OBTER A DIRECAO
    bool GetDirecao(int i);

    // METODO PARA ALTERAR O SENTIDO DA IMAGEM
    void SetSentido(bool Sentido);

    // METODO PARA DESENHAR O JOGADOR
    void DesenhaJogador(int i);

    // PERGUNTAR PARA O PROFESSOR
    void DestroiTudo();
};

#endif // JOGADOR_H_INCLUDED
