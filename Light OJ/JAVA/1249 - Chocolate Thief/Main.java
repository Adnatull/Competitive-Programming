import java.util.Scanner;

class students {
	String name;
	int volume;
	public students() {
		
	}
	public students(String s, int a) {
		name = s;
		volume = a;
	}
}

public class Main {

	public static void main(String[] args) {
		Scanner INPUT = new Scanner(System.in);
		
		int test;
		test = INPUT.nextInt();
		for (int i=1; i<=test; i++) {
			int n;
			n = INPUT.nextInt();
			String s;
			int x,y,z;
			students[] list = new students[n+1];
			for (int j=1; j<=n; j++) { 
				s = INPUT.next();
				x = INPUT.nextInt();
				y = INPUT.nextInt();
				z = INPUT.nextInt();
				list[j] = new students(s,x*y*z);
			}
			for (int l=1; l<n; ++l) {
				for (int j=1; j<=n-l; ++j) {
					students tmp = new students();
					if(list[j].volume>list[j+1].volume) {
						tmp = list[j];
						list[j] = list[j+1];
						list[j+1] = tmp;
					}
				}
			}
			if(list[1].volume!=list[n].volume)
				System.out.println("Case "+i+": "+list[n].name+" took chocolate from "+list[1].name);
			else System.out.println("Case "+i+": no thief");
		}
	}

}
