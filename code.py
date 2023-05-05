import sys
import math
from decimal import *
from itertools import combinations
from collections import defaultdict
from collections import Counter
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
sys.setrecursionlimit(10**6) 
def fun(d,s):
	#print(d)
	for x in d:
		if type(d[x])==dict:
			#print(1)
			fun(d[x],s)
		if type(d[x])==list:
			for x1 in d[x]:
				fun(x1,s)
		if(x==s):
			print(d[x])

d=[
	{
		'name':"Shivang",
		'age': "34",
		'address': 
		{
			'permanent_addr': {
				"street":"streetnane",
				"city": "Bharuch",
				"state": "Gujarat"
			}
		}
	},
	{
		'name':"RajKumar",
		'age': "18",
		'address': 
		{
			'permanent_addr': {
				"street":"streetnane",
				"city": "Jamnagar",
				"state": "Gujarat",
				'co_addr': [{
				"street":"streetnane",
				"city": "Rajkot",
				"State": "Gujarat"
		  }]

			},
			'current_addr':{
				"street":"streetnane",
				"city": "Nadiad",
				"state": "Gujarat"
			}
		}
	}
]


for x in d:
	fun(x,"city")




