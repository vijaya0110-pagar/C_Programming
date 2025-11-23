class Logic
{
    public void findmin(int iNo1,int iNo2,int iNo3)
    {
        if(iNo1<iNo2 && iNo1<iNo3)
        {
            System.out.println("min:"+iNo1);
        }
        else if(iNo2<iNo1 && iNo2<iNo3)
        {
            System.out.println("min:"+iNo2);
        }
        else 
        {
            System.out.println("min:"+iNo3);
        }
    }
}
public class Assignment_no17_Q4
{
    public static void main(String args[])
    {
        Logic obj =new Logic();
        obj.findmin(13,8,900);
    }
}