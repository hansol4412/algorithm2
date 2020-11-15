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
		
		// ������ �� �ð����� �������� �����ϵ��� �����ϴ� ���� 
		bool operator<(const Data &b)const{
			return time > b.time;
		}
	};
	
int main() { 
// 75. �ִ� ���� ������
/* ������ �����ڰ� N���� ������� ���� ��û�� �ؿԴ�. �� ����� D�� �ȿ� �ͼ� ������ ���ָ� M���� �����Ḧ �ش�.
	D�� M�� �������� �ִ� ������ ���� �� �ִ� �������� ¥���Ѵ�. �� ������ �Ϸ翡 �ϳ����� �� �� �ִ�.
*/ 
// ����ü ��� 
	
	int n;
	printf("������ �Ƿ��� ����� ���� �Է��Ͻÿ�:\n");
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
	int j=0; // j�� for�� �ȿ��� �ʱ�ȭ �ϸ�  for�� i �� �ٽ� �������� j�� �ٽ� 0���� �ʱ�ȭ 
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
	printf("���� ������ �ִ�� %d�Դϴ�. \n",sum);
	return 0;
}
