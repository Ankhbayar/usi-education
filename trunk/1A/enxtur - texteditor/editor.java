import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.JComponent;
import java.io.*;
import java.net.*;
import javax.imageio.*;
import javax.swing.ImageIcon;
public class editor extends JFrame implements ActionListener{

	public Frame fr;
	public Panel pan;
	public TextArea area;
	public MenuBar Bar = new MenuBar();
	public Menu File, Edit, Help;
	public MenuItem New, Open, Save, SaveAs, Exit, Cut, Copy, Paste, Delete, SelectAll, PCut, PCopy, PPaste, About;
	public JFileChooser Chooser;
	public File file;
	public URL url;
	public String str="";
	public boolean bool = true;
	public String BuffStr="";
	public PopupMenu popup;
	public JButton BNew, BOpen, BSave, BSaveAs;
	public Image image=null;
	public editor(){
		super("Editor - Untitled");
		
		try{
			File file = new File("new.png");
			image = ImageIO.read(file);
		}catch(IOException errImage){
		}
		
		BNew = new JButton("New",new ImageIcon(image));
		BNew.setLocation(5,0);
		BNew.setSize(80,60);
		
		try{
			File file = new File("open.png");
			image = ImageIO.read(file);
		}catch(IOException errImage){
		}
		
		BOpen = new JButton("Open",new ImageIcon(image));
		BOpen.setLocation(90,0);
		BOpen.setSize(80,60);

		try{
			File file = new File("save.png");
			image = ImageIO.read(file);
		}catch(IOException errImage){
		}
		
		BSave = new JButton("Save",new ImageIcon(image));
		BSave.setLocation(175,0);
		BSave.setSize(80,60);
		
		try{
			File file = new File("bi.jpg");
			image = ImageIO.read(file);
		}catch(IOException errImage){
		}
		
		BSaveAs = new JButton("Save as");
		BSaveAs.setLocation(260,0);
		BSaveAs.setSize(80,60);
		
		url = null;

		Chooser = new JFileChooser();
		
		About = new MenuItem("About");
		New = new MenuItem("New");
		Open = new MenuItem("Open");
		Save = new MenuItem("Save");
		SaveAs = new MenuItem("Save as");
		Exit = new MenuItem("Exit");
		Cut = new MenuItem("Cut");
		Copy = new MenuItem("Copy");
		Paste = new MenuItem("Paste");
		Delete = new MenuItem("Delete");
		SelectAll = new MenuItem("Select All");
		
		PCut = new MenuItem("Cut");
		PCopy = new MenuItem("Copy");
		PPaste = new MenuItem("Paste");
		
		New.addActionListener(this);
		Open.addActionListener(this);
		Save.addActionListener(this);
		SaveAs.addActionListener(this);
		Exit.addActionListener(this);
		Cut.addActionListener(this);
		Copy.addActionListener(this);
		Paste.addActionListener(this);
		Delete.addActionListener(this);
		SelectAll.addActionListener(this);
		About.addActionListener(this);
		
		PCut.addActionListener(this);
		PCopy.addActionListener(this);
		PPaste.addActionListener(this);
		
		BNew.addActionListener(this);
		BOpen.addActionListener(this);
		BSave.addActionListener(this);
		BSaveAs.addActionListener(this);
			
		File = new Menu("File");
		File.add(New);
		File.add(Open);
		File.add(Save);
		File.add(SaveAs);
		File.add(Exit);
		
		Edit = new Menu("Edit");
		Edit.add(Cut);
		Edit.add(Copy);
		Edit.add(Paste);
		Edit.add(Delete);
		Edit.add(SelectAll);
		
		Help = new Menu("Help");
		Help.add(About);
		
		popup = new PopupMenu();
		popup.add(PCut);
		popup.add(PCopy);
		popup.add(PPaste);
		
		Bar.add(File);
		Bar.add(Edit);
		Bar.add(Help);
		
		area = new TextArea(35,95);
		area.add(popup);
		area.setBackground(Color.LIGHT_GRAY);
		area.setLocation(0,60);
		area.setSize(790,490);
		area.setVisible(true);	
	
		pan = new Panel();
		pan.setBackground(Color.DARK_GRAY);
		pan.setLayout(null);
		pan.add(BNew);
		pan.add(BOpen);
		pan.add(BSave);
		pan.add(BSaveAs);
		pan.add(area);
						
		setSize(800,600);
		setMenuBar(Bar);
		add(pan);
		setVisible(true);
		
		area.addMouseListener(new MouseAdapter() {
		    public void mousePressed(MouseEvent evt) {
		        if (evt.isPopupTrigger()) {
		            popup.show(evt.getComponent(), evt.getX(), evt.getY());
		            System.out.println(evt.getX() + " " + evt.getY());
		        }
		    }
		    public void mouseReleased(MouseEvent evt) {
		        if (evt.isPopupTrigger()) {
		            popup.show(evt.getComponent(), evt.getX(), evt.getY());
		        }
		    }
		});

	}
	
