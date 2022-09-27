#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0);
    glBegin(GL_POLYGON);
    glVertex2f (-0.9, 0.0);
    glVertex2f (-0.8, 0.2);
    glVertex2f (-0.5, 0.2);
    glVertex2f (-0.4, 0.0);
    glVertex2f (-0.5, 0.1);

    glEnd();
    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1080, 720);
    glutInitWindowPosition(400,200);
    glutCreateWindow("EID MOBARAK");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
