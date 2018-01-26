import java.util.Scanner;
class List {
   
    int number;
    int count;
    public List(int a, int b) {
        number = a;
        count = b;
    }
}
 
public class Main {
   
    public static List list[] = new List [1222];
   
    public static void main(String[] args) {
       
        Scanner INPUT = new Scanner(System.in);
        generate();
   
        for (int i=1; i<1000; i++) {
            for (int j=1; j<=1000-i; ++j) {
                int tn,tc;
                if(list[j].count>list[j+1].count || (list[j].count==list[j+1].count && list[j].number<list[j+1].number)) {
                    tn = list[j].number;
                    tc = list[j].count;
                    list[j].number = list[j+1].number;
                    list[j].count = list[j+1].count;
                    list[j+1].number = tn;
                    list[j+1].count = tc;
                }
               
            }
        }
       
        int test,n;
        test = INPUT.nextInt();
        for (int i=1; i<=test; i++) {
            n = INPUT.nextInt();
            System.out.println("Case "+i+": "+list[n].number);
        }
       
 
    }
   
    public static void generate( ) {
       
        for (int i=1; i<=1000; ++i) {
            int cnt=0;
            for (int j=1; j<=i; j++) {
                if(i%j==0) cnt++;              
            }
            list[i]=new List(i,cnt);
        }
       
    }
   
 
 
}