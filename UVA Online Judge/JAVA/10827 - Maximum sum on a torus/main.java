
import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int test;
		test = sc.nextInt();
		for (int i=1; i<=test; i++) {
			int n;
			n = sc.nextInt();
			int[][] a = new int[n][n*2];
			for (int j=0; j<n; j++) {
				for (int k=0; k<n; k++)
					a[j][k] = sc.nextInt();
				for (int k=n; k<n*2; k++)
					a[j][k] = a[j][k-n];
			}
			long maxSum = Long.MIN_VALUE;
			for (int left = 0; left < n; left++) {
				int[] tempSum = new int[n];
				for (int right = left; right<left+n; right++) {
					for (int k=0; k<n; k++) {
						tempSum[k] = tempSum[k]+a[k][right];
					}
					int temp = 0;
					for (int k=0; k<tempSum.length; k++) 
						temp += tempSum[k];
					for (int k=0; k<n; k++) {
						int tsum = 0;
						int cnt = 0;
						for (int j=k; j<n; j++) {
							cnt ++;
							tsum += tempSum[j];
							if (cnt == n)
								maxSum = Math.max(maxSum,tsum);
							else maxSum = Math.max(maxSum, Math.max(tsum, temp-tsum));
						}
					}
				}
			}
			System.out.println(maxSum);
		}		
	}
}
