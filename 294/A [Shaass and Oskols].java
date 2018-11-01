import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {
	  Scanner in=new Scanner(System.in);
	  int n=in.nextInt(),x,y,t;
	  int[] a=new int[n];
	  for(int i=0;i<n;i++)
          a[i]=in.nextInt();
	  t=in.nextInt();
	  for(int i=0;i<t;i++)
      {
          x=in.nextInt();
          y=in.nextInt();
          x--;
          if(x-1>-1)
              a[x-1]+=y-1;
          if(x+1<n)
              a[x+1]+=a[x]-y;
          a[x]=0;
      }
      for(int i=0;i<n;i++)
          System.out.println(a[i]);

    }
}
