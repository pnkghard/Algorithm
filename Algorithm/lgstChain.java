import java.util.Scanner;
public class lgstChain {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int r, c;
		r = scanner.nextInt();
		c = scanner.nextInt();
		int a[][] = new int[r][c];
		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++) {
				a[i][j] = scanner.nextInt();
			}
		}
		int m = r*c;
		int k=0;
		int b[] = new int[m];
		//Array.sort(a);
		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++) {
				b[k] = a[i][j];
				k++;
			}
		}
		//Array.sort(b);
		k=0;
		while(k<c) {
			System.out.println(b[k]);
			k++;
		}
	}

}
//3 3
//3 2 5
//4 1 4
//5 6 5
