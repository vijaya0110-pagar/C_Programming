class Logic
{
    void printEvenNumber(int n)
    {
        int iFact=1;
        for(int i=0;i<=n;i++)
        {
            if(i%2==0){
                System.out.println(i);
            }
           
        }
        
    }
}
class Assignment_no18_Q2{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.printEvenNumber(20);
    }
    
}
