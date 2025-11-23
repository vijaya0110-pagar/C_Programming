class Logic{
    void SumOffDigits(int num)
    {
        int iDigit=0;
        int iSum=0;
        while(num!=0)
        {
            iDigit=num%10;
            iSum=iSum+iDigit;
            num=num/10;
        }
        System.out.println("sum of digits:"+iSum);
    }
}
public class Assignment_no17_Q1{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.SumOffDigits(1234);
    }
    
}
