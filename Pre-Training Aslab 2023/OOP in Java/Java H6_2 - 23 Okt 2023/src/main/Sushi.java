package main;

public class Sushi extends Food implements Runnable{
	private String fishType;
	private Thread t;
	
	public Sushi(int cookTime, int price, String name, String fishType, Thread t) {
		super(cookTime, price, name);
		this.fishType = fishType;	
		this.t = t;
	}

	public String getFishType() {
		return fishType;
	}

	public void setFishType(String fishType) {
		this.fishType = fishType;
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
				Thread.sleep(500);
			}
		}catch(InterruptedException e) {
			e.printStackTrace();
		}
		System.out.println(this.getName()+ "is being cooked" + getCookTime() + "left");
		setCookTime(getCookTime()-1);
		System.out.println(getName() + "sudah matang");
	}
}
