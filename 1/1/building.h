#ifndef BUILDING_H
#define BUILDING_H

#include <data.h>
#include <judge.h>
#include <add1.h>
#include <prime.h>

#include <iostream>
using namespace std;



class Building
{
    public:
        Building();
        void run();
        Data getData(){return data;}
    private:
        Judge judge;
        Data data;
        Add1 add1;
        Prime prime;
};

#endif // BUILDING_H
