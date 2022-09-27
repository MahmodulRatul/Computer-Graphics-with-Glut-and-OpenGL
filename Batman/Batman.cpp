#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glPointSize(5.0);
	// Draw a Red 1x1 Square centered at origin
	/*glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(50.0f,  50.0f);    // x, y*/

	glEnd();
// Loop start from here

for(int q=0;q<80;q+=5)
{
    glBegin(GL_QUADS);

    glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-80, 0);    // x, y
	glVertex2f(-75, 0);
	glVertex2f(-75, 5);    // x, y
	glVertex2f(-80, 5);


	int x,y=0;
	for(int i=0;i<=40;i+=5)//1st part
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-80+i, 0+i);    // x, y
	glVertex2f(-75+i, 0+i);
	glVertex2f(-75+i, 5+i);    // x, y
	glVertex2f(-80+i, 5+i);

    }
    for(int i=0;i<=25;i+=5)//2nd part
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-80, 0-i);    // x, y
	glVertex2f(-75, 0-i);
	glVertex2f(-75, 5-i);    // x, y
	glVertex2f(-80, 5-i);

    }

    for(int i=0;i<=40;i+=5)//3rd part
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-80+i, -25-i);    // x, y
	glVertex2f(-75+i, -25-i);
	glVertex2f(-75+i, -20-i);    // x, y
	glVertex2f(-80+i, -20-i);

    }
   for(int i=0;i<=75;i+=5)//4th part
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-35+i,  40);    // x, y
	glVertex2f(-30+i,  40);
	glVertex2f(-30+i,  45);    // x, y
	glVertex2f(-35+i,  45);

    }
    for(int i=40;i>0;i-=5)//5th part
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(40+i, 40-i);    // x, y
	glVertex2f(45+i, 40-i);
	glVertex2f(45+i, 45-i);    // x, y
	glVertex2f(40+i, 45-i);

    }
     for(int i=0;i<25;i+=5)//6th part
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(80, 0-i);    // x, y
	glVertex2f(85, 0-i);
	glVertex2f(85, -5-i);    // x, y
	glVertex2f(80, -5-i);

    }
    for(int i=0;i<=40;i+=5)//7th part
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(85-i, -25-i);    // x, y
	glVertex2f(80-i, -25-i);
	glVertex2f(80-i, -20-i);    // x, y
	glVertex2f(85-i, -20-i);

    }
    for(int i=0;i<=75;i+=5)//8th part
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(40-i,  -65);
	glVertex2f(35-i,  -65);
	glVertex2f(35-i,  -60);
	glVertex2f(40-i,  -60);

    }
    for(int i=0;i<=40;i+=5)//9th part
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-75+i, 0+i);    // x, y
	glVertex2f(-70+i, 0+i);
	glVertex2f(-70+i, 5+i);    // x, y
	glVertex2f(-75+i, 5+i);

    }
     for(int i=40;i>0;i-=5)//10th part
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(40+i, 40-i);    // x, y
	glVertex2f(35+i, 40-i);
	glVertex2f(35+i, 45-i);    // x, y
	glVertex2f(40+i, 45-i);

    }
    for(int i=0;i<=40;i+=5)//7th part
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(80-i, -25-i);    // x, y
	glVertex2f(75-i, -25-i);
	glVertex2f(75-i, -20-i);    // x, y
	glVertex2f(80-i, -20-i);

    }
    for(int i=0;i<=40;i+=5)//12th part
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-75+i, -25-i);    // x, y
	glVertex2f(-70+i, -25-i);
	glVertex2f(-70+i, -20-i);    // x, y
	glVertex2f(-75+i, -20-i);

    }
    for(int i=0;i<=75;i+=5)//13th part
    {
       if(i==20 || i==50)
        {
             glColor3f(0.0f, 0.0f, 0.0f);
        }
        else
        {


    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-35+i,  35);    // x, y
	glVertex2f(-30+i,  35);
	glVertex2f(-30+i,  40);    // x, y
	glVertex2f(-35+i,  40);
        }
    }
    for(int i=0;i<=75;i+=5)//14th part
    {
        if(i==5 || i==35||i==65)
        {
             glColor3f(0.0f, 0.0f, 0.0f);
        }
    else{

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(40-i,  -60);
	glVertex2f(35-i,  -60);
	glVertex2f(35-i,  -55);
	glVertex2f(40-i,  -55);
        }

    }
      for(int i=0;i<=5;i+=5)//ex1
    {
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(30,  -50+i);
	glVertex2f(25,  -50+i);
	glVertex2f(25,  -55+i);
	glVertex2f(30,  -55+i);

    }
      for(int i=0;i<=10;i+=5)//ex2
    {
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(25,  -50+i);
	glVertex2f(20,  -50+i);
	glVertex2f(20,  -55+i);
	glVertex2f(25,  -55+i);

    }
      for(int i=0;i<=15;i+=5)//ex2
    {
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(20,  -50+i);
	glVertex2f(15,  -50+i);
	glVertex2f(15,  -55+i);
	glVertex2f(20,  -55+i);

    }
     for(int i=0;i<=10;i+=5)//ex2
    {
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(15,  -50+i);
	glVertex2f(10,  -50+i);
	glVertex2f(10,  -55+i);
	glVertex2f(15,  -55+i);

    }
     for(int i=0;i<=0;i+=5)//ex2
    {
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(10,  -50+i);
	glVertex2f(5,  -50+i);
	glVertex2f(5,  -55+i);
	glVertex2f(10,  -55+i);

    }
     for(int i=0;i<=0;i+=5)//ex2
    {
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0,  -50+i);
	glVertex2f(-5,  -50+i);
	glVertex2f(-5,  -55+i);
	glVertex2f(0,  -55+i);

    }
      for(int i=0;i<=10;i+=5)//ex2
    {
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-5,  -50+i);
	glVertex2f(-10,  -50+i);
	glVertex2f(-10,  -55+i);
	glVertex2f(-5,  -55+i);

    }
      for(int i=0;i<=15;i+=5)//ex2
    {
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-10,  -50+i);
	glVertex2f(-15,  -50+i);
	glVertex2f(-15,  -55+i);
	glVertex2f(-10,  -55+i);

    }
     for(int i=0;i<=5;i+=5)//ex2
    {
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-15,  -50+i);
	glVertex2f(-20,  -50+i);
	glVertex2f(-20,  -55+i);
	glVertex2f(-15,  -55+i);

    }
     for(int i=0;i<=0;i+=5)//ex2
    {
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-20,  -50+i);
	glVertex2f(-25,  -50+i);
	glVertex2f(-25,  -55+i);
	glVertex2f(-20,  -55+i);

    }
     for(int i=0;i<=15;i+=5)//*
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-15,  30-i);    // x, y
	glVertex2f(-20,  30-i);
	glVertex2f(-20,  35-i);    // x, y
	glVertex2f(-15,  35-i);

    }
     for(int i=0;i<=20;i+=5)//**
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-20,  30-i);    // x, y
	glVertex2f(-25,  30-i);
	glVertex2f(-25,  35-i);    // x, y
	glVertex2f(-20,  35-i);

    }
     for(int i=0;i<=20;i+=5)//***
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-25,  30-i);    // x, y
	glVertex2f(-30,  30-i);
	glVertex2f(-30,  35-i);    // x, y
	glVertex2f(-25,  35-i);

    }
    for(int i=0;i<=10;i+=5)//****
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-30,  25-i);    // x, y
	glVertex2f(-35,  25-i);
	glVertex2f(-35,  30-i);    // x, y
	glVertex2f(-30,  30-i);

    }
     for(int i=0;i<=15;i+=5)//*
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(20,  30-i);    // x, y
	glVertex2f(25,  30-i);
	glVertex2f(25,  35-i);    // x, y
	glVertex2f(20,  35-i);

    }
     for(int i=0;i<=20;i+=5)//**
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(25,  30-i);    // x, y
	glVertex2f(30,  30-i);
	glVertex2f(30,  35-i);    // x, y
	glVertex2f(25,  35-i);

    }
     for(int i=0;i<=20;i+=5)//**
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(30,  30-i);    // x, y
	glVertex2f(35,  30-i);
	glVertex2f(35,  35-i);    // x, y
	glVertex2f(30,  35-i);

    }
    for(int i=0;i<=10;i+=5)//****
    {

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(35,  25-i);    // x, y
	glVertex2f(40,  25-i);
	glVertex2f(40,  30-i);    // x, y
	glVertex2f(35,  30-i);

    }


	glEnd();

	glFlush();  // Render now

}

}
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    //glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-200.0, 200.0, -200.0, 200.0);
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow(" ***BATMAN*** Logo"); // Create a window with the given title
	glutInitWindowSize(766, 1080);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	myInit();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

