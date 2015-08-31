// 3n+1
import java.util.*;

class Main {

	public static void main(String[] args) {
		int ini, inj, i, j, n;
		Scanner s = new Scanner(System.in);
		while(s.hasNext()) {

			ini = s.nextInt();
			inj = s.nextInt();
			i = ini;
			j = inj;
			int max = 0;

			if(j < i) {
				int tmp = i;
				i = j;
				j = tmp;
			}

			for (n = j; n >= i; n--) {
				int x = n;
				int count = 1;
				while(x != 1) {
					count++;
					if(x % 2 != 0)
						x = 3*x + 1;
					else
						x = x/2;
				}
				if(count > max)
					max = count;
			}
			
			System.out.println(ini + " " + inj + " " + max);
		}
	}
}