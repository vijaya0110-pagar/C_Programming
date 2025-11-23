class Logic{
    void checkPalindrom(int num)
    {
        int iDigit=0;
        int temp=num;
        int iRev=0;
        while(num!=0)
        {
            iDigit=num%10;
            iRev=iRev*10+iDigit;
            num=num/10;
        }
        if(iRev==temp)
        {
        System.out.println("palindrom number:"+iRev);
        }
        else{
            System.out.println("not palindrom:"+iRev);
        }
    }
}
public class Assignment_no17_Q2{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.checkPalindrom(1234321);
    }
    
}
