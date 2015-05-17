import sys
import re

digit = "[+-]{0,1}[1-9]{1}[0-9]{0,2}(?:\.[0-9]{1,})?"
prog = re.compile("\((" + digit + "), (" + digit + ")\)\Z")

n = int(sys.stdin.readline())

for s in sys.stdin:
    s = s.rstrip()
    result = prog.match(s)
    if result:
        x = float(result.group(1))
        y = float(result.group(2))
        if (-90 <= x and x<=90
             and -180 <= y and y <= 180):
            print "Valid"
            continue
    print "Invalid"
# Enter your code here. Read input from STDIN. Print output to STDOUT
