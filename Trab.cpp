#include <iostream>
#include <vector>
#include "classes.h"
using namespace std;


int main (){
//testes
Processo p1(1, 0, 20);
Processo p2(2, 0, 5);
Processo p3(3, 0, 40);
QueueRoundRobin QRR10(10);
QueueRoundRobin QRR15(15);
Grafico_de_Gant resposta;
int t=0;



QRR10.add_QueueRoundRobin(p1);
QRR10.add_QueueRoundRobin(p2);
QRR10.add_QueueRoundRobin(p3);
//fim dos testes

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

}