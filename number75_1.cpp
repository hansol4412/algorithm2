 #include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm> 
#define money first
#define time second
using namespace std;
int main() { 
// 75. �ִ� ���� ������
/* ������ �����ڰ� N���� ������� ���� ��û�� �ؿԴ�. �� ����� D�� �ȿ� �ͼ� ������ ���ָ� M���� �����Ḧ �ش�.
	D�� M�� �������� �ִ� ������ ���� �� �ִ� �������� ¥���Ѵ�. �� ������ �Ϸ翡 �ϳ����� �� �� �ִ�.
*/ 
// pair ��� 
	
	int n;
	printf("������ �Ƿ��� ����� ���� �Է��Ͻÿ�:\n");
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
	printf("���� ������ �ִ�� %d�Դϴ�. \n",sum);
	return 0;
}
