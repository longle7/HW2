/*******************************************************
 * Homework 2: OpenGL                                  *
 *-----------------------------------------------------*
 * First, you should fill in problem1(), problem2(),   *
 * and problem3() as instructed in the written part of *
 * the problem set.  Then, express your creativity     *
 * with problem4()!                                    *
 *                                                     *
 * Note: you will only need to add/modify code where   *
 * it says "TODO".                                     *
 *                                                     *
 * The left mouse button rotates, the right mouse      *
 * button zooms, and the keyboard controls which       *
 * problem to display.                                 *
 *                                                     *
 * For Linux/OS X:                                     *
 * To compile your program, just type "make" at the    *
 * command line.  Typing "make clean" will remove all  *
 * computer-generated files.  Run by typing "./hw2"    *
 *                                                     *
 * For Visual Studio:                                  *
 * You can create a project with this main.cpp and     *
 * build and run the executable as you normally would. *
 *******************************************************/

#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

#include "./freeglut-3.2.1/include/GL/freeglut.h"

using namespace std;

bool leftDown = false, rightDown = false;
int lastPos[2];
float cameraPos[4] = {0,1,4,1};
int windowWidth = 640, windowHeight = 480;
double yRot = 0;
int curProblem = 1; // TODO: change this number to try different examples

float specular[] = { 1.0, 1.0, 1.0, 1.0 };
float shininess[] = { 50.0 };

void problem1() {
    // TODO: Your code here!
    glPushMatrix();
    glTranslatef(0.0, 1.0, 0.0);
    glRotatef(90, 0, 0, 1);
    glutSolidTeapot(.1);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.5, 0.75, 0.0);
    glRotatef(54, 0, 0, 1);
    glutSolidTeapot(.1);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(1.0, 0.4, 0.0);
    glutSolidTeapot(.1);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.95, -0.25, 0.0);
    glRotatef(324, 0, 0, 1);
    glutSolidTeapot(.1);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.6, -0.7, 0.0);
    glRotatef(300, 0, 0, 1);
    glutSolidTeapot(.1);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.0, -1.0, 0.0);
    glRotatef(219, 0, 0, 1);
    glutSolidTeapot(.1);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.6, -0.7, 0.0);
    glRotatef(225, 0, 0, 1);
    glutSolidTeapot(.1);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.9, -0.2, 0.0);
    glRotatef(189, 0, 0, 1);
    glutSolidTeapot(.1);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.9, 0.3, 0.0);
    glRotatef(153, 0, 0, 1);
    glutSolidTeapot(.1);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.6, 0.8, 0.0);
    glRotatef(117, 0, 0, 1);
    glutSolidTeapot(.1);
  glPopMatrix();
  

  

  
  

  

  
}

