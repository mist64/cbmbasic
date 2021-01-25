import pprint

def print_section(sections, section):
    for line in sections[section]:
        if line.startswith('goto'):
            goto_target = line.split(' ')[1][:-1]
            if goto_target in single_goto_targets:
                print_section(sections, goto_target)
            else:
                print(line)
        else:
            print(line)


with open("core.c", "r") as f:
    code = f.readlines()
    code = [x.strip() for x in code]

#print(code)

section = None

sections = {}

# sort into sections

for line in code:
    if line == '':
        continue
    if line.endswith(':'):
        section = line[:-1]
        sections[section] = []
    else:
        sections[section].append(line)

pprint.pprint(sections)

