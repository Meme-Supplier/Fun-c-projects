
public class Variables {

	public static void main(String[] args) {

		int x; //Declaration
		
		//int x = 123; // Initialization
		
		x = 123;  // Assignment
		
		System.out.println(x); //Prints x (123)
		System.out.println("\nThe variable is " +x); // Join functions
		
		//Large numbers
		long studentdebt = 42342333423423434L; // Output large numbers
		System.out.println(studentdebt +" <-- This is a very large number\n");
		
		//Print a decimal
		float decimal = 3.14f;
		System.out.println(decimal +" <-- One method");
		
		//Alternative:
		double otherdecimal = 420.69;
		System.out.println(otherdecimal +" <-- The other method (better)\n");
		
		//Boolean
		boolean bool = true;
		System.out.println(bool);
		boolean bool2 = false;
		System.out.println(bool2 +"\n");
		
		//Characters
		char character = '@';
		System.out.println(character);
		
		//Strings
		String name = "Owen";
		System.out.println("\nHello "+name);
		

	}

}
