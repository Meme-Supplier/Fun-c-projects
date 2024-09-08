import java.util.Random;

public class rn {

	public static void main(String[] args) {
		
		Random random = new Random();
		
		int x = random.nextInt(6)+1;
		
		System.out.println("The 'random' number is: " +x);
		
		// Outputs an number between 0 and 1
		double y = random.nextDouble();
		System.out.println("\nThe number between 1 and 0 is: "+y);
		
		// Random boolean value
		boolean z = random.nextBoolean();
		System.out.println("\nThe random boolean is: "+z);

	}

}
