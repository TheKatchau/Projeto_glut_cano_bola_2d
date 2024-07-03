#include "help.h"
void cano(){
    glBegin(GL_LINES);
		glVertex2f( -0.015,-0.03);
        glVertex2f( -0.015,0.03);
        glVertex2f( 0.015,-0.03);
        glVertex2f( 0.015,0.03);
	glEnd();
}


void cruz(){
    glBegin(GL_LINES);
		glVertex2f( -0.015,0.015);// |
		glVertex2f( -0.015,0.04);// |
        glVertex2f( 0.015,0.015);//     |
		glVertex2f( 0.015,0.04);//     |
		glVertex2f( 0.015,0.015);// -
		glVertex2f( 0.04,0.015);// -
		glVertex2f( -0.015,0.015);
		glVertex2f( -0.04,0.015);
		glVertex2f( 0.015,-0.015);
		glVertex2f( 0.04,-0.015);
		glVertex2f( 0.015,-0.015);
		glVertex2f( 0.015,-0.04);
		glVertex2f( -0.015,-0.015);
		glVertex2f( -0.015,-0.04);
		glVertex2f( -0.015,-0.015);
		glVertex2f( -0.04,-0.015);
	glEnd();
}

void T(){
    glBegin(GL_LINES);
		glVertex2f( -0.015,0.015);// |
		glVertex2f( -0.015,0.03);// |
        glVertex2f( 0.015,0.015);//     |
		glVertex2f( 0.015,0.03);//     |
		glVertex2f( 0.015,0.015);// -
		glVertex2f( 0.03,0.015);// -
		glVertex2f( -0.015,0.015);
		glVertex2f( -0.03,0.015);
		glVertex2f( -0.03,-0.015);
		glVertex2f( 0.03,-0.015);

	glEnd();
}

void ArcoBOLINHA(float cx, float cy, float r, int num_segmentos, float fatia, float borda, float borda1) {
    glBegin(GL_LINE_STRIP);
    if (fatia!=1){
        if(fatia==0.50)
        {
            glVertex2f( r*0.65,0.00);// |
            glVertex2f( r*0.65,-0.01);// |
        }
        if(fatia==0.25)
        {
            glVertex2f(0.046,-borda);// |
        }


        for (int i = 0; i < num_segmentos; i++)   {
            float theta = 2.0f * fatia * 3.1415926f * float(i) / float(num_segmentos);
            float x = r*0.65 * cosf(theta);
            float y = r*0.65 * sinf(theta);
            glVertex2f(x + cx, y + cy);
        }
        if(fatia==0.50)
        {
            glVertex2f( -r*0.65,0.00);
            glVertex2f( -r*0.65,-0.01);
        }
        if(fatia==0.25)
        {
            if(borda1>0.0000)
                glVertex2f(-0.03,0.045);// |
            else
                glVertex2f(borda1,0.046);// |
        }

        glEnd();

        glBegin(GL_LINE_STRIP);
        if(fatia==0.50)
        {
            glVertex2f((r*0.65)/3,0.00);// |
            glVertex2f((r*0.65)/3,-0.01);
        }
        if(fatia==0.25)
        {

            glVertex2f(0.016,-borda);// |
        }


        for (int i = 0; i < num_segmentos; i++)   {
            float theta = 2.0f * fatia * 3.1415926f * float(i) / float(num_segmentos);
            float x = ((r*0.65)/3) * cosf(theta);
            float y = ((r*0.65)/3) * sinf(theta);
            glVertex2f(x + cx, y + cy);
        }
        if(fatia==0.50)
        {
            glVertex2f((-r*0.65)/3,0.00);// |
            glVertex2f((-r*0.65)/3,-0.01);
        }
        if(fatia==0.25)
        {
            if(borda1>0.000)
                glVertex2f(-0.03,0.015);// |
            else
                glVertex2f(-borda1,0.016);// |
        }

        glEnd();
}
    else {
            glBegin(GL_LINE_LOOP);
            for (int i = 0; i < num_segmentos; i++)   {
                float theta = 2.0f * fatia * 3.1415926f * float(i) / float(num_segmentos);///Calcula o Ângulo atual
                float x = r * cosf(theta);///calcula o componente x
                float y = r * sinf(theta);///calcula o componente y
                glVertex2f(x + cx, y + cy);///desenha o vértice
        }
        glEnd();
    }
}
