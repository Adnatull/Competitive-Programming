import java.util.ArrayList;
import java.util.Scanner;
 
public class Main {
 
   
    public static void main(String[] args) {
       
        Scanner INPUT = new Scanner(System.in);
       
        int t;
        t = INPUT.nextInt();
        int n;
        for (int i=1; i<=t; ++i) {
            n = INPUT.nextInt();
            int[] arr = new int[n];
       
            int last = 2;
            int ans = 0;
            for (int j=0; j<n; ++j) {
                arr[j] = INPUT.nextInt();
                int diff = arr[j]-last;
                if(diff>0) {
                    int p = (int) Math.ceil((double)diff/5.0);
                    //System.out.println(p);
                    if(p==0) ans++;
                    else ans +=p;
                   
                }
                last = arr[j]; 
            }
           
            System.out.println("Case "+i+": "+ans);
           
           
        }
       
 
    }
   
}
 