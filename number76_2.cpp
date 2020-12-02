 #include <stdio.h>
using namespace std;
int DFS(int n, int r){
	if(n==r || r==0) return 1;
	else return DFS(n-1, r) + DFS(n-1,r-1);
	
}
int main() { 
	//76_2. 이항계수
	/*이항계수는 N계의 원소를 가지는 집합에서 R개의 원소를 뽑아 부분집합을 만드는 경우의 수
	  공식은 nCr로 표현한다. */
	// 재귀함수 사용 
	  
	  int n; 
	  printf("n을 입력하시오: \n");
	  scanf("%d", &n);
	  int r; 
	  printf("r을 입력하시오: \n");
	  scanf("%d", &r);
	  printf("%dC%d = %d\n",n,r,DFS(n,r));
	  
	   
	 
}
