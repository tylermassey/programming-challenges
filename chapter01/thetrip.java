//the trip
import java.util.*;

public class thetrip {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		while(s.hasNext()) {
			double total = 0;
			int testcases = s.nextInt();
			if (testcases == 0) break;
			double[] amounts = new double[testcases];

			for(int i = 0; i < testcases; i++) {
				double a = s.nextDouble();
				total += a;
				amounts[i] = a;
			}

			double average = total/testcases;
			double over = 0;
			double under = 0;
			double floor = Math.floor(average*100)/100;
			double ceiling = Math.ceil(average*100)/100;

			for(int i = 0; i < testcases; i++) {
				double cost = amounts[i];
				if(cost > ceiling)
					under += cost - ceiling;
				else if(cost < floor)
					over += floor - cost;
			}

			System.out.printf("$%.2f\n",Math.max(over,under));
		}
	}
}
