#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int>q;

    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        q.push(i);
    }

    while(1){

        if(q.size() == 1){
            break;
        }
        q.pop();
        int nextInput = q.front();

        q.pop();
        q.push(nextInput);
    }

    cout << q.front() << endl;
}