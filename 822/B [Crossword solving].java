import java.util.*;


public class Main
{

    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt(),m=in.nextInt();
        String s=in.next(),t=in.next();
        int begInd=0,min=1001,count=0;
        for(int i=0;i<m-n+1;i++)
        {
            for(int x=i;x<i+n;x++)
            {
                if(t.charAt(x)!=s.charAt(x-i))
                    count++;
            }
            if(min>count)
            {
                min=count;
                begInd=i;
            }
            count=0;
        }
        System.out.println(min);
        for(int i=begInd;i<begInd+n;i++)
        {
            if(t.charAt(i)!=s.charAt(i-begInd))
                System.out.print(i-begInd+1+" ");
        }
    }
}