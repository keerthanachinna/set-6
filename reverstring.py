def reverse(s):
  str = ""
  for i in s:
    str = i + str
  return str
s = "aabbcc"
print (s)
print (reverse(s))
