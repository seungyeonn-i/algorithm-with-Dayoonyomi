#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<char, pair<char,char> > tree;

void preorder(char);
void inorder(char);
void postorder(char);

int main(){
    int n;
    scanf("%d",&n);
            char node,left,right;
    getchar();

    for(int i=0;i<n;i++){
        scanf("%c %c %c",&node,&left,&right);
        getchar();
//        getchar();

        tree[node] = make_pair(left,right);
    }

  
    preorder('A');
    printf("\n");
    inorder('A');
    printf("\n");
    postorder('A');
    printf("\n");
    
}

void preorder(char node){
    printf("%c",node);

    if(tree[node].first != '.')
        preorder(tree[node].first);

    if(tree[node].second != '.')
        preorder(tree[node].second);
    
}

void inorder(char node){
    if(tree[node].first != '.')
        inorder(tree[node].first);
    
    printf("%c",node);

    if(tree[node].second != '.')
        inorder(tree[node].second);

}

void postorder(char node){
    if(tree[node].first != '.')
        postorder(tree[node].first);
    if(tree[node].second != '.')
        postorder(tree[node].second);

    printf("%c",node);
}
