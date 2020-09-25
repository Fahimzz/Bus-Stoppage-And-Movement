#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
# define PI           3.14159265358979323846

GLfloat position = -0.75f;
GLfloat speed = 0.0f;

GLfloat position1 = -0.8f;
GLfloat speed1 = 0.0f;

void update(int value) {

    if (position < 1.0) {
        //position = -.75f;
        position += speed;
    }

    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}

void update1(int value) {

    if (position1 < 1.0) {
        //position = -.75f;
        position1 += speed1;
    }

    glutPostRedisplay();


    glutTimerFunc(100, update1, 0);
}




void bus()
{

    //body
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3b(64, 128, 0);
    glVertex2f(-.2f, -.28f);    // x, y
    glVertex2f(.32f, -.28f);
    glVertex2f(.32f, 0.1f);    // x, y
    glVertex2f(-.2f, 0.1f);

    glEnd();
    //glass

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(32, 178, 170);
    glVertex2f(-.2f, -.1f);    // x, y
    glVertex2f(.32f, -.1f);
    glVertex2f(.32f, 0.1f);    // x, y
    glVertex2f(-.2f, 0.1f);

    glEnd();

    //window stick
    glLineWidth(1);

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.27f, -.1f);    // x, y
    glVertex2f(.27f, .1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.2f, -.1f);    // x, y
    glVertex2f(.2f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.13f, -.1f);    // x, y
    glVertex2f(.13f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.06f, -.1f);    // x, y
    glVertex2f(.06f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-.01f, -.1f);    // x, y
    glVertex2f(-.01f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-.08f, -.1f);    // x, y
    glVertex2f(-.08f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-.15f, -.1f);    // x, y
    glVertex2f(-.15f, .0f);
    glEnd();



    ///chad
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(139, 0, 0);
    glVertex2f(-.2f, 0.1f);    // x, y
    glVertex2f(.32f, 0.1f);
    glVertex2f(.36f, .15f);    // x, y
    glVertex2f(-.16f, .15f);

    glEnd();

    //samne
    glBegin(GL_QUADS);
    glColor3ub(139, 0, 0);
    glVertex2f(.32f, -.28f);    // x, y
    glVertex2f(.36f, -.22f);
    glVertex2f(.36f, -.05f);    // x, y
    glVertex2f(.32f, -.1f);

    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(32, 178, 170);
    glVertex2f(.32f, -.1f);    // x, y
    glVertex2f(.36f, -.05f);
    glVertex2f(.36f, 0.15f);    // x, y
    glVertex2f(.32f, 0.1f);
    glEnd();


    ///////////////

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(139, 0, 0);
    glVertex2f(.32f, .1f);    // x, y
    glVertex2f(.33f, 0.07f);
    glVertex2f(.36f, .1f);    // x, y
    glVertex2f(.36f, .15f);

    glEnd();



    //wheel
    int i;

    GLfloat x = .2f; GLfloat y = -.3f; GLfloat radius = .06f;
    int triangleAmount = 200; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glColor3b(0, 0, 0);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    /// secondary wheel
    x = .2f;  y = -.3f; radius = .03f;
    glColor3ub(100, 100, 100);


    glBegin(GL_TRIANGLE_FAN);


    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();




    /// </second wheel>
    x = -.1f; y = -.3f; radius = .06f;
    glColor3b(0, 0, 0);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    ///secondary wheel
    x = -.1f; y = -.3f; radius = .03f;
    glColor3ub(100, 100, 100);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();



}


