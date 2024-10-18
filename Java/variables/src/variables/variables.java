package variables;

public class variables {

	public static void main(String[] args) {
		
		// Just a number
		int a = 69;
		
		//A word
		String b = "I'm a words";
		
		// True or false
		boolean c = true;
		
		// Decimal
		double d = 6.9;
		
		// Also a decimal
		float e = 4.20f;
		
		System.out.println(a +" is an integer");
		System.out.println(b +" is a string");
		System.out.println(c +" is a boolean");
		System.out.println(d +" is a decimal");
		System.out.println(e +" is also a decimal");
		
		
		// Big numbers
		
		// Won't work, number too large
//      int x = 345437589574395843759;
		
		// Instead:
		// You NEED to have "L" at the end for some reason
		long f = 4753324234234729485L;
		System.out.println(f +" is a big ahh number");
		
	}

}
