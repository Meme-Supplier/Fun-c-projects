import java.util.Scanner;

public class hc {

	public static void main(String[] args) {
		
		double x;
		double y;
		double z;
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter side x: ");
		x = scanner.nextDouble();
		
		System.out.println("\nEnter side y: ");
		y = scanner.nextDouble();
		
		z = Math.sqrt((x*x)+(y*y));
		
		System.out.println("\nThe hypotenuse or whatever it's called is: " +z);
		
		scanner.close();

	}

}
