int remove_duplicates(int length, int source[length], int destination[length]) {

    // Go through each element in the `source` array
    int destination_upto = 0;
    int source_upto = 0;
    while (source_upto < length) {
        // Check it against every other element we've seen so far.
        int duplicate = 0;
        int checking = 0;
        while (checking < source_upto) {
            if (source[source_upto] == source[checking]) {
                duplicate = 1;
                break;
            }
            checking = checking + 1;
        }

        if (!duplicate) {
            destination[destination_upto] = source[source_upto];
            destination_upto = destination_upto + 1;
        }

        source_upto = source_upto + 1;
    }
    return destination_upto;
}