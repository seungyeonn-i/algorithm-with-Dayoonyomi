#include <stdio.h>
#include <algorithm>

int main(void){
    int n;
    scanf("%d",&n);
    int input[10001] = {0};
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        input[a] += 1;
    }

    for(int i=1;i<=10000;i++){
        for(int j=0;j<input[i];j++){
            printf("%d\n",i);
        }
    }

    
}