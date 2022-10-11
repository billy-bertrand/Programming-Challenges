def climbStairs(n):
    ways = 0

    # define climb function
    def climb(step):
        nonlocal ways
        # We reached the top
        if step == n:
            ways += 1
            return 0
        # We missed (went over) the top
        if step > n:
            return 0
        else:
            climb(step + 1)

            climb(step + 2)
    # end definition

    # Start climbing from 0
    climb(0)
    return ways


def climbStairs_Optimized(n):
    array = [0 for _ in range(n + 2)]

    # Note: array[0] is left unused
    array[1] = 1
    array[2] = 2

    if n == 1:
        return array[1]
    if n == 2:
        return array[2]
    else:
        for i in range(3, n + 1):
            array[i] = array[i - 1] + array[i - 2]

    return array[n]


if __name__ == '__main__':
    stairs = int(input("Enter number of stairs you'd like to climb: "))
    print('There are {} distinct ways to climb to the top'.format(
        climbStairs_Optimized(stairs)))
