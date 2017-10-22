import java.util.*;
class Knumber
{
        public static void main(String args[])
        {
                boolean x;
                Scanner sc = new Scanner(System.in);
                Result value = new Result();
                System.out.print(" Enter Value ");
                value.a = sc.nextInt();
                x = value.prime();
                System.out.println(x);
                if(x)
                        System.out.print(" Number is Prime ");
                else
                        System.out.print(" Number is not Prime ");
        }
}
class Result
{
        int a;
        boolean prime()
        {
                int flag = 0,i;
                for(i=2;i<=a-1;i++)
                {
                        if(a%i==0)
                        {
                                flag = 1;
                                break;
                        }
                }
                if(flag ==0)
                        return true;
                else
                        return false;
        }
}
