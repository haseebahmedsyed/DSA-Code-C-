#include <iostream>
using namespace std;


struct BstNodes
{
    int data;
    BstNodes * left;
    BstNodes * right;
};



BstNodes * getnewNode(int data){
    BstNodes *bst = new BstNodes();
    bst->data = data;
    bst->left = NULL;
    bst->right =NULL;
    return bst; 
}

BstNodes * Insert( BstNodes * root ,int data){

    if (root == NULL)
    {
        root = getnewNode(data);
    }

    else if (root->data > data)
    {
        root->left = Insert(root->left , data);   
    }
    else {
        root->right = Insert(root->right , data);
    }
    
    return root;
    
}

void InOrder(BstNodes * root){

    if (root == NULL)
    {
        return;
    }

        
    InOrder(root->left);
    cout<<root->data<<endl;
    InOrder(root->right);
}

void PreOrder(BstNodes * root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<endl;
    PreOrder(root->left);
    PreOrder(root->right);
}    
    

void PostOrder(BstNodes * root){
    if (root==NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<endl;
}    

bool Search(BstNodes * root , int data){
    if (root==NULL)
    {
        return false;
    }
    else if (root->data == data)
    {
        return true;
    }
    else if (root->data>data)
    {
        Search(root->left,data);
    }
    else{
        Search(root->right , data);
    }
    
    
    
}
    







int main(){

    BstNodes * root = NULL;
    // cout<<root<<endl;
    root = Insert(root , 18);
    // cout<<root<<endl;
    root = Insert(root , 17);
    // cout<<root<<endl;
    root = Insert(root , 20);
    // cout<<root<<endl;

    bool check = Search(root , 18);
    if (check==true)
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    

    // InOrder(root);
    // cout<<endl;
    // PreOrder(root);
    // cout<<endl;
    // PostOrder(root);

    return 0;
}