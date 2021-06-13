class Histogram{
    public static int [] histogram(int [] a, int m){
        /*
            Description: Returns an array of length "m" whose
            ith entry is the number of times the integer "i" appeared
            in the argument array.

            Parameters: a --> an array
                        m --> an integer
        */

        //final array - filled with "zeros" by default
        int [] results = new int [m];

        //count occurences as we move through the array
        for(int i = 0; i<a.length ; i++){
            results[a[i]]++;
        }
        return results;
    }
    public static void main(String[] args) {
        int [] values = {1,2,4,4,5,6,7,7,7,7,4,4,3}; //size = 13
        int [] results = histogram(values, values.length);

        for(int i = 0; i<results.length; i++){
            System.out.println(i+ " appears "+ results[i]+ " times");
        }

        int sum = 0;
        for(int i: results){
            sum+=i;
        }
        System.out.println("The sum of frequencies in \"result\" is: " + sum); //13
    }
}