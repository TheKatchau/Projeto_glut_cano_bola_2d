#include "anima.h"


int main()
{
direcao=2;
display();
val=1;
}


float display(){
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    cenarios();
    int width = 500;
    int height = 600;
    glutInitWindowSize(width, height);

    int x =300;
    int y =350;
    glutInitWindowPosition(x, y);
    win1 = glutCreateWindow("Cena 1");
    x = 000;
    y = 350;
    glutInitWindowPosition(x, y);
    glutSetWindow(win1);
    glutDisplayFunc(MontaCena1);
    glutTimerFunc(vel, anima, val);
	glutMainLoop();
    return 0;

}



