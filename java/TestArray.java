/**
 *to learn the usage of Array creation and initialization
*/
class TestArray {
    /**
     * Describe <code>main</code> method here.
     *
     * @param args a <code>String</code> value
     */
    public static void main(String [] args){
	//create an array which the length is 5

	int [] arrayOfInt = {1,2,5,6,1};
	//one step to creat
	String [] hello = new String[3];

	//creating and initialing in one step
	int [] one2five = {1,2,3,4,5};

	//print
	for(int i=0; i<arrayOfInt.length; i++){
	    System.out.println("the value of arrayOfInt is: "+arrayOfInt[i]);
	}
    }
}
