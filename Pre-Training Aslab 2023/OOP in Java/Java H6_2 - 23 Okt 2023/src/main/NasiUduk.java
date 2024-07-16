package main;

public class NasiUduk extends Food implements Runnable {
	private int spicyness;
	private Thread t;
	
	public NasiUduk(int cookTime, int price,String name, int spicyness,Thread t){
		super(cookTime,price,name);
		this.spicyness = spicyness;	
		this.t=t;
	}

	public int getSpicyness() {
		return spicyness;
	}

	public void setSpicyness(int spicyness) {
		this.spicyness = spicyness;
	}

	@Override
	public void run() {
		Cooking();
	}
	
	@Override
	public void start() {
		t = new Thread(this);
		t.start();
	}
	public void Cooking() {
		try {	
			while(getCookTime()>0){
				System.out.println();
				Thread.sleep(1000);
			}
		}catch(InterruptedException e) {
			e.printStackTrace();
		}
		System.out.println(this.getName()+ "is being cooked" + getCookTime() + "left");
		setCookTime(getCookTime()-1);
		System.out.println(getName() + "sudah matang");
	}
}
