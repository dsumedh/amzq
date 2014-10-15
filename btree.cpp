//SUMEDH: binary SEARCH tree
//
#include <iostream>
#include "btree.h"

using namespace std;
/*
 * Implement member functions
 */

btree::btree()
{
    nval=-1;
    left=NULL;
    right=NULL;
}

btree::btree(int _nval)
{
    nval=_nval;
    left=NULL;
    right=NULL;
}

bool btree::insert(btree* head, int nval)
{
    if (head==NULL) {
        head = new btree(nval);
        return true;
    } else if (head->getVal() < nval) {
        return insert(head->getRight(), nval);
    } else if (head->getVal() > nval) {
        return insert(head->getLeft(), nval);
    } else {
        cout << "values not unique!";
        return false;
    }
}
