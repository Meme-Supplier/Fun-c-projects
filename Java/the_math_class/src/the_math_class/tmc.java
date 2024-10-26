package the_math_class;

public class tmc {

	public static void main(String[] args) {
		
		// Comparing
		double x =3.14;
		double y = -10;
		double z = Math.max(x, y);
		// This displays x (3.14) because it is the bigger number
		System.out.println(z);
		
		// Absolute value
		double a = 69;
		double b = -420;
		// Displays 28980 because the absolute value of 69*-420=28980
		double c = Math.abs(a * b);
		System.out.println(c);
		
		// Square root
		double d = 123;
		double e = 456;
		// Displays 236.8 because that's the square root of d (123) * e (456).
		double f = Math.sqrt(d * e);
		System.out.println(f);
		
		// Rounding
		
		// Normal rounding
		double h = 78.9;
		double i = 10.1112;
		// Displays 8 because that is h (78.9) / i (10.1112) rounded.
		double j = Math.round(h / i);
		System.out.println(j);
		
		// Round up
		double k = 6.9;
		double l = 4.20;
		// Displays 12 because that is k + l rounded up
		double m = Math.ceil(k + l);
		System.out.println(m);
		
		// Round down
		double n = 6.9;
		double o = 4.20;
		// Displays 2 because that is n - o rounded down
		double p = Math.floor(n - o);
		System.out.println(p);

	}

}
