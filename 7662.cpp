//D 1 최댓값 삭제
//D -1 최솟값 삭제

#include <stdio.h>
#include <iostream>
#include <set>

using namespace std;

int main(){
    int n,a;
    scanf("%d",&n);
    while(n--){

        multiset<int>arr;
        scanf("%d",&a);

        for(int k=0;k<a;k++){

            char i;
            cin >> i;
            int j;
            cin >> j;

            if(i == 'I')
                arr.insert(j);
            else{
                
                    if(arr.empty())
                        continue;
                    if(!arr.empty() && j == 1){ //max delete
                        auto p = arr.end(); // 끝을 가리킨다
                        p--;//??? 그 앞에꺼 
                        // end는 마지막 원소의 다음을 가리킨다
                        arr.erase(p);
                    }
                    else if(!arr.empty() && j == -1){
                        auto p = arr.begin(); //auto ??
                        // 초기화 값에 따라 알아서 데이터 타입을 정해주는 키워드 
                        arr.erase(p);
                    }
                

            }

        }
        if(arr.empty())
            printf("EMPTY\n");
        else{
            auto end = arr.end();
            end--;
            // cout << *end << ' ' << *arr.begin() << '\n';
            printf("%d %d\n",*end,*arr.begin());
        }
    }
    return 0;

}