	public void actionPerformed(ActionEvent e){
		String command = e.getActionCommand();
		System.out.println(command);
		if (command.equals("About")){
			JOptionPane.showMessageDialog(pan,new ImageIcon(image));
		}
		if (command.equals("New")){
			if (area.getText().length() == 0){
				System.out.println("kk");
			}else{
				int choice = JOptionPane.showConfirmDialog(null, "Хадгалах уу?","Анхааруулга",JOptionPane.YES_NO_OPTION);
				if (choice !=1){
					if (bool){
						Chooser.showSaveDialog(this);
						try{
							str = area.getText();
							BufferedWriter out = new BufferedWriter( new FileWriter( Chooser.getSelectedFile().toString() ) );
							out.write(str);
							out.close();
						}catch (IOException error2){
							//System.out.println("Exception" +error2);
						}
					}else{
						try{
							str = area.getText();
							BufferedWriter out = new BufferedWriter( new FileWriter( Chooser.getSelectedFile().toString() ) );
							out.write(str);
							out.close();
						}catch (IOException error2){
					
						}
					}
					area.setText("");
					setTitle("Editor - Untitled");
				}else if (choice == 1){
					area.setText("");
					setTitle("Editor - Untitled");
				}
			}
		}
		if (command.equals("Open")){
			Chooser.showOpenDialog(this);
			System.out.println(Chooser.getSelectedFile().toString());
			file = new File( Chooser.getSelectedFile().toString() );
			try{
				url = file.toURL();
				file=new File(url.getFile());
				int asc;
				InputStream is=url.openStream();
				BufferedReader br=new BufferedReader(new InputStreamReader(is));
				do{
					asc=br.read();
					str = "" + str + (char)asc;
				}while (asc !=-1);
				is.close();
			}catch (MalformedURLException error1){
			System.out.println("Don't worry,exception has been caught" + error1);
			}catch (IOException error1){
				System.out.println(error1.getMessage());
			}
			area.setText(str);
			setTitle("Editor - " + Chooser.getSelectedFile().toString());
			bool = false;
		}
		if (command.equals("Save")){
			if (bool){
				Chooser.showSaveDialog(this);
				try{
					str = area.getText();
					BufferedWriter out = new BufferedWriter( new FileWriter( Chooser.getSelectedFile().toString() ) );
					out.write(str);
					out.close();
				}catch (IOException error2){
					//System.out.println("Exception" +error2);
				}
			}else{
				try{
					str = area.getText();
					BufferedWriter out = new BufferedWriter( new FileWriter( Chooser.getSelectedFile().toString() ) );
					out.write(str);
					out.close();
				}catch (IOException error2){
					
				}
			}
			setTitle("Editor - " + Chooser.getSelectedFile().toString());
		}
		if (command.equals("Save as")){
			Chooser.showSaveDialog(this);
			try{
				str = area.getText();
				BufferedWriter out = new BufferedWriter( new FileWriter( Chooser.getSelectedFile().toString() ) );
				out.write(str);
				out.close();
			}catch (IOException error2){
				//System.out.println("Exception" +error2);
			}
			
		}
		if (command.equals("Exit")){
			System.exit(0);
		}
		if (command.equals("Copy")){
			BuffStr = area.getSelectedText();
		}
		if (command.equals("Cut")){
			BuffStr = area.getSelectedText();
			String strMain = area.getText();
			int length = strMain.length();
			char buffStrMain[] = new char[255];
			buffStrMain = strMain.toCharArray();
			String partFirst = "";
			String partLast = "";
			for (int count = 0; count<area.getSelectionStart(); count ++){
				partFirst = partFirst + "" + buffStrMain[count];
			}
						
			for (int count = area.getSelectionEnd(); count<length; count ++){
				partLast = partLast + "" + buffStrMain[count];
			}
			area.setText(partFirst + partLast);
			
			
		}
		if (command.equals("Paste")){
			
			System.out.println(area.getCaretPosition());
			System.out.println(area.getSelectionStart());
			System.out.println(area.getSelectionEnd());
			
			int position = area.getCaretPosition();
			String strMain = area.getText();
			int length = strMain.length();
			char buffStrMain[] = new char[255];
			char revolutionChar[] = new char[255];
			buffStrMain = strMain.toCharArray();
			String partFirst = "";
			String partLast = "";
			char bufferChar;
			for (int count = position-1; count>=0; count --){
				partFirst = partFirst + "" + buffStrMain[count];
			}
						
			revolutionChar = partFirst.toCharArray();
			for (int count=0; count < partFirst.length()/2; count ++){
				bufferChar = revolutionChar[count];
				revolutionChar[count] = revolutionChar[partFirst.length() - 1 - count];
				revolutionChar[partFirst.length() - 1 - count] = bufferChar;		
			}
			for (int count = position; count<length; count ++){
				partLast = partLast + "" + buffStrMain[count];
			}
			partFirst = new String(revolutionChar);
			System.out.println(partFirst);
			System.out.println(partLast);
			area.setText(partFirst + BuffStr + partLast);
		}
	}
	
	public static void main(String[] args){
		editor ex = new editor();
		ex.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		ex.setVisible(true);
	}
}
