 #include <stdio.h>
using namespace std;
int DFS(int n, int r){
	if(n==r || r==0) return 1;
	else return DFS(n-1, r) + DFS(n-1,r-1);
	
}
int main() { 
	//76_2. ���װ��
	/*���װ���� N���� ���Ҹ� ������ ���տ��� R���� ���Ҹ� �̾� �κ������� ����� ����� ��
	  ������ nCr�� ǥ���Ѵ�. */
	// ����Լ� ��� 
	  
	  int n; 
	  printf("n�� �Է��Ͻÿ�: \n");
	  scanf("%d", &n);
	  int r; 
	  printf("r�� �Է��Ͻÿ�: \n");
	  scanf("%d", &r);
	  printf("%dC%d = %d\n",n,r,DFS(n,r));
	  
	   
	 
}
