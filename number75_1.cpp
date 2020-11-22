 #include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm> 
#define money first
#define time second
using namespace std;
int main() { 
// 75. 최대 수입 스케줄
/* 유명한 강연자가 N개의 기업에서 강연 요청을 해왔다. 각 기업은 D일 안에 와서 강연을 해주면 M원의 강연료를 준다.
	D와 M을 바탕으로 최대 수입을 받을 수 있는 스케줄을 짜야한다. 단 강연은 하루에 하나씩만 할 수 있다.
*/ 
// pair 사용 
	
	int n;
	printf("강연을 의뢰한 기업의 수를 입력하시오:\n");
	scanf("%d", &n);
	vector<pair<int,int> > T;
	vector<pair<int,int> > F;
	priority_queue<int> pq;
	int a;
	int b;
	int max=0;
	for(int i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		T.push_back(make_pair(a,b));
		if(max<b) max=b;
	}
	
	for(int i=max; i>=1; i--){
		for(int j=0; j<n; j++){
			if(T[j].time == i){
				F.push_back(T[j]);
			}
		}
	}
	
	
	
		
	int j=0;
	int sum=0;
	for(int i=max; i>=1; i--){	
		for(; j<n; j++){
			if(F[j].time<i) break;			
			else pq.push(F[j].money);
		}
		if(!pq.empty()){
			sum+=pq.top();
			pq.pop();
		}
	}
	printf("강의 수입의 최대는 %d입니다. \n",sum);
	return 0;
}
