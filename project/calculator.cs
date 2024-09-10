using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using System.Text;
using System.Threading.Tasks;
 
 // Compiler version 4.0, .NET Framework 4.5


 namespace Dcoder
 {
   public class Program
   {
     public static void Main(string[] args)
     {
       string choc;
       do{
         int res;
         Console.Write("Nominal Pertama: ");
         int a = Convert.ToInt32(Console.ReadLine());
         Console.Write("Nominal Kedua: ");
         int b = Convert.ToInt32(Console.ReadLine());
         Console.Write("Pilih Operator: + - * /");
         string symbol = Console.ReadLine();
         
         switch (symbol)
                {
                    case "+":
                        res = a + b;
                        Console.WriteLine("Hasil: " + res);
                        break;
                    case "-":
                        res = a - b;
                        Console.WriteLine("Hasil: " + res);
                        break;
                    case "*":
                        res = a * b;
                        Console.WriteLine("Hasil: " + res);
                        break;
                    case "/":
                        res = a / b;
                        Console.WriteLine("Hasil: " + res);
                        break;
                    default:
                        Console.WriteLine("Wrong input");
                        break;
                }
                Console.Write("Do you want to continue(y/n):");
          choc = Console.ReadLine();
       } while(choc=="y");
     }
   }
 }
