import time

def progressBar (current, total, prefix = 'Progress', suffix = 'Complete', fill = '#', barLength = 10):
    """
    Print a progress bar to the terminal
    @params:
        current     - Required
        total       - Required
        prefix      - Optional
        suffix      - Optional
        fill        - Optional
        barLength   - Optional : 
    """
    percentage = int( (current * 100) / total)
    filledCharacter = int ( (current * barLength) / total)
    bar = fill*filledCharacter + '-'*(barLength - filledCharacter)
    print(f'{prefix}: [{bar}] {percentage}% {suffix}', end = '\r')

    if current == total:
        print('\n')

total = len(range(100))

for i in range(100):
    time.sleep(0.1)
    progressBar(i + 1, total)
