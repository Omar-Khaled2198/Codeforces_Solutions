import java.util.*;

public class Main
{

    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        long a=in.nextLong(),b=in.nextLong(),c=1;
        for(long i=Math.min(a,b);i>=1;i--)
            c*=i;
        System.out.print(c);
    }
}
