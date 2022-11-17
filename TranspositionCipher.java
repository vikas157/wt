import java.util.*;
import java.io.*;
class TranspositionCipher
{
public static void main(String [] args)
{
Scanner sc=new Scanner(System.in);
System.out.println("enter a string");
String s=sc.next();
String a="",b="";
int c;
for(c=0;c<s.length();c++)
{
if(c%2==0)
{
a=a+s.charAt(c);
}
else
{
b=b+s.charAt(c);
}
}
System.out.println(a+b);
}
}
