class Logic
{
    void FindFact(int n)
    {
        int iFact=1;
        for(int i=1;i<=n;i++)
        {
            iFact=iFact*i;
           
        }
        System.out.println("factorial:"+iFact);
    }
}
class Assignment_no16_Q3{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.FindFact(5);
    }
    
}
