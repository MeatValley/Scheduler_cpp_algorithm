
#include "Process.hpp"

Process::Process(int pId, int nIO, int t){
        this->pID = pId;
        this->nIO = nIO;
        this->tBurstDefault = t;
        this->RemainingTime = t;
}

int Process::get_pID(){
    return this->pID;
}

int Process::get_nIO(){
    return this->nIO;
}
int Process::get_RemaingTime(){
    return this->RemainingTime;
}
void Process::execute(int time_executed){
    this->RemainingTime -= time_executed;
}
void Process::set_currenteState(int currentState){
    this->currentState = currentState;
}