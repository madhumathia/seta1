import java.io.*;
class sumn
{
    public static void main(String args[])throws IOException
    {
        int i,n,sum=0;
    DataInputStream dis = new DataInputStream(System.in);
    n=Integer.parseInt(dis.readLine());
    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }
    System.out.println("the result is "+sum);
}
}

