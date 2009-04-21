import java.util.*;
import java.text.*;

public class Cal {
  
  public final static String[] months = {
    "January", "February", "March", "April", "May", "June", "July",
      "August", "September", "October", "November", "December"};
    
    public final static int days[] = {31, 28, 31, 30, 31, 
                                        30, 31, 31, 30, 31, 30, 31 };
    
    private void displayMonth(int month, int year) 
    {
      int a = 0;
      System.out.println("  " + months[month] + " " + year);
      
      if (month < 0 || month > 11) {
        throw new IllegalArgumentException(
          "Month " + month + "0-s 11 hoorond!");
      }
      
      GregorianCalendar cldr = new GregorianCalendar(year, month, 1);
      System.out.println("Su Mo Tu We Th Fr Sa");
      
      a = cldr.get(Calendar.DAY_OF_WEEK)-1;
      int daysInMonth = days[month];
      
      if (cldr.isLeapYear(cldr.get(Calendar.YEAR)) && month == 1) 
      {
         ++daysInMonth;
      }
      for (int i = 0; i < a; i++) {
        System.out.print("   ");
      }
      
      for (int i = 1; i <= daysInMonth; i++) 
      {
        if (i<=9) {
          System.out.print(" ");
        }
        System.out.print(i);

        if ((a + i) % 7 == 0) { 
        	System.out.println();
        }
        else {
          System.out.print(" ");
        }
      }
    }
    public static void main(String[] args) {
    
    int mon, yr;
    Cal moncldr = new Cal();

    if (args.length == 2) {
      moncldr.displayMonth(Integer.parseInt(args[0])-1,Integer.parseInt(args[1]));
    }
    else {
      Calendar todaycldr = Calendar.getInstance();
      moncldr.displayMonth(todaycldr.get(Calendar.MONTH), todaycldr.get(Calendar.YEAR));
    }
  }
} 
