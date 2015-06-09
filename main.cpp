#include "manyblock.h"
#include <iostream>
using namespace std;

int main()
{
    I_Block i, *ip = &i;
    S_Block s;
    O_Block o;
    T_Block t;
    ip->paint();
    ip = &s;
    ip->paint();
    ip = &o;
    ip->paint();
    ip=&t;
    ip->paint();
    return 0;

}
