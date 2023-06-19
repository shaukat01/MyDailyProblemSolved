class travel{
    travel(){
        System.out.println("Travel class constructor: ");
    }
}
class India extends travel{
    India(){
        System.out.println("India class constructor: ");
    }
}
class Delhi extends India{
    Delhi(){
        System.out.println("Delhi class constructor: ");
    }
}


public class Ques_3{
    public static void main(String[] args){
     System.out.println("Order of Execution are: ");
      Delhi b=new Delhi();
     }
    }

