import java.util.Scanner;

public class TernarySearch {
	static int tSearch(int l, int key, int ray[]) {
		int i=0;
		if(ray[l] == key || ray[i] == key) return key;
		if(l>=i) {
            int mid1 = i + (l - i) / 3;
            int mid2 = l - (l - i) / 3;
            if (ray[mid1] == key) return mid1;
            if (ray[mid2] == key) return mid2;
            if (key < ray[mid1]) return tSearch(i, mid1 - 1, key, ray);
            else if (key > ray[mid2]) return tSearch(mid2 + 1, l, key, ray);
            else return tSearch(mid1 + 1, mid2 - 1, ray);
        }
        return -1;
    }
	public static void main(String[] args) {
		System.out.println("Pankaj");
		int l, key;
		 sc = new Scanner(System.in);
		l = sc.nextInt();
		int ray[] = new int[l];
		for(int i=0; i<l; i++) ray[i] = sc.nextInt();
        key = sc.nextInt();
        int k = tSearch(l, key, ray);
        System.out.println("Key = " + k);
    }
}
