package main;
import java.util.InputMismatchException;
import java.util.Scanner;
public class Main {
	Scanner scan = new Scanner(System.in);
	public Main() throws Exception{
		//Aplikasi Calculator Pembagian
		int a = 0,b;
		try {
			a = scan.nextInt();
			scan.nextLine();
			b = scan.nextInt();
			scan.nextLine();
			System.out.println(a + "/" + b + "=" + a/b);
		} catch (InputMismatchException e) {
			System.out.println("a and b must be a number");
		} catch (ArithmeticException e) {
			System.out.println("A number cannot be divided");
		}finally {
			System.out.println("done");
		}
		if(a<5) {
			throw new ArithmeticException("a tidak boleh lebih dari 5");
		}
		
		function1();
	

	}
	
	public void function1() throws Exception{
		System.out.println(1/0);
	}

	public static void main(String[] args) {
		try {
			new Main();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
