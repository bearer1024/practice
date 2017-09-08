/**
 *@description to test that does the cast can affect the selection of 
 * variavles, overloaded methods and overridden methods.
 *@date 2017/09/08
 *@author bearer1024
 */

class Animal{
    double weight;
    int old;
    public Boolean sleeping(){
	System.out.println("any animal can sleep");
	return true;
    }
    public boolean hasMaster(){
	System.out.println("normally i am free, don't have master yet");
	return false;
    }
}

class Cat extends Animal{
    String name;
    @Override
      public  boolean hasMaster(){
	System.out.println("Most catty have a master to love them");
	return true;
    }
}

class TestOverridden{
    public static void main(String[] args){
	
    Animal animal = new Animal();
    Cat cat = new Cat();
    animal.weight = 5.1;
    //((Cat)animal).hasMaster();//it certainly shows ClassCastException
    cat.old = 2;
    cat.sleeping();
    cat.hasMaster();
    }
}
