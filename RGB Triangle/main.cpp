/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
	glLineWidth(.5);

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 1.0f); // Red
	glVertex2f(-0.6f, 0.0f);   // x, y
	//glColor3f(0.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.0f, 0.0f);
	//glColor3f(0.0f, 0.0f, 1.0f); // Red
	glVertex2f(-.3f,  0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.4f, 0.3f);   // x, y
	glColor3f(0.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.2f, 0.3f);
	glColor3f(0.0f, 0.0f, 1.0f); // Red
	glVertex2f(-.1f,  -0.2f);
	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
    glutReshapeWindow(720,480);
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}