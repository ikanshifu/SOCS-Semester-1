package main;

public class MyThread extends Thread {
	@Override
	public void run() {
		super.run();
		for(int i = 1; i<=100;i++) {
			try {
				Thread.sleep(1000);
			}catch(InterruptedException e) {
				e.printStackTrace();
			}
			System.out.println(i);
			//Main.counter.increment(i);
		}
	}
}
