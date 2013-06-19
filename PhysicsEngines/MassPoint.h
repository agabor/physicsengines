/* 
 * File:   MassPoint.h
 * Author: Gabor_2
 *
 * Created on 2013. június 14., 20:12
 */

#ifndef MASSPOINT_H
#define	MASSPOINT_H

#include "BaseTypes.h"
template<class Coordinate>
class MassPoint
{
public:
    
    virtual double Mass(MassPoint<Coordinate> *point = 0) = 0;
    
    virtual Coordinate Position(MassPoint<Coordinate> *point = 0) = 0;
    
    virtual Velocity<Coordinate> velocity(MassPoint<Coordinate> *point = 0) = 0;
    
};


#endif	/* BODY_H */

