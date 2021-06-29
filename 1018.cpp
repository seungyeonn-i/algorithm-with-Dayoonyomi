#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string chess[51];


string wb[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string bw[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

int wbcmp(int x,int y){
    int count = 0;

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(chess[x+i][y+j] != wb[i][j])
                count++;
        }
    }

    return count;
}

int bwcmp(int x,int y){
    int count = 0;

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(chess[x+i][y+j] != bw[i][j])
                count++;
        }
    }

    return count;
}


int main(){
    int M,N;
    int MIN = 10000;

    scanf("%d %d",&M,&N);
    

    for(int i=0;i<M;i++){
        cin >> chess[i];
        
    }
    
    int tmp;

    for(int i=0; i+8 <= M;i++){
        for(int j=0; j+8<= N;j++){
            tmp = min(wbcmp(i,j),bwcmp(i,j));
            if(tmp < MIN)
                MIN = tmp;
        }
    }
    cout << MIN;

    return 0;
}