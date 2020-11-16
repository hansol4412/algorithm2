package algorithm;
import java.util.Collections;
import java.util.List;
import java.util.LinkedList;
import java.util.PriorityQueue;
import java.util.Scanner;
import algorithm.Data75;
public class Number75 {

	public static void main(String[] args) {
		// 75. 최대 수입 스케줄
		/* 유명한 강연자가 N개의 기업에서 강연 요청을 해왔다. 각 기업은 D일 안에 와서 강연을 해주면 M원의 강연료를 준다.
		   D와 M을 바탕으로 최대 수입을 받을 수 있는 스케줄을 짜야한다. 단 강연은 하루에 하나씩만 할 수 있다.
		 */
		//클래스
		Scanner stdIn = new Scanner(System.in);
		System.out.println("강연을 의뢰한 기업의 수를 입력하시오:");
		int n = stdIn.nextInt();
		List<Data75> data = new LinkedList<Data75>();
		List<Data75> data2 = new LinkedList<Data75>();
		PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
		int max=-100;
		for(int i=0; i<n; i++) {
			int a = stdIn.nextInt();
			int b = stdIn.nextInt();
			data.add(new Data75(a,b));
			if(max<b) max = b;
		}
		//시간을 내림차순으로 정렬
		for(int i=max; i>=1; i--) {
			for(int j=0; j<n ; j++) {
				if(data.get(j).time==i) {
					data2.add(data.get(j));
				}
			}
		}
		
		int j=0;
		int sum=0;
		for(int i = max; i>=1; i--) {
			for(;j<n; j++) {
				if(data2.get(j).time<i) break;
				else pq.offer(data2.get(j).money);
			}
			if(!pq.isEmpty()) {
				//System.out.println(pq.peek());
				sum+= pq.peek();
				pq.poll();
			}
		}
		System.out.println("강의  수입의 최대는 "+sum+"입니다.");
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}

}
