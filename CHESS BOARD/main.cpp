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
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
	glLineWidth(.5);

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(-1.00f, -1.00f);    // x, y
	glVertex2f(-0.75f, -1.00f);
	glVertex2f(-0.75f, -0.75f);    // x, y
	glVertex2f(-1.00f, -0.75f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(-0.75f, -1.00f);    // x, y
	glVertex2f(-0.50f, -1.00f);
	glVertex2f(-0.50f, -0.75f);
	glVertex2f(-0.75f, -0.75f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(-0.50f, -1.00f);    // x, y
	glVertex2f(-0.25f, -1.00f);
	glVertex2f(-0.25f, -0.75f);    // x, y
	glVertex2f(-0.50f, -0.75f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(-0.25f, -1.00f);    // x, y
	glVertex2f(-0.00f, -1.00f);
	glVertex2f(-0.00f, -0.75f);
	glVertex2f(-0.25f, -0.75f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(0.00f, -1.00f);    // x, y
	glVertex2f(0.25f, -1.00f);
	glVertex2f(0.25f, -0.75f);    // x, y
	glVertex2f(0.00f, -0.75f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(0.25f, -1.00f);    // x, y
	glVertex2f(0.50f, -1.00f);
	glVertex2f(0.50f, -0.75f);
	glVertex2f(0.25f, -0.75f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(0.50f, -1.00f);    // x, y
	glVertex2f(0.75f, -1.00f);
	glVertex2f(0.75f, -0.75f);    // x, y
	glVertex2f(0.50f, -0.75f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(0.75f, -1.00f);    // x, y
	glVertex2f(1.00f, -1.00f);
	glVertex2f(1.00f, -0.75f);
	glVertex2f(0.75f, -0.75f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(-1.00f, -0.75f);    // x, y
	glVertex2f(-0.75f, -0.75f);
	glVertex2f(-0.75f, -0.50f);
	glVertex2f(-1.00f, -0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(-0.75f, -0.75f);    // x, y
	glVertex2f(-0.50f, -0.75f);
	glVertex2f(-0.50f, -0.50f);    // x, y
	glVertex2f(-0.75f, -0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(-0.50f, -0.75f);    // x, y
	glVertex2f(-0.25f, -0.75f);
	glVertex2f(-0.25f, -0.50f);
	glVertex2f(-0.50f, -0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(-0.25f, -0.75f);    // x, y
	glVertex2f(0.00f, -0.75f);
	glVertex2f(0.00f, -0.50f);    // x, y
	glVertex2f(-0.25f, -0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(0.00f, -0.75f);    // x, y
	glVertex2f(0.25f, -0.75f);
	glVertex2f(0.25f, -0.50f);
	glVertex2f(0.00f, -0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(0.25f, -0.75f);    // x, y
	glVertex2f(0.50f, -0.75f);
	glVertex2f(0.50f, -0.50f);    // x, y
	glVertex2f(0.25f, -0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(0.50f, -0.75f);    // x, y
	glVertex2f(0.75f, -0.75f);
	glVertex2f(0.75f, -0.50f);
	glVertex2f(0.50f, -0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(0.75f, -0.75f);    // x, y
	glVertex2f(1.00f, -0.75f);
	glVertex2f(1.00f, -0.50f);    // x, y
	glVertex2f(0.75f, -0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(-1.00f, -0.50f);    // x, y
	glVertex2f(-0.75f, -0.50f);
	glVertex2f(-0.75f, -0.25f);    // x, y
	glVertex2f(-1.00f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(-0.75f, -0.50f);    // x, y
	glVertex2f(-0.50f, -0.50f);
	glVertex2f(-0.50f, -0.25f);
	glVertex2f(-0.75f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(-0.50f, -0.50f);    // x, y
	glVertex2f(-0.25f, -0.50f);
	glVertex2f(-0.25f, -0.25f);    // x, y
	glVertex2f(-0.50f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(-0.25f, -0.50f);    // x, y
	glVertex2f(0.00f, -0.50f);
	glVertex2f(0.00f, -0.25f);
	glVertex2f(-0.25f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(0.00f, -0.50f);    // x, y
	glVertex2f(0.25f, -0.50f);
	glVertex2f(0.25f, -0.25f);    // x, y
	glVertex2f(0.00f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(0.25f, -0.50f);    // x, y
	glVertex2f(0.50f, -0.50f);
	glVertex2f(0.50f, -0.25f);
	glVertex2f(0.25f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(0.50f, -0.50f);    // x, y
	glVertex2f(0.75f, -0.50f);
	glVertex2f(0.75f, -0.25f);    // x, y
	glVertex2f(0.50f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(0.75f, -0.50f);    // x, y
	glVertex2f(1.00f, -0.50f);
	glVertex2f(1.00f, -0.25f);
	glVertex2f(0.75f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(-1.00f, -0.25f);    // x, y
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.75f, 0.00f);
	glVertex2f(-1.00f, 0.00f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(-0.75f, -0.25f);    // x, y
	glVertex2f(-0.50f, -0.25f);
	glVertex2f(-0.50f, 0.00f);    // x, y
	glVertex2f(-0.75f, 0.00f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(-0.50f, -0.25f);    // x, y
	glVertex2f(-0.25f, -0.25f);
	glVertex2f(-0.25f, 0.00f);
	glVertex2f(-0.50f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(-0.25f, -0.25f);    // x, y
	glVertex2f(0.00f, -0.25f);
	glVertex2f(0.00f, 0.00f);    // x, y
	glVertex2f(-0.25f, 0.00f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(0.00f, -0.25f);    // x, y
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.25f, 0.00f);
	glVertex2f(0.00f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(0.25f, -0.25f);    // x, y
	glVertex2f(0.50f, -0.25f);
	glVertex2f(0.50f, 0.00f);    // x, y
	glVertex2f(0.25f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(0.50f, -0.25f);    // x, y
	glVertex2f(0.75f, -0.25f);
	glVertex2f(0.75f, 0.00f);
	glVertex2f(0.50f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(0.75f, -0.25f);    // x, y
	glVertex2f(1.00f, -0.25f);
	glVertex2f(1.00f, 0.00f);    // x, y
	glVertex2f(0.75f, 0.00f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(-1.00f, 0.00f);    // x, y
	glVertex2f(-0.75f, 0.00f);
	glVertex2f(-0.75f, 0.25f);    // x, y
	glVertex2f(-1.00f, 0.25f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(-0.75f, 0.00f);    // x, y
	glVertex2f(-0.50f, 0.00f);
	glVertex2f(-0.50f, 0.25f);
	glVertex2f(-0.75f, 0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(-0.50f, 0.00f);    // x, y
	glVertex2f(-0.25f, 0.00f);
	glVertex2f(-0.25f, 0.25f);    // x, y
	glVertex2f(-0.50f, 0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(-0.25f, 0.00f);    // x, y
	glVertex2f(0.00f, 0.00f);
	glVertex2f(0.00f, 0.25f);
	glVertex2f(-0.25f, 0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(0.00f, 0.00f);    // x, y
	glVertex2f(0.25f, 0.00f);
	glVertex2f(0.25f, 0.25f);    // x, y
	glVertex2f(0.00f, 0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(0.25f, 0.00f);    // x, y
	glVertex2f(0.50f, 0.00f);
	glVertex2f(0.50f, 0.25f);
	glVertex2f(0.25f, 0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red Color
	glVertex2f(0.50f, 0.00f);    // x, y
	glVertex2f(0.75f, 0.00f);
	glVertex2f(0.75f, 0.25f);    // x, y
	glVertex2f(0.50f, 0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(0.75f, 0.00f);    // x, y
	glVertex2f(1.00f, 0.00f);
	glVertex2f(1.00f, 0.25f);
	glVertex2f(0.75f, 0.25f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(-1.00f, 0.25f);    // x, y
	glVertex2f(-0.75f, 0.25f);
	glVertex2f(-0.75f, 0.50f);
	glVertex2f(-1.00f, 0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f);//Red color
    glVertex2f(-0.75f, 0.25f);    // x, y
	glVertex2f(-0.50f, 0.25f);
	glVertex2f(-0.50f, 0.50f);
	glVertex2f(-0.75f, 0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(-0.50f, 0.25f);    // x, y
	glVertex2f(-0.25f, 0.25f);
	glVertex2f(-0.25f, 0.50f);
	glVertex2f(-0.50f, 0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f);//Red color
    glVertex2f(-0.25f, 0.25f);    // x, y
	glVertex2f(0.00f, 0.25f);
	glVertex2f(0.00f, 0.50f);
	glVertex2f(-0.25f, 0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(0.00f, 0.25f);    // x, y
	glVertex2f(0.25f, 0.25f);
	glVertex2f(0.25f, 0.50f);
	glVertex2f(0.00f, 0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f);//Red color
    glVertex2f(0.25f, 0.25f);    // x, y
	glVertex2f(0.50f, 0.25f);
	glVertex2f(0.50f, 0.50f);
	glVertex2f(0.25f, 0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//white color
    glVertex2f(0.50f, 0.25f);    // x, y
	glVertex2f(0.75f, 0.25f);
	glVertex2f(0.75f, 0.50f);
	glVertex2f(0.50f, 0.50f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f);//Red color
    glVertex2f(0.75f, 0.25f);    // x, y
	glVertex2f(1.00f, 0.25f);
	glVertex2f(1.00f, 0.50f);
	glVertex2f(0.75f, 0.50f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f);//Red color
    glVertex2f(-1.00f, 0.50f);    // x, y
	glVertex2f(-0.75f, 0.50f);
	glVertex2f(-0.75f, 0.75f);
	glVertex2f(-1.00f, 0.75f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//White color
    glVertex2f(-0.75f, 0.50f);    // x, y
	glVertex2f(-0.50f, 0.50f);
	glVertex2f(-0.50f, 0.75f);
	glVertex2f(-0.75f, 0.75f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f);//Red color
    glVertex2f(-0.50f, 0.50f);    // x, y
	glVertex2f(-0.25f, 0.50f);
	glVertex2f(-0.25f, 0.75f);
	glVertex2f(-0.50f, 0.75f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//White color
    glVertex2f(-0.25f, 0.50f);    // x, y
	glVertex2f(0.00f, 0.50f);
	glVertex2f(0.00f, 0.75f);
	glVertex2f(-0.25f, 0.75f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f);//Red color
    glVertex2f(0.00f, 0.50f);    // x, y
	glVertex2f(0.25f, 0.50f);
	glVertex2f(0.25f, 0.75f);
	glVertex2f(0.00f, 0.75f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//White color
    glVertex2f(0.25f, 0.50f);    // x, y
	glVertex2f(0.50f, 0.50f);
	glVertex2f(0.50f, 0.75f);
	glVertex2f(0.25f, 0.75f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f);//Red color
    glVertex2f(0.50f, 0.50f);    // x, y
	glVertex2f(0.75f, 0.50f);
	glVertex2f(0.75f, 0.75f);
	glVertex2f(0.50f, 0.75f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//White color
    glVertex2f(0.75f, 0.50f);    // x, y
	glVertex2f(1.00f, 0.50f);
	glVertex2f(1.00f, 0.75f);
	glVertex2f(0.75f, 0.75f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//White color
    glVertex2f(-1.00f, 0.75f);    // x, y
	glVertex2f(-0.75f, 0.75f);
	glVertex2f(-0.75f, 1.00f);
	glVertex2f(-1.00f, 1.00f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f);//Red color
    glVertex2f(-0.75f, 0.75f);    // x, y
	glVertex2f(-0.50f, 0.75f);
	glVertex2f(-0.50f, 1.00f);
	glVertex2f(-0.75f, 1.00f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//White color
    glVertex2f(-0.50f, 0.75f);    // x, y
	glVertex2f(-0.25f, 0.75f);
	glVertex2f(-0.25f, 1.00f);
	glVertex2f(-0.50f, 1.00f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f);//Red color
    glVertex2f(-0.25f, 0.75f);    // x, y
	glVertex2f(0.00f, 0.75f);
	glVertex2f(0.00f, 1.00f);
	glVertex2f(-0.25f, 1.00f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//White color
    glVertex2f(0.00f, 0.75f);    // x, y
	glVertex2f(0.25f, 0.75f);
	glVertex2f(0.25f, 1.00f);
	glVertex2f(0.00f, 1.00f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f);//Red color
    glVertex2f(0.25f, 0.75f);    // x, y
	glVertex2f(0.50f, 0.75f);
	glVertex2f(0.50f, 1.00f);
	glVertex2f(0.25f, 1.00f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f);//White color
    glVertex2f(0.50f, 0.75f);    // x, y
	glVertex2f(0.75f, 0.75f);
	glVertex2f(0.75f, 1.00f);
	glVertex2f(0.50f, 1.00f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f);//Red color
    glVertex2f(0.75f, 0.75f);    // x, y
	glVertex2f(1.00f, 0.75f);
	glVertex2f(1.00f, 1.00f);
	glVertex2f(0.75f, 1.00f);
	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutInitWindowSize(800, 800);
	glutCreateWindow(" Chess with Ratul ");  // Create window with the given title
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
