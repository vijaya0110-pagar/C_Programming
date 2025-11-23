class Logic{
    void countDigits(int iNo)
    {
        
        int iDigit=0;
        int icnt=0;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        while(iNo!=0)
        {
            iDigit=iNo%10;
            
                icnt++;
            iNo=iNo/10;
        }
        System.out.println("no of digits:"+icnt);
        }
}
class Assignment_no16_Q2
{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.countDigits(7865);
    }
}