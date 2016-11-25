//package problem.solving;
import java.util.Scanner;

 class Main {

    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        int t;
        
        t = sc.nextInt();
        
        int a,b,c;
        
        for (int i=1;i<=t;i++) {
            
         
            
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            
            System.out.printf("Case %d: ",i);
            
            if(a>20 || b>20 || c>20)
                System.out.println("bad");
            else
                System.out.println("good");
            
        }
        
    }
    
}
