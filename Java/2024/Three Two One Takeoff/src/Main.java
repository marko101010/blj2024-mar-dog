import java.util.concurrent.TimeUnit;

public class Main {
    public static void main(String[] args) throws InterruptedException {
        System.out.println("Three");
        TimeUnit.SECONDS.sleep(1);
        System.out.println("Two");
        TimeUnit.SECONDS.sleep(1);
        System.out.println("One");
        TimeUnit.SECONDS.sleep(1);
        System.out.println("takeoff");

    }
}