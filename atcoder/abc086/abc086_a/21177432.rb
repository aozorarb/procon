a,b = gets.chomp.split(" ").map(&:to_i)
products = a*b
if products % 2 == 0 then
  puts "Even"
else 
  puts "Odd"
end