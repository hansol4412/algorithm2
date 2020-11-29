#include <stdio.h>
using namespace std;
int main() { 
	//76_1. 이항계수
	/*이항계수는 N계의 원소를 가지는 집합에서 R개의 원소를 뽑아 부분집합을 만드는 경우의 수
	  공식은 nCr로 표현한다. */
	//for문 사용 
	  int n; 
	  printf("n을 입력하시오: \n");
	  scanf("%d", &n);
	  int r; 
	  printf("r을 입력하시오: \n");
	  scanf("%d", &r);
	  
	  int ja=1;
	  int mo=1;
	  int N =n;
	  int R =r;
	  
	  for(int i = 1; i<=r; i++){
	  	ja *= N;
	  	N--;
	  	mo *= R;
	  	R--;
	  }
	  //printf("%d \n",ja);
	  //printf("%d \n",mo);
	  printf("%dC%d = %d\n",n,r,ja/mo);
	  
	   
	 
}
