package main;

public class Bird extends Animal{//fungsi dari extends adalah untuk memasukkan sifat2 dari class Animal
		public Bird(String name, Integer age) {
			super(name,age);//fungsi super adalah memanggil super dari class Animal
		}
		
		public void Fly() {
			System.out.println();
		}
}
