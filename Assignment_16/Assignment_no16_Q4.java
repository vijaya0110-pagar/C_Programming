class Logic{
    void reversenumber(int num)
    {
        int iDigit=0;
        int iRev=0;
        while(num!=0)
        {
            iDigit=num%10;
            iRev=iRev*10+iDigit;
            num=num/10;
        }
        System.out.println("reverse number:"+iRev);
    }
}
public class Assignment_no16_Q4 {
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.reversenumber(1234);
    }
    
}
