
public class expressions {

	public static void main(String[] args) {
		
		// expression = operands & operators
		// operands = values, variables, numbers, quantity
		// operators = + - * / %
		
		
		// Addition
		int guitar_picks = 10;
		guitar_picks = guitar_picks + 10;
		System.out.println(guitar_picks+" guitar picks\n");
		
		// Multiplication
		int cats = 2;
		cats = cats * 2;
		System.out.println(cats +" cats\n");
		
		// Subtraction
		int iq = 100;
		iq = iq - 50;
		System.out.println(iq +" IQ\n");
		
		// Division
		int group = 24;
		group = group / 2;
		System.out.println(group +" people split up\n");
		
		// Dividing by a variable
		int variable1 = 10;
		int variable2 = 9;
		double output;
		output = (double) variable2 / variable1;
		System.out.println(output +" is variable 2 divided by variable 1\n");
		
		// increment
		int increment = 0;
		increment++;
		System.out.println(increment +" added to variable\n");
		
		// Decrement
		int decrement = 1;
		decrement--;
		System.out.println(decrement +" after 1 is removed from the variable.");
		

	}

}
