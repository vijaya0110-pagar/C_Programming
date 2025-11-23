class Logic
{
    void checkPerfect(int n)
    {
        int sum=0;
       for(int i=1;i<=n/2;i++)
       {
        
        if(n%1==0)
        {
            sum=sum+i;
        }
        
       }
       if(sum==n)
        {
            System.out.println("perfect number!");
        }
        else{
            System.out.println("not perfect!");
        }
    }
       
}
public class Assignment_no20_Q3{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.checkPerfect(6);
    }
}
