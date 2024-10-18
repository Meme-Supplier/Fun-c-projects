
public class vswap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String x = "Water";
		String y = "Kool-Aid";
		String temp;
		
		// Won't work
		//y = x;
		//x = y;
		
		temp = x;
		x = y;
		y = temp;
		
		System.out.println("x: "+x);
		System.out.println("y: "+y);
	}

}
