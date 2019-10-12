import java.util.Scanner;

class uri1005{
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.printf("MEDIA = %.5f\n", (((scan.nextFloat() * 3.5) + (scan.nextFloat() * 7.5)) / 11));
	}
}