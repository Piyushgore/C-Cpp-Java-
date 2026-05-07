class StaticDemo
{
    public static void main(String A[])
    {
        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();
        System.out.println("inside main");
        System.out.println("Value of k: "+Demo.k);
        Demo.gun();
        dobj1.fun();
        dobj2.fun();
    }
}

class Demo
{
    public int i;
    public int j;
    public static int k;

    static
    {
        System.out.println("Inside Static Block");
        k = 51;
    }
    public Demo()
    {
        System.out.println("Inside Constructor");
        this.i = 11;
        this.j = 21;
    }
    public void fun()
    {
        System.out.println("Inside fun Method");
        System.out.println(this.i);
        System.out.println(this.j);
        System.out.println(Demo.k);
    }
    public static void gun()
    {
        System.out.println("Inside gun Method");
        System.out.println(Demo.k);
    }
}

