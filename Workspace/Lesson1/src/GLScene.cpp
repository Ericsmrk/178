#include "GLScene.h"

GLScene::GLScene()
{
    //ctor
}

GLScene::~GLScene()
{
    //dtor
}
int GLScene::drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); //clear out color and depth
    glLoadIdentity();
    glColor3f(1.0,0.0,0.0); //R, G B

    glTranslated(0,0,-8);
    glPushMatrix();

    glutSolidTeapot(1.5);
    glPopMatrix();
}

int GLScene::GLinit()
{
    glClearDepth(1.0f);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glClearColor(0.0f,0.0f,0.0f,0.0f);

    return true;
    //return false;
}

void GLScene::GLReSize(GLsizei width, GLsizei height)
{
    float ratio = width/height;
    glViewport(0,0, width, height);
    glMatrixMode(GL_PROJECTION);
    gluPerspective(45.0,ratio, 0.1, 1000);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

