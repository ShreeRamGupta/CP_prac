import java.util.Scanner;

class program{
	public static void main(String arg[]){
		Scanner sc = new Scanner(System.in);
		int n = Integer.parseInt(sc.nextLine());
		int prices[] = new int[n];
		for (int i=0 ;i < n ;i++ ){
			prices[i] = Integer.parseInt(sc.nextLine());

		}
		
		int k = Integer.parseInt(sc.nextLine());
		System.out.println(maxProfitWithKTransactions(prices,k));
	}

	public static int maxProfitWithKTransactions(int[] prices, int k){
		if(prices.length == 0){
			return 0;
		}

		int [][] profits = new int[k + 1][prices.length];
		for (int t = 1;t<k+1 ;t++ ){
			int maxThusFar = Integer.MIN_VALUE;
			for (int d =1;d< prices.length ;d++ ){
				maxThusFar = Math.max(maxThusFar,profits[t - 1][d - 1] - prices[d - 1]);
				profits[t][d] = Math.max(profits[t][d-1],maxThusFar + prices[d]);
			}
		}
		return profits[k][prices.length-1];
	}

}

//program();