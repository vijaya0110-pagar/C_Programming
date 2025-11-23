class Logic
{
    void findSmallestDigit(int n)
    {
        int iDigit=0;
        int small=9;
        while(n!=0)
        {
            iDigit=n%10;
            if(iDigit<small)
            {
                small=iDigit;
            }
            n=n/10;
        }
       System.out.println("small no:"+small);
    }
}
public class Assignment_no20_Q5{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.findSmallestDigit(83249);
    }
}
