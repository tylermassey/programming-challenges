// counting
import java.util.*;
import java.math.BigInteger;
public class counting {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		ArrayList<BigInteger> combos = new ArrayList<BigInteger>(1000);
		combos.add(new BigInteger("2"));
		combos.add(new BigInteger("5")); 
		combos.add(new BigInteger("13"));
		for(int i = 3; i < 1000; i++) {
			BigInteger tmp = new BigInteger("2");
			tmp = tmp.multiply(combos.get(i-1));
			tmp = tmp.add(combos.get(i-2));
			tmp = tmp.add(combos.get(i-3));
			combos.add(tmp);
		}
		
		while(s.hasNext()) {
			int n = s.nextInt();
			System.out.println(combos.get(n-1).toString());
		}
	}
}