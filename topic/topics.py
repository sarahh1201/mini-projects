import random

with open('topic.txt') as topic:
    lines = topic.readlines()
    
topic_count = len(lines)

if topic_count > 0:
    num = random.randrange(0, topic_count)
    print("Topic Number:",num+1)
    print(lines[num].strip())
    
else:
    print("Error")
