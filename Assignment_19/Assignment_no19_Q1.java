class Logic
{
    void checkLeapYear(int year)
    {
        if((year%4==0 && year % 100!=0)|| (year % 400 == 0))
        {
            System.out.println(year + " is a Leap Year.");
        } else {
            System.out.println(year + " is NOT a Leap Year.");
        }

        
    }
}
public class Assignment_no19_Q1 {
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.checkLeapYear(2028);
    }
}
