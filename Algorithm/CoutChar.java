import java.util.Scanner;

public class CoutChar {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		int i=0, u=0, l=0;
		while(i<s.length()) {
			if(s[i]>="A" && s[i]<="Z") u++;
			if(s[i]>="a" & s[i]<="z") l++;
			i++;
		}
		System.out.println(u, "\n", l);
	}
}