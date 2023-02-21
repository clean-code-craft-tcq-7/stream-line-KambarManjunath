
import re 

my_array = []
fetched_temp = []
fetched_SOC = []
  # Shows you the results


def ReadFromSenderConsole():
    for i in range(1):
         my_array.append(input('Input: '))
    
        
    
def Fetchvalue():
    regex_str = r"Temperature value is (.+) and StateOfCharge value is (.+)"
    for i in my_array:
        if re.match(regex_str, i):
            fetched_temp.append(float(re.search(regex_str,i).group(1)))
            fetched_SOC.append(float(re.search(regex_str,i).group(2)))
        else:
            pass
    
# ReadFromSenderConsole()

 
ReadFromSenderConsole() 
Fetchvalue()

print(fetched_temp)
print(fetched_SOC)
