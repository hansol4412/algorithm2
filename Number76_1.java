package algorithm;
import java.util.Scanner;
public class Number76_1 {

	public static void main(String[] args) {
		//76_1. 이항계수
		/*이항계수는 N계의 원소를 가지는 집합에서 R개의 원소를 뽑아 부분집합을 만드는 경우의 수
		  공식은 nCr로 표현한다. */
		//for 반복문 사용
		Scanner stdIn = new Scanner(System.in);
		System.out.print("N을 입력하세요:");
		int n = stdIn.nextInt();
		System.out.print("R을 입력하세요:");
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
