/* 
 * File:   Distance.h
 * Author: Gabor_2
 *
 * Created on 2013. június 16., 12:44
 */

#ifndef DISTANCE_H
#define	DISTANCE_H

#include "Metric.h"
#include "Time.h"

class Speed;

class Distance : public Metric<'d'>
{
public:
    Distance(double value) : Metric<'d'>(value){}
    Distance(const Distance &other) : Metric<'d'>(other){}
    inline Speed operator/(const Time &time)  const;
    inline Distance operator*(double mul) const;
    inline Distance operator+(const Distance &other) const;
};

const Distance mili_meter(0.001);
const Distance meter(1.0);
const Distance kilometer(1000.0);

#endif	/* DISTANCE_H */

