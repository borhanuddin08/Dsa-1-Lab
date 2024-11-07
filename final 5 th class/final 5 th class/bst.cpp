#include<iostream>
using namespace std;
class Treenode
{

public:
    int key;
    Treenode *parent;
    Treenode *right;
    Treenode *left;

};
Treenode *root = NULL;
void indertBST(int v)
{
    Treenode *z = new Treenode();
    z->parent = NULL;
    z->left = NULL;
    z->right = NULL;
    z->key = v;
    Treenode *y = NULL;
    Treenode *x = root;

    while(x!= NULL)
    {
        y = x; //last e x null hibe kin2 y er mddhe last ta thakbe
        if(z->key < x ->key)
        {
            x= x->left;

        }
        else
        {
            x = x->right;
        }
    }


    z->parent = y;

    if(y == NULL)
    {
        root = z; //tree ta empty eita bjhacci,coz y te kicu nai tai z eo null
    }
    else if (z ->key < y->key )//comaparison er condition eita jk insert krle left e jabe nki right e jbe
    {
        y->left = z;
    }
    else
    {
        y->right = z;
    }
}

void preorder(Treenode *x)
{
    if(x!=NULL)
    {

        printf("%d ", x->key);
        preorder(x->left);
        preorder(x->right);

    }


}

void inorder(Treenode *x)
{
    if(x!=NULL)
    {


        preorder(x->left);
        printf("%d ", x->key);
        preorder(x->right);

    }
}

void postorder(Treenode *x)
{
    if(x!=NULL)
    {


        preorder(x->left);
        preorder(x->right);
        printf("%d ", x->key);

    }
}

Treenode *minimum(Treenode *x)
{
    if(x!=NULL)
    {
        while (x->left != NULL)
        {
            x = x->left;
        }
        return x;
    }
}

Treenode *maximum(Treenode *x)
{
    if(x!=NULL)
    {
        while (x->right != NULL)
        {
            x = x->right;
        }
        return x;
    }
}
bool searchin(Treenode *x,int searchkey) // eituku abr krte hbe
{
    if(x!=NULL)
    {
        searchin(x->left,searchkey);
        if(x->key == searchkey)return 1;

        searchin(x->right,searchkey);

        return 0;
    }//eita traverse krte krte choto hoileleft e jbo and then jodi bro hoy taile right e jbo, then search key er sthe compare krbw paici ki na

}







int main ()
{
    indertBST(10);
    indertBST(20);
    indertBST(9);
    indertBST(7);
    indertBST(100);
    indertBST(16);
    indertBST(17);
    indertBST(18);
    indertBST(19);
    indertBST(2);


    cout << "\n------------------"<<"preroderstart"<<endl;
    preorder(root);

    cout << "\n------------------"<<"inorder"<<endl;
    inorder(root);

    cout << "\n------------------"<<"postorder"<<endl;
    postorder(root);

    Treenode * minimumvalue = minimum(root);
    Treenode * maximumvalue = maximum(root);

    cout << "\n\nMinimum value: " << minimumvalue->key << endl;
    cout << "Maximum value: " << maximumvalue->key << endl;
    cout << "\nsearch result: " << searchin(root,19) << endl;




}

