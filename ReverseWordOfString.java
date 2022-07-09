import java.util.*;
public class ReverseWordOfString{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    String str=sc.nextLine();
    String words[]=str.split("\\s");
    String reverse="";
    for(int i=0;i<str.length();i++){
      if(i==str.length()-1)
        reverse=words[i]+reverse;
      else
        reverse=" "+words[i]+reverse;
    }}
  System.out.println("Reverse word of string is:- "+reverse);
}
