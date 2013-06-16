/*
 * File:   main.cpp
 * Author: Gabor_2
 *
 * Created on 2013. június 14., 23:19
 */

#include <QtGui>
#include <QtGui/QApplication>
#include "NaivPhysicsSystem.h"
#include "MassPointGUI.h"
#include "PhisicsCanvas.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
     QGraphicsScene scene(-200, -200, 400, 400);

     NaivPhysicsSystem system;
     PhisicsCanvas view(&scene, system);
     view.setRenderHint(QPainter::Antialiasing);
     view.setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
     view.setBackgroundBrush(QColor(255, 255, 255));
     view.setWindowTitle("Physics Engines GUI");
     view.show();
     

     
     ClassicMassPoint<Coordinate2D> point(Coordinate2D(0,0), Velocity<Coordinate2D>(Coordinate2D(1,1),1), 1000);
     
     system.AddMassPoint(&point);
     
     MassPointGUI point_gui(point);
     view.AddMassPoint(&point_gui);
     

    //point_gui.draw(scene);


    return app.exec();
}
