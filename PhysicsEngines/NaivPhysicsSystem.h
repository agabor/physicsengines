/* 
 * File:   NaivPhysicsSystem.h
 * Author: Gabor_2
 *
 * Created on 2013. június 15., 12:17
 */

#ifndef NAIVPHYSICSSYSTEM_H
#define	NAIVPHYSICSSYSTEM_H

#include "PhysicsSystem.h"
#include "ClassicMassPoint.h"

class NaivPhysicsSystem : public PhysicsSystem<Coordinate2D>{
public:
    NaivPhysicsSystem();
    virtual double ElapsedTime() const;
    virtual std::vector<MassPoint<Coordinate2D>*> GetMassPoints() const;
    virtual void Tick();
    virtual void SetTickTime(double sec);
    void AddMassPoint(ClassicMassPoint<Coordinate2D> *point);
protected:
    double elapsed_time;
    double tick_time;
    std::vector<ClassicMassPoint<Coordinate2D>*> mass_points;
};

#endif	/* NAIVPHISICSSYSTEM_H */

