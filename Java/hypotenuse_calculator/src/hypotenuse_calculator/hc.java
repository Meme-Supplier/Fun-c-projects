package hypotenuse_calculator;
import java.util.Scanner;

public class hc {

	public static void main(String[] args) {
		
		double x;
		double y;
		double z;
		
		Scanner hypotenuse = new Scanner(System.in);
		
		System.out.println("Enter side x:");
		x = hypotenuse.nextDouble();
		System.out.println("\nEnter side y:");
		y = hypotenuse.nextDouble();
		
		z = Math.sqrt((x*x)+(y*y));
		System.out.println("\nYour hypotenuse is: " +z);

	}

}
