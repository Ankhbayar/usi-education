import java.awt.Dimension;
import java.awt.event.ActionEvent;
import java.awt.event.WindowEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import java.awt.Color;

public class KeKe implements ActionListener 
{
	private JFrame frm;
	private JButton[] btn;
	private JLabel lbl;
	private JTextField txt;
	char kkkk;
	boolean kek=false;
	int i=0;
	double c,a,b;
	String[] btn1;
	String s1="";
	String s2="";
	//Davaadalai
	
		public void ke()
		{
			frm=new JFrame("USI тооны машин");
			frm.setSize(270,300);
            frm.setBackground(Color.orange);
			lbl = new JLabel("");
			String str=new String();
			s1= " ";
			String s2=new String();
			s2= " ";
			//ONON
			
			txt = new JTextField("");
			txt.setBounds(15,10,230,40);
			txt.setBackground(Color.yellow);
			txt.setHorizontalAlignment(JTextField.RIGHT);
			btn = new JButton[17];
			String[] btn1 = {"1", "2", "3", "/","4", "5", "6","*","7","8", "9", "-","0", ".", "=", "+","Aрилгах"};
			
			for(i=0;i<17;i++){
				btn[i]=new JButton(btn1[i]);
				btn[i].addActionListener(this);
				btn[i].setBackground(Color.pink);
			}//UCHRAL
			
btn[0].setBounds(15,60, 50, 40);
btn[0].setActionCommand("1");			
btn[1].setBounds(70,60, 50, 40);
btn[1].setActionCommand("2");			
btn[2].setBounds(130,60, 50, 40);
btn[2].setActionCommand("3");
btn[3].setBounds(190,60, 50, 40);
btn[3].setActionCommand("/");
btn[4].setBounds(15,100, 50, 40);
btn[4].setActionCommand("4");
btn[5].setBounds(70,100, 50, 40);
btn[5].setActionCommand("5");			
btn[6].setBounds(130,100, 50, 40);
btn[6].setActionCommand("6");		
btn[7].setBounds(190,100, 50, 40);
btn[7].setActionCommand("*");
btn[8].setBounds(15,140, 50, 40);
btn[8].setActionCommand("7");
btn[9].setBounds(70,140, 50, 40);
btn[9].setActionCommand("8");
btn[10].setBounds(130,140, 50, 40);
btn[10].setActionCommand("9");
btn[11].setBounds(190,140, 50, 40);
btn[11].setActionCommand("-");
btn[12].setBounds(15,180, 50, 40);
btn[12].setActionCommand("0");
btn[13].setBounds(70,180, 50, 40);
btn[13].setActionCommand(".");
btn[14].setBounds(130,180, 50, 40);
btn[14].setActionCommand("=");
btn[15].setBounds(190,180, 50, 40);
btn[15].setActionCommand("+");
btn[16].setBounds(70,220, 110, 40);
btn[16].setActionCommand("Арилгах");
//MENDEE

			lbl.add(txt);
			for(int i=0;i<17;i++)
				frm.add(btn[i]);
				frm.add(lbl);
				frm.setVisible(true);			
		}
	
	public static void main(String[] args) 
	{
		KeKe kk =new KeKe();
		kk.ke();
		
	}
	//ITGEL
	
	public void windowClosing(WindowEvent e) {
		function();
		System.exit(0);
	}
	
	private void function() {}
	public void actionPerformed(ActionEvent e)
	//WAANCHIG 
	
	{

String s = e.getActionCommand();
	if(s.equals("0"))
		{
			s1+=0;
			s2+=0;
			txt.setText(s1);
		}
		//******GANBAATAR
	else if(s.equals("1"))
		{
			s1+=1;
			s2+=1;
			txt.setText(s1);
		}	
		//******NOMUNBISHRELT
	else if(s.equals("2"))
		{
			s1+=2;
			s2+=2;
			txt.setText(s1);
		}	
		//******MONKHBOLD*****
	else if(s.equals("3"))
		{
			s1+=3;
			s2+=3;
			txt.setText(s1);
		}
		//******TORBOLD*****	
	else if(s.equals("4"))
		{
			s1+=4;
			s2+=4;
			txt.setText(s1);
		}	
		//******OTGONTUYA*****
	else if(s.equals("5"))
		{
			s1+=5;
			s2+=5;
			txt.setText(s1);
		}	
		//******DORJOO******
	else if(s.equals("6"))
		{
			s1+=6;
			s2+=6;
			txt.setText(s1);
		}	//**********TOMROO****
	else if(s.equals("7"))
		{
			s1+=7;
			s2+=7;
			txt.setText(s1);
		}	
		//*******TSASAAA****
	else if(s.equals("8"))
		{
			s1+=8;
			s2+=8;
			txt.setText(s1);
		}	
		//********SHINEBAYAR******
	else if(s.equals("9"))
		{
			s1+=9;
			s2+=9;
			txt.setText(s1);
		}	
		//******ARIUNGEREL******
	else if(s.equals(".") && kek== false )
		{
			s1+='.';
			s2+='.';
			txt.setText(s1);
			kek=true;
		}
		//*****BAZARAA****
	else if(s.equals("Арилгах"))
		{
			
			s1="";
			s2="";
			txt.setText(s1);
			kek= false;
		}	
		//******JAMIYAN******
	else if(s.equals("0"))
		{
			s1+=0;
			txt.setText(s1);
			
		}
		//******BATTULGA*****
	else if(s.equals("+"))
		{	
			kek=false;
			c=Double.parseDouble(s1);
			System.out.println(c );
			s1+='+';
			kkkk='1';
			s2="";
			txt.setText(s1);
			
		}
		//********SUMIYA*******	
	else if(s.equals("-"))
		{
			kek = false;
			c=Double.parseDouble(s1);
			System.out.println(c);
			s1+='-';
			kkkk='2';
			s2="";
			txt.setText(s1);
		}
		//******BAATARJAW*****
	else if(s.equals("*"))
		{
			kek=false;
			c=Double.parseDouble(s1);
			System.out.println(c );
			s1+='*';
			kkkk='3';
			s2="";
			txt.setText(s1);
		
		}
		//*****SONOMJAMTS*****
	else if(s.equals("/"))
		{
			kek=false ;
			c=Double.parseDouble(s1);
			System.out.println(c );
			s1+='/';
		    kkkk='4';
			s2="";
			txt.setText(s1);
		}
		//******BILGUUN*****
	else if(s.equals("="))
		{	a=Double.parseDouble(s2);
			if(kkkk == '1')
				b=c+a;
	else if(kkkk =='2')
				b=c-a;

	else if(kkkk=='3')
					b=c*a;

	else if(kkkk=='4')
					b=c/a;
			 s1 = Double.toString(b);
			txt.setText(s1);
			System.out.println(b);
			//********AZAA********
		}
	}

}

