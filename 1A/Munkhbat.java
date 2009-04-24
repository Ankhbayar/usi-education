import java.awt.*;
import java.awt.event.*;
import java.io.*;
//import java.awt.datatransfer.*;
import javax.swing.*;

public class GMEditor extends JFrame implements ActionListener 
{
	static JTextArea tf; 
	

	  public static void main( String[] args ) throws Exception
	  
 	{	
 		
 	    GMEditor myFrame = new GMEditor();
		 
		tf=new JTextArea ("<=", 80,20);
		String names [];
          names=new String[1];
		names[0]="new"; 
		//Color palette[]={Color.blue};
		tf.namessetForeground(Color.red); 
		
    	myFrame.setSize( 800, 800 );
    	myFrame.setTitle("GMEditor");
    	MenuBar myMenuBar = new MenuBar();
    	myFrame.setMenuBar( myMenuBar );
    	Menu myFileMenu = new Menu( "File" );
    	Menu myEditMenu = new Menu( "Edit" );
    	Menu myHelpMenu = new Menu( "Help" );
    	myMenuBar.add( myFileMenu );
    	myMenuBar.add( myEditMenu );
    	myMenuBar.setHelpMenu( myHelpMenu );
    	MenuItem myFileOpenMenuItem = new MenuItem( "Open..." );
    	MenuItem myFileSaveMenuItem = new MenuItem( "Save..." ); 
    	MenuItem myFileExitMenuItem = new MenuItem( "Exit" );
    	MenuItem myEditUndoMenuItem = new MenuItem( "Undo" );
    	MenuItem myEditCopyMenuItem = new MenuItem("Copy");
    	MenuItem myEditPasteMenuItem = new MenuItem("Paste");
    	MenuItem myEditDeleteMenuItem = new MenuItem("Delete" );
    	MenuItem myHelpAboutMenuItem = new MenuItem( "About" );

    	myFileOpenMenuItem.addActionListener( myFrame );
    	myFileSaveMenuItem.addActionListener( myFrame ); // nemsen
    	myFileExitMenuItem.addActionListener( myFrame );
    	myEditUndoMenuItem.addActionListener( myFrame );//
    	myEditCopyMenuItem.addActionListener( myFrame );
    	myEditPasteMenuItem.addActionListener( myFrame );
    	myHelpAboutMenuItem.addActionListener( myFrame );
    	

    	myFileOpenMenuItem.setActionCommand( "open" );
    	myFileSaveMenuItem.setActionCommand( "save" ); // nemsen
    	myFileExitMenuItem.setActionCommand( "exit" );//
    	myEditUndoMenuItem.setActionCommand( "undo" );
    	myEditCopyMenuItem.setActionCommand( "Copy" );
    	myEditPasteMenuItem.setActionCommand( "Paste" );
    	myEditDeleteMenuItem.setActionCommand("Delete");
    	
    	myHelpAboutMenuItem.setActionCommand( "about" );
    	myFileMenu.add( myFileOpenMenuItem );
    	myFileMenu.add( myFileSaveMenuItem );	 //nemsen
    	myFileMenu.addSeparator();
    	myFileMenu.add( myFileExitMenuItem );//
    	myEditMenu.add( myEditUndoMenuItem );
    	myEditMenu.add( myEditCopyMenuItem );
    	myEditMenu.add( myEditPasteMenuItem );
    	myEditMenu.add( myEditDeleteMenuItem );
    	myHelpMenu.add( myHelpAboutMenuItem );
		myFrame.add (tf, BorderLayout.CENTER);
    	myFrame.addWindowListener( new WindowAdapter() 
		{
		      public void windowClosing( WindowEvent we ) 
				{
			        System.exit( 0 );
			 	}
    	} );
    	myFrame.setVisible( true );
	}

  	public void actionPerformed( ActionEvent e )
 	{
		try
		{
			String cmd = e.getActionCommand();
			if( cmd.equals( "open" ) ) 
			{
				  	Frame da = new Frame("File oruulah");
	    			da.setSize( 240, 240 );
	    			
				FileDialog d = new FileDialog(da, "File oruulah");
				d.setVisible(true);
				String ss = d.getDirectory()+d.getFile();
				System.out.println("File name: " + ss);
	       			StringBuilder contents = new StringBuilder();
	    
				try 
				{		
			      		BufferedReader input =  new BufferedReader(new FileReader( new File(ss)));
      					try 
					{
					        String line = null;
        					while (( line = input.readLine()) != null)
						{
						          contents.append(line);
						          contents.append(System.getProperty("line.separator"));
					        }
				        }
					finally 
					{
			        		input.close();
					}
				}
    				catch (IOException ex)
				{
			      		ex.printStackTrace();
        			}
				tf.setText(contents.toString());
	        		tf.select(10, 60);
			}
			else if(  cmd.equals( "save" ) ) 
			{
				File output = new File("home/cmv/Desktop/output.txt");
				FileWriter fw = new FileWriter(output);
				System.out.println("text:" + tf.getText());
				fw.write(tf.getText());
				fw.close();
			}
			else if( cmd.equals("exit") ) 
			{
				  System.exit( 0 );
			}
			else if( cmd.equals( "undo" ) ) 
			{
				  System.out.println( "undo" );
			}
			else if( cmd.equals( "Copy" ) ) 
			{
				  System.out.println( "undo" );
			}
			else if( cmd.equals( "Paste" ) ) 
			{
					System.out.println( "undo" );
			}
			else if( cmd.equals( "Delete" )) 
			{
     				return;
			}
			else if( cmd.equals( "about" ) ) 
			{
				  Frame ad = new Frame("abuot");
					ad.setSize( 200, 100 );
					ad.setVisible(true);
					Label lb = new Label("    * About This Document");


					ad.add(lb);
					ad.addWindowListener( new WindowAdapter()
		        	{
					   	public void windowClosing( WindowEvent we ) 
						{
				    		Frame f =  (Frame)we.getSource();
				    		f.dispose();
		      			}
					});
			}
		} catch(IOException e1)
		{
			System.out.println("file-iin aldaa garlaa!");
			e1.printStackTrace();
		}
    }
}
