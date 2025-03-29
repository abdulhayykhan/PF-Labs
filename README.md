## Object-Oriented Programming (OOP) - Scenario Based Java Practice Programs

### Scenario 1: Simple Calculator
**Question:** Write a Java program that takes two numbers and an operator (+, -, *, /) as input and performs the corresponding operation using functions.

```java
import java.util.Scanner;
class Calculator {
    static double calculate(double a, double b, char op) {
        switch (op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/': return (b != 0) ? a / b : Double.NaN;
            default: return Double.NaN;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        double num1 = sc.nextDouble();
        System.out.print("Enter second number: ");
        double num2 = sc.nextDouble();
        System.out.print("Enter operator (+, -, *, /): ");
        char op = sc.next().charAt(0);
        System.out.println("Result: " + calculate(num1, num2, op));
        sc.close();
    }
}
```

### Scenario 2: Check Even or Odd
**Question:** Write a Java program that takes a number as input and checks whether it is even or odd using a function.

```java
import java.util.Scanner;
class EvenOddChecker {
    static void checkEvenOdd(int num) {
        if (num % 2 == 0) {
            System.out.println(num + " is Even.");
        } else {
            System.out.println(num + " is Odd.");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = sc.nextInt();
        checkEvenOdd(number);
        sc.close();
    }
}
```

### Scenario 3: Factorial Calculation
**Question:** Write a Java program to compute the factorial of a number using a loop.

```java
import java.util.Scanner;
class Factorial {
    static long factorial(int num) {
        long fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println("Factorial of " + num + " is " + factorial(num));
        sc.close();
    }
}
```

### Scenario 4: Prime Number Checker
**Question:** Write a Java program that checks whether a number is prime or not using a function.

```java
import java.util.Scanner;
class PrimeChecker {
    static boolean isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println(num + " is " + (isPrime(num) ? "Prime" : "Not Prime"));
        sc.close();
    }
}
```

### Scenario 5: Constructor Overloading Example
**Question:** Create a class "Student" with constructors for different initialization scenarios.

```java
class Student {
    String name;
    int age;
    Student(String name) {
        this.name = name;
        this.age = 18; // Default age
    }
    Student(String name, int age) {
        this.name = name;
        this.age = age;
    }
    void display() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
    public static void main(String[] args) {
        Student s1 = new Student("Ali");
        Student s2 = new Student("Sara", 22);
        s1.display();
        s2.display();
    }
}
```

6. **Palindrome Checker**
```java
import java.util.Scanner;
class Palindrome {
    static boolean isPalindrome(String str) {
        int left = 0, right = str.length() - 1;
        while (left < right) {
            if (str.charAt(left) != str.charAt(right)) return false;
            left++;
            right--;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a word: ");
        String str = sc.next();
        System.out.println(str + " is " + (isPalindrome(str) ? "a Palindrome" : "not a Palindrome"));
        sc.close();
    }
}
```

7. **Fibonacci Series using Recursion**
```java
import java.util.Scanner;
class Fibonacci {
    static int fibonacci(int n) {
        if (n <= 1) return n;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of terms: ");
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            System.out.print(fibonacci(i) + " ");
        }
        sc.close();
    }
}
```

8. **Armstrong Number Checker**
```java
import java.util.Scanner;
class Armstrong {
    static boolean isArmstrong(int num) {
        int original = num, sum = 0, digits = String.valueOf(num).length();
        while (num > 0) {
            int digit = num % 10;
            sum += Math.pow(digit, digits);
            num /= 10;
        }
        return sum == original;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println(num + " is " + (isArmstrong(num) ? "an Armstrong number" : "not an Armstrong number"));
        sc.close();
    }
}
```

9. **Reverse a Number**
```java
import java.util.Scanner;
class ReverseNumber {
    static int reverse(int num) {
        int rev = 0;
        while (num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println("Reversed number: " + reverse(num));
        sc.close();
    }
}
```

10. **Sum of Digits of a Number**
```java
import java.util.Scanner;
class SumOfDigits {
    static int sumDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println("Sum of digits: " + sumDigits(num));
        sc.close();
    }
}
```

11. **Leap Year Checker**
```java
import java.util.Scanner;
class LeapYear {
    static boolean isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a year: ");
        int year = sc.nextInt();
        System.out.println(year + " is " + (isLeapYear(year) ? "a Leap Year" : "not a Leap Year"));
        sc.close();
    }
}
```

12. **Swapping Two Numbers without a Third Variable**
```java
import java.util.Scanner;
class SwapNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int a = sc.nextInt();
        System.out.print("Enter second number: ");
        int b = sc.nextInt();
        a = a + b;
        b = a - b;
        a = a - b;
        System.out.println("After swapping: First number = " + a + ", Second number = " + b);
        sc.close();
    }
}
```

13. **Multiplication Table of a Number**
```java
import java.util.Scanner;
class MultiplicationTable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        for (int i = 1; i <= 10; i++) {
            System.out.println(num + " x " + i + " = " + (num * i));
        }
        sc.close();
    }
}
```

