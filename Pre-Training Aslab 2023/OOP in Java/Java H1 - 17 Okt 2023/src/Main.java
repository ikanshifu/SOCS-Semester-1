import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;
 
//main java harus selalu bersih, oleh sebab itu kita menggunakan class lainnya
//class main adalah kelas utama, kalau misalnya buat class baru jangan berbeda namanya, selalu kasih nama Main
public class Main {
//class seperti pembangun
	
	Random random = new Random();
	public string generate(String Type) {
		String id = "";
		if(Type.equals("Premium")) {
			id = "PR";
		}else if(Type.equals("Standard")) {
			id = "ST";
		}
		return id;
	}
	
	public Main() {//constructor
	//	1.Input and Ouput
		Scanner scanner = new Scanner(System.in);//setiap class diawali huruf capital(Scanner),fungsi ini bertujuan untuk membuat item baru di class scanner
//		System.out.println("Hello World!");//Output,ln adalah singkatan dari line, fungsinya seperti \n di C;
		//Shortcut
			//Sout - > Ctrl + space
			//Sysout-> Ctrl + space
			//Memindahkan data yang sedang dihighlight -> alt + arrow keys
			//Nambahin space baru -> ctrl+alt+arrow key
			//Import library -> Ctrl + space
		
		//Variabel[Datatype namavariabel]
			//int = bilangan bulat / Integer
			//char = huruf / Char
			//float = decimal / Float
			//double = decimal /Double
			//boolean = True/False / Boolean
			//String
			String name = "John";
			String name1;
			int age1;
			int age = 19;
			System.out.print("Name: ");
			name1 = scanner.nextLine();
			System.out.print("Age: ");
			age1 = scanner.nextInt();
	//2.Operators
		//Arithmetic Operator(+ - * /)
			int num1 = 0;
			int num2 = 0;
			int result = num1 + num2;
		    System.out.println("num1: ");
		    num1 = scanner.nextInt();
		    System.out.println("num2: ");
		    num1 = scanner.nextInt();
		    System.out.println("Result: " + result);
		//Logical Operator(&& || !)
		    int num = 5;
		    int num3 = 10;
		    System.out.println(!(num > 3 || num3 > 5));
		//Bitwise Operator(| & << >> ~)
		    System.out.println(~6);
		    System.out.println(6>>2);
	//3.Selection
		//If else
		    int num = 3;
		    int num1 = 5;
		    if(num > num1) {
		    	System.out.println("True");
		    }else {
		    	System.out.println("False");
		    }
		//Switch Case
		    int choice;
		    String name;
		    System.out.println("---MENU---");
		    System.out.println("1. Play");
		    System.out.println("2. Exit");
		    System.out.println(">> ");
		    choice = scanner.nextInt();
		    switch(choice) {
		    case 1:
		    	System.out.print("Name: ");
		    	name = scanner.nextLine();
		    	System.out.println(name);
		    	break;
		    case 2:
		    	break;
		//For
		//While
		    int i = 0;
		    while(true) {
		    	System.out.println();
		    }
		    continue;
		//Do While(akan sering dipakai untuk validasi)
		    
	//Array
		    int []numList = {1,2,3,4};
		    for(int i=0;i<numList.length;i++) {
		    	System.out.println(numList[i]);
		    }
	//Array List
		    ArrayList<Integer> numList = new ArrayList<>();
		    Vector<Integer> numList2 = new Vector<>();
		    numList.add(1);
		    numList.add(2);
		    numList.add(3);
		    numList.add(4);
		    numList.add(5);
		    
	//4.Random
		System.out.println(random.nextInt(10));
		random.nextInt((man - min)+1)+min;
		String type;
		String ID;
		ID = generate(type);
		//Premium = PR[0-9][0-9][0-9];
		//Standard = ST[0-9][0-9][0-9];
		do {
			System.out.print("type: ");
			type = scanner.nextLine();
		}while(!(type.equals("Premium") || type.equals("Standard")));
	System.out.println(Integer.toBinaryString(110));//integer ke string
	System.out.println(Integer.parseInt("10"));//String ke integer
	System.out.println();
	
	}	
	public static void main(String[] args) {
		new Main();

	}

}
