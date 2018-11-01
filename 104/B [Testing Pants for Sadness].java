
import java.io.Console;
import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {
        long n,sum=0,x;
        Scanner scanner = new Scanner(System.in);
        n=scanner.nextLong();
        for(int i=1;i<=n;i++)
        {
            x= scanner.nextLong();
            sum+=(x-1)*i+1;
        }
        System.out.print(sum);
    }
}