void LandnRoad()
{
    //road cross//

    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-1.0f, 0.05f);
    glVertex2f(-.95f, 0.05f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-.85f, 0.05f);
    glVertex2f(-.8f, 0.05f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-.7f, 0.05f);
    glVertex2f(-.65f, 0.05f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-.55f, 0.05f);
    glVertex2f(-.5f, 0.05f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-.4f, 0.05f);
    glVertex2f(-.35f, 0.05f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-.25f, 0.05f);
    glVertex2f(-.2f, 0.05f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-.1f, 0.05f);
    glVertex2f(-.05f, 0.05f);
    glEnd();
    //positive//
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(1.0f, 0.05f);
    glVertex2f(.95f, 0.05f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(.85f, 0.05f);
    glVertex2f(.8f, 0.05f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(.7f, 0.05f);
    glVertex2f(.65f, 0.05f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(.55f, 0.05f);
    glVertex2f(.5f, 0.05f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(.4f, 0.05f);
    glVertex2f(.35f, 0.05f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(.25f, 0.05f);
    glVertex2f(.2f, 0.05f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(.1f, 0.05f);
    glVertex2f(.05f, 0.05f);
    glEnd();

    //yaxis//
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.6f, 1.0f);
    glVertex2f(0.595f, .95f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.595f, .850f);
    glVertex2f(0.590f, .8f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.590f, .70f);
    glVertex2f(0.585f, .65f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.585f, .55f);
    glVertex2f(0.580f, .5f);
    glEnd();

    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.575f, .40f);
    glVertex2f(0.570f, .35f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.570f, .25f);
    glVertex2f(0.5650f, .2f);
    glEnd();


    //negative y//
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.5f, -1.0f);
    glVertex2f(0.505f, -.95f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.505f, -.850f);
    glVertex2f(0.510f, -.8f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.510f, -.70f);
    glVertex2f(0.515f, -.65f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.515f, -.55f);
    glVertex2f(0.520f, -.5f);
    glEnd();

    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.520f, -.40f);
    glVertex2f(0.525f, -.35f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.525f, -.25f);
    glVertex2f(0.530f, -.2f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.530f, -.10f);
    glVertex2f(0.535f, -.05f);
    glEnd();



    //land//
    glBegin(GL_QUADS);
    glColor3ub(0, 204, 0);
    glVertex2f(0.40f, 0.20f);//
    glVertex2f(.45f, 01.0f);
    glVertex2f(-1.f, 01.0f);
    glVertex2f(-1.f, 0.20f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 204, 0);
    glVertex2f(-1.0f, -0.10f);//
    glVertex2f(-1.f, -01.0f);
    glVertex2f(.35f, -01.0f);
    glVertex2f(.4f, -0.10f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 204, 0);
    glVertex2f(.750f, 1.0f);//
    glVertex2f(.7f, .20f);
    glVertex2f(1.f, .20f);
    glVertex2f(1.f, 01.f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 204, 0);
    glVertex2f(.7f, -0.10f);//
    glVertex2f(.65f, -1.0f);
    glVertex2f(1.f, -1.0f);
    glVertex2f(1.f, -0.1f);
    glEnd();



    glLineWidth(5.5f);//1st light stand
    glBegin(GL_LINES);
    glColor3f(133, 133, 173);
    glVertex2f(0.37f, 0.20f);
    glVertex2f(0.37f, 0.45f);
    glEnd();

    glLineWidth(5.5f);// 1st light stand up
    glBegin(GL_LINES);
    glColor3f(204, 102, 153);
    glVertex2f(0.30f, 0.44f);
    glVertex2f(0.44f, 0.44f);
    glEnd();

    glBegin(GL_TRIANGLES); //first Light up
    glColor3f(204, 204, 255); // Red

    glVertex2f(0.30f, 0.44f);    // x, y
    glVertex2f(0.25f, 0.37f);
    glVertex2f(0.35f, 0.37f);

    glEnd();


    glBegin(GL_TRIANGLES); //2nd Light up
    glColor3f(204, 204, 255); // Red

    glVertex2f(0.44f, 0.44f);    // x, y
    glVertex2f(0.39f, 0.37f);
    glVertex2f(0.49f, 0.37f);

    glEnd();


    glLineWidth(15.0f);//Tree stand
    glBegin(GL_LINES);
    glColor3ub(64, 25, 6);
    glVertex2f(0.25f, 0.30f);
    glVertex2f(0.25f, 0.58f);
    glEnd();

    glBegin(GL_TRIANGLES);//leaf
    glColor3ub(0, 102, 0);//rgb color picker

    glVertex2f(0.10f, 0.55f);    // x, y
    glVertex2f(0.40f, 0.55f);
    glVertex2f(0.25f, 0.67f);
    glEnd();


    glBegin(GL_TRIANGLES);//leaf
    glColor3ub(0, 102, 0);//rgb color picker

    glVertex2f(0.15f, 0.58f);    // x, y
    glVertex2f(0.35f, 0.58f);
    glVertex2f(0.25f, 0.80f);
    glEnd();


    glLineWidth(5.5f);//2nd light stand
    glBegin(GL_LINES);
    glColor3f(133, 133, 173);
    glVertex2f(0.3f, -0.15f);
    glVertex2f(0.3f, -0.50f);
    glEnd();



    glLineWidth(5.5f);//2nd light stand up
    glBegin(GL_LINES);
    glColor3f(133, 133, 173);
    glVertex2f(0.21f, -0.15f);
    glVertex2f(0.37f, -0.15f);
    glEnd();




    glBegin(GL_TRIANGLES); //2nd Light left
    glColor3f(204, 204, 255); // Red

    glVertex2f(0.21f, -0.15f);    // x, y
    glVertex2f(0.16f, -0.21f);
    glVertex2f(0.26f, -0.21f);

    glEnd();



    glBegin(GL_TRIANGLES); //2nd Light Right
    glColor3f(204, 204, 255); // Red

    glVertex2f(0.37f, -0.15f);    // x, y
    glVertex2f(0.31f, -0.21f);
    glVertex2f(0.42f, -0.21f);

    glEnd();

    glLineWidth(5.5f);//3rd light stand
    glBegin(GL_LINES);
    glColor3f(133, 133, 173);
    glVertex2f(0.75f, 0.20f);
    glVertex2f(0.76f, 0.4f);
    glEnd();

    glLineWidth(5.5f);//3rd light stand up
    glBegin(GL_LINES);
    glColor3f(133, 133, 173);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.83f, 0.4f);
    glEnd();


    glBegin(GL_TRIANGLES); //3rd Light left
    glColor3f(204, 204, 255); // Red

    glVertex2f(0.7f, 0.4f);    // x, y
    glVertex2f(0.65f, 0.35f);
    glVertex2f(0.75f, 0.35f);

    glEnd();

    glBegin(GL_TRIANGLES); //3rd Light Right
    glColor3f(204, 204, 255); // Red

    glVertex2f(0.83f, 0.4f);    // x, y
    glVertex2f(0.78f, 0.35f);
    glVertex2f(0.88f, 0.35f);

    glEnd();




    glLineWidth(5.5f);//4rth light stand
    glBegin(GL_LINES);
    glColor3f(133, 133, 173);
    glVertex2f(0.74f, -0.15f);
    glVertex2f(0.74f, -0.52f);
    glEnd();


    glLineWidth(5.5f);//4rth light up
    glBegin(GL_LINES);
    glColor3f(133, 133, 173);
    glVertex2f(0.68f, -0.15f);
    glVertex2f(0.80f, -0.15f);
    glEnd();


    glBegin(GL_TRIANGLES); //3rd Light Right
    glColor3f(204, 204, 255); // Red

    glVertex2f(0.68f, -0.15f);    // x, y
    glVertex2f(0.63f, -0.21f);
    glVertex2f(0.73f, -0.21f);

    glEnd();


    glBegin(GL_TRIANGLES); //3rd Light Right
    glColor3f(204, 204, 255); // Red

    glVertex2f(0.80f, -0.15f);    // x, y
    glVertex2f(0.75f, -0.21f);
    glVertex2f(0.85f, -0.21f);

    glEnd();



    //Right side Tree

    glLineWidth(15.0f);//Tree stand
    glBegin(GL_LINES);
    glColor3ub(64, 25, 6);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(-0.5f, -.8f);
    glEnd();

    glBegin(GL_TRIANGLES);//leaf
    glColor3ub(0, 102, 0);//rgb color picker

    glVertex2f(-0.5f, -0.45f);    // x, y
    glVertex2f(-.6f, -0.55f);
    glVertex2f(-0.4f, -0.55f);
    glEnd();


    glBegin(GL_TRIANGLES);//leaf
    glColor3ub(0, 102, 0);//rgb color picker

    glVertex2f(-0.5f, -0.4f);    // x, y
    glVertex2f(-.6f, -0.5f);
    glVertex2f(-0.4f, -0.5f);
    glEnd();


    glBegin(GL_TRIANGLES);//leaf
    glColor3ub(0, 102, 0);//rgb color picker

    glVertex2f(-0.5f, -0.35f);    // x, y
    glVertex2f(-.6f, -0.45f);
    glVertex2f(-0.4f, -0.45f);
    glEnd();





}
void BusStop() {


    glBegin(GL_QUADS);//left pillar
    glColor3ub(0, 128, 128);
    glVertex2f(-0.8f, 0.35f);
    glVertex2f(-0.8f, .9f);
    glVertex2f(-0.74f, .9f);
    glVertex2f(-0.74f, 0.39f);
    glEnd();


    glBegin(GL_QUADS);//roof
    glColor3ub(77, 166, 255);
    glVertex2f(-0.84f, 0.94f);
    glVertex2f(-0.84f, .9f);
    glVertex2f(-0.01f, .9f);
    glVertex2f(-0.01f, 0.94f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.84f, 0.93f);
    glVertex2f(-0.01f, 0.93f);
    glEnd();

    glBegin(GL_QUADS);//roof
    glColor3ub(0, 128, 128);
    glVertex2f(-0.80f, 0.99f);
    glVertex2f(-0.84f, .93f);
    glVertex2f(-0.01f, .93f);
    glVertex2f(-0.01f, 0.99f);
    glEnd();

    glBegin(GL_QUADS);//floor
    glColor3ub(128, 128, 128);
    glVertex2f(-0.80f, 0.39f);
    glVertex2f(-0.80f, .32f);
    glVertex2f(-0.08f, .32f);
    glVertex2f(-0.08f, 0.39f);
    glEnd();

    glBegin(GL_QUADS);//floor
    glColor3ub(128, 128, 128);
    glVertex2f(-0.15f, 0.45f);
    glVertex2f(-0.1f, .32f);
    glVertex2f(-0.07f, .32f);
    glVertex2f(-0.03, 0.45f);
    glEnd();


    glLineWidth(0.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.80f, 0.39f);
    glVertex2f(-0.08f, 0.39f);
    glEnd();
    glBegin(GL_QUADS);//floor
    glColor3ub(128, 128, 128);
    glVertex2f(-0.80f, 0.39f);
    glVertex2f(-0.84f, .45f);
    glVertex2f(-0.02f, .45f);
    glVertex2f(-0.08f, 0.39f);
    glEnd();


    glLineWidth(0.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.08f, 0.39f);
    glVertex2f(-0.02f, 0.45f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.08f, 0.39f);
    glVertex2f(-0.08f, 0.33f);
    glEnd();



    glBegin(GL_QUADS);//wall glass
    glColor3ub(0, 204, 102);
    glVertex2f(-0.1f, 0.55f);
    glVertex2f(-0.1f, .75f);
    glVertex2f(-0.74f, .75f);
    glVertex2f(-0.74f, 0.55f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 51);
    glVertex2f(-0.1f, 0.75f);
    glVertex2f(-0.74f, 0.75f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 102, 51);
    glVertex2f(-0.1f, 0.55f);
    glVertex2f(-0.74f, 0.55f);
    glEnd();
    glBegin(GL_QUADS);//right pillar
    glColor3ub(0, 128, 128);
    glVertex2f(-0.1f, 0.42f);
    glVertex2f(-0.1f, .9f);
    glVertex2f(-0.06f, .9f);
    glVertex2f(-0.06f, 0.44f);
    glEnd();

    glBegin(GL_QUADS);//table
    glColor3ub(0, 0, 0);
    glVertex2f(-0.15f, 0.56f);
    glVertex2f(-0.18f, .5f);
    glVertex2f(-0.38f, .5f);
    glVertex2f(-0.35f, 0.56f);
    glEnd();
    //table stands
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.33f, 0.5f);
    glVertex2f(-0.33f, 0.45f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.2f, 0.5f);
    glVertex2f(-0.2f, 0.45f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 128, 255);
    glVertex2f(-0.74f, 0.9f);
    glVertex2f(-0.74f, 0.3f);
    glEnd();
}

