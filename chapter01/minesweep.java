// Minesweeper
import java.util.*;

public class minesweep {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int field = 1;

		while(s.hasNext()) {
			int n = s.nextInt();
			int m = s.nextInt();
			if(n == 0 && m == 0) break;
			char[][] board = new char[n][m];
			s.nextLine();
			for(int i = 0; i < n; i++) {
				String line = s.nextLine();	
				board[i] = line.toCharArray();
			}

			for(int i = 0; i < n; i++) {
				for(int j = 0; j < m; j++) {
					int stars = 0;
					if(board[i][j] != '*') {
						// up
						if(i-1 >= 0)
							if(board[i-1][j] == '*')
								stars++;
						// diagonal up right
						if(i-1 >= 0 && j+1 < m)
							if(board[i-1][j+1] == '*')
								stars++;
						// right
						if(j+1 < m)
							if(board[i][j+1] == '*')
								stars++;
						// diagonal down right
						if(i+1 < n && j+1 < m)
							if(board[i+1][j+1] == '*')
								stars++;
						// down
						if(i+1 < n)
							if(board[i+1][j] == '*')
								stars++;
						// diagonal down left
						if(i+1 < n && j-1 >= 0)
							if(board[i+1][j-1] == '*')
								stars++;
						//left
						if(j-1 >= 0) 
							if(board[i][j-1] == '*')
								stars++;
						// diagonal up left
						if(i-1 >= 0 && j-1 >= 0)
							if(board[i-1][j-1] == '*')
								stars++;
						
						// update board
						board[i][j] = Integer.toString(stars).charAt(0);
					}
				}
			}

			if(field != 1) System.out.println();
			System.out.println("Field #" + field + ":");
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < m; j++) {
					System.out.print(board[i][j]);
				}
				System.out.println();
			}
			field++;		
		}
	}
}