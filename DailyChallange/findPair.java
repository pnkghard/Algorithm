import java.util.Scanner;

class findPair {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, key;
        n = sc.nextInt();
        int[] a = new int[n];
        for(int i=0; i<n; i++) a[i] = sc.nextInt();
        key = sc.nextInt();
        int f=0;
        for(int i=0; i<n;i++) {
            int j=i+1;
            if(a[i] == key) f=1;
            else while(j<n) {
                if(a[i]+a[j]==key) {
                    f=1;
                    break;
                }
                j++;
            }
            if(f==1){
                System.out.println("True");
                break;
            }
        }
        if(f==0) System.out.println("False");
    }
}

/*
Input:
7
33 12 -76 11 9 7 6
20

Output:
True
*/