package algorithm;
import java.util.Scanner;
public class Number76_1 {

	public static void main(String[] args) {
		//76_1. ���װ��
		/*���װ���� N���� ���Ҹ� ������ ���տ��� R���� ���Ҹ� �̾� �κ������� ����� ����� ��
		  ������ nCr�� ǥ���Ѵ�. */
		//for �ݺ��� ���
		Scanner stdIn = new Scanner(System.in);
		System.out.print("N�� �Է��ϼ���:");
		int n = stdIn.nextInt();
		System.out.print("R�� �Է��ϼ���:");
		int r = stdIn.nextInt();
		
		int ja =1;
		int mo =1;
		int n1 = n;
		int r1 = r;
		
		for(int i =1; i<=r; i++) {
			ja *= n1;
			n1--;
			mo *= r1;
			r1--;
		}
		System.out.println(n+"C"+r+" = "+ ja/mo);
	}
}
