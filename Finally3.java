
class Finally3 {

    public static void main(String args[]) {

        try {
            System.out.println("This is try block: ");
            int a = 20;
            int b = 0;
            int c = a / b;
            System.out.println(c); // this will not exceute
            System.out.println("This is also try block: ");// thi will not execute
        }

        catch (Exception e) {
            System.out.println("This is catch block: ");
            int x = 4;
            int y = 0;
            int z = x / y;
            System.out.println(z);// this will not execute
            System.out.println("This is catch block an it will handle exception which is thrown by try block:"); // this
                                                                                                                 // will
                                                                                                                 // not
                                                                                                                 // exceute
        }

        finally {
            System.out.println(
                    "This is finally block and it will exceute always whether the exception will occur or not: "); // this
                                                                                                                   // will
                                                                                                                   // always
                                                                                                                   // execute
        }
        System.out.println("this is main block which is always execute: ");// in this exapmle it will not execute becuse
                                                                           // catch is also throwing error
                                                                           // we are not not handling the exception
    }
}