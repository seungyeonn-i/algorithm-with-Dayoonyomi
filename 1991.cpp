#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<char, pair<char,char> > tree;
//map<key : value>
//pair은 데이터를 쌍으로 이룸
//pair에 데이터 넣으려면 make_pair
//pair 접근하려면 first, second


void preorder(char);
void inorder(char);
void postorder(char);

int main(){
    int n;
    scanf("%d",&n);
    char node,left,right;

    for(int i=0;i<n;i++){
        getchar();

        scanf("%c %c %c",&node,&left,&right);

        tree[node] = make_pair(left,right);
    }

  
    preorder('A');
    printf("\n");
    inorder('A');
    printf("\n");
    postorder('A');
    printf("\n");
    
}
//전위순회, 중위순회, 후위순회에서는 print의 위치가 중요함

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