14. **Sorting an Array using Bubble Sort**
```java
import java.util.Arrays;
import java.util.Scanner;
class BubbleSort {
    static void bubbleSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        bubbleSort(arr);
        System.out.println("Sorted array: " + Arrays.toString(arr));
        sc.close();
    }
}
```

15. **Binary Search Implementation**
```java
import java.util.Arrays;
import java.util.Scanner;
class BinarySearch {
    static int binarySearch(int[] arr, int key) {
        int left = 0, right = arr.length - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == key) return mid;
            if (arr[mid] < key) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements in sorted order:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.print("Enter the key to search: ");
        int key = sc.nextInt();
        int result = binarySearch(arr, key);
        System.out.println((result == -1) ? "Element not found" : "Element found at index " + result);
        sc.close();
    }
}
```

16. **Factorial of a Number using Recursion**
```java
import java.util.Scanner;
class Factorial {
    static int factorial(int n) {
        return (n == 0) ? 1 : n * factorial(n - 1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println("Factorial of " + num + " is " + factorial(num));
        sc.close();
    }
}
```

17. **Palindrome Checker for a String**
```java
import java.util.Scanner;
class PalindromeChecker {
    static boolean isPalindrome(String str) {
        int left = 0, right = str.length() - 1;
        while (left < right) {
            if (str.charAt(left) != str.charAt(right)) return false;
            left++;
            right--;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println(str + " is " + (isPalindrome(str) ? "a Palindrome" : "not a Palindrome"));
        sc.close();
    }
}
```

18. **Armstrong Number Checker**
```java
import java.util.Scanner;
class ArmstrongNumber {
    static boolean isArmstrong(int num) {
        int sum = 0, temp = num, digits = String.valueOf(num).length();
        while (temp > 0) {
            sum += Math.pow(temp % 10, digits);
            temp /= 10;
        }
        return sum == num;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println(num + " is " + (isArmstrong(num) ? "an Armstrong number" : "not an Armstrong number"));
        sc.close();
    }
}
```

19. **Reverse a Number**
```java
import java.util.Scanner;
class ReverseNumber {
    static int reverse(int num) {
        int rev = 0;
        while (num != 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println("Reversed Number: " + reverse(num));
        sc.close();
    }
}
```

20. **Fibonacci Series using Loops**
```java
import java.util.Scanner;
class FibonacciSeries {
    static void fibonacci(int n) {
        int a = 0, b = 1;
        System.out.print("Fibonacci Series: " + a + " " + b);
        for (int i = 2; i < n; i++) {
            int next = a + b;
            System.out.print(" " + next);
            a = b;
            b = next;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of terms: ");
        int num = sc.nextInt();
        fibonacci(num);
        sc.close();
    }
}
```

21. **Prime Number Checker**
```java
import java.util.Scanner;
class PrimeChecker {
    static boolean isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println(num + " is " + (isPrime(num) ? "Prime" : "Not Prime"));
        sc.close();
    }
}
```

22. **Sum of Digits of a Number**
```java
import java.util.Scanner;
class SumOfDigits {
    static int sumDigits(int num) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println("Sum of digits: " + sumDigits(num));
        sc.close();
    }
}
```

23. **Greatest Common Divisor (GCD) using Recursion**
```java
import java.util.Scanner;
class GCDRecursion {
    static int gcd(int a, int b) {
        return (b == 0) ? a : gcd(b, a % b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int num1 = sc.nextInt();
        System.out.print("Enter second number: ");
        int num2 = sc.nextInt();
        System.out.println("GCD of " + num1 + " and " + num2 + " is " + gcd(num1, num2));
        sc.close();
    }
}
```

24. **LCM of Two Numbers**
```java
import java.util.Scanner;
class LCMCalculator {
    static int gcd(int a, int b) {
        return (b == 0) ? a : gcd(b, a % b);
    }
    static int lcm(int a, int b) {
        return (a * b) / gcd(a, b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int num1 = sc.nextInt();
        System.out.print("Enter second number: ");
        int num2 = sc.nextInt();
        System.out.println("LCM of " + num1 + " and " + num2 + " is " + lcm(num1, num2));
        sc.close();
    }
}
```

25. **Count Vowels in a String**
```java
import java.util.Scanner;
class VowelCounter {
    static int countVowels(String str) {
        int count = 0;
        for (char ch : str.toLowerCase().toCharArray()) {
            if ("aeiou".indexOf(ch) != -1) count++;
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("Number of vowels: " + countVowels(str));
        sc.close();
    }
}
```

26. **Find Largest and Smallest Element in an Array**
```java
import java.util.Scanner;
class ArrayMinMax {
    static void findMinMax(int[] arr) {
        int min = arr[0], max = arr[0];
        for (int num : arr) {
            if (num < min) min = num;
            if (num > max) max = num;
        }
        System.out.println("Smallest: " + min + ", Largest: " + max);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.print("Enter elements: ");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        findMinMax(arr);
        sc.close();
    }
}
```

