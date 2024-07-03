#include "primitivas.h"


static void MontaCena3(void){
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT);
    glScalef(1,2.5,1);
    glColor3f(0.0f, 0.5f, 0.5f);
///direita
    glPushMatrix();
        glColor3f(0.5,0.5,0.0);
        glTranslatef(+0.06 , -0.4 ,0.0);
        cano();
        glTranslatef(0 , tamcanoh ,0.0);
        cano();
        glTranslatef(0 , tamcanoh ,0.0);
        cano();
        glTranslatef(0 , tamcanoh ,0.0);
        glColor3f(0.8,0.0,0.5);
        cruz();

        glPushMatrix();
            glColor3f(0.5,0.5,0.0);
            glRotatef(90,0,0,1);
            glTranslatef(0,tamcanoh,0);
            cano();
            glTranslatef(0,tamcanoh,0);
            cano();
            glRotatef(270,0,0,1);
            glTranslatef(-tamcanoh,0,0);
            glColor3f(0.4,0.0,0.5);
            T();
        glPopMatrix();

        glPushMatrix();
            glColor3f(1.0,0.2,0.0);
            glRotatef(-90,0,0,1);
            glTranslatef(-tamcanoh/2,tamcanoh,0);
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 20, 0.25, 0.02,0.3);
            glRotatef(90,0,0,1);
            glTranslatef(tamcanoh/2,(tamcanoh/2)-0.001,0);
            glColor3f(0.5,0.5,0.0);
            cano();
            glTranslatef(0,tamcanoh,0);
            glColor3f(0.5,0.5,0.0);
            cano();
            glColor3f(1.0,0.2,0.0);
            glRotatef(0,0,0,1);
            glTranslatef(-tamcanoh/2,tamcanoh/2,0);
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 20, 0.25, 0.02,0.3);
            glRotatef(180,0,0,1);
            glTranslatef(tamcanoh,-tamcanoh/2,0);
            glColor3f(0.4,0.0,0.5);
            T();
            glRotatef(90,0,0,1);
            glTranslatef(0,-tamcanoh,0);
            glColor3f(0.5,0.5,0.0);
            cano();
            glTranslatef(0,-tamcanoh,0);
            glColor3f(0.5,0.5,0.0);
            cano();
            glRotatef(-90,0,0,1);
            glColor3f(0.4,0.0,0.5);
            glTranslatef(tamcanoh,0,0);
            T();
            glTranslatef(0,tamcanoh,0);
            glColor3f(0.5,0.5,0.0);
            cano();
            glTranslatef(0,tamcanoh,0);
            glColor3f(0.5,0.5,0.0);
            cano();
        glPopMatrix();

        glColor3f(0.5,0.5,0.0);
        glTranslatef(0 , tamcanoh ,0.0);
        cano();
        glTranslatef(0 , tamcanoh ,0.0);
        cano();

    glPopMatrix();
///esquerda
    glPushMatrix();
    glColor3f(0.5,0.5,0.0);
    glTranslatef(-0.30 , -0.4 ,0.0);
    cano();
    glTranslatef(0 , tamcanoh ,0.0);
    cano();
    glTranslatef(0 , tamcanoh ,0.0);
    cano();
    glTranslatef(0 , tamcanoh ,0.0);
    glColor3f(0.8,0.0,0.5);
    cruz();

    glPushMatrix();
        glColor3f(0.5,0.5,0.0);
        glRotatef(90,0,0,1);
        glTranslatef(0,-tamcanoh,0);
        cano();
        glTranslatef(0,-tamcanoh,0);
        cano();
    glPopMatrix();

    glPushMatrix();
            glColor3f(1.0,0.2,0.0);
            glRotatef(180,0,0,1);
            glTranslatef((tamcanoh)+0.001,-tamcanoh/2,0);
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 20, 0.25, 0.02,0.3);
            glRotatef(180,0,0,1);
            glColor3f(0.5,0.5,0.0);
            glTranslatef(-tamcanoh/2,tamcanoh/2,0);
            cano();
            glTranslatef(0,tamcanoh,0);
            cano();
            glColor3f(1.0,0.2,0.0);
            glRotatef(90,0,0,1);
            glTranslatef((tamcanoh/2)-0.001,-tamcanoh/2,0);
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 20, 0.25, 0.03,0.3);
            glRotatef(90,0,0,1);
            glColor3f(0.4,0.0,0.5);
            glTranslatef(-tamcanoh-0.001,(-tamcanoh/2),0);
            T();
            glRotatef(90,0,0,1);
            glColor3f(0.5,0.5,0.0);
            glTranslatef(0,tamcanoh,0);
            cano();
            glColor3f(0.5,0.5,0.0);
            glTranslatef(0,tamcanoh,0);
            cano();
    glPopMatrix();

    glColor3f(0.5,0.5,0.0);
    glTranslatef(0 , tamcanoh ,0.0);
    cano();
    glTranslatef(0 , tamcanoh ,0.0);
    cano();
    glPopMatrix();
    ///A entrada veio da tela 1
    if (cena1[ifirst][jfirst]==80)
        {
            caminho=1;

        }

    ///inicia a BOLINHA na coordena referente
    if (caminho ==1)
    {
        glTranslatef(+0.06 , -0.4 ,0.0);
        glColor3f(0.0f, 0.5f, 0.5f);
        glTranslatef(tx , ty,0.0);
        ArcoBOLINHA(0.0 ,0.0 ,0.009, 15, 1, 0.03,0.03);///BOLINHA
    }
    ///A entrada veio da tela 2
    if (cena1[ifirst][jfirst]==82)
            caminho=2;


    ///inicia a BOLINHA na coordena referente
    if (caminho==2)
    {
        glTranslatef(-0.30 , -0.4 ,0.0);
        glColor3f(0.0f, 0.5f, 0.5f);
        glTranslatef(tx , ty,0.0);
        ArcoBOLINHA(0.0 ,0.0 ,0.009, 15, 1, 0.03,0.03);///BOLINHA
    }

    glutSwapBuffers();

}