//for new display
void LandnRoad2()
{
    //cross
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-01.0f, -.45f);
    glVertex2f(-0.95f, -.45f);
    glEnd();

    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.850f, -.45f);
    glVertex2f(-0.80f, -.45f);
    glEnd();

    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.70f, -.45f);
    glVertex2f(-0.650f, -.45f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.550f, -.45f);
    glVertex2f(-0.50f, -.45f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.40f, -.45f);
    glVertex2f(-0.350f, -.45f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.25f, -.45f);
    glVertex2f(-0.20f, -.45f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.10f, -.45f);
    glVertex2f(-0.05f, -.45f);
    glEnd();
    //cross positive
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(01.0f, -.45f);
    glVertex2f(0.95f, -.45f);
    glEnd();

    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.850f, -.45f);
    glVertex2f(0.80f, -.45f);
    glEnd();

    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.70f, -.45f);
    glVertex2f(0.650f, -.45f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.550f, -.45f);
    glVertex2f(0.50f, -.45f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.40f, -.45f);
    glVertex2f(0.350f, -.45f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.25f, -.45f);
    glVertex2f(0.20f, -.45f);
    glEnd();
    glLineWidth(1.5f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.10f, -.45f);
    glVertex2f(0.05f, -.45f);
    glEnd();



    //land
    glBegin(GL_QUADS);
    glColor3ub(0, 204, 0);
    glVertex2f(-1.f, 1.0f);
    glVertex2f(-1.f, -0.3f);
    glVertex2f(1.f, -0.3f);
    glVertex2f(1.f, 1.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 204, 0);
    glVertex2f(-1.f, -0.6f);
    glVertex2f(-1.f, -1.0f);
    glVertex2f(1.f, -1.0f);
    glVertex2f(1.f, -0.6f);
    glEnd();




    //Tree up

    glLineWidth(9.5f);
    glBegin(GL_LINES);
    glColor3ub(64, 25, 6);
    glVertex2f(-0.50f, 0.4f);
    glVertex2f(-0.50f, 0.6f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 51, 0);

    glVertex2f(-0.6f, 0.6f);    // x, y
    glVertex2f(-0.4f, 0.6f);
    glVertex2f(-0.50f, 0.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 51, 0);

    glVertex2f(-0.62f, 0.54f);    // x, y
    glVertex2f(-0.37f, 0.54f);
    glVertex2f(-0.50f, 0.65f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 51, 0);

    glVertex2f(-0.58f, 0.65f);    // x, y
    glVertex2f(-0.42f, 0.65f);
    glVertex2f(-0.50f, 0.78f);

    glEnd();



    //tress down

    glLineWidth(9.5f);// tree1
    glBegin(GL_LINES);
    glColor3ub(64, 25, 6);
    glVertex2f(-0.60f, -1.0f);
    glVertex2f(-0.60f, -0.85f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);

    glVertex2f(-0.70f, -0.85f);    // x, y
    glVertex2f(-0.50f, -0.85f);
    glVertex2f(-0.60f, -0.75f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);

    glVertex2f(-0.65f, -0.80f);    // x, y
    glVertex2f(-0.53f, -0.85f);
    glVertex2f(-0.60f, -0.65f);

    glEnd();


    glLineWidth(9.5f);//tree2
    glBegin(GL_LINES);
    glColor3ub(64, 25, 6);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.0f, -0.85f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);

    glVertex2f(-0.10f, -0.85f);    // x, y
    glVertex2f(0.10f, -0.85f);
    glVertex2f(0.0f, -0.75f);

    glEnd();

    glBegin(GL_TRIANGLES);
     glColor3ub(0, 102, 0);

    glVertex2f(-0.05f, -0.80f);    // x, y
    glVertex2f(0.06f, -0.85f);
    glVertex2f(0.0f, -0.65f);

    glEnd();



    glLineWidth(9.5f);// tree3
    glBegin(GL_LINES);
    glColor3ub(64, 25, 6);
    glVertex2f(0.60f, -1.0f);
    glVertex2f(0.60f, -0.85f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);

    glVertex2f(0.70f, -0.85f);    // x, y
    glVertex2f(0.50f, -0.85f);
    glVertex2f(0.60f, -0.75f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);

    glVertex2f(0.65f, -0.80f);    // x, y
    glVertex2f(0.53f, -0.85f);
    glVertex2f(0.60f, -0.65f);

    glEnd();




}

