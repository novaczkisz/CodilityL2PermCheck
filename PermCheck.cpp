int solution(vector<int> &A) {

    int N = A.size();

    vector<int> counts(N,0);

    for( int i = 0; i < N; i++ ) {
        if( A[i] > N ) return 0;

        if( counts[ A[i] - 1 ] == 1  ) return 0;

        counts[ A[i] - 1 ] += 1;
    }

    for( int i = 0; i < N; i++ ) {
        if( counts[i] != 1 ) return 0;
    }

    return 1;
}
