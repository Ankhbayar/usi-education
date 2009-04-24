import java.io.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class Amartuvshin extends JFrame implements ActionListener {
	public JTextArea text; 
	public JMenuBar menu;
	public JMenu Action;
	public JMenuItem mi[] = new JMenuItem[8];
	public JMenuItem Pmi[] = new JMenuItem[4];
	public JPopupMenu Popmenu;
	public Amartuvshin (String arg) {
		super(arg);
		setSize(500, 500);
		menu = new JMenuBar();
		Action = new JMenu("Edit");
		String Act[] = {"New   ", "Open   ", "Save   ", "Save as .."
		, "Cut   ", "Copy   ", "Paste   ", "Exit   "};
		for(int count=0; count<8; count++) {
			mi[count] = new JMenuItem(Act[count]);
			mi[count].addActionListener(new ActionListener() {
				public void actionPerformed(ActionEvent e) {
					System.out.println(e.getActionCommand());
					JPanel panel = new JPanel();
					if(e.getActionCommand()=="Exit   ") {
						System.exit(0);
					}
					if(e.getActionCommand()=="Open   ") {
						String file;
				   		JFileChooser chooser = new JFileChooser("a.txt");
						try {
							File f = new File(new File("").getCanonicalPath());
							chooser.setSelectedFile(f);
							} catch (IOException er) {
						}
						chooser.showOpenDialog(panel); 
				   	 	File curFile = chooser.getSelectedFile();
				//   	 	text.setText();
					}
				}
			});
			Action.add(mi[count]);
		}
		menu.add(Action);
		setJMenuBar(menu);
		text = new JTextArea();
		Popmenu = new JPopupMenu();
		String Pop[] = {"Copy", "Cut", "Paste", "Delete"};
		for(int count=0; count<4; count++) {
			Pmi[count] = new JMenuItem(Pop[count]);
    		Pmi[count].addActionListener(this);
    		Popmenu.add(Pmi[count]);
    	}
    	text.addMouseListener(new MouseAdapter() {
		    public void mousePressed(MouseEvent evt) {
		        if (evt.isPopupTrigger()) {
		            Popmenu.show(evt.getComponent(), evt.getX(), evt.getY());
		        }
		    }
        	public void mouseReleased(MouseEvent evt) {
            	if (evt.isPopupTrigger()) {
                	Popmenu.show(evt.getComponent(), evt.getX(), evt.getY());
            	}
        	}
    	});				
		JScrollPane scroll = new JScrollPane(text);
		add(scroll);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e) {
		System.out.println(e.getActionCommand());
	}
	public static void main(String argv[]) {
		Amartuvshin obj = new Amartuvshin("Amartuvshin");
		obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
