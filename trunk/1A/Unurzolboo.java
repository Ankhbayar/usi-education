import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.io.*;

public class Unurzolboo extends JFrame {
	private final Color togtmol[] = {Color.BLACK, Color.BLUE, Color.RED, Color.GREEN};
	private JRadioButtonMenuItem ch_color[], fonts[];
	private JTextArea jta;
	private ButtonGroup fgr, cgr;
	private int style;
	static String taked,filename = File.separator+"tmp";	
	static JFileChooser choose = new JFileChooser(new File(filename));
	
	public Unurzolboo() {
		super("Notepad");
		
		JMenu filemenu = new JMenu("File");
		filemenu.setMnemonic('F');
		
		JMenuItem openmenu = new JMenuItem("Open");
		openmenu.setMnemonic('O');
		filemenu.add(openmenu);
				
		openmenu.addActionListener(
			new ActionListener() {
			    public void actionPerformed(ActionEvent e) {
			}
			});
		JMenuItem exitmenu = new JMenuItem("Exit");
		exitmenu.setMnemonic('x');
		filemenu.add(exitmenu);
		exitmenu.addActionListener(
			new ActionListener() {
				public void actionPerformed(ActionEvent event) {
					System.exit(0);
				}
			});
		
		JMenuBar bar = new JMenuBar();
		setJMenuBar(bar);
		bar.add(filemenu);
		
		JMenu formatmenu = new JMenu("Format");
		formatmenu.setMnemonic('r');
		
		String colors[] = {"Black", "Blue", "Red", "Green"};
		
		JMenu colormenu = new JMenu("Color");
		colormenu.setMnemonic('C');
		
		ch_color = new JRadioButtonMenuItem[colors.length];
		cgr = new ButtonGroup();
		ItemHandler itemHandler = new ItemHandler();
		
		for (int i = 0; i < colors.length; i++) {
			ch_color[i] = new JRadioButtonMenuItem(colors[i]);
			colormenu.add(ch_color[i]);
			cgr.add(ch_color[i]);
			ch_color[i].addActionListener(itemHandler);
		}
		
		formatmenu.add(colormenu);
		formatmenu.addSeparator();
		
		String ft_name[] = {"Serif","Monospaced","SansSerif"};
		
		JMenu fontmenu = new JMenu("Font");
		fontmenu.setMnemonic('F');
		
		fonts = new JRadioButtonMenuItem[ft_name.length];
		fgr = new ButtonGroup();
		
		for (int i = 0; i < fonts.length; i++) {
			fonts[i] = new JRadioButtonMenuItem(ft_name[i]);
			fontmenu.add(fonts[i]);
			fgr.add(fonts[i]);
			fonts[i].addActionListener(itemHandler);
		}
		
		fonts[0].setSelected(true);
		fontmenu.addSeparator();
		
		String st_name[] = {"Bold", "Italic"};
		
		formatmenu.add(fontmenu);
		bar.add(formatmenu);
		
		jta = new JTextArea( 10, 10 );
		jta.setForeground(togtmol[0]);
		jta.setFont(new Font("Serif", Font.PLAIN, 20));
		
		getContentPane().setBackground(Color.CYAN);
		getContentPane().add(jta, BorderLayout.CENTER);
				
		ButtonGroup cgr = new ButtonGroup();
		
		setSize(500, 800);
		setVisible(true);
	}

	public static void main(String[] args) {
		Unurzolboo obj = new Unurzolboo();
		obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	
	private class ItemHandler implements ActionListener {
		public void actionPerformed(ActionEvent event) {
			for(int i = 0; i < ch_color.length; i++) {
				if (ch_color[i].isSelected()) {
					jta.setForeground(togtmol[i]);
					break;
				}
			}
			for(int i = 0; i < fonts.length; i++) {
				if (event.getSource() == fonts[i]) {
					jta.setFont(new Font(fonts[i].getText(), style, 20));
					break;
				}
				repaint();
			}
		}
	
    	}
}
  

	
