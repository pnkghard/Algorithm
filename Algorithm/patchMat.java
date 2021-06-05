import java.util.Scanner;
public class patchMat {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int r,c;
        r = sc.nextInt();
        c = sc.nextInt();
        int[][] mat1 = new int[r][c];
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                mat1[i][j] = sc.nextInt();
            }
        }
        r = sc.nextInt();
        c = sc.nextInt();
        int[][] mat2 = new int[r][c];
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                mat2[i][j] = sc.nextInt();
            }
        }
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                mat1[i][j] = mat1[i][j]+mat2[i][j];
                System.out.print(mat1[i][j]+" ");
            }
            System.out.print("\n");
        }    
    }    
}

//Input
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// 3 3
// 2 3 4
// 5 6 7
// 7 8 9

//output
// 3 5 7
// 9 11 13
// 14 16 18