#ifndef GLSCENE_H
#define GLSCENE_H

#include <windows.h>
#include <GL/glut.h>
#include <iostream>

class GLScene
{
    public:
        GLScene();
        virtual ~GLScene();
        int drawScene();                               // runs in aloop MAIN RENDERER
        int GLinit();                           // initialize the scene
        void GLReSize(GLsizei, GLsizei);        // callback function for resize


    protected:

        //declare here more securely

    private:
};

#endif // GLSCENE_H
