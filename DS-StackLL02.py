class Node:
	def __init__(self,v):
		self.v = v
		self.next = None
	
class Stack:
	
	def __init__(self):
		self.top = None
	
	def isempty(self):
		if self.top == None:
			return True
		else:
			return False
	
	
	def push(self,v):
		
		if self.top == None:
			self.top=Node(v)
			
		else:
			node = Node(v)
			node.next = self.top
			self.top = node
	
	
	def pop(self):
		
		if self.isempty():
			return None
			
		else:
			
			pop = self.top
			self.top = self.top.next
			pop.next = None
			return pop.v
	
	
	def peek(self):
		
		if self.isempty():
			return None
			
		else:
			return self.top.v
		
	def display(self):
		
		inode = self.top
		if self.isempty():
			print(" Underflow")
		
		else:
			
			while(inode != None):
			
				print(inode.v," ",end = " ")
				inode = inode.next
			return
		
Stack = Stack()

Stack.push(67)
Stack.push(72)
Stack.push(44)
Stack.push(39)
Stack.push(23)

Stack.display()

print("\n\nTop element is ",Stack.peek())

Stack.pop()
Stack.pop()
Stack.display()

print("\n\nTop element is ", Stack.peek())
