/*--------------------------------hulganii komanduud----------------------------------------------*/
String s = e.getActionCommand();
	if(s.equals("0"))
		{
			s1+=0;
			s2+=0;
			txt.setText(s1);
		}
	else if(s.equals("1"))
		{
			s1+=1;
			s2+=1;
			txt.setText(s1);
		}	
	else if(s.equals("2"))
		{
			s1+=2;
			s2+=2;
			txt.setText(s1);
		}	
	else if(s.equals("3"))
		{
			s1+=3;
			s2+=3;
			txt.setText(s1);
		}	
	else if(s.equals("4"))
		{
			s1+=4;
			s2+=4;
			txt.setText(s1);
		}	
	else if(s.equals("5"))
		{
			s1+=5;
			s2+=5;
			txt.setText(s1);
		}	
	else if(s.equals("6"))
		{
			s1+=6;
			s2+=6;
			txt.setText(s1);
		}	
	else if(s.equals("7"))
		{
			s1+=7;
			s2+=7;
			txt.setText(s1);
		}	
	else if(s.equals("8"))
		{
			s1+=8;
			s2+=8;
			txt.setText(s1);
		}	
	else if(s.equals("9"))
		{
			s1+=9;
			s2+=9;
			txt.setText(s1);
		}	
	else if(s.equals(".") && kek== false )
		{
			s1+='.';
			s2+='.';
			txt.setText(s1);
			kek=true;
		}
	else if(s.equals("Арилгах"))
		{
			
			s1="";
			s2="";
			txt.setText(s1);
			kek= false;
		}	
	else if(s.equals("0"))
		{
			s1+=0;
			txt.setText(s1);
			
		}
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
			
		}
