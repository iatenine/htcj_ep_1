class JavaHello
{
    public static String[] planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

    public static void main(String args[])
    {
        int x = 0;
        while(x < 9){
            System.out.println(get_planet(x));
            x++;
        }
    }

    public static String get_planet(int index){
        return planets[index];
    }
}