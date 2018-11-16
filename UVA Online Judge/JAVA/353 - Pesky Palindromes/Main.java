import java.util.*;

public class Main {	

	 
		public static void main(String[] args)  {
			Scanner sc = new Scanner(System.in);	
			String S;
			while(sc.hasNextLine()) {
				List<String> lst = new ArrayList<String>();
				S = sc.nextLine();
				int l = S.length();
				String P = "";
				int Total = 0;
				for(int i=0; i<l; i++) {
					for (int j=i; j<l; j++) {
						P = S.substring(i, j+1);
						if(Process(P)) {
							if(!lst.contains(P)) {
								lst.add(P);
								Total += 1;
							}
						}						
						P = "";
					}
					
				}
				System.out.println("The string '"+S+"' contains "+Total+" palindromes.");
			}
			sc.close();
		}
		
		static boolean Process(String X) {
			
			String Y= "";
			for (int i=X.length()-1; i>=0; i--) {
				Y += X.charAt(i);
			}
			if(Y.equals(X)) {
				return true;
			}
			
			return false;
		}

}
