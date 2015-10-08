// how many fibs?
import java.util.*;
import java.math.BigInteger;

public class howmanyfibs {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		while(s.hasNext()) {
			String a = s.next(), b = s.next();
			if(a.equals("0") && b.equals("0")) break;
			ArrayList<BigInteger> fibs = new ArrayList<BigInteger>();
			fibs.add(new BigInteger("1"));
			fibs.add(new BigInteger("2"));

			//gen complete sequence until 10^100
			int x = 0, y = 1;
			for(int i = 0; i < 478; i++)
				fibs.add(fibs.get(x++).add(fibs.get(y++)));

			BigInteger ba = new BigInteger(a);
			BigInteger bb = new BigInteger(b);

			int count = 0, index = 0;
			for(;;) {
				if(fibs.get(index).compareTo(ba) == 0 || fibs.get(index).compareTo(ba) == 1)
					break;
				index++;
			}
			for(;;) {
				if(fibs.get(index).compareTo(bb) == 1)
					break;
				index++;
				count++;
			}
			System.out.println(count);
		}
	}
}