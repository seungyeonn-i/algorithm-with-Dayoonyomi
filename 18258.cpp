#include <iostream>
#include <queue>

using namespace std;


int main(){
    queue<int>q;

    long long n,data;
    cin >> n;

    string str;

    for(int i=0;i<n;i++){
        cin >> str;
        if(str == "push"){
            cin >> data;
            q.push(data);
        }

        else if(str == "pop"){
            if(!q.size()) printf("-1\n");
            else{
                cout << q.front();
                q.pop();
            }
        }
        else if(str == "size"){
            cout << q.size();
        }
        else if(str == "empty"){
            cout << q.empty();
        }
        else if(str == "front"){
            if(!q.size()) cout << -1;

            else cout << q.front();
        }
        else if(str == "back"){
            if(q.size() == 0) cout << -1;
            cout << q.back();
        }
        cout << "\n";
    }

    return 0;
}



