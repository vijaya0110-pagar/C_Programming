class Logic
{
void countEvenOddRange(int n)
{
    int icntEven=0,icntOdd=0;

    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            icntEven++;
        }
        else{
            icntOdd++;
        }
    }
    System.out.println("even count:"+icntEven);
    System.out.println("odd count:"+icntOdd);
}
}
class Assignment_no21_Q2
{
public static void main(String args[])
{
Logic obj = new Logic();
obj.countEvenOddRange(50);
}
}