void wall()
{
    /// <summary>
    /// wall shape
    /// </summary>
    glBegin(GL_QUADS);//table
    glColor3ub(110, 98, 98);
    glVertex2f(-1.0f, -.1f);
    glVertex2f(-0.3f, -.1f);
    glVertex2f(-0.3f, .4f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();

    //bricks
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-1.0f, -.1f);
    glVertex2f(-.3f, -.1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-1.0f, .0f);
    glVertex2f(-.3f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-1.0f, .1f);
    glVertex2f(-.3f, .1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-1.0f, .2f);
    glVertex2f(-.3f, .2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-1.0f, .3f);
    glVertex2f(-.3f, .3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-1.0f, .4f);
    glVertex2f(-.3f, .4f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-1.0f, -.1f);
    glVertex2f(-1.0f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-.9f, -.1f);
    glVertex2f(-.9f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-.8f, -.1f);
    glVertex2f(-.8f, .4f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-.7f, -.1f);
    glVertex2f(-.7f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-.6f, -.1f);
    glVertex2f(-.6f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-.5f, -.1f);
    glVertex2f(-.5f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-.4f, -.1f);
    glVertex2f(-.4f, .4f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-.3f, -.1f);
    glVertex2f(-.3f, .4f);
    glEnd();

    // gate

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-.3f, -.1f);
    glVertex2f(-.05f, .05f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-.3f, .4f);
    glVertex2f(-.05f, .5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-.05f, .05f);
    glVertex2f(-.05f, .5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-.3f, -.0f);
    glVertex2f(-.05f, .15f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(-.18f, -.03f);
    glVertex2f(-.18f, .45f);
    glEnd();


    ///second wall

    glBegin(GL_QUADS);
    glColor3ub(110, 98, 98);
    glVertex2f(.3f, -.1f);
    glVertex2f(1.0f, -.1f);
    glVertex2f(1.0f, .4f);
    glVertex2f(.3f, 0.4f);
    glEnd();

    //bricks

    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.3f, -.1f);
    glVertex2f(1.0f, -.1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.3f, -.0f);
    glVertex2f(1.0f, -.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.3f, .1f);
    glVertex2f(1.0f, .1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.3f, .2f);
    glVertex2f(1.0f, .2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.3f, .3f);
    glVertex2f(1.0f, .3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.3f, .4f);
    glVertex2f(1.0f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.3f, -.1f);
    glVertex2f(.3f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.4f, -.1f);
    glVertex2f(.4f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.5f, -.1f);
    glVertex2f(.5f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.6f, -.1f);
    glVertex2f(.6f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.7f, -.1f);
    glVertex2f(.7f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.8f, -.1f);
    glVertex2f(.8f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.9f, -.1f);
    glVertex2f(.9f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(1.0f, -.1f);
    glVertex2f(1.0f, .4f);
    glEnd();

    //gate

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.3f, -.1f);
    glVertex2f(.1f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.3f, .4f);
    glVertex2f(.1f, .5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.1f, .0f);
    glVertex2f(.1f, .5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.3f, .0f);
    glVertex2f(.1f, .1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(8, 7, 7);
    glVertex2f(.2f, -.05f);
    glVertex2f(.2f, .45f);
    glEnd();

    //tree




}

