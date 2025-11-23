class Logic
{
void countFactors(int num)
{
    int iCnt=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            iCnt++;
        }
    }
    System.out.println(iCnt);
}
}
class Assignment_no21_Q4
{
public static void main(String args[])
{
Logic obj = new Logic();
obj.countFactors(20);
}
}