static void MontaCena2(void){
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT);
    glScalef(2,2,1);
    /******push********/
    glColor3f(1.0f, 0.0f, 0.0f);
    glTranslatef(0.55 , 0.22,0.0);
    glPushMatrix();
        glRotatef(90,0,0,1);
        glTranslatef(-0.18 , tamcanoh ,0.0);
        cano();

        /**push*/
        glPushMatrix();


            /**ARCO*/
            glTranslatef( (tamcanoh/2)+0.001, tamcanoh*5 ,0.0);
            glRotatef(90,0,0,1);
            glColor3f(1.0f, 0.0f, 1.0f);
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 20, 0.25, 0.02,0.3);
            glColor3f(1.0f, 0.0f, 0.0f);
            glTranslatef( tamcanoh/2, -tamcanoh/2 ,0.0);
            cano();
            glColor3f(1.0f, 0.0f, 0.0f);
            glTranslatef( 0, -tamcanoh ,0.0);
            cano();
            ///ARCO
            glRotatef(270,0,0,1);
            glColor3f(1.0f, 0.0f, 1.0f);
            glTranslatef( (tamcanoh/2)-0.001, -tamcanoh/2 ,0.0);
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 20, 0.25, 0.03,0.03);
            glColor3f(1.0f, 0.0f, 0.0f);
            glTranslatef( tamcanoh/2, -tamcanoh/2 ,0.0);
            cano();
            glColor3f(1.0f, 0.0f, 0.0f);
            glTranslatef( 0, -tamcanoh ,0.0);
            cano();
            glColor3f(1.0f, 0.0f, 0.0f);
            glTranslatef( 0, -tamcanoh ,0.0);
            cano();
            glColor3f(1.0f, 0.0f, 0.0f);
            glTranslatef( 0, -tamcanoh ,0.0);
            cano();
            glRotatef(180,0,0,1);
            glColor3f(1.0f, 0.0f, 1.0f);
            glTranslatef( (-tamcanoh/2)-0.001, tamcanoh/2 ,0.0);
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 20, 0.25, 0.02,0.3);
            glRotatef(90,0,0,1);
            glColor3f(1.0f, 0.0f, 0.0f);
            glTranslatef( tamcanoh/2, tamcanoh ,0.0);
            cano();
            glColor3f(1.0f, 0.0f, 0.0f);
            glTranslatef(0, tamcanoh ,0.0);
            cano();
            glColor3f(1.0f, 0.0f, 0.0f);
            glTranslatef(0, tamcanoh ,0.0);
            cano();
            glColor3f(1.0f, 0.0f, 0.0f);
            glTranslatef(0, tamcanoh ,0.0);
            cano();
        /**pop*/
        glPopMatrix();
        glColor3f(1.0f, 0.0f, 0.0f);
        glTranslatef(0.0 , tamcanoh ,0.0);
        cano();
        glTranslatef(0.0 , tamcanoh ,0.0);
        cano();
        glTranslatef(0.0 , tamcanoh ,0.0);
        cano();
        glTranslatef(0.0 , tamcanoh ,0.0);
        cano();

    /**Movimento Bola*/
    glPopMatrix();
    if(cena1[ifirst][jfirst] == 48)
        caminho=2;

    if(cena1[ifirst][jfirst] == 47)
        caminho=1;

    if(caminho == 2)
    {
        glColor3f(0.0f, 0.5f, 0.5f);
        glTranslatef(-0.09 , 0.325 ,0.0);///Ajuste por que errei a altura da bola no esquema
        glTranslatef(tx , ty,0.0);
        ArcoBOLINHA(0.0 ,0.0 ,0.009, 15, 1, 0.03,0.03);///BOLINHA
    }

    if(caminho == 1)
    {
        glColor3f(0.0f, 0.5f, 0.5f);
        glTranslatef(0 , -0.18 ,0.0);///Ajuste por que errei a altura da bola no esquema
        glTranslatef(tx , ty,0.0);
        ArcoBOLINHA(0.0 ,0.0 ,0.009, 15, 1, 0.03,0.03);///BOLINHA
    }

    glutSwapBuffers();
}

