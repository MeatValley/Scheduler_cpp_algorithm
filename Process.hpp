#pragma once
#include <iostream>
#include "enums.hpp"

using namespace std;

class Process
{
private:
    int pID;
    int nIO;
    int tBurstDefault;
    int RemainingTime;
    int currentState;
public:
    Process(int pId, int nIO, int t);
    int get_pID();
    int get_nIO();
    int get_RemaingTime();
    void execute(int timeExecuted);
    void set_currenteState(int currentetState);
};
