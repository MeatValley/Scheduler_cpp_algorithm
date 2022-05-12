#pragma once
#include "Process.cpp"
#include <queue>

class _Queue{
public:
    queue<Process> processQueue;
    int execute (int timeExecuted);//retorna quanto o tempo q tirou do processo
    void add_Queue(Process p);
    void print_Queue();
    int size();
};


class RoundRobin:public _Queue {
    int quantum;
public:
    RoundRobin(int q);
};

/*
class FCFS:Queue{
public:


};*/