package JAVA;

public class Main {
    static void myMethod() {
        System.out.println("my method");
    }

    public static void main(String[] args) {
        System.out.println("Hello,world");
        System.out.println("Hello JAVA");
        System.out.println("hello bzh");
        System.out.println(2);
        System.out.println(2 + 2);
        System.out.println(2 * 2);
        // This is a comment
        int myNum = 1;
        System.out.println(myNum);
        char myChar = 'a';
        System.out.println(myChar);
        String myStr = "This is Java";
        System.out.println(myStr);
        float myFloat = 1.120f;
        System.out.println(myFloat);
        boolean myBool = true;
        System.out.println(myBool);
        String firstName = "Bao";
        String lastName = "Zhuhan";
        String fullName = firstName + lastName;
        System.out.println(fullName);
        int x = 1;
        int y = 2;
        System.out.println(x + y);
        int a, b, c;
        a = b = c = 3;
        System.out.println(a + b + c);
        double myDouble = 10.2d;
        System.out.println(myDouble);
        double widenCasting = 9.0f;
        System.out.println(widenCasting);
        float narrowCasting = (float) 9.0d;
        System.out.println(narrowCasting);
        String greeting = "hello";
        System.out.println("The length of variable \"greeting \" is :" + greeting.length());
        String txt = "can you find the location of the locate ?";
        System.out.println(txt.indexOf("you"));
        txt.toUpperCase();
        System.out.println(txt.toLowerCase());
        System.out.println(firstName.concat(lastName));
        System.out.println(Math.max(3, 4));
        System.out.println(Math.min(10, 20));
        System.out.println(Math.sqrt(2));
        System.out.println(Math.abs(-1));
        int randomNum = (int) (Math.random() * 101);
        System.out.println(randomNum);
        boolean isJavaFun = true;
        if (isJavaFun) {
            System.out.println("java is fun");
        } else {
            System.out.println("java is not fun");
        }

        // while loop
        int i = 0;
        while (i < 5) {
            System.out.println(i);
            i++;
        }

        i = 0;
        do {
            System.out.println(i);
            i++;
        } while (i < 5);

        for (i = 0; i < 5; i++) {
            System.out.println(i);
        }

        // java nested loop
        for (i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                System.out.println(i + j);
            }
        }

        String[] cars = { "volvo", "bmw", "ford" };
        for (String k : cars) {
            System.out.println(k);
        }

        // java break
        System.out.println("java break:");
        for (i = 0; i < 9; i++) {
            if (i == 4)
                break;
            System.out.println(i);
        }

        // java continue
        System.out.println("java continue");
        for (i = 0; i < 9; i++) {
            if (i == 4) {
                continue;
            }
            System.out.println(i);
        }

        for (i = 0; i < cars.length; i++) {
            System.out.println(cars[i]);
        }

        int[][] myNumbers = { { 1, 2, 3, 4 }, { 5, 6, 7 } };
        for (i = 0; i < myNumbers.length; i++) {
            for (int j = 0; j < myNumbers[i].length; j++) {
                System.out.println(myNumbers[i][j]);
            }
        }
    }

}
