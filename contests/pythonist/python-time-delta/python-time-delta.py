#!/usr/bin/env python3

import datetime

T = int(input())

def to_datetime(s):
    s = s.split(' ')[1::]

    year = int(s[2])
    if s[1] == 'Jan':
        month = 1
    elif s[1] == 'Feb':
        month = 2
    elif s[1] == 'Mar':
        month = 3
    elif s[1] == 'Apr':
        month = 4
    elif s[1] == 'May':
        month = 5
    elif s[1] == 'Jun':
        month = 6
    elif s[1] == 'Jul':
        month = 7
    elif s[1] == 'Aug':
        month = 8
    elif s[1] == 'Sep':
        month = 9
    elif s[1] == 'Oct':
        month = 10
    elif s[1] == 'Nov':
        month = 11
    elif s[1] == 'Dec':
        month = 12
    else:
        month = -1
    day = int(s[0])
    hour, minute, second = list(map(int, s[3].split(':')))
    ms = 0
    if s[4][0] == '-':
        h_tmp = -int(s[4][1:3])
        m_tmp = -int(s[4][3:5])
    else:
        h_tmp = int(s[4][1:3])
        m_tmp = int(s[4][3:5])
    tz = datetime.timezone(datetime.timedelta(hours=h_tmp, minutes=m_tmp))

    return datetime.datetime(year, month, day, hour, minute, second, ms, tz)

for _ in range(T):
    t1 = to_datetime(input())
    t2 = to_datetime(input())
    print(abs(int((t1-t2).total_seconds())))
