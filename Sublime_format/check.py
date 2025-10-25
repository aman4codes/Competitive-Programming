with open('output.txt') as f1, open('expected_output.txt') as f2:
    out_lines = [line.strip() for line in f1.readlines()]
    exp_lines = [line.strip() for line in f2.readlines()]

ac = True
for i, (out, exp) in enumerate(zip(out_lines, exp_lines), 1):
    if out == exp:
        print(f"Test Case {i}: AC")
    else:
        ac = False
        print(f"Test Case {i}: WA")
        print(f"  Expected: {exp}")
        print(f"  Output  : {out}")

if len(out_lines) > len(exp_lines):
    ac = False
    for i, out in enumerate(out_lines[len(exp_lines):], len(exp_lines)+1):
        print(f"Test Case {i}: WA (Extra output: {out})")
elif len(exp_lines) > len(out_lines):
    ac = False
    for i, exp in enumerate(exp_lines[len(out_lines):], len(out_lines)+1):
        print(f"Test Case {i}: WA (Missing output, expected: {exp})")

if ac:
    print("All Test Cases Passed!")
else:
    print("Some Test Cases Failed")
