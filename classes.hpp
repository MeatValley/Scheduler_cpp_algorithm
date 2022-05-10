#include <iostream>
#include <vector>

using namespace std;

enum processState{
    Ready,// = 0
    Running,
    Waiting,
    Terminated
};
class Processo
{
private:
    int pID;
    int nIO;
    int tBurstDefault;
    int RemainingTime;
    int currentState;
public:
    Processo(int pId, int nIO, int t){
        this->pID = pId;
        this->nIO = nIO;
        this->tBurstDefault = t;
        this->RemainingTime = t;
    }
    int get_pID(){
        return this->pID;
    }
    int get_nIO(){
        return this->nIO;
    }
    int get_RemaingTime(){
        return this->RemainingTime;
    }
    void execute(int exe){
        this->RemainingTime -= exe;
    }
    void set_currenteState(int current){
        this->currentState = current;
    }

};

class QueueRoundRobin{
public:
    int quantum;
    vector<Processo> list;
    QueueRoundRobin(int quantum){
        this->quantum = quantum;
    }
    void add_QueueRoundRobin(Processo p){
        list.push_back(p);
    }
    int size(){
        return this->list.size();
    }

};



class Grafico_de_Gant{
public:
    int total_time;
    vector<vector<int>> answer;
    vector<int> temp;

    Grafico_de_Gant(){
        total_time = 0;
    }

    int was_executed(Processo p, int time){
        temp.push_back(p.get_pID());
        cout<<" aqui eu add no answer o pid "<<p.get_pID()<<endl;
        total_time+=time;
        temp.push_back(this->total_time);
        answer.push_back(temp);
        temp.clear();
        return 1;
    }

    void print(){
        for (int i = 0; i < answer.size(); i++){
                cout << answer[i][0]<<"  ";
        }
        cout<<endl;
        for (int i = 0; i < answer.size(); i++){
                cout << answer[i][1]<<" ";
        }

    }
    

    
};