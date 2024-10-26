package basic_gui;

import javax.swing.JOptionPane;

public class bgui {

	public static void main(String[] args) {
		
		String name = JOptionPane.showInputDialog("Enter your name: ");
		JOptionPane.showMessageDialog(null, "Hello " +name);
		
		int age = Integer.parseInt(JOptionPane.showInputDialog("Enter your age: "));
		JOptionPane.showMessageDialog(null, "Hello " +name +", you are " +age +" years old.");
		
		double height = Double.parseDouble(JOptionPane.showInputDialog("Enter your height (feet): "));
		JOptionPane.showMessageDialog(null, "Hello " +name +", you are " +age +" years old, and you are " +height + " feet tall.");

	}

}