void bus2()
{
    //body
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3b(64, 128, 0);
    glVertex2f(-.2f, -.28f);    // x, y
    glVertex2f(.32f, -.28f);
    glVertex2f(.32f, 0.1f);    // x, y
    glVertex2f(-.2f, 0.1f);

    glEnd();
    //glass

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(32, 178, 170);
    glVertex2f(-.2f, -.1f);    // x, y
    glVertex2f(.32f, -.1f);
    glVertex2f(.32f, 0.1f);    // x, y
    glVertex2f(-.2f, 0.1f);

    glEnd();

    //window stick
    glLineWidth(1);

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.27f, -.1f);    // x, y
    glVertex2f(.27f, .1f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.2f, -.1f);    // x, y
    glVertex2f(.2f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.13f, -.1f);    // x, y
    glVertex2f(.13f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.06f, -.1f);    // x, y
    glVertex2f(.06f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-.01f, -.1f);    // x, y
    glVertex2f(-.01f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-.08f, -.1f);    // x, y
    glVertex2f(-.08f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-.15f, -.1f);    // x, y
    glVertex2f(-.15f, .0f);
    glEnd();



    ///chad
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(139, 0, 0);
    glVertex2f(-.2f, 0.1f);    // x, y
    glVertex2f(.32f, 0.1f);
    glVertex2f(.36f, .15f);    // x, y
    glVertex2f(-.16f, .15f);

    glEnd();

    //samne
    glBegin(GL_QUADS);
    glColor3ub(139, 0, 0);
    glVertex2f(.32f, -.28f);    // x, y
    glVertex2f(.36f, -.22f);
    glVertex2f(.36f, -.05f);    // x, y
    glVertex2f(.32f, -.1f);

    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(32, 178, 170);
    glVertex2f(.32f, -.1f);    // x, y
    glVertex2f(.36f, -.05f);
    glVertex2f(.36f, 0.15f);    // x, y
    glVertex2f(.32f, 0.1f);
    glEnd();


    ///////////////

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(139, 0, 0);
    glVertex2f(.32f, .1f);    // x, y
    glVertex2f(.33f, 0.07f);
    glVertex2f(.36f, .1f);    // x, y
    glVertex2f(.36f, .15f);

    glEnd();



    //wheel
    int i;

    GLfloat x = .2f; GLfloat y = -.3f; GLfloat radius = .06f;
    int triangleAmount = 200; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glColor3b(0, 0, 0);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    /// secondary wheel
    x = .2f;  y = -.3f; radius = .03f;
    glColor3ub(100, 100, 100);


    glBegin(GL_TRIANGLE_FAN);


    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();




    /// </second wheel>
    x = -.1f; y = -.3f; radius = .06f;
    glColor3b(0, 0, 0);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    ///secondary wheel
    x = -.1f; y = -.3f; radius = .03f;
    glColor3ub(100, 100, 100);

    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

}



