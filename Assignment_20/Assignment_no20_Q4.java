class Logic
{
    void findLargestDigit(int n)
    {
        int iDigit=0;
        int larg=0;
        while(n!=0)
        {
            iDigit=n%10;
            if(iDigit>larg)
            {
                larg=iDigit;
            }
            n=n/10;
        }
       System.out.println("largest no:"+larg);
    }
}
public class Assignment_no20_Q4{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.findLargestDigit(83249);
    }
}
