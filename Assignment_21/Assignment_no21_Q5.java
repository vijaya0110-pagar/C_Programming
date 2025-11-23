class Logic
{
void printDivisibleBy2and3(int n)
{
    if(n%2==0 && n%3==0)
    {
        System.out.println("yess divisible");
    }
    else{
        System.out.println("not divisible");
    }
}
}
class Assignment_no21_Q5
{
public static void main(String args[])
{
Logic obj = new Logic();
obj.printDivisibleBy2and3(30);
}
}