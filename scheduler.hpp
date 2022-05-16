#pragma once
#include "Process.hpp"
#include "Queue.hpp"

class Scheduler{
    std::queue<_Queue> CPUQueue;    
    int totalTime;
    std::vector<vector<int>> GantGraphic;
    std::vector<int> temp;
public:
    Scheduler();
    void add_Queue(_Queue q);
    void execute_Queue();
    void Generate_Graphic();
};
