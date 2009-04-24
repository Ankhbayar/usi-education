import java.awt.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
public class MyEditor extends JFrame implements ActionListener{

	private JMenuItem mNew,mExit,mSaveAs,mOpen,mCopy,mCut,mPaste,mClose;
	FileDialog open;//file hariltsah tsonh
	JFrame frame;
	JTextArea text;//text talbai
	 protected JFileChooser m_chooser = new JFileChooser();//file congolt obj
	 public MyEditor() {

		setTitle("MyEditor Nelly");
		setSize(400,300);
		
		text = new JTextArea();
		JScrollPane scrollpane = new JScrollPane() ;
		scrollpane.getViewport().add(text, null);

		   JMenuBar menuBar = new JMenuBar();
		   JMenu menu = new JMenu("File");
		   mNew = new JMenuItem("New");
		   mNew.addActionListener(this);
		   menu.add(mNew);

		   mClose = new JMenuItem("Close");
		   mClose.addActionListener(this);
		   menu.add(mClose);
		   
		   mOpen = new JMenuItem("Open");
		   mOpen.addActionListener(this);
		   menu.add(mOpen);
		   	
		   
		   mSaveAs = new JMenuItem("SaveAs");
		   mSaveAs.addActionListener(this);
		   menu.add(mSaveAs);
		   
		   mExit = new JMenuItem("Exit");
		   mExit.addActionListener(this);
		   menu.add(mExit);
		   menuBar.add(menu);
		   /////////////////////////////////
		   menu = new JMenu("Edit");
		   mCopy = new JMenuItem("Copy");
		   mCopy.addActionListener(this);
		   menu.add(mCopy);
		   
		   mCut = new JMenuItem("Cut");
		   mCut.addActionListener(this);
		   menu.add(mCut);
		   
		   mPaste = new JMenuItem("Paste");
		   mPaste.addActionListener(this);
		   menu.add(mPaste);
		   
		   menuBar.add(menu);
			
		 
		   setContentPane(scrollpane);//komphuteriin tsonhonf garf
		   setJMenuBar(menuBar);
		   setVisible(true);
	}
	public static void main(String[] args) {
		new MyEditor();
	}
	public void actionPerformed(ActionEvent e) {
		Object o = e.getSource();//Хэрэглэгчийн үйлдэл хийсэн график компонент,Үүссэн event-н талаарх мэдээллийг агуулсан обьект
      

		if(o.equals(mNew)){
	int answer1 = JOptionPane.showConfirmDialog(null,"шинээр цонх нээх","товч дарах", JOptionPane.YES_NO_OPTION);
		    if (answer1 == JOptionPane.YES_OPTION) {

		    } else if (answer1 == JOptionPane.NO_OPTION) {
				text.setText("");
		    }
		}
		if(o.equals(mOpen)){
			 open = new FileDialog(frame,"нэргүй");//file tsesni hariltsah tsonh
			 open.setVisible(true);//haragdah vzegdeh helberiig toh
		}
		if(o.equals(mSaveAs)){
			
		File output = new File("home/Nelly/Desktop/output.txt");
			//FileWriter fw = new FileWriter(output);
			//fw.close();	
		}
		if(o.equals(mClose)){
			
		}
		if(o.equals(mExit)){
	int answer2 = JOptionPane.showConfirmDialog(null,"гарах бол No товчийг дар үгүй бол Yes сонго ","товч дарах", 		JOptionPane.YES_NO_OPTION);
		    if (answer2 == JOptionPane.YES_OPTION) {
		    	
		    } else if (answer2 == JOptionPane.NO_OPTION) {
		    System.exit(0);
		    }
		}
		else if(o.equals(mCopy)){
		//System.out.println( "undo" );
			
		}
		if(o.equals(mCut)){
			
		}
		if(o.equals(mPaste)){
			
		}
		
	}
}
//Joptionpane-tsonhni songolt
