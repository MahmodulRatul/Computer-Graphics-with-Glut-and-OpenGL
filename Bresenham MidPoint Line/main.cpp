/*Bresenham's Midpoint Incremental Line Drawing algorithm*/
#include<windows.h>
#include<iostream>
#include<math.h>
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

using namespace std;

int X1, Y1, X2, Y2;

void midpoint(void)
{
    double dx=(X2-X1),dy=(Y2-Y1),de,dne,ds,dnew,dold,d;
    float x=X1,y=Y1;
    ds=(2*dy)-dx;
    de=2*dy;
    dne=2*(dy-dx);
    dnew=ds;
    dold=0;
    d=dnew-dold;
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);

    glVertex2d(x,y);

     while(X2>x)
    {
        if(d>0)
        {
            x+=1;
            y+=1;
            dold=dnew;
            dnew+=dne;
        }
        else
        {
            x+=1;
            dold=dnew;
            dnew+=de;
        }
        glVertex2d(x,y);
    }
    glEnd();

    glFlush();
}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100.0, 640.0,-100.0, 640.0);  //    gluOrtho2D(0.0, 640.0,0.0, 480.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 640);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Bresenham's Midpoint incremental Line drawing");
    cout<<"Enter the initial points:\t";
    cin>>X1;
    cin>>Y1;
    cout<<"Enter the final points:\t";
    cin>>X2;
    cin>>Y2;
    glutDisplayFunc(midpoint);
    myInit ();
    glutMainLoop();
}
