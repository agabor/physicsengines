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
    inline Speed operator/(Time time);
};

const Distance mili_meter(0.001);
const Distance meter(1);
const Distance kilometer(1000);

#endif	/* DISTANCE_H */