static void MontaCena1(void){
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT);

    glScalef(2,2,1);
    /******push********/
    glPushMatrix();
        glColor3f(0.0f, 0.0f, 0.5f);
        /*********** Vertical 1 ***********/
        glTranslatef( 0.0,0.46,0.0);
        cano();//0
        glTranslatef( 0.0,-tamcanoh,0.0);
        cano();//1
        glColor3f(0.0f, 0.5f, 0.1f);
        glTranslatef( 0.0,-tamcanoh,0.0);
        /******cruz 1*******/
        glPushMatrix();
            glRotatef(90,0.0,0.0,1);
            T();
        glPopMatrix();
        /**Lado Esquerdo*/
        glColor3f(0.0f, 0.0f, 0.5f);
        glPushMatrix();
            glRotatef(90,0.0,0.0,1);
            glTranslatef(0.0,tamcanoh,0.0);
            cano();
            glTranslatef(0.0,tamcanoh,0.0);
            cano();
        glPopMatrix();
    /**FIM LADO Esquerdo*/
        glTranslatef( 0.0,-tamcanoh,0.0);
        glColor3f(0.5f, 0.5f, 0.1f);
        /**Cruz 2*/
        cruz();
        /******push********/
        glPushMatrix();
    /*********** Horizontal direita 1***********/

    /**************Arco de 90 ESQUERDA BAIXO******************/
            glTranslatef(tamcanoh,-tamcanoh/2,0.0);//movimenta
            glColor3f(1.0f, 0.0f, 0.5f);
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 40, 0.25, 0.03, 0.3);
            glColor3f(0.0f, 0.0f, 0.5f);
            glTranslatef((tamcanoh/2)+0.001,(-tamcanoh)+0.001,0.0);//movimenta
            cano();
            glTranslatef(0.0,-(tamcanoh)+0.001,0.0);//movimenta
            cano();
            glTranslatef(0.0,-(tamcanoh)+0.001,0.0);//movimenta
            cano();
            glTranslatef(0.0,-(tamcanoh),0.0);//movimenta
            cano();
            glTranslatef(0,tamcanoh/2,0.0);//movimenta
            cano();
            glTranslatef(0,-tamcanoh,0.0);//movimenta
            cano();
            glPushMatrix();
        /******pop********/
            glPopMatrix();
        /******pop********/
        /******* Retorna para a cruz 2 ******/
        glPopMatrix();
        glPushMatrix();
        /************** Horizontal Esquerda 1 **************/
            glRotatef(90,0.0,0.0,1);
            glTranslatef(0.0,tamcanoh,0.0);
            cano();
            glTranslatef(0.0,tamcanoh,0.0);
            cano();
            glTranslatef(0.076,0.02,0.0);
            glTranslatef(-1.5*tamcanoh,0.0,0.0);
            glTranslatef(0.045,0.02,0.0);

            ///*******Arco de 180
            glColor3f(0.8,0.1,1);
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 40, 0.50, 0.02,0.03);
        glPopMatrix();
    /************** Retorna para a Cruz 1 ******************/
        glColor3f(0.0f, 0.0f, 0.5f);
        glTranslatef( 0.0,-tamcanoh,0.0);//translação do Arco
        cano();//4
        glTranslatef( 0.0,-tamcanoh,0.0);//translação do Arco
        cano();//5
        glTranslatef( 0.0,-tamcanoh,0.0);//translação do Arco
        cano();//6
        glTranslatef( 0.0,-tamcanoh,0.0);//translação do Arco
        cano();//7
        glTranslatef( 0.0,-tamcanoh,0.0);//translação do Arco
        cano();//8
        glTranslatef( 0.0,(-tamcanoh)+0.001,0.0);//translação do Arco
        glColor3f(0.0f, 0.5f, 0.1f);
        /*****Cruz 3******/
        T();//9
        glPushMatrix();
            glColor3f(0.0f, 0.0f, 0.5f);
    /************Arco de 90º ESQUERDA CIMA ***************/
            glRotatef(-90,0.0,0.0,1);//rotaciona
            glTranslatef(-(tamcanoh/2)-0.001,(tamcanoh),0.0);//movimenta
            glColor3f(1.0f, 0.0f, 0.5f);
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 20, 0.25, 0.032,0.3);
        glPopMatrix();
    /**Lado Esquerdo T 3**/
        glPushMatrix();
            glColor3f(0.0f, 0.0f, 0.5f);
            glRotatef(90,0.0,0.0,1);//rotaciona
            glTranslatef(0.00,tamcanoh,0.0);//movimenta
            cano();
            glColor3f(0.0f, 0.0f, 0.5f);
            glTranslatef(0.00,tamcanoh,0.0);//movimenta
            /**CRUZ ESQUERDA*/
            cano();
            /**LADO ESQUERDO CRUZ ESQUERDA*/

            /**ARCO de 90º CIMA DIREITA */
            glRotatef(90,0.0,0.0,1);//rotaciona
            glColor3f(1.0f, 0.0f, 0.5f);
            glTranslatef((tamcanoh-0.001),-(tamcanoh/2),0.0);//movimenta
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 40, 0.25,0.03,0.03);
            glTranslatef((tamcanoh/2)+0.001,-tamcanoh,0.0);//translação do Arco
            glColor3f(0.0f, 0.0f, 0.5f);
            cano();
            glTranslatef(0,-tamcanoh,0.0);//translação do Arco
            cano();
            /**ARCO de 90 º Baixo ESQUERDA */
            glColor3f(1.0f, 0.0f, 0.5f);
            glRotatef(180,0.0,0.0,1);//rotaciona
            glTranslatef(-(tamcanoh/2),tamcanoh,0.0);//movimenta
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 40, 0.25,0.03,0.03);
            glRotatef(90,0.0,0.0,1);//rotaciona
            glTranslatef(tamcanoh/2,tamcanoh,0.0);//translação do Arco
            glColor3f(0.0f, 0.0f, 0.5f);
            cano();
            /**ARCO de 90º Baixo DIREITA */
            glColor3f(1.0f, 0.0f, 0.5f);
            glTranslatef(-(tamcanoh/2)-0.001,tamcanoh,0.0);//movimenta
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 40, 0.25,0.03,0.03);
            ///ARCO de 90º ESQUERDA CIMA
            glRotatef(180,0.0,0.0,1);//rotaciona
            glTranslatef((tamcanoh)-0.005,-tamcanoh,0.0);//movimenta
            ArcoBOLINHA(0.0 ,0.0 ,0.07, 40, 0.25,0.03,0.03);

            glTranslatef((tamcanoh/2)+0.001,-tamcanoh+0.001,0.0);//translação do Arco
            glColor3f(0.0f, 0.0f, 0.5f);
            cano();
            /**FIM LADO ESQUERDO CRUZ 3*/
        glPopMatrix();
    glPopMatrix();/**volta raiz*/
    glPushMatrix();
        if(cena1[ifirst][jfirst]==70)
            caminho=1;
        if(cena1[ifirst][jfirst]==47)
            caminho=2;
        if(caminho==1)
        {
            ///BOLINHA
            glColor3f(0.0f, 0.5f, 0.5f);
            glTranslatef( 0.0, 0.52 ,0.0);//translação da BOLINHA para o ponto de inicio.
            glTranslatef(tx , ty,0.0);//translação do BOLINHA
            ArcoBOLINHA(0.0 ,0.0 ,0.009, 15, 1, 0.03,0.03);//
            glPopMatrix();/**volta raiz*/
        }

         if(caminho==2)
        {
            ///BOLINHA
            glColor3f(0.0f, 0.5f, 0.5f);
            glTranslatef( -0.54, 0.04 ,0.0);//translação da BOLINHA para o ponto de inicio.
            glTranslatef(tx , ty,0.0);//translação do BOLINHA
            ArcoBOLINHA(0.0 ,0.0 ,0.009, 15, 1, 0.03,0.03);//
            glPopMatrix();/**volta raiz*/
        }
    glutSwapBuffers();

}


