/* 
 * File:   Force.h
 * Author: Gabor_2
 *
 * Created on 2013. június 16., 11:38
 */

#ifndef FORCE_H
#define	FORCE_H



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

