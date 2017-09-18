/**
 *@description java can use ellipsis symbol in a method's parameter list that stands for a variable number of parameter of the same type
 *@date 2017.09.18
 */
class TestEllipsisSymbol{
    public void printAll(String ... animals){
	if(animals.length==0){
	    System.out.println("Be serious pls");
	}
	else{
	    for(int i=0; i<animals.length; i++){
		System.out.print(animals[i]+" ");
		    }
	}
    }
	    
    public static void main(String [] args){
	TestEllipsisSymbol test = new TestEllipsisSymbol();
	String[] animalll = {"monkey","catty","piggy","doggy"};
	test.printAll();
	test.printAll(animalll);
	System.out.println("\nno piggy next time");
	test.printAll(animalll[0],animalll[1],animalll[3]);
	System.out.println();
    }
}
	    
