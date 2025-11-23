class Logic
{
    void calculatesum(int n)
    {
        int iSum=0;
        for(int i=1;i<=n;i++)
        {
            iSum=iSum+i;
           
        }
        System.out.println("sum:"+iSum);
    }
}
class Assignment_no16_Q1{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.calculatesum(10);
    }
    
}
