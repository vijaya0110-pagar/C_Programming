import java.util.Scanner;

class Pattern
{
    public void Display(int iRow,int iCol)
    { 
        int i=0,j=0;
        
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                if(j== iCol+1-i  )
                {
                    System.out.print("#\t");
                }
                else if(j>iCol+1-i)
                    {
                        System.out.printf("@\t");
                    }
                    else
                        {
                            System.out.printf("*\t");
                        }
            }    
            System.out.println();
        }   

    }
}
class Assignment_no32_Q2
{
    public static void main(String A[]) {
        int iValue1=0,iValue2=0;
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter no of rows:");
        iValue1=sobj.nextInt();
        System.out.println("enter no of columns:");
        iValue2=sobj.nextInt();
        Pattern pobj= new Pattern();
        pobj.Display(iValue1,iValue2);
    }
}
