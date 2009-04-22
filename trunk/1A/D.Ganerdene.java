import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.io.*;
public class Notepad extends JFrame
{	
	public static void main(String args[])
	{
		Notepad frame = new Notepad();
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setTitle("Notepad");
		frame.setSize(400,500);
		JMenuBar menubar = new JMenuBar();
		JMenu file = new JMenu("File");
		JMenu edit = new JMenu("Edit");
		JMenu help = new JMenu("Help");
		JMenuItem new_ = new JMenuItem("New");
		JMenuItem save = new JMenuItem("Save");
		JMenuItem save_as = new JMenuItem("Save As");
		JMenuItem exit = new JMenuItem("Exit");
		JMenuItem copy = new JMenuItem("Copy");
		JMenuItem cut = new JMenuItem("Cut");
		JMenuItem paste = new JMenuItem("Paste");
		JMenuItem inf = new JMenuItem("Information");
		frame.setJMenuBar(menubar);
		menubar.add(file);
		menubar.add(edit);
		menubar.add(help);
		file.add(new_);
		file.add(save);
		file.add(save_as);
		file.add(exit);
		edit.add(copy);
		edit.add(cut);
		edit.add(paste);
		help.add(inf);
		frame.setVisible(true);
	} 
}
