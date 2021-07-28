#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <queue>

using namespace std;

int V, E;
vector<pair<int, pair<int, int>>> graph; 
int p[10001]; 
int find(int x){
	if(p[x] == x) return x;
	else return p[x] = find(p[x]);
}

int main(){
	scanf("%d %d", &V, &E);
	
	for(int i=0; i<E; i++){
		int s, e, d;
		scanf("%d %d %d",&s,&e,&d);
		
		graph.push_back({d, {s, e}});
	}
	
	sort(graph.begin(), graph.end());
	
	for(int i=1; i<=V; i++)
		p[i] = i;
	
	int sum = 0; 
	int num = 0; 
	for(int i=0; i<E; i++){
		int weight = graph[i].first;
		int start = graph[i].second.first;
		int end = graph[i].second.second;
		
		int x = find(start);
		int y = find(end);
		
		if(x == y) continue;
		
		if(x < y) p[y] = x;
		else p[x] = y;
		
		sum += weight;
		num++;
		
		if(num == V - 1){
			printf("%d \n", sum);
			break;
		}
	}
}