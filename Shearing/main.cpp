#include <windows.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;
GLfloat i = 0.1f;
void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}
void Idle()
{
    glutPostRedisplay();// marks the current window as needing to be redisplayed
}
void Clockdisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();//Reset the current matrix

    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
    //glTranslatef(0.f,0.0f,0.f);
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.4f, 0.0f);
    glEnd();

    i+=0.1f;
    glFlush();
}
void AntiClockdisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();//Reset the current matrix

    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis
    //glTranslatef(0.f,0.0f,0.f);
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.4f, 0.0f);
    glEnd();

    i-=0.1f;
    glFlush();
}
void Xshear()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();//Reset the current matrix

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.8f, 0.4f);
    glVertex2f(0.4f, 0.0f);
    glEnd();
    glFlush();
}
void Yshear()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();//Reset the current matrix
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.0f, 0.8f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.4f, 0.0f);
    glEnd();
    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);// Initialize GLUT
    glutInitWindowSize(320, 320);
    int t;
    cout<<"Enter your choice to perform any operation on the shape:\n(0) Exit\n(1) Clock-wise Rotation\n(2) AntiClock-wise Rotation\n(3) X-Shearing\n(4) Y-Shearing"<<endl;
    cin>>t;
    switch(t)
        {
        case 0:
            exit(0);
        case 1:
            glutCreateWindow("Clock Rotation");
            glutDisplayFunc(Clockdisplay);
            break;
        case 2:
            glutCreateWindow("AntiClock Rotation");
            glutDisplayFunc(AntiClockdisplay);
            break;
        case 3:
            glutCreateWindow("X-Shear");
            glutDisplayFunc(Xshear);
            break;
        case 4:
            glutCreateWindow("Y-Shear");
            glutDisplayFunc(Yshear);
            break;
        default:
            cout<<"Please enter valid option."<<endl;
            break;
        }
    initGL();
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;
}
