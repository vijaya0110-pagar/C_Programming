class Logic
{
    int power=1;
    void calclulatePower(int base,int exp)
    {
        for(int i=1;i<=exp;i++)
        {
            power=power*2;
        }
        System.out.println(power);
    }
}
public class Assignment_no19_Q5{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.calclulatePower(2,5);
    }
}
