import java.util.Scanner;

public class ArmstrongNumber {

	public static void main(String[] args) {
		int c=0,a,temp;
		Scanner sc = new Scanner(System.in);
	    int n=sc.nextInt();
	    temp=n;  
	    while(n>0){  
	    	a=n%10;  
	    	n=n/10;  
	    	c=c+(a*a*a);  
	    }  
	    if(temp==c) System.out.println("True");   
	    else System.out.println("False"); 
	}
}
