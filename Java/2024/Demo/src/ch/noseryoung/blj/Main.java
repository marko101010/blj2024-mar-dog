package ch.noseryoung.blj;

public class Main {

    public static void main(String[] args) {

        Person Marko = new Person("Marko");

        Marko.presentYourself();
    }
package ch.noseryoung.blj;



    public class Person {

        private String name;

        public Person(String name) {
            this.name = name;
        }


        public void presentYourself() {
            System.out.println("Hallo ich bin " + name);
        }
    }

}