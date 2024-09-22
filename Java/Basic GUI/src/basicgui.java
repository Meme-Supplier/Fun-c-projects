import javax.swing.JOptionPane;

public class basicgui {

	public static void main(String[] args) {
		
		String name = JOptionPane.showInputDialog("What is your name?");
		JOptionPane.showMessageDialog(null, "Hello "+name);
		
		int age = Integer.parseInt(JOptionPane.showInputDialog("How old are you?"));
			JOptionPane.showMessageDialog(null, "Hello, "+name +". you are "+age+" years old.");
			
		String height = JOptionPane.showInputDialog("How tall are you?");
		JOptionPane.showMessageDialog(null, "Short.");
		
		JOptionPane.showMessageDialog(null, "In conclusion, your name is "+name+", you are "+age+" years old, and you are "+height+" something tall.");
	}

}
