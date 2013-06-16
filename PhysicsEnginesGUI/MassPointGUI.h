/* 
 * File:   MassPointGUI.h
 * Author: Gabor_2
 *
 * Created on 2013. június 15., 14:40
 */

#ifndef MASSPOINTGUI_H
#define	MASSPOINTGUI_H

#include <QtGui>
#include "BaseTypes.h"
#include "MassPoint.h"

class MassPointGUI {
public:
    MassPointGUI(MassPoint<Coordinate2D> &masspoint);
    void draw(QGraphicsScene &scene);
private:
    MassPoint<Coordinate2D> &masspoint;
};

#endif	/* MASSPOINTGUI_H */

