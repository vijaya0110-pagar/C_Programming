class Logic
{
    void printOddNumber(int num)
    {
        int iSumeven=0;
        int iSumodd=0;
        int iDigit=0;
        while(num!=0)
        {
            iDigit=num%10;
            if(iDigit%2!=0)
            {
            iSumodd=iSumodd+iDigit;
            }
            else if(iDigit%2==0)
            {
                iSumeven=iSumeven+iDigit;
            }
            num=num/10;
        }
        System.out.println("sum of even digits:"+iSumeven);
        System.out.println("sum of odd digits:"+iSumodd);
        
        
    }
}
class Assignment_no18_Q4{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.printOddNumber(20);
    }
    
}
