// public class tryCatchThrows {
//     public static void waitt() throws InterruptedException {
//         for (int i = 0; i <= 10; i++) {
//             System.out.println(i);
//             Thread.sleep(1000);// 1000ms=1sec
//         }
//     }

//     public static void main(String[] args) {
//         try {
//             waitt();
//             System.out.println(10 / 0);
//         } catch (Exception e) {
//             System.out.println("Exception Handled: ");
//         }
//         System.out.println("Main Method Ended: ");
//     }

// }

// both are correct way we can write method just before main or we can write method below main

public class tryCatchThrows {
    public static void main(String[] args) {
        try {
            waitt();
            System.out.println(10 / 0);
        } catch (Exception e) {
            System.out.println("Exception Handled: ");
        }
        System.out.println("Main Method Ended: ");
    }

    public static void waitt() throws InterruptedException {
        for (int i = 0; i <= 10; i++) {
            System.out.println(i);
            Thread.sleep(1000);// 1000ms=1sec
        }
    }

}
