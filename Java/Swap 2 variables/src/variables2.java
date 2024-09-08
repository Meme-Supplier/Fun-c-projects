
public class variables2 {

	public static void main(String[] args) {

		String y = "water";
		String x = "Gatorade";
		String temp;
		
		temp = x;
		x=y;
		y=temp;
		
		System.out.println("x: "+x);
		System.out.println("y: "+y);
	}

}
