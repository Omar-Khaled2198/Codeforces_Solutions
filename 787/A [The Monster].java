import java.util.*;


public class Main
{

    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        int a=in.nextInt(),b=in.nextInt(),c=in.nextInt(),d=in.nextInt();
        for(int i=0;i<1000;i++)
            for(int x=0;x<1000;x++)
                if(b+i*a==d+x*c)
                {
                    System.out.println(b+i*a);
                    System.exit(0);
                }
        System.out.print(-1);
    }
}
