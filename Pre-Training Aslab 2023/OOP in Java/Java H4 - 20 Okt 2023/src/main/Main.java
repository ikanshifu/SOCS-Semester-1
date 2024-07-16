package main;

public class Main {

	public Main() {
//		Animal hewan = new Animal("Dog, 2");
//		hewan.eat();
//		
//		Bird bird = new Bird("Pipit",12);
//		bird.Fly();
//		bird.Eat();	
		
//		Fish fish = new Fish("Nila", 5, "Hiu");
//		fish.Swim();
//		fish.Eat();
//		fish.type();
		Animal hewan1 = new Animal("Kucing",2);
		Animal hewan2 = new Animal("Rusa",3);
		hewan1.warnaKulit = "Biru";
		
		Animal.Bengong();
		
		final Integer number = 10;
		Integer number = 12;//final memberitahu bahwa angkanya tidak bisa diubah-diubah
		}
	public static void main(String[] args) {
		new Main();
	}

}
