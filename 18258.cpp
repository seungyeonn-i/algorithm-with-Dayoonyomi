#include <iostream>
#include <string>
#include <queue>

using namespace std;


int main(){
    queue<int>q;
    cin.tie(0);
	cin.sync_with_stdio(0);
    int n;
    cin >> n;

    string str;
    int data;

    for(int i=0;i<n;i++){
        cin >> str;
        if(str == "push"){
            cin >> data ;
            q.push(data);
        }

        else if(str == "pop"){
            if(q.empty()) printf("-1\n");
            else{
                printf("%d\n",q.front());
                q.pop();
            }
        }
        else if(str == "size"){
            printf("%lu\n",q.size());
        }
        else if(str == "empty"){
            printf("%d\n",q.empty());
        }
        else if(str == "front"){
            if(q.empty()) printf("-1\n");
            else printf("%d\n",q.front());
        }
        else if(str == "back"){
            if(q.empty()) printf("-1\n");
            else printf("%d\n",q.back());
        }
    }
    return 0;
}