

        #include<stdio.h>
        int main()
        {


        int N=100;

        for ( int i=1; i<N; i = i*2 ){

            printf("%d , ", i);
        }


        printf("\n");


        for ( int i=N; i>=1; i = i/2 ){

            printf("%d , ", i);
        }


            return 0;
        }




        Output
        -------

        loop_1: 1       2       4       8       16      32      16 <----( 7 times)

        loop_2: 100     50      25      12      6       3       1  <----( 7 times)
























        #include<stdio.h>
        int main()
        {


        int N=100;


        for ( int i=1; i<N; i = i++) {

                for ( int j=1; j<N; j = j++) {

                        // SOMETHING
                    }
            }





        for ( int i=1; i<N; i = i++){

            // SOMETHING
        }





            return 0;
        }










