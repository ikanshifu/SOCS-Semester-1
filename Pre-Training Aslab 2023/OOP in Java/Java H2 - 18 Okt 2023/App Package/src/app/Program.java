package app;

import java.util.Scanner;

public class Program {
	public Program() {
//		System.out.println("Hello World!");
//		printHello();
//		int result = max(3,5);
//		System.out.println(result);
//		recursion();
//		System.out.println("Aku sudah selesai");
		
	}
	
//	public void printHello() {
//	System.out.println("Hello World from me!");
//	}
	
	public int max(int x, int y) {
		Scanner scanner = new Scanner(System.in);	
	}
	public int getInt(int min, int max) {
		int output = min -1;
		do {
			try {
				output = scanner.nextInt();
				scanner.nextLine();
			}catch (Exceptione e) {}
		}while (output< min ||output>max)
			return output;
	}
//		if(x>y) {
//			return x;
//		}else {
//			return y;
//		}
//	}
//	
	public void recursion(int n) {
		n--;
		if(N>0) {
			System.out.printlnr("Rercursive");
		}
	}
	public static void main(String[] args) {
		new Program();
	}

}
