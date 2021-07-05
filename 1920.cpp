//그래 어째 문제가 쉽더라 절대 아니쥬 
//이진탐색은 데이터가 정렬되어있어야함
//근데 또 그 정렬을 하는 과정중 퀵소트가 시간복잡도가 작음
//또 마침 c에 내장되어있음 퀵소트 

//do while문이 뭐냐면 ㅎㅎ 공부해올게 ~ 
//우리 노션으로 바꾸자 ! 


#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int*)a > *(int*)b ? 1 : (*(int*)a < *(int*)b ? -1 : 0);
}

int binarySearch(int *arr1,int a,int n){ //썅 재영이한테 배운게 없어

    int pl = 0;
    int pr = n-1;
    int pc;

    do{
        pc = (pl+pr)/2;
        if(arr1[pc] == a)
            return 1;
        else if(arr1[pc] < a)
            pl = pc+1;
        else
            pr = pc -1;
    }while(pl <= pr);

    return 0;
}

            



int main(){

    int n,m;
    scanf("%d",&n);
    int *arr1 = (int *)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    

    scanf("%d",&m);

    int *arr2 = (int *)malloc(m*sizeof(int));

     for(int i=0;i<m;i++)
        scanf("%d",&arr2[i]);

    qsort(arr1,n,sizeof(int),cmp);

    for(int i=0;i<m;i++){
        printf("%d\n",binarySearch(arr1,arr2[i],n));
    }

    return 0;

    

}