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

class Speed : public Metric<'v'>
{
public:
    inline Acceleration operator/(const Time &time);
    inline Distance operator*(const Time &time);
};

const Speed meter_per_sec(meter/sec);
const Speed kilometer_per_hour(kilometer/hour);
#endif	/* SPEED_H */

