import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {
	  Scanner in=new Scanner(System.in);
	  int n=in.nextInt();
	  int[][] a=new int[n][n];
	  for(int i=0;i<n;i++)
      {
          for(int x=0;x<n;x++)
          {
              a[i][x]=in.nextInt();
          }
      }
      for(int i=0;i<n;i++)
      {
          for(int x=0;x<n;x++)
          {
              if(a[i][x]==1)
                  continue;
              else
              {
                  boolean check=false;
                  for(int l=0;l<n;l++)
                  {
                      for(int y=0;y<n;y++)
                      {
                          if(a[i][l]+a[y][x]==a[i][x])
                          {
                              check=true;
                              break;
                          }
                      }
                      if(check==true)
                          break;
                  }
                  if(check==false)
                  {
                      System.out.println("No");
                      System.exit(0);
                  }
              }
          }
      }
      System.out.println("Yes");
    }
}
