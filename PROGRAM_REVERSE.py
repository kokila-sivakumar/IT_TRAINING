num = str(input("Enter the number"))
print("Reverse of the number:")
reverse = (num[::-1])
print(reverse)
result = (reverse[::-1])
print(result)

if num == result :
  print("PASS")
else:
  print("FAIL")