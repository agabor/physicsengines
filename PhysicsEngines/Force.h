/* 
 * File:   Force.h
 * Author: Gabor_2
 *
 * Created on 2013. június 16., 11:38
 */

#ifndef FORCE_H
#define	FORCE_H


class Speed
{
public:
    Speed(double meter, double sec)
    {
        this->meter = meter;
        this->sec = sec;
    }
    double meter;
    double sec;
};

class Acceleration
{
public:
    Speed speed;
    double sec;
};
class Force
{
    double mass;
    Acceleration acc;
};

#endif	/* FORCE_H */

