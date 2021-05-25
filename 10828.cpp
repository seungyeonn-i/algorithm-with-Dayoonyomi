#include <iostream>
#include <stack>

using namespace std;


int main(){
    stack<int>q;

    int n;
    scanf("%d",&n);
    getchar();

    string str;
    int data;

    for(int i=0;i<n;i++){
        cin >> str;
        if(str == "push"){
            cin >> data;
            q.push(data);
        }

        else if(str == "pop"){
            if(!q.size()) printf("-1\n");
            else{
                printf("%d\n",q.top());
                q.pop();
            }
        }
        else if(str == "size"){
            printf("%d\n",(int)q.size());
        }
        else if(str == "empty"){
            printf("%d\n",q.empty());
        }
        else if(str == "top"){
            if(!q.size()) printf("-1\n");

            else printf("%d\n",q.top());
        }
        // else if(str == "back"){
        //     if(q.size() == 0) printf("-1\n");
        //     printf("%d\n",q.back());
        // }
    }

    return 0;
}