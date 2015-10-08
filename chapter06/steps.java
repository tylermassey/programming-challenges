// steps
import java.util.*;

public class steps {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		for(int i = 0; i < n; i++) {
			int x = s.nextInt();
			int y = s.nextInt();
			if(x==y) {
				System.out.println(0);
				continue;
			}
			if(y-x % 2 == 0)
				System.out.println(((int)Math.ceil(2*(.5)*(-1+Math.sqrt(4*(y-x)+1)))));
			else
				System.out.println((int)Math.ceil(2*(-1+Math.sqrt(y-x))+1));
		}
	}
}