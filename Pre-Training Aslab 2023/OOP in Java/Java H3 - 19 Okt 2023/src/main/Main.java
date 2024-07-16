package main;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Vector;
import model.Student;
import view.MenuView;

public class Main {
	ArrayList<String> names = new ArrayList<>();
//  index 0 -> Arya
//  index 1 -> Rico
	ArrayList<Student> students = new ArrayList<>();
//	student1
//	sutdent2
	Vector<Student> studentVector = new Vector<>();
	Scanner scan = new Scanner(System.in);
	
	public Main() {
//		Student student1 = new Student("Arya", 21);
//		Student student2 = new Student("Rico", 19);
//		System.out.println("Student 1 : "+student1.getStudentName(false) +","+student1.getStudentAge());
//		System.out.println("Student 2 : "+student2.getStudentName() +","+student2.getStudentAge());
//		student1 = null;
//		
//		students.add(student1);
//		students.add(new Student("Rico, 19"));
//		students.remove(student1);

		MenuView menu = new MenuView();
		Integer inputChoice = 0;
		do {
			menu.printMainMenu();
			inputChoice = scan.nextInt();
			switch (inputChoice) {
			case 1:
			//view
				viewStudents();
				break;
			case 2:
			//insert	
				insertStudent();
				break;
			case 3:
			//remove
			break;
			}
		}while(inputChoice > 0 && inputChoice < 4);
	}

//	String huruf = "3";
//	Integer a = 4;
//	//Integer.parseInt 1-> mengubah string menjadi integer
//	//Kalau salah satu variable atau output adalah string bakal dianggap string semua
//	System.out.println(a.toString() + Integer.parseInt(huruf));
	
	private void removeStudent() {
		viewStudents();
		Integer choice;
		System.out.println("Delete student number : ");
		choice = scan.nextInt();
		students.remove(choice -1);
	}
	
	private void insertStudent() {
		String name;
		Integer age;
		System.out.println("Input name : ");
		name = scan.nextLine();
		System.out.println("Input age: ");
		age = scan.nextInt();
		scan.nextLine();
		
		Student newStudent = new Student(name,age);
		students.add(newStudent);
		System.out.println("You have inserted a new student !");
	}
	private void viewStudents(){
		
		if(students.isEmpty()) System.out.println("There's no student data here");
		else {
			// student 1 -> arya 21
			// student 2 -> rico 20
			// student 3 -> jason 24
			for(Student currStudent  : students) {
				System.out.println("Student " + (students.indexOf(currStudent)+1)+ " : "+ currStudent.getStudentName(true)+ ","+ currStudent.getStudentAge());
			}
			
		}
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Main();//digunakan untuk memanggil constructor yaitu public Main
	}

}
