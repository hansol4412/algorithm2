#include <stdio.h>
using namespace std;
int main() { 
	//76_1. ���װ��
	/*���װ���� N���� ���Ҹ� ������ ���տ��� R���� ���Ҹ� �̾� �κ������� ����� ����� ��
	  ������ nCr�� ǥ���Ѵ�. */
	//for�� ��� 
	  int n; 
	  printf("n�� �Է��Ͻÿ�: \n");
	  scanf("%d", &n);
	  int r; 
	  printf("r�� �Է��Ͻÿ�: \n");
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
