package algorithm;
import java.util.Collections;
import java.util.List;
import java.util.LinkedList;
import java.util.ArrayList;
import java.util.PriorityQueue;
import java.util.Scanner;
public class Number75_1 {
	public static void main(String[] args) {
		// 75. �ִ� ���� ������
		/* ������ �����ڰ� N���� ������� ���� ��û�� �ؿԴ�. �� ����� D�� �ȿ� �ͼ� ������ ���ָ� M���� �����Ḧ �ش�.
			D�� M�� �������� �ִ� ������ ���� �� �ִ� �������� ¥���Ѵ�. �� ������ �Ϸ翡 �ϳ����� �� �� �ִ�.
		*/
		//ArrayList���
		
		Scanner stdIn = new Scanner(System.in);
		System.out.println("������ �Ƿ��� ����� ���� �Է��Ͻÿ�:");
		int n = stdIn.nextInt();
		List<ArrayList<Integer>> data = new LinkedList<ArrayList<Integer>>();
		List<ArrayList<Integer>> data2 = new LinkedList<ArrayList<Integer>>();
		PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
		int max=-100;
		
		for(int i=0; i<n; i++) {
			int a = stdIn.nextInt();
			int b = stdIn.nextInt();
			data.add(new ArrayList());
			data.get(i).add(a);
			data.get(i).add(b);
			if(max<b) max = b;
		}
		
		int p=0;
		for(int i=max; i>=1; i--) {
			for(int j=0; j<n ; j++) {
				if(data.get(j).get(1)==i) {
					data2.add(new ArrayList());
					data2.get(p).add(data.get(j).get(0));
					data2.get(p).add(data.get(j).get(1));
					p++;
				}
			}
		}
		
		int j=0;
		int sum=0;
		for(int i = max; i>=1; i--) {
			for(;j<n; j++) {
				if(data2.get(j).get(1)<i) break;
				else pq.offer(data2.get(j).get(0));
			}
			if(!pq.isEmpty()) {
				//System.out.println(pq.peek());
				sum+= pq.peek();
				pq.poll();
			}
		}
		System.out.println("���� ������ �ִ��b"+sum+"�Դϴ�.");
		
	}
}

