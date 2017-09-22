/**
* Using generic to implement method reuse for many kinds of types
*
* @date 2017.09.22
*/
class Generic{
    
    public static <E> void printAll(E[] array){
	for(E element : array){
	    System.out.print(element);
	}
    }

    public static void main(String[] args){
	Integer [] integerArr = {1,2,3,4,5};
	String [] stringArr = {"hello","Tiger"};
	Double[] doubleArr = {1.0,2.0,3.0,4.0};

	//call generic method
	printAll(integerArr);
	System.out.println();
	printAll(stringArr);
	System.out.println();
	printAll(doubleArr);
    }
}
	    
