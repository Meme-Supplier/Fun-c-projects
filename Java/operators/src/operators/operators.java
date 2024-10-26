package operators;
import java.util.Scanner;

public class operators {

	public static void main(String[] args) {
		
		// ! = not
		// || = or
		// && = and
		
		int temp = 25;
		
		if (temp > 85) {
			System.out.println("It is hot outside");
		}
		
		else if (temp >= 20 && temp <=30) {
			System.out.println("It is cold outside");
		}
		
		else if (temp >= 100 || temp <= 200) {
			System.out.println("It is SCORCHING hot outside");
		}
		
		///////////////////////////////////////////////////////////////////////
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("\nYou are playing a game! press q or Q to quit");
		String response = scanner.next();
		
		if (response.equals("q") || response.equals("Q")) {
			System.out.println("\nYou quit the game");
		}
		
		else if (!response.equals("q") || !response.equals("Q")){
			System.out.println("\nYou will still be playing the game");
		}

	}

}
