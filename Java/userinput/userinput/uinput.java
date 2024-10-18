package userinput;

// You need to import this
import java.util.Scanner;

public class uinput {

	public static void main(String[] args) {
		
		// Declare a scanner
		Scanner scanner_name = new Scanner(System.in);
		
		// Ask for input
		System.out.println("What is your name?");
		String name = scanner_name.nextLine();
		
		System.out.println("\nHello " +name);

		
		// Integer only
		Scanner integer_only = new Scanner(System.in);
		System.out.println("\nHow old are you?");
		
		int age = integer_only.nextInt();
		System.out.println("\nHello " +name);
		System.out.println("You are " +age +" years old");
		
		// Favorite food
		Scanner favfood = new Scanner(System.in);
		System.out.println("\nWhat is your favorite food?");
		String fav_food = scanner_name.nextLine();
		
		System.out.println("\nHello " +name);
		System.out.println("You are " +age +" years old");
		System.out.println("Your favorite food is " +fav_food);
			
	}

}
