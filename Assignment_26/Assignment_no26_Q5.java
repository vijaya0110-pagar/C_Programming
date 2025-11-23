import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt=0;
        
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            System.out.print(iCnt*2+"\t");
           
        }
        System.out.println();
    }
}
class Assignment_no26_Q5 {
    public static void main(String A[]) {
        int iValue=0;
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter no of elements :");
        iValue=sobj.nextInt();
        
        Pattern pobj= new Pattern();
        pobj.Display(iValue);
    }
}

