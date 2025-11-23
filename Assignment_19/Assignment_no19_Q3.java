class Logic
{
    void checkDivisible(int num)
    {
        if(num%5==0 && num%11==0)
        {
            System.out.println("divisible by 5 and 11");
        }
        else{
            System.out.println("Not divisible");
        }
    }
}
public class Assignment_no19_Q3{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.checkDivisible(55);
    }
}
