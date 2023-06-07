public class MethodOverloading {
    static void fun(){
  System.out.println("Good Morning");
    }
    static void fun(int a){  
        System.out.println("Good Morning"+a);
    }

    // static int fun(int a){    //return type will not make function overloading through different argument function overloading we make
    //     System.out.println("Good Morning"+a);
    // }
    
    static void fun(int a,int b){  //a and b are parametre
        System.out.println("Good Morning"+a+"Sir"+b);
    }
    public static void main(String[] str){
        fun();
        fun(3);
        fun(2,3);  // a and b are argument
    }
}
