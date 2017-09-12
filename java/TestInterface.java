/**
 *Interface is a type as well
 *to generate a interface object should not use "new" keyword
 *@date 2017.9.12
 *@author bearer1024
 */
interface Language{
   void screaming();
}

class Cat implements Language{
    public void screaming(){
	System.out.println("miao~~~~");
    }
}

class Dog implements Language{
    public void screaming(){
	System.out.println("Wang~~~~");
    }
}

class TestInterface{
    public static void main(String[] args){
	//This is totally wrong to create interface variable
	Language animalLanguage;
	//	Language animalLanguage = new Language();
	Cat cat = new Cat();
	Dog dog = new Dog();
	//test cat voice use interface variable
	animalLanguage = cat;
	animalLanguage.screaming();
	//test dog voice use interface variable
	animalLanguage = dog;
	animalLanguage.screaming();
    }
}
