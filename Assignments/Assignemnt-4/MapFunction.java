class MapFunction {
    static double map(double v, double inMin, double inMax,
                      double outMin, double outMax) {
        return (v - inMin) * (outMax - outMin) / (inMax - inMin) + outMin;
    }

    public static void main(String[] args) {
        System.out.println(map(37, 0, 100, 32, 212));    // 98.6  (C→F)
        System.out.println(map(82, 0, 100, 0, 4));       // 3.28 
        System.out.println(map(25, 100, 0, 0, 1));       // 0.75 
    }
}
