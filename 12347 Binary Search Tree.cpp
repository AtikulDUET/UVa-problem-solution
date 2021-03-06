#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
struct Node* root =  NULL;

void insert(int value){
    struct Node* temp = (struct Node*)malloc(sizeof(Node));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    if(root==NULL)
        root = temp;
    else{
        struct Node* t = root;
        while(1){
            if(temp->data <= t->data){
                if(t->left==NULL){
                    t->left = temp;
                    break;
                }
                else
                    t = t->left;
            }
            else{
                if(t->right==NULL){
                    t->right = temp;
                    break;
                }
                else
                    t = t->right;
            }
        }
    }
}
void print(struct Node* r){
    if(r==NULL)
        return;
    print(r->left);
    print(r->right);
    cout<<r->data<<endl;
}

int main()
{
    int n;
    while(scanf("%d",&n)==1){
        insert(n);
    }
    print(root);
    return 0;
}

