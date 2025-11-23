class Logic
{
    void checkPrime(int iNo) {
        if (iNo <= 1) {
            System.out.println(iNo + " is not a prime number.");
            return;
        }
        for (int i = 2; i * i <= iNo; i++) {
            if (iNo % i == 0) {
                System.out.println(iNo + " is not a prime number.");
                return;
            }
        }
        System.out.println(iNo + " is a prime number.");
    }
}
class Assignment_no18_Q1
{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.checkPrime(11);

    }
}