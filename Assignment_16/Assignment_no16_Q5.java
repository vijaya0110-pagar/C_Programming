class Logic{
    void CountDigits(int num)
    {
        int iDigit=0;
        int iCnt=0;
        while(num!=0)
        {
            iDigit=num%10;
            iCnt++;
            num=num/10;
        }
        System.out.println("count:"+iCnt);
    }
}
public class Assignment_no16_Q5{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.CountDigits(1234);
    }
    
}
