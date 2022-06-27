from permutation import permute

def solution(H, X, Y):
    """
    (list, int, int) -> int

    Return the maximum of cars that can be produced based on the 
    number of hours (X, Y) two assembly lines must work in a given
    month.
    """
    nbCarProduced = 0

    #get all possible arrangements of cars in 'H'
    poss_list = []
    permute(H, 0, len(H) - 1, poss_list)

    #for each possible arrangment in poss_list
    for possibility in poss_list:
        temp_cars = 0
        temp_X = X
        temp_Y = Y

        #Assign current car to either assembly lines
        for k in possibility:
            #assembly line 'A' can manufacture the k-th car
            if(temp_X >= k):
                temp_cars += 1
                temp_X -= k

            #assembly line 'B' can manufacture the k-th car
            elif(temp_Y >= k):
                temp_cars += 1
                temp_Y -= k
        
        #store nb car produced for THIS arrangement possibility
        nbCarProduced = temp_cars if (temp_cars > nbCarProduced) else nbCarProduced

    #At this point, "nbCarProduced" has the max
    #value for all possible arrangement.
    return nbCarProduced



if __name__ == "__main__":

    #test 1
    H_1 = [1, 1, 3]
    X_1 = 1
    Y_1 = 1
    nbCarProduced_1 = solution(H_1, X_1, Y_1)

    print("The maximum number of cars that can be produced the upcoming month is: {cars}".format(cars = nbCarProduced_1))
    if( nbCarProduced_1 == 2):
        print("Test 1: Success\n")
    else:
        print("Test 1: Failure\n")

    #test 2
    H_2 = [6, 5, 5, 4, 3]
    X_2 = 8
    Y_2 = 9
    nbCarProduced_2 = solution(H_2, X_2, Y_2)

    print("The maximum number of cars that can be produced the upcoming month is: {cars}".format(cars = nbCarProduced_2))
    if(nbCarProduced_2 == 4):
        print("Test 2: Success\n")
    else:
        print("Test 2: Failure\n")

    #test 3
    H_3 = [6, 5, 2, 1, 8]
    X_3 = 17
    Y_3 = 5
    nbCarProduced_3 = solution(H_3, X_3, Y_3)

    print("The maximum number of cars that can be produced the upcoming month is: {cars}".format(cars = nbCarProduced_3))
    if(nbCarProduced_3 == 5):
        print("Test 3: Success\n")
    else:
        print("Test 3: Failure\n")
    

    #test 4
    H_4 = [5, 5, 4, 6]
    X_4 = 8
    Y_4 = 8
    nbCarProduced_4 = solution(H_4, X_4, Y_4)

    print("The maximum number of cars that can be produced the upcoming month is: {cars}".format(cars = nbCarProduced_4))
    if(nbCarProduced_4 == 2):
        print("Test 4: Success\n")
    else:
        print("Test 4: Failure\n")
    