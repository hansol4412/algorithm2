package algorithm;

import java.util.Collections;
import java.util.PriorityQueue;
import java.util.Scanner;

public class Number74 {
	public static void main(String[] args) {
		//74. 최소히프  (우선순위 큐)
		/* 최소히프는 완전이진트리로 구현된 자료구조, 부모 노드값이 왼쪽자식와 오른쪽 자식노드의
		   값 보다 작게 트리를 구성. 루트노드의 값이 가장 작은 수가 위치한다.
		   1) 자연수가 입력되면 최소히프에  입력한다.
		   2) 숫자 0이 입력되면 최소 히프에서 최솟값을 꺼내 출력한다.
		   3) -1이 입력되면 프로그램을 종료한다.  
		*/
		 Scanner stdIn = new Scanner(System.in);
		 PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
		 while(true) {
			 int n = stdIn.nextInt();
			 if(n==-1) {
				 System.out.println("프로그램을 종료합니다.");
				 break;
			 }
			 if(n==0) {
				 if(pq.isEmpty()) {
					 System.out.println("-1: 우선순위 큐에 값이 없습니다.");
					 break;
				 }
				 System.out.println("최소 히프 : "+ -(pq.peek())); // '-'붙여 음수로 정렬
				 pq.poll();
			 }
			 else {
				 pq.offer(-n); // '-'붙여 음수로 정렬
			 }
		 }
		 
	}
}
