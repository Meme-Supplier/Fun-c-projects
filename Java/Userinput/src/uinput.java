import java.util.Scanner;

public class uinput {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("What is your name? ");
		String name = scanner.nextLine();
		
		System.out.println("\nHello "+name);
		
		System.out.println("\nHow old are you? ");
		int age = scanner.nextInt();
		scanner.nextLine();
		
		System.out.println("\nHello "+name+". You are " +age+" years old.\n");
		
		System.out.println(name+", What is your favorite food?");
		String favfood = scanner.nextLine();
		
		System.out.println("\n"+favfood+"? I love that food!");
		
	}

}
