#include<windows.h>
#ifdef __APPLE
#else
#include <GL/glut.h>
#endif
#include<math.h>
#include <stdlib.h>

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(1,1,1);
	glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,3.0);
    glVertex2f(2.0,2.8);
    glVertex2f(2.5,2.4);
	glVertex2f(3.0,1.8);
    glVertex2f(3.3,.50);
    glVertex2f(3.0,-1.0);
    glVertex2f(2.0,-2.0);
    glVertex2f(0.0,-2.50);
    //glVertex2f(0.0,-3.0);
	glVertex2f(-2.0,-2.0);
    glVertex2f(-3.0,-1.0);
    glVertex2f(-3.1,0.0);
    glVertex2f(-3.0,1.0);
    glVertex2f(-2.0,2.2);
    glVertex2f(-1.0,2.7);
    glVertex2f(0.0,3.0);
	glEnd();
	glFlush();
}


void Initialize() {
	glClearColor(0, 0, 0, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
}
int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(476, 477);
	glutInitWindowPosition(250, 250);
	glutCreateWindow("Triangle Fan");
	Initialize();
	glutDisplayFunc(Draw);
	glutMainLoop();
	return EXIT_SUCCESS;
}
