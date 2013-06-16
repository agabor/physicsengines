/* 
 * File:   MassPointGUI.cpp
 * Author: Gabor_2
 * 
 * Created on 2013. június 15., 14:40
 */

#include "MassPointGUI.h"

MassPointGUI::MassPointGUI(MassPoint<Coordinate2D> &masspoint)
: masspoint(masspoint)
{
}

void MassPointGUI::draw(QGraphicsScene& scene)
{
    qreal x = masspoint.Position().x;
    qreal y = masspoint.Position().y;
    scene.addEllipse(x, y, 5, 5, QPen(QColor(0, 0, 255)));
}