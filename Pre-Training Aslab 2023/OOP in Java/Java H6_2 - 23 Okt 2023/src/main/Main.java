package main;
import java.util.Vector;

public class Main {
	
	public static Counter counter = new Counter(0);
	public Main() {
		MyThread t1= new MyThread();
		t1.start();
		
		MyThread t2= new MyThread();
		t2.start();
		
		try {
			t1.join();
			t2.join();
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		
		Vector<Food> foods = new Vector<>();
		NasiUduk nu1 = new NasiUduk(5,10,"Nasi uduk punya vito",50,t2);
		foods.add(nu1);
		for(Food food : foods) {
			Thread t3 = new Thread(nu1);
			t3.start();
		}
		Sushi s1 = new Sushi(15, "Sushi ikan lele", 200,"Lele");
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Main();
	}

}
