/* 
 * File:   NaivPhysicsSystem.cpp
 * Author: Gabor_2
 * 
 * Created on 2013. június 15., 12:17
 */

#include "NaivPhysicsSystem.h"

using namespace std;

NaivPhysicsSystem::NaivPhysicsSystem() {
    tick_time = 0.1;
    elapsed_time = 0.0;
}


double NaivPhysicsSystem::ElapsedTime() const
{
    return elapsed_time;
}

vector<MassPoint<Coordinate2D>*> NaivPhysicsSystem::GetMassPoints() const
{
    vector<MassPoint<Coordinate2D>*> result;
    for(int i = 0; i < mass_points.size(); ++i)
        result.push_back(mass_points[i]);
    return result;
}

void NaivPhysicsSystem::Tick()
{
    elapsed_time += tick_time;
    for(vector<ClassicMassPoint<Coordinate2D>*>::iterator i = mass_points.begin();
            i != mass_points.end();
            ++i)
    {
        Velocity<Coordinate2D> v = (*i)->velocity();
        (*i)->Push(v.c * (1.0 / v.delta_time));
    }
}

void NaivPhysicsSystem::SetTickTime(double sec)
{
    tick_time = sec;
}

void NaivPhysicsSystem::AddMassPoint(ClassicMassPoint<Coordinate2D> *point)
{
    mass_points.push_back(point);
}