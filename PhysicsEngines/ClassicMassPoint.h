/* 
 * File:   ClassicMassPoint.h
 * Author: Gabor_2
 *
 * Created on 2013. június 14., 22:55
 */

#ifndef CLASSICMASSPOINT_H
#define	CLASSICMASSPOINT_H

#include "MassPoint.h"

template<class Coordinate>
class ClassicMassPoint : public MassPoint<Coordinate>
{
protected:
    const double mass;
    Coordinate AbsolutePosition;
    Velocity<Coordinate> AbsoluteVelocity;
public:
    ClassicMassPoint(Coordinate coord, Velocity<Coordinate> v, const double mass) :
    mass(mass), AbsolutePosition(coord), AbsoluteVelocity(v) {}

    double Mass(MassPoint<Coordinate> *point = 0) { return mass; }
    
    Coordinate Position(MassPoint<Coordinate> *point = 0)
    {
        if (!point)
            return AbsolutePosition;
        
        return AbsolutePosition - point->Position();
    }
    
    void Push(Coordinate c)
    {
        AbsolutePosition += c;
    }
    
    Velocity<Coordinate> velocity(MassPoint<Coordinate> *point = 0)
    {
        if(!point)
            return AbsoluteVelocity;
        
        return AbsoluteVelocity - point->velocity();
    }
    
};

#endif	/* CLASSICMASSPOINT_H */

