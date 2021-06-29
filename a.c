#include <stdio.h>
#include <stdlib.h>

int main() {
    int num,kid=0;
    scanf("%d",&num);
    scanf("%d",&kid);
    int *cow = (int *) malloc(sizeof(int) * num*2  );
    int *change =(int *)  malloc(sizeof(int) * kid  );
    int small=1,big=0;
    
    //소의 값
    for(int i=0;i<num;i++){
        scanf("%d",&cow[i]);
    }
    for(int i=0;i<num;i++){
        cow[i+num]=cow[i];
    }


    //바꿀번호
    for(int i=0;i<kid;i++){
        scanf("%d",&change[i]);
    }

    //소의 값 바꾸기
    for(int i=0;i<kid;i++){
        int a=change[i];
        cow[a-1] = cow[a-1]*(-1);
        cow[a-1+num] = cow[a-1+num] * (-1);
       
      
        //소의 합 구하기
        for(int i=0;i<num;i++){
            for(int j=i;j<i+4;j++){
                small*=cow[j];
            }
            big+=small;
            small=1;
        }
    
        printf("%d\n",big);
                    big = 0;

    }


    
    free(cow);
    free(change);
}