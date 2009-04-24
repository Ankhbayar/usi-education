import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.io.*;


public class MyEditor extends JFrame implements ActionListener
{
	static JMenuItem neW;
	static JMenuItem open;
	static JMenuItem save;
	static JMenuItem saveas;
	static JMenuItem exit;
	static JMenuItem cut;
	static JMenuItem copy;
	static JMenuItem paste;
	static JMenuItem cut1;
	static JMenuItem copy1;
	static JMenuItem paste1;
	static JTextArea text;
	static String saveStr;
	static String taked,filename = File.separator+"tmp";
	static JFileChooser choose = new JFileChooser(new File(filename));
	static JPopupMenu menu = new JPopupMenu();
	static JButton component = new JButton("button");
	public static void main(String args[])
	{
		MyEditor frame = new MyEditor();
		JScrollPane scrollpane;
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);		
		frame.setTitle("MyEditor");
		frame.setSize(400,500);
		text = new JTextArea();	
		frame.add(text);
		JMenuBar menubar = new JMenuBar();		
		JMenu file = new JMenu ("File      ");
		JMenu edit = new JMenu ("Edit      ");
		neW = new JMenuItem("New       ");
		neW.addActionListener(frame);
		file.add(neW);
		open = new JMenuItem("Open      ");
		open.addActionListener(frame);
		file.add(open);
		save = new JMenuItem("Save      ");
		save.addActionListener(frame);
		file.add(save);
		saveas = new JMenuItem("Save As   ");
		saveas.addActionListener(frame);
		cut = new JMenuItem("Cut       ");
   	cut.addActionListener(frame);
		edit.add(cut);
		copy = new JMenuItem("Copy      ");
		copy.addActionListener(frame);
		edit.add(copy);
		paste = new JMenuItem("Paste     ");
		paste.addActionListener(frame);
		edit.add(paste);
		file.add(saveas);
		exit = new JMenuItem("Exit     ");
		exit.addActionListener(frame);
		file.add(exit);	
		cut1 = new JMenuItem("Cut       ");
   	cut1.addActionListener(frame);
		menu.add(cut1);
		copy1 = new JMenuItem("Copy      ");
		copy1.addActionListener(frame);
		menu.add(copy1);
		paste1 = new JMenuItem("Paste     ");
		paste1.addActionListener(frame);scrollpane = new JScrollPane(text);	
		frame.add(scrollpane, BorderLayout.CENTER);
		menu.add(paste1);
		frame.setJMenuBar(menubar);
		menubar.add(file);
		menubar.add(edit);
	

		text.addMouseListener(new MouseAdapter() 
		{
		  	public void mousePressed(MouseEvent evt) {
		  	   if(evt.isPopupTrigger()) 
		  	   {
		      	menu.show(evt.getComponent(), evt.getX(), evt.getY());
		   	}
		   }

		   public void mouseReleased(MouseEvent evt) 
		   {
		   	if(evt.isPopupTrigger()) 
		      {
		     		menu.show(evt.getComponent(), evt.getX(), evt.getY());
		      }
		   }
    	});
		scrollpane = new JScrollPane(text);	
		frame.add(scrollpane, BorderLayout.CENTER);
		text.add(menu);
		frame.setVisible(true);	
			
	}
	public void actionPerformed(ActionEvent e)
	{
		Object o = e.getSource();
		
		
		if(o.equals(cut) || o.equals(cut1))
		{
			taked = text.getSelectedText();
			text.replaceSelection("");
		} 
		if(o.equals(copy) || o.equals(copy1))
		{
			taked = text.getSelectedText();
		}
		if(o.equals(paste) || o.equals(paste1))
		{
			text.replaceSelection(taked);
		}
		if(o.equals(neW))
		{
			saveStr="";
			text.setText(saveStr);
		}
		if(o.equals(open))
		{
			try{
				choose.showOpenDialog(this);
				String bufferStr="";
				saveStr="";
				BufferedReader in = new BufferedReader(new FileReader(choose.getSelectedFile()));
				while( (bufferStr = in.readLine()) != null){
					saveStr += bufferStr + "\n";
				}
				text.setText(saveStr);
			}
			catch(IOException err)
			{
				System.out.println("file-iin aldaa garlaa!");
			}
   		 
		}
		if(o.equals(save))
		{
			try
			{
				if(choose.getSelectedFile() != null)
				{
				FileWriter fo = new FileWriter(choose.getSelectedFile());
		  		fo.write(text.getText()); 		
				fo.close();
				}
				else
				{
					choose.showSaveDialog(this);
					FileWriter fo = new FileWriter(choose.getSelectedFile());
					fo.write(text.getText());
					fo.close();
				}
			}
			catch(IOException err)
			{	
				System.out.println("file-iin aldaa garlaa!");
			}
		}
		if(o.equals(saveas))
		{
			try
			{
				choose.showSaveDialog(this);
				FileWriter fo = new FileWriter(choose.getSelectedFile());
				fo.write(text.getText());
				fo.close();
			}
			catch(IOException err)
			{
				System.out.println("file-iin aldaa garlaa!");
			}
		}
		
		if(o.equals(exit))
		{
			System.exit(0);
		}
	}
}
