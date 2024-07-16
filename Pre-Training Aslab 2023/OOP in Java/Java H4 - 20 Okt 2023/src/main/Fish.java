package main;

public class Fish extends Animal {
	
	String type;//harus mempunyai constructor

	public Fish(String name, Integer age, String type) {
		super(name,age);//sebuah pemanggil atribut dari class utama(Animal) untuk dimasukkan ke subclass(Fish)
		this.type = type;
	}
	public void Swim() {
		System.out.println(this.name + " Blub blu....");
	}
}
