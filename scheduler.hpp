#pragma once
#include "Process.hpp"
#include "Queue.hpp"

class Scheduler{
    queue<_Queue> CPUQueue;    
    int totalTime;
    vector<vector<int>> GantGraphic;
    vector<int> temp;
public:
    Scheduler();
    void add_Queue(_Queue q);
    void execute_Queue();
    void Generate_Graphic();
};
