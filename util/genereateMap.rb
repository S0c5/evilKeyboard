
for i in ('A'..'Z')
	puts "// char #{i} \n mapkeys['#{i}'][]=  KEY_LEFT_SHIFT ; \n"
end

for i in ('a'..'z')
	puts "mapkeys['#{i}'] = { 0,  #{i.ord  - 97 + 4} }; // char #{i}"
end

for i in ('1'..'9')
	puts "mapkeys['#{i}'] = { 0,  #{i.ord  - 49 + 30} }; // char #{i}"
end
puts "mapkeys['0'] = { 0,  39 }; // char 0"


c = 0
for i in "!@#$%^&*()".split('')	
	puts "mapkeys['#{i}'] = { KEY_LEFT_SHIFT,  #{c + 30} }; // char #{i}"
	c+=1
end

c = 0	
for i in "\n\x1b\x7f\t -=[]\\`;'`,./".split('')
	print "mapkeys[0x#{i[0].ord.to_s(16)}] = { 0, #{c + 40} }; // char "
	p i
	c+=1
end

c = 0
for i in "_+{}|~:\"`<>?".split('')
	puts "mapkeys[0x#{i[0].ord.to_s(16)}] = { KEY_LEFT_SHIFT, #{c + 45} }; // char #{i}"
	c+=1
end









