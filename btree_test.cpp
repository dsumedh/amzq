#include "btree.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    btree *head = new btree();
    
    head->insert(10);
    head->insert(20);
    head->insert(30);
    head->insert(5);

    return 0;
}
