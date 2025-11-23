class Logic
{
    void printOddNumber(int n)
    {
        
        for(int i=0;i<=n;i++)
        {
            if(i%2!=0){
                System.out.println(i);
            }
           
        }
        
    }
}
class Assignment_no18_Q3{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.printOddNumber(20);
    }
    
}
