#ifndef _BTREE_H_
#define _BTREE_H_


class btree
{
    private:
        int nval;
        class btree *left;
        class btree *right;

    public:
        int getVal() { return nval;}
        void setVal(int _nval) { nval = _nval;}
        bool hasLeft() { return (left==NULL)?false:true;}      
        bool hasRight() { return (right==NULL)?false:true;}      
        btree* getLeft() { return left; }
        btree* getRight() { return right; }

        bool insert(btree* head, int nval);
        bool remove(btree* head, int nval);
        bool remove(btree* head, btree *n);

        btree();
        btree(int _nval);
};
#endif
