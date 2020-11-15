#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm> 
using namespace std;
	struct Data{
		int money;
		int time;
		
		Data(int a, int b){
			money = a;
			time = b;
		}
		
		// 정렬할 떄 시간으로 내림차순 정렬하도록 설정하는 기준 
		bool operator<(const Data &b)const{
			return time > b.time;
		}
	};
	
int main() { 
// 75. 최대 수입 스케줄
/* 유명한 강연자가 N개의 기업에서 강연 요청을 해왔다. 각 기업은 D일 안에 와서 강연을 해주면 M원의 강연료를 준다.
	D와 M을 바탕으로 최대 수입을 받을 수 있는 스케줄을 짜야한다. 단 강연은 하루에 하나씩만 할 수 있다.
*/ 
// 구조체 사용 
	
	int n;
	printf("강연을 의뢰한 기업의 수를 입력하시오:\n");
	scanf("%d", &n);
	vector<Data> T;
	priority_queue<int> pq;
	int a;
	int b;
	int max=0;
	for(int i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		T.push_back(Data(a, b));
		if(max<b) max=b;
	}
	sort(T.begin(), T.end());	
	int j=0; // j를 for문 안에서 초기화 하면  for문 i 가 다시 돌때마다 j가 다시 0으로 초기화 
	int sum=0;
	for(int i=max; i>=1; i--){	
		for(; j<n; j++){
			printf("%d  ",j);
			if(T[j].time<i) break;			
			else pq.push(T[j].money);
		}
		if(!pq.empty()){
			//printf("%d",pq.top());
			sum+=pq.top();
			pq.pop();
		}
	}
	printf("강의 수입의 최대는 %d입니다. \n",sum);
	return 0;
}
