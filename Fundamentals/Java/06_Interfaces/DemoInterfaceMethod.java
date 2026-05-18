interface Circle
{
    //Characteristics       // public static final
    float PI = 3.14f;       
    //Behaviours (Methods)  //public abstract
    float Area(float Radius);       
    float Circumference(float Radius);
}

class Marvellous implements Circle
{
    //Error due to missing body of area and circumference
}

class DemoInterfaceMethod
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();
    }
}
