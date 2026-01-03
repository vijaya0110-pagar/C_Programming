import java.util.Scanner;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i=0,j=0,iCount=0;
        
        for(i=1;i<=iRow;i++)
        {
            iCount=iCol;
            for(j=1;j<=iCol;j++)
            {
                System.out.print(iCount+"\t");
                iCount--;
            }
            System.out.println();
        }
        
    }
}
class Assignment_no27_Q3 {
    public static void main(String A[]) {
        int iValue1=0,iValue2=0;
        Scanner sobj=new Scanner(System.in);
        System.out.println("enter no of rows :");
        iValue1=sobj.nextInt();
        System.out.println("enter no of columns :");
        iValue2=sobj.nextInt();
        Pattern pobj= new Pattern();
        pobj.Display(iValue1,iValue2);
    }
}

