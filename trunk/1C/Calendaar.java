import java.applet.*;
import java.awt.*;
import java.util.*;

public class Calendaar extends Applet
{
	Graphics	screenG;
	Dimension	dimension;
	Choice		month;
	TextField	year;
	Button		previous;
	Button		next;
	Date		today;
	int			thisMonth;
	int			thisYear;
	int			selectedMonth;
	int			selectedYear;
	int			colWidth;
	int			rowHeight;
	int			monthDays [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int			leapDays [] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	FontMetrics	metrics;
	public static void main (String args[])//bayasaaa
	{

		Frame	f1;
		Calendaar	c1;

		c1 = new Calendaar();
		c1.setLayout (new FlowLayout());

		f1 = new Frame ("Perpetual Calendaar");
		f1.resize (375, 350);
		f1.add ("Center", c1);
		f1.show();

		c1.init();
		c1.start();
		c1.getLayout().layoutContainer (c1);
	}

	public String getAppletInfo ()
	{
		return ("USI 1V ANGIIHAN");
	}
	public boolean leapYear (int year)//baska
	{
		if ((year % 400) == 0)
			return (true);

		if ((year > 1582) && ((year % 100) == 0))
			return (false);

		if ((year % 4) == 0)
			return (true);

		return (false);
	}
	public void drawMonth (int startDay, int nDays, boolean special)//tsolmon.ne
	{
		int		i;
		int		col = startDay + 1;
		int		row = 2;
		int		x;
		int		y;
		String	s;

		for (i = 1; i <= nDays; i++)
		{
			if (special && (i == 5))
				i += 10;	

			s = "" + i;

			x = col * colWidth - metrics.stringWidth (s);
			y = row * rowHeight;

			screenG.drawString (s, x, y);

			col++;
			if (col > 7)
			{
				col = 1;
				row++;
			}
		}
	}
	public void doMonth (int month, int year)//baba
	{
		boolean	leap = leapYear (year);
		int		daysInMonth;
		int		startOfMonth;
		int		y = year - 1;
		int		i;
		boolean	special = ((year == 1582) && (month == 9));
		boolean pre = ((year < 1582) || ((year == 1582) && (month <= 9)));

		if (pre)
			startOfMonth = 6 + y + (y / 4);
		else
			startOfMonth = 1 + y + (y / 4) - (y / 100) + (y / 400);

		if (leap)
		{
			daysInMonth = leapDays [month];
			for (i = 0; i < month; i++)
				startOfMonth += leapDays [i];
		}
		else
		{
			daysInMonth = monthDays [month];
			for (i = 0; i < month; i++)
				startOfMonth += monthDays [i];
		}

		drawMonth (startOfMonth % 7, daysInMonth, special);
	}
	public int parseYear (String y)//ganbii
	{
		if ((y.length () == 4)
		  && (y.charAt(0) >= '0') && (y.charAt(0) <= '9')
		  && (y.charAt(1) >= '0') && (y.charAt(1) <= '9')
		  && (y.charAt(2) >= '0') && (y.charAt(2) <= '9')
		  && (y.charAt(3) >= '0') && (y.charAt(3) <= '9'))
			return (Integer.parseInt (y));
		else
			return (-1);
	}
	public void init ()//badrah
	{
		dimension = size ();
		colWidth = dimension.width / 8;
		rowHeight = dimension.height / 7;

		today = new Date ();
		thisMonth = today.getMonth ();
		thisYear = today.getYear () + 1900;

		selectedMonth = thisMonth;
		selectedYear = thisYear;

		previous = new Button ("Previous Month");
		add (previous);

		month = new Choice ();
		month.addItem ("January");
		month.addItem ("February");
		month.addItem ("March");
		month.addItem ("April");
		month.addItem ("May");
		month.addItem ("June");
		month.addItem ("July");
		month.addItem ("August");
		month.addItem ("September");
		month.addItem ("October");
		month.addItem ("November");
		month.addItem ("December");
		month.select (thisMonth);
		add (month);

		year = new TextField ("" + thisYear, 4);
		add (year);

		next = new Button ("Next Month");
		add (next);

		screenG = getGraphics ();
		metrics = screenG.getFontMetrics ();
	}
	public void paint (Graphics g)//buyaa
	{
		if (screenG != null)
		{
		
			Point p = month.location ();
			g.clearRect (0, 0, dimension.width, dimension.height);
			month.move (p.x, (p.y & -2) + (selectedMonth & 1));

			doMonth (selectedMonth, selectedYear);
		}
	}


	
	
	
	
	
	
	
	
	
	
	
	

