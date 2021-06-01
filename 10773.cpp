#include <stdio.h>
#include <stack>
using namespace std;

int main(){
    stack<int>q;

    int n,input,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&input);

        if(input == 0){
            q.pop();
        }
        else q.push(input);    

    }



    while(!q.empty()){
        sum += q.top();
        q.pop();
        // q.pop();
    }
    printf("%d\n",sum);

    return 0;

}