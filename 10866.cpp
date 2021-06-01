#include <stdio.h>
#include <iostream>
#include <deque>

using namespace std;

int main(void){
    deque<int>d;

    int n;
    string str;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        cin >> str;
        int intinput;
        if(str == "push_back" || str == "push_front"){
            // getchar();
            scanf("%d",&intinput);

            if(str == "push_back"){
                d.push_back(intinput);
            }
            else{
                d.push_front(intinput);
            }
        }
        else if(str == "front"){
            if(!d.empty())  printf("%d\n",d.front());
            else    printf("-1\n");

        }
        else if(str == "back"){
            if(!d.empty())   printf("%d\n",d.back());
            else    printf("-1\n");
        }
        else if(str == "empty"){
            printf("%d\n",d.empty());
        }
        else if(str == "pop_front"){
            if(!d.empty()) {
                printf("%d\n", d.front());
                d.pop_front();
            }
            else    printf("-1\n");
        }
        else if(str == "pop_back"){
            if(!d.empty()) {
                printf("%d\n",d.back());
                d.pop_back();
            }
            else    printf("-1\n");
        }
        else if(str == "size"){
            if(!d.empty())  printf("%lu\n",d.size());
            else    printf("0\n");
        }

    }


}