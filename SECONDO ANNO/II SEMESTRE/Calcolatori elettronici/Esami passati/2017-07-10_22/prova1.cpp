// prova1.cpp
#include "cc.h"
int main()
{   st1 s1 = { 1,2,3,4 };
    st2 s2 = { 5,6,7,8 };
    char a1[4] = { 11,12,13,14 };
    long a2[4] = {15,16,17,18 };
    cl cla1(s1); cla1.stampa();
    cl cla2(s1, a2); cla2.stampa();
    cla1 = cla2.elab1(a1, s2); cla1.stampa();
    //system("pause");
}
    
