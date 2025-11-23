class Logic
{
void productOfDigits(int n)
{

    int iDigit=0;
    int pro=1;
    while(n!=0)
    {
        iDigit=n%10;
        pro=pro*iDigit;
        n=n/10;
    }
   System.out.println("product of digits:"+pro);
}
}
class Assignment_no21_Q1
{
public static void main(String args[])
{
Logic obj = new Logic();
obj.productOfDigits(234);
}
}