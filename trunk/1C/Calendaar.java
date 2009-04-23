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
}
