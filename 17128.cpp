#include <stdio.h>
#include <stdlib.h>

int sum(int *A ,int i,int N);


int main(){

    int N,Q;

    scanf("%d %d",&N,&Q);
    
    int *A =  (int *)malloc(sizeof(int)*N);
    int *Qarr =  (int *) malloc(sizeof(int)*Q);
    

    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }

    for(int i=0;i<Q;i++){
        scanf("%d",&Qarr[i]);
    }

    for(int i=0;i<Q;i++){
        int S = 0;
        
        int tmp = Qarr[i];
        A[tmp-1] = A[tmp-1] * (-1);
    
        for(int i=0;i<N;i++){
            S += sum(A,i,N);
        }
        printf("%d\n",S);

    }

}

int sum(int *A,int i,int N){   //4개 곱한거
    int S=1;

    for(int j=0;j<4;j++){   //4개 순회
        if( i+j >= N)  {
            j = 4-j+1;
            i = 0;
            for(int i=0;i<j-1;i++){
                S = S * A[i];
            }
            break;
        }
        S = S * A[i+j];
    }

    return S;
}

