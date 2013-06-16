/* 
 * File:   PhisicsCanvas.cpp
 * Author: Gabor_2
 * 
 * Created on 2013. június 15., 15:26
 */

#include "PhisicsCanvas.h"

using namespace std;

PhisicsCanvas::PhisicsCanvas(QGraphicsScene *scene, NaivPhysicsSystem &system) :
   QGraphicsView(scene), system(system), scene(scene)
{
    QObject::connect(&timer, SIGNAL(timeout()), this, SLOT(tick()));
    timer.start(100);
}


void PhisicsCanvas::tick()
{
    system.Tick();
    scene->clear();
    for(vector<MassPointGUI*>::iterator i = masspoints.begin();
            i != masspoints.end();
            ++i)
    {
      (*i)->draw(*scene);
    }
}

void PhisicsCanvas::AddMassPoint(MassPointGUI *point)
{
    masspoints.push_back(point);
}