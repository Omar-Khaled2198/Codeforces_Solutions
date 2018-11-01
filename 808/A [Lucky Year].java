import java.util.*;


public class Main
{

    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int len= (int)(Math.log10(n));
        int f=n/(int)(Math.pow(10,len));
        int x=(int)(f*Math.pow(10,len+1)),y=(int)((f+1)*(Math.pow(10,len)));
        if(x<y)
            System.out.print(x-n);
        else
            System.out.print(y-n);
    }
}
