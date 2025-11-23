class Logic
{
    void printReverse(int n)
    {
    
       for(int i=n;i>=1;i--)
       {
        System.out.println(i);
       }
    }
       
}
public class Assignment_no20_Q2{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.printReverse(10);
    }
}
