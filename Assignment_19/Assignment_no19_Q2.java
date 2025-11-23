class Logic
{
    void displayGrade(int marks)
    {
        if (marks < 0 || marks > 100) {
            System.out.println("Invalid marks! Please enter marks between 0 and 100.");
        } 
        else if (marks >= 90) {
            System.out.println("Grade: A+");
        } 
        else if (marks >= 80) {
            System.out.println("Grade: A");
        } 
        else if (marks >= 70) {
            System.out.println("Grade: B");
        } 
        else if (marks >= 60) {
            System.out.println("Grade: C");
        } 
        else if (marks >= 50) {
            System.out.println("Grade: D");
        } 
        else {
            System.out.println("Grade: F (Fail)");
        }

    }
}
public class Assignment_no19_Q2{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.displayGrade(82);
    }
}
