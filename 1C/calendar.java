import javax.swing.*;
public class calendar extends JFrame{
	calendar() {
		super("Calendar");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		JPanel panel = new JPanel();
		add(panel);
		pack();
		setVisible(true);
	}
	public static void main(String args[])
	{
		new calendar();
	}
}
