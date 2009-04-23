import javax.swing.*;
public class calendar extends JFrame{
	calendar() {
		super("Calendar");//Frame uusgej bna 
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//tsonh haaj bna
		JPanel panel = new JPanel();//panel uusgej bna
		add(panel);
		pack();
		setVisible(true);
	}
	public static void main(String args[])
	{
		new calendar();
	}
}
