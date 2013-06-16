/* 
 * File:   Speed.h
 * Author: Gabor_2
 *
 * Created on 2013. június 16., 12:42
 */

#ifndef SPEED_H
#define	SPEED_H

#include "Time.h"
#include "Distance.h"

class Acceleration;

class Speed
{
public:
    Speed(Distance dist, Time time);
    Distance dist;
    Time time;
    
    Acceleration operator/(Time time);
    Speed operator*(double mul);
    Distance operator*(Time time);
};

#endif	/* SPEED_H */

