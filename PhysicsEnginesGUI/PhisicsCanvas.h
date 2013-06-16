/* 
 * File:   PhisicsCanvas.h
 * Author: Gabor_2
 *
 * Created on 2013. június 15., 15:26
 */

#ifndef PHISICSCANVAS_H
#define	PHISICSCANVAS_H

#include <QtGUI>
#include "MassPointGUI.h"
#include <vector>
#include "NaivPhysicsSystem.h"

class PhisicsCanvas : public QGraphicsView {
    Q_OBJECT
public:
    PhisicsCanvas(QGraphicsScene *scene, NaivPhysicsSystem &system);
    void AddMassPoint(MassPointGUI *point);
public slots:
    void tick();
private:
    QGraphicsScene *scene;
    std::vector<MassPointGUI*> masspoints;
    QTimer timer;
    NaivPhysicsSystem &system;
};

#endif	/* PHISICSCANVAS_H */

