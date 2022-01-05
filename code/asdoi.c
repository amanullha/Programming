
import java.io.*;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
class Main
{
  public static void main(String args[]) throws FileNotFoundException
        {

          //int n;
    int f;
    float rat ;



		File file= new File("input.txt"); //file creating
		Scanner sc= new Scanner(file);
		int n = sc.nextInt();
     int fifo[]=new int[f];
     int inp[]=new int[n];
    // for(int i=0;i<n;i++)
     for (int i = 0; i < n; i++) {
     inp[i] = fs.nextInt();
		}

   System.out.println("----------------------");
  for(int i=0;i<f;i++)
  fifo[i]=-1;
   int Hit=0;
  int Fault=0;
  int j=0;
  boolean check;
  for(int i=0;i<n;i++)
    {
        check=false;
        for(int k=0;k<f;k++)
        if(fifo[k]==inp[i])
  {
     check=true;
      Hit=Hit+1;
                 }
 if(check==false)
 {
    fifo[j]=inp[i];
    j++;
    if(j>=f)
    j=0;
     Fault=Fault+1;
                 }

                     }
    rat = (float)Hit/(float)n;
    System.out.println("HIT:"+Hit+"  FAULT:"+Fault+"   HIT RATIO:"+rat);
        }
}
