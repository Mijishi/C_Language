import time as t
for i in range(10):
    t.sleep(1)
    print(t.strftime("%Y-%m-%d %H:%M:%S",t.gmtime()))
