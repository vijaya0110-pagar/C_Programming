class Logic
{
    void printEvenNumber(int n)
    {
        
        if(n==0){
        System.out.println("zero");}
        if(n<0)
        {
            System.out.println("negative");
        }
        else
        {
            System.out.println("positive");
        }
        
        
        
    }
}
class Assignment_no18_Q5{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.printEvenNumber(20);
    }
    
}
