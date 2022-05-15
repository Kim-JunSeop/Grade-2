#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

BinarySearchTree bt;

NODE_TREE *BinarySearchTree::searchBST(NODE_TREE *node, element x)
{

    NODE_TREE *p = root;
    NODE_TREE *q = NULL;
    

    if(node==NULL)
        return NULL;

    else if(x == p->key)   
        return p;

    else if(x < p->key)
        return searchBST(p->left,x);

    else
        searchBST(p->right,x);

    return 0;             
}
void BinarySearchTree::insertNode(element x)
{
    NODE_TREE *p = root;
    NODE_TREE *q = NULL;

    while (p != NULL)
    {
        if (x == p->key)
            printf("이미 같은 키가 있습니다");
            return;
        q=p;

        if (x<p->key)
            p=p->left;
        else
            p=p->right;    
    }
   NODE_TREE *nodeNkey = makeNode(x,NULL,NULL);
 
    if(isEmpty())
        setRoot(nodeNkey);
    
    else if(x < q->key)
        q->left = nodeNkey;
   
    else
        q->right = nodeNkey;    

}

