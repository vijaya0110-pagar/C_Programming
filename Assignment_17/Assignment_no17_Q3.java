class Logic
{
    public void findMax(int iNo1,int iNo2)
    {
        if(iNo1>iNo2)
        {
            System.out.println("max:"+iNo1);
        }
        else{
            System.out.println("max:"+iNo2);
        }
    }
}
public class Assignment_no17_Q3
{
    public static void main(String args[])
    {
        Logic obj =new Logic();
        obj.findMax(13,89);
    }
}