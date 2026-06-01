import os

def fix_file(fname, start, end):
    with open(fname, "r") as f:
        lines = f.read().split('\n')
    
    for i in range(start-1, end):
        if lines[i] != "":
            lines[i] = "   " + lines[i]
            
    with open(fname, "w") as f:
        f.write('\n'.join(lines))

fix_file("headquarters.lua", 16, 83)
fix_file("fortified_village.lua", 18, 105)
fix_file("new_world.lua", 20, 79)
fix_file("struggling_outpost.lua", 16, 56)

# village.lua has some specific formatting to fix manually
with open("village.lua", "r") as f:
    lines = f.read().split('\n')

for i in range(22, 79):
    if lines[i] != "":
        lines[i] = "   " + lines[i]

lines[81] = "            spider_silk = 6,"
lines[82] = "            gold_thread = 3"
lines[83] = "         },"

lines[87] = "         inputs = {"
lines[88] = "            log = 5,"
lines[89] = "            spider_silk = 3,"
lines[90] = "            iron = 5"
lines[91] = "         },"

with open("village.lua", "w") as f:
    f.write('\n'.join(lines))

