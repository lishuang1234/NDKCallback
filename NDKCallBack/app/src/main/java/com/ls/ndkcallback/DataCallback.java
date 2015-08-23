package com.ls.ndkcallback;

/**
 * Created by ls on 15-7-25.
 */
public class DataCallback {
    // C调用java空方法
    public void helloFromJava() {
        System.out.println("helloFromJava() 被调用了!");
    }

    // C调用java中的带两个int参数的方法
    public int Add(int x, int y) {
        System.out.println("Add(int x, int y) 被调用了!");
        return x + y;
    }

    // C调用java中参数为string的方法
    public void printString(String s) {
        System.out.println("printString(String s) 被调用了! " + s);
    }

    public native void method1();
    public native void method2();
    public native void method3();

}