void problem2() {
    // TODO: Your code here!
  //first stack
  //base
  glPushMatrix();
    glTranslatef(-2, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-2, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-2, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-2, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-2, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-2, 1.0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-2, 1.2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-2, 1.4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-2, 1.6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //second stack
  glPushMatrix();
    glTranslatef(-1.8, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.8, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.8, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.8, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.8, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.8, 1.0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.8, 1.2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.8, 1.4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.8, 1.55, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //third
  glPushMatrix();
    glTranslatef(-1.6, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.6, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.6, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.6, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.6, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.6, 1.0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.6, 1.2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.6, 1.4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.6, 1.5, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //forth
  glPushMatrix();
    glTranslatef(-1.4, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.4, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.4, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.4, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.4, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.4, 1.0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.4, 1.2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.4, 1.4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.4, 1.45, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //fifth
  glPushMatrix();
    glTranslatef(-1.2, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.2, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.2, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.2, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.2, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.2, 1.0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.2, 1.2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.2, 1.4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //6th
  glPushMatrix();
    glTranslatef(-1.0, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1., .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.0, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.0, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.0, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.0, 1.0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.0, 1.2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-1.0, 1.35, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //7th
  glPushMatrix();
    glTranslatef(-.8, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.8, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.8, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.8, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.8, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.8, 1.0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.8, 1.2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.8, 1.3, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //8th
  glPushMatrix();
    glTranslatef(-.6, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.6, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.6, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.6, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.6, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.6, 1.0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.6, 1.2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.6, 1.25, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //9th
  glPushMatrix();
    glTranslatef(-.4, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.4, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.4, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.4, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.4, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.4, 1.0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.4, 1.2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //10th
  glPushMatrix();
    glTranslatef(-.2, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.2, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.2, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.2, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.2, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.2, 1.0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-.2, 1.15, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //11th
  double_t x = 0;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, 1.0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, 1.1, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //12th
  x=.2;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, 1.0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, 1.05, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //13th
  x=.4;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, 1, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //14th
  x=.6;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .95, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //15th
  x=.8;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .9, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //16th
  x=1;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .85, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //17th
  x=1.2;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .8, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //18th
  x=1.4;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .75, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //19th
  x=1.6;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .7, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //20th
  x=1.8;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .65, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //21st
  x=2;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .6, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //22
  x=2.2;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .55, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //23
  x=2.4;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .5, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //24
  x=2.6;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .45, 0.0);
    glutSolidCube(.2);
  glPopMatrix();

  //25
  x=2.8;
  glPushMatrix();
    glTranslatef(x, 0, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .2, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(x, .4, 0.0);
    glutSolidCube(.2);
  glPopMatrix();
  
}

void problem3() {
    // TODO: Your code here!
   //first row
  glPushMatrix();
    glTranslatef(1.4, 1.2, 0.0);
    glutSolidTeapot(.2);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.8, 1.2, 0.0);
    glutSolidTeapot(.2);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.2, 1.2, 0.0);
    glutSolidTeapot(.2);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.4, 1.2, 0.0);
    glutSolidTeapot(.2);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.0, 1.2, 0.0);
    glutSolidTeapot(.2);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.6, 1.2, 0.0);
    glutSolidTeapot(.2);
  glPopMatrix();

  //second row

  glPushMatrix();
    glTranslatef(1.1, .7, 0.0);
    glRotatef(2, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.5, .7, 0.0);
    glRotatef(2, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();
  
  glPushMatrix();
    glTranslatef(-0.1, .7, 0.0);
    glRotatef(2, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.7, .7, 0.0);
    glRotatef(2, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.3, .7, 0.0);
    glRotatef(2, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();

  //third row
  glPushMatrix();
    glTranslatef(-1.0, .2, 0.0);
    glRotatef(5, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-0.4, .2, 0.0);
    glRotatef(5, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(0.2, .2, 0.0);
    glRotatef(5, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(0.8, .2, 0.0);
    glRotatef(5, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();

  //forth
  glPushMatrix();
    glTranslatef(-0.7, -.3, 0.0);
    glRotatef(10, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(-0.1, -.3, 0.0);
    glRotatef(10, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(.5, -.3, 0.0);
    glRotatef(10, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();

  //fifth
  glPushMatrix();
    glTranslatef(-0.4, -.8, 0.0);
    glRotatef(15, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();
  glPushMatrix();
    glTranslatef(0.2, -.8, 0.0);
    glRotatef(15, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();

  //last
  glPushMatrix();
    glTranslatef(-0.1, -1.3, 0.0);
    glRotatef(25, 1, 0, 0);
    glutSolidTeapot(.2);
  glPopMatrix();
  
  
}

void problem4() {
    // TODO: Your code here!

  glPushMatrix();
  glTranslatef(1, 0, 0.0);
      glutSolidCube(.5);
      glPushMatrix();
        glTranslatef(0, .5, 0.0);
        glutSolidCube(.5);
      glPopMatrix();
  glTranslatef(0, 1, 0);
  glutSolidCube(1.2);
  //thumb
  glTranslatef(-.7, 0, 0);
  glutSolidCube(.3);
  glTranslatef(-.3, 0, 0);
  glutSolidCube(.3);
  glTranslatef(-.3, 0, 0);
  glutSolidCube(.3);
  //pinky
  glTranslatef(1.7, .6, 0);
  glutSolidCube(.2);
  glTranslatef(0, .2, 0);
  glutSolidCube(.2);
  glTranslatef(0, .2, 0);
  glutSolidCube(.2);
   glTranslatef(0, .2, 0);
  glutSolidCube(.2);
  
  //ring finger
  glTranslatef(-.3, -.6, 0);
  glutSolidCube(.2);
  glTranslatef(0, .2, 0);
  glutSolidCube(.2);
  glTranslatef(0, .2, 0);
  glutSolidCube(.2);
  glTranslatef(0, .2, 0);
  glutSolidCube(.2);

  //middle
  glTranslatef(-.3, -.6, 0);
  glutSolidCube(.2);
  glTranslatef(0, .2, 0);
  glutSolidCube(.2);
  glTranslatef(0, .2, 0);
  glutSolidCube(.2);
  glTranslatef(0, .2, 0);
  glutSolidCube(.2);
  //middle
  glTranslatef(-.3, -.6, 0);
  glutSolidCube(.2);
  glTranslatef(0, .2, 0);
  glutSolidCube(.2);
  glTranslatef(0, .2, 0);
  glutSolidCube(.2);
  glTranslatef(0, .2, 0);
  glutSolidCube(.2);

  //flag
  glPushMatrix();
  double y = -2;
  glTranslatef(-1.5,y,0);
  glutSolidCube(.1);
  for(double x = 0; x < 3;x=x+.1){
    glTranslatef(0,.1,0);
    glutSolidCube(.1);
  }
  glPopMatrix();


  glPushMatrix();
  
  glBegin(GL_TRIANGLES);
  glRotatef(270, 0, 0, 1);
  glColor3f(255, 255, 255);
  glVertex3f(-1.5, 1, 0);
  glVertex3f(-1.5, .5, 0);
  glVertex3f(-.5, .75, 0);
  glEnd();
  glPopMatrix();

  

  glPopMatrix();
  
  
}

void display() {
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glDisable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glBegin(GL_LINES);
		glColor3f(1,0,0); glVertex3f(0,0,0); glVertex3f(1,0,0); // x axis
		glColor3f(0,1,0); glVertex3f(0,0,0); glVertex3f(0,1,0); // y axis
		glColor3f(0,0,1); glVertex3f(0,0,0); glVertex3f(0,0,1); // z axis
	glEnd(/*GL_LINES*/);

	glEnable(GL_LIGHTING);
	glShadeModel(GL_SMOOTH);
	glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
	glEnable(GL_LIGHT0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0,0,windowWidth,windowHeight);

	float ratio = (float)windowWidth / (float)windowHeight;
	gluPerspective(50, ratio, 1, 1000);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(cameraPos[0], cameraPos[1], cameraPos[2], 0, 0, 0, 0, 1, 0);

	glLightfv(GL_LIGHT0, GL_POSITION, cameraPos);

	glRotatef(yRot,0,1,0);

	if (curProblem == 1) problem1();
	if (curProblem == 2) problem2();
	if (curProblem == 3) problem3();
	if (curProblem == 4) problem4();

	glutSwapBuffers();
}

void mouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON) leftDown = (state == GLUT_DOWN);
	else if (button == GLUT_RIGHT_BUTTON) rightDown = (state == GLUT_DOWN);

	lastPos[0] = x;
	lastPos[1] = y;
}

void mouseMoved(int x, int y) {
	if (leftDown) yRot += (x - lastPos[0])*.1;
	if (rightDown) {
		for (int i = 0; i < 3; i++)
			cameraPos[i] *= pow(1.1,(y-lastPos[1])*.1);
	}


	lastPos[0] = x;
	lastPos[1] = y;
	glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y) {
	curProblem = key-'0';
    if (key == 'q' || key == 'Q' || key == 27){
        exit(0);
    }
	glutPostRedisplay();
}

void reshape(int width, int height) {
	windowWidth = width;
	windowHeight = height;
	glutPostRedisplay();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(windowWidth, windowHeight);
	glutCreateWindow("HW2");

	glutDisplayFunc(display);
	glutMotionFunc(mouseMoved);
	glutMouseFunc(mouse);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);

	glutMainLoop();

	return 0;
}
