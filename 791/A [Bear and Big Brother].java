import java.util.*;


public class Main
{

    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        int a=in.nextInt(),b=in.nextInt(),c=0;
        while(a<=b)
        {
            a*=3;
            b*=2;
            c++;
        }
        System.out.println(c);
    }
}
