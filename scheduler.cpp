#include "scheduler.hpp"

Scheduler::Scheduler(){
    this->totalTime = 0;
}
void Scheduler::add_Queue(_Queue q){
    (this->CPUQueue).push(q);
}

/*void Scheduler::Generate_Graphic(){
    while(totalTime>=0){
        if(CPUQueue.front().size() != 0){
                    
        (QRR10.list.front()).execute(1);//aqui eu diminuo do processo o tempo passado

        if((QRR10.list.front()).get_RemaingTime()==0){//ele acabou
            if(QRR10.list.front().get_nIO()==0){//e nao faz mais I/O
                QRR10.list.front().set_currenteState(Terminated);
            }
            else{
                QRR10.list.front().set_currenteState(Waiting);
                //add lista E/S QRR10.list.front()
            }
            QRR10.list.erase(QRR10.list.begin());
            t=0;
        }
        }
    }
}*/