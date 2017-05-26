/*  Copyright 2017 George Le

*/
#ifndef HOSTILE_H
#define HOSTILE_H

#include <string>
#include "primary_stats.h"
#include "actions.h"

class Hostile
{
    public:
    Hostile() : hostile_name("Test Dummy"), hostile_stats(0, 0, 0, 0, 0, 1, 10, 10, 0, 1) {}    
    
    virtual void attack();
    private:
    std::string hostile_name;
    Primary_stats hostile_stats;
    Actions potiential_actions;
};

#endif