void dbuilding() {
    //fullbody
    glBegin(GL_QUADS);
    glColor3ub(128, 96, 96);
    glVertex2f(-.72f, 0.95f);    // x, y
    glVertex2f(-.72f, 0.15f);    // x, y
    glVertex2f(0.92f, 0.15f);    // x, y
    glVertex2f(.92f, 0.95);
    glEnd();


    //baka
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(-.92f, 0.96f);    // x, y
    glVertex2f(-.92f, 0.16f);    // x, y
    glVertex2f(-0.72f, 0.15f);    // x, y
    glVertex2f(-.72f, 0.95);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(-.90f, 0.91f);    // x, y
    glVertex2f(-.90f, 0.21f);    // x, y
    glVertex2f(-0.74f, 0.20f);    // x, y
    glVertex2f(-.74f, 0.90);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(-.90, 0.91);
    glVertex2f(-.90, .21);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(-.74, 0.90);
    glVertex2f(-.74, .20);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(-.74, 0.90);
    glVertex2f(-.74, .20);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(-.74, 0.90);
    glVertex2f(-.74, .20);
    glEnd();

    //top floor glass
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(-.68f, 0.90f);    // x, y
    glVertex2f(-.68f, 0.75f);    // x, y
    glVertex2f(0.88f, 0.75f);    // x, y
    glVertex2f(.88f, 0.90);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(-.68, 0.90);
    glVertex2f(.88, .90);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(-.68, 0.75);
    glVertex2f(.88, .75);
    glEnd();

    //top 2floor glass
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(-.68f, 0.70f);    // x, y
    glVertex2f(-.68f, 0.55f);    // x, y
    glVertex2f(0.88f, 0.55f);    // x, y
    glVertex2f(.88f, 0.70);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(-.68, 0.70);
    glVertex2f(.88, .70);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(-.90, 0.91);
    glVertex2f(-.74, .90);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(-.90, 0.21);
    glVertex2f(-.74, .20);
    glEnd();

    //top 3floor glass
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2f(-.68f, 0.50f);    // x, y
    glVertex2f(-.68f, 0.35f);    // x, y
    glVertex2f(0.88f, 0.35f);    // x, y
    glVertex2f(.88f, 0.50);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(-.68, 0.50);
    glVertex2f(.88, .50);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(-.68, 0.35);
    glVertex2f(.88, .35);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(-.68, 0.90);
    glVertex2f(-.68, .35);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(7.5);
    glColor3ub(255, 255, 255);
    glVertex2f(.88, 0.90);
    glVertex2f(.88, .35);
    glEnd();




    glPopMatrix();

}





