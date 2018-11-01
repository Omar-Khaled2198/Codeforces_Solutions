import java.util.ArrayList;
import java.util.Scanner;


public class Main
{

    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        int a,b,c=1;
        a=s.nextInt();
        b=s.nextInt();
        while (true)
        {
            if(a-c<0)
            {
                System.out.print("Vladik");
                break;
            }
            else if(b-(c+1)<0)
            {
                System.out.print("Valera");
                break;
            }
            a-=c;
            b-=c+1;
            c+=2;
        }
    }
}