import java.util.*;


public class Main
{

    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt(),m=s.nextInt();
        if((int)((m-n))/2<(int)((m-n)/3)&&(int)((m-n))!=0)
            System.out.println(3);
        else if((int)((m-n))/2>=(int)((m-n)/3)&&(int)((m-n))!=0)
            System.out.println(2);
        else
            System.out.println(n);
    }
}
