
public class mc {

	public static void main(String[] args) {
		
		double x = 3.14;
		double y = -10;
		
		// Maximum value
		double z = Math.max(x, y);
		System.out.println(z+" (Maximum value)\n");
		
		// Minimum value
		z = Math.min(x, y);
		System.out.println(z+" (Minimum value)\n");
		
		// Absolute value
		z = Math.abs(y);
		System.out.println(z+" (Absolute value)\n");
		
		// Square root
		z = Math.sqrt(x);
		System.out.println(z+" (Square root of "+x+" I guess?)\n");
		
		
		// Rounding
		
		// Standard round
		z = Math.round(x);
		System.out.println(z+" (3.14 rounded)\n");
		
		// Round up
		z = Math.ceil(x);
		System.out.println(z+" (3.14 rounded up)\n");
		
		z = Math.floor(x);
		System.out.println(z+" (3.14 rounded down)");

	}

}
