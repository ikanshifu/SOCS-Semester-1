package main;

public class Animal {
	String name;
	Integer age;//atribut class
	static String warnaKulit;//membuat string menempel dengan class dan bukan object
	
	public Animal(String name, Integer age) {
		super();//
		this.name = name;
		this.age = age;
		//fungsi this menunjuk ke diri sendiri(ke atribut class)
	}
	public void Eat() {
		System.out.println("Eat");
	}
	
	public static void Bengong() {
		System.out.println("Melamun....");
	}
}
