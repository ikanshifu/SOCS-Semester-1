package main;

public class Food {
	public int cookTime;
	public int price;
	public String name;
	public Food(int cookTime, int price, String name) {
		super();
		this.cookTime = cookTime;
		this.price = price;
		this.name = name;	
	}
	public int getCookTime() {
		return cookTime;
	}
	public void setCookTime(int cookTime) {
		this.cookTime = cookTime;
	}
	public int getPrice() {
		return price;
	}
	public void setPrice(int price) {
		this.price = price;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	
	public void start() {
		
	}
	
	public void cooking() {
		
	}
}
