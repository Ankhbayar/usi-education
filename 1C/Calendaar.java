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
	public static void main (String args[])//byasaaa
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

