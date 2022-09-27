#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>
GLfloat position = 0.0f;
GLfloat position2 = 0.0f;
GLfloat speed = 0.2f;

void update(int value)
{
    if(position > 1.0)
    position = -1.0f;
    position += speed;
    glutPostRedisplay();
    if(position < -1.0)
    position = 1.0f;
    position -= speed;
    glutPostRedisplay();
    glutTimerFunc(50, update, 0);
}

void update2(int value)
{
    if(position > 1.0)
    position = -1.0f;
    position += speed;
    glutPostRedisplay();
    if(position > 1.0)
    position = -1.0f;
    position += speed;
    glutPostRedisplay();
    glutTimerFunc(50, update2, 0);
}

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void handleMouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {
        if (state == GLUT_DOWN)
        {
            speed += 0.1f;
            printf("clicked at (%d, %d)\n", x, y);
        }
    }
    glutPostRedisplay();
}
void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'a':
    speed = 0.0f;
    break;
    case 'w':
    speed = 0.1f;
    break;
    glutPostRedisplay();
    }
}

void SpecialInput(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_UP:

        position2 += speed;
        position += speed;
        glutTimerFunc(50, update2, 0);
        break;

        case GLUT_KEY_DOWN:

        position2 -= speed;
        position -= speed;
        glutTimerFunc(50, update, 0);
        break;

        case GLUT_KEY_LEFT:

        speed =0.0f;
        break;

        case GLUT_KEY_RIGHT:

        break;
    }
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,position2, 0.0f);
    glTranslatef(0.0f,position, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.4,0.2);
    glBegin(GL_POLYGON);
    glVertex3f (0.1, 0.1, 0.0);
    glVertex3f (0.4, 0.1, 0.0);
    glVertex3f (0.4, 0.5, 0.0);
    glVertex3f (0.1, 0.5, 0.0);
    glEnd();
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f (0.10, 0.5, 0.0);
    glVertex3f (0.4, 0.5, 0.0);
    glVertex3f (0.25, 0.75, 0.0);
    glEnd();
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f (0.4, 0.1, 0.0);
    glVertex3f (0.8, 0.4, 0.0);
    glVertex3f (0.8, 0.75, 0.0);
    glVertex3f (0.4, 0.5, 0.0);
    glEnd();
    glColor3f(0.4,0.0,0.4);
    glBegin(GL_POLYGON);
    glVertex3f (0.4, 0.5, 0.0);
    glVertex3f (0.8, 0.75, 0.0);
    glVertex3f (0.62, 0.93, 0.0);
    glVertex3f (0.25, 0.75, 0.0);
    glEnd();
    glPopMatrix();
    glFlush();
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(320, 320);
glutInitWindowPosition(50, 50);
glutCreateWindow("Basic Animation");
glutDisplayFunc(display);
init();
glutSpecialFunc(SpecialInput);
glutKeyboardFunc(handleKeypress);
glutMouseFunc(handleMouse);
glutTimerFunc(100, update, 0);
glutMainLoop();
return 0;
}
