/**
 *@description to familiar with the java enhanced fro loop
 *@date 2017.9.15
 */
class TestSemicolonLoop {
    static int [] numbers = {1,2,3,4,5};
    static String [] animals = {"cat","dog","pig"};

    public static void main(String [] args){
	for(int number:numbers){
	    System.out.print(number);
	    System.out.print(",");
	}
	System.out.println();
	for(String animal : animals){
	    System.out.println(animal);
	}
    }
}
