import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.io.*;


public class Notepad extends JFrame //implements ActionListener
{
	public static void main(String args[])
	{
		Notepad frame = new Notepad();
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);		
		frame.setTitle("Note");
		frame.setSize(400,500);
	}
}
