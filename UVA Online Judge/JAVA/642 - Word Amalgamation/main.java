import java.util.*;

class pair {
	String index;
	String value;
	pair(String a, String b) {
		this.index = a;
		this.value = b;
	}
}

public class Main {	
	 
		public static void main(String[] args)  {
			Scanner sc = new Scanner(System.in);	
			
			ArrayList<pair> lst = new ArrayList<pair>();
			
			String S,P;
			while(true) {
				S = sc.next();
				if (S.equals("XXXXXX")) {
					break;
				}
				P = S;
				char[] ar = S.toCharArray();
				Arrays.sort(ar);
				S = String.valueOf(ar);
				lst.add(new pair(S,P));			
				
			}
			lst.sort((i1, i2) -> {				
				return i1.value.compareTo(i2.value);
			});
			
			while(true) {
				S = sc.next();
				if (S.equals("XXXXXX")) {
					break;
				}
				char[] ar = S.toCharArray();
				Arrays.sort(ar);
				S = String.valueOf(ar);
				boolean found = false;
				for(pair i: lst) {
					if(i.index.equals(S)) {
						System.out.println(i.value);
						found = true;
					}
				}
				if(!found) {
					System.out.println("NOT A VALID WORD");
				}				
				System.out.println("******");
			}
			sc.close();
		}
}
