
#include "scheduler.cpp"

using namespace std;

int main (){
    cout<<"hi"<<endl;
    
//testes
//fazer um cin dps
Process p1(1, 0, 20);
Process p2(2, 0, 5);
Process p3(3, 0, 40);

RoundRobin q0(10);
RoundRobin q1(15);
q0.add_Queue(p1);


Scheduler s;
s.add_Queue(q0);
s.add_Queue(q1);
q0.print_Queue();
cout<<"pid do processo 1 "<<q0.processQueue.front().get_pID()<<endl;




//fim dos testes
/*
while (t!=-1){
    if (QRR10.size()!=0){
        
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
        //n resolve se tem um q acaba antes do quantum
        if (t % QRR10.quantum ==0){//aqui eh se acabou o quantum
        //so entra aqui se nao acabou
            resposta.was_executed(QRR10.list.front(), QRR10.quantum);//aqui eu adiciono o processo no grafico
            QRR15.list.push_back(QRR10.list.front());
            QRR10.list.erase(QRR10.list.begin());
        }
    }
    else{
        if(QRR15.size()!=0){


            QRR15.list.erase(QRR10.list.begin());
        }

    }
   t++; 
}
resposta.print();
*/
}