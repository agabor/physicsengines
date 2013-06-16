/* 
 * File:   PhisicsSystem.h
 * Author: Gabor_2
 *
 * Created on 2013. június 14., 20:50
 */

#ifndef PHISICSSYSTEM_H
#define	PHISICSSYSTEM_H

#include <vector>
#include "BaseTypes.h"
#include "MassPoint.h"

template<class Coordinate>
class PhysicsSystem
{
public:
    virtual double ElapsedTime() const = 0;
    virtual std::vector<MassPoint<Coordinate>*> GetMassPoints() const = 0;
    virtual void Tick() = 0;
    virtual void SetTickTime(double sec) = 0;
};

#endif	/* PHISICSSYSTEM_H */

