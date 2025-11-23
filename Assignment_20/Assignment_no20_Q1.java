class Logic
{
    void sumEvenNumbers(int n)
    {
        int sum=0;
       for(int i=0;i<n;i++)
       {
        if(i%2==0)
        {
            sum=sum+i;
            
        }
       }
       System.out.println(sum);
    }
}
public class Assignment_no20_Q1 {
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.sumEvenNumbers(10);
    }
}
