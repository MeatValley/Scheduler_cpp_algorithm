#include "Queue.hpp"

void _Queue::add_Queue(Process p){
    processQueue.push(p);
}

int _Queue::size(){
    return this->processQueue.size();
}

void _Queue::print_Queue(){

}

RoundRobin::RoundRobin(int q){
    this->quantum = q;
}

/*int RoundRobin::execute(int timeExecuted){
    (this->processQueue.front()).execute(t);
    int q;
}*/