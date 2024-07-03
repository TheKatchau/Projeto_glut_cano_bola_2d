#include<windows.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
#include <time.h>

using namespace std;
//linha da matriz
int jfirst=0;
//coluna da matriz
int ifirst=0;
//variavel auxiliar que recebe o valor do elemento [i][j] da matriz antes de atualizar esse valor
int aux;
//contadores para definir o n�mero de passos dados para cada elemento da matriz percorrido
int ii=0;
int auxii=0;
int auxjj=0;
//define a direcao para a qual ira a BOLINHA
int direcao;
//movimento inicial em y
float tx=0.0;
//movimento inicial em y
float ty=0.0;
//velocidade
int vel=40;
int val=1;
//comprimento do cano/T
float tamcanoh=0.06;
int win1;
int win2;
int win3;
float display();
void MontaCena(void);
static void MontaCena1(void);
void Teclado(unsigned char tecla, int x, int y);
void anima(int valor);
void escolhecaminho();
void movevertical();
void movehorizontal();
void movet50ec(int valor);
void movet30eb(int valor);
void movet30ec(int valor);
void movet30db(int valor);
void movet30dc(int valor);
void escolhecaminhot();
/**
declara a matriz que dar� origem ao movimento na cena 1
1= vertical
2= horizontal
31= joelho esquerda cima 90�
34= joelho esquerda baixo 90�
33= joelho direita cima 90�
32= joelho direita baixo 90�
5= Cruz
7=T
54= joelho esquerda  180�
47= Final esquerda 1 / Final direita 2
70= Final cima 1
80= Final baixo3->1
82= final baixo 3->2
**/
int cena1[11][16];
int ll,cc;
int caminho;

int cenarios(){
    //declara a vari�vel para file
    ifstream txtFile;
    //abre o arquivo matriz
if (val==1){
    txtFile.open("C:\\MarcosVPedroso\\mapa.txt");
    }

    if(val==2)
    {
        txtFile.open("C:\\MarcosVPedroso\\mapa1.txt");
    }
    if(val==3)
    {
        txtFile.open("C:\\MarcosVPedroso\\mapa2.txt");
    }


    //Le o tamanho da matriz no arquivo
    txtFile >> ll >> cc;

    //le os valores e preenche a matriz
    for(int i=0; i<ll; i++)
        {
           for (int j=0;j<cc;j++)
           {
               txtFile>>cena1[i][j];
           }
        }
        for(int i=0; i<ll; i++)
        {
           for (int j=0;j<cc;j++)
           {
               cout<<cena1[i][j]<< "   ";
           }
           cout<<endl;
        }
}
void init(){
    // cor de fundo - amarela
    glClearColor( 0, 0, 0, 0 );
}
