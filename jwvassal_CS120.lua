
local t = {}
for i = 1, 4 do
  t[#t+1] = string.char(64+i)
  t[#t+1] = i
end

-- print output in one line
print(table.concat(t, " "))