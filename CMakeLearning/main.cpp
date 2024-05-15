#include<iostream>
#include "lib.h"
#include "macro.h"
using namespace std;

int main()
{
    #ifdef ECALL_ENABLE
    cout<<"hello world. good morning"<<COUNT<<endl;
    #else
    show();
    cout<<"ECALL_STATUS "<<ECALL_STATUS<<"  ECALL_RUNNING_VARIANT "<<ECALL_RUNNING_VARIANT<<endl;
    #endif
    return 0;
}