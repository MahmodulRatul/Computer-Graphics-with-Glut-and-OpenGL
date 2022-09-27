#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;

int  c, s, angle, x1, x2, x3, y_1, y2, y3;
void myDisplay(void)
{

glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);

glBegin(GL_TRIANGLES);
glVertex2i(x1, y_1);
glVertex2i(x2, y2);
glVertex2i(x3, y3);
glEnd();

c=cos((angle)* (3.1416 / 180));
s=sin((angle)* (3.1416 / 180));
// subtract x1,y1from every points

int x11 = (x1*c)+(y_1*s);
int x21 = (x2*c)+(y2*s);
int x31 = (x3*c)+(y3*s);

int y11 = (x1*s)+(y_1*c);
int y21 = (x2*s)+(y2*c);
int y31 = (x3*s)+(y3*c);

glColor3ub (255, 255, 255);

glBegin(GL_TRIANGLES);
glVertex2i(x11, y11);
glVertex2i(x21, y21);
glVertex2i(x31, y31);

glEnd();
glFlush ();
}
void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,640,0,480);
}

int main(int argc, char** argv)
{
cout<<"Enter 3 points: ";
cin>>x1>>y_1;cin>>x2>>y2;cin>>x3>>y3;
cout<<"Enter the angle: ";
cin>>angle;
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