void display2()
{
    glClearColor(.0f, .0f, .0f, 0.0f);

    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();

    //functions//
    LandnRoad2();
    dbuilding();
    // glTranslatef(-.75, .35, 0);
    wall();

    glPushMatrix();
    glTranslatef(position1, -.1, 0);


    bus2();

    glPopMatrix();

    glFlush();

}

void display() {
    glClearColor(.0f, .0f, .0f, 0.0f);

    glClear(GL_COLOR_BUFFER_BIT);

    //functions//
    LandnRoad();





    BusStop();



    glPushMatrix();
    //glTranslatef(position, 0.0f, 0.0f);
    glTranslatef(position, .35, 0);
    bus();
    glPopMatrix();


    glFlush();


}


void SpecialInput(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_UP:

        speed = 0.05f;
        break;

    case GLUT_KEY_DOWN:
        speed = 0.0f;
        break;

    case GLUT_KEY_LEFT:
        glutDisplayFunc(display2);
        break;

    case GLUT_KEY_RIGHT:
        break;
    }
    glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
    case 'a':
        speed1 = 0.0f;
        break;
    case 'w':
        speed1 = 0.05f;
        break;
        glutPostRedisplay();
    }
}






int main(int argc, char** argv)
{

    glutInit(&argc, argv);

    glutInitWindowSize(1000, 650);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);
    glutTimerFunc(100, update, 0);
    glutSpecialFunc(SpecialInput);
    glutTimerFunc(100, update1, 0);
    glutKeyboardFunc(handleKeypress);

    glutMainLoop();
    return 0;
}

