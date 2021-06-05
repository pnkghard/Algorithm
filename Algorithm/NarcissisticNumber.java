import java.util.Scanner;
import java.io.*;
import static java.lang.Math.*;
class narcissistic{
	int countDigit(int n){
		if (n == 0) return 0;
		return 1 + countDigit(n / 10);
	}
	boolean check(int n){
		int l = countDigit(n);
		int dup = n;
		int sum = 0;
		while(dup > 0){
			sum += pow(dup % 10, l);
			dup /= 10;
		}  
    return (n == sum);
	}
}

public class NarcissisticNumber {

	public static void main(String[] args) {
		narcissistic obj = new narcissistic();
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		if (obj.check(n)) System.out.println("True");
		else System.out.println("False");
	}

}
