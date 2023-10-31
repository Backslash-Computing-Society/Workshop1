
print("---------------------------------------------------------------------------------------------------------------------------------------------------------")
print("                                                     BANKING MANAGEMENT SYSTEM                                                                  ")
print("---------------------------------------------------------------------------------------------------------------------------------------------------------")

print("\n")
print("********************************************************A COMPUTER SCIENCE PROJECT******************************************************************")
print("\n")


print("\n")

print("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ !!Welcome!! ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^")

#creating database
import mysql.connector
p=str(input("Enter Password"))

mydb=mysql.connector.connect (host="localhost",user="root", passwd= p)
mycursor=mydb.cursor()
mycursor.execute("create database if not exists bank")
mycursor.execute("use bank")

#creating required tables 
mycursor.execute("create table if not exists bank_master(acno char(4) primary key,name varchar(30),city char(20),mobileno char(10), initialam float(20,4))")
mycursor.execute("create table if not exists banktrans(acno char (4),balance float(20,4))")
mydb.commit()
while(True):
    
    print("1=Create account")
    print('\n')
    
    print("2=Deposit money")
    print('\n')
    
    print("3=Withdraw money")
    print('\n')
    
    print("4=Display account")
    print('\n')
    
    print("5=Close an acount")
    print('\n')
    
    print("6=Display all customer details")
    print('\n')
    
    print("7=Exit")
    print('\n')
    
    ch=int(input("Enter your choice:"))
    if(ch==1):
        print("All information prompted are mandatory to be filled")
        acno=int(input("Enter account number(limit 4 characters):"))
        name=input("Enter name(limit 35 characters):")
        city=str(input("Enter city name:"))
        mobileno=str(input("Enter mobile no.:"))
        initialam=float(input("Enter The Initial amount(>=2000)"))
        

        
        cust=(acno,name,city,mobileno,initialam)
        sql="Insert into bank_master(acno,name,city,mobileno,initialam) values(%s,%s,%s, %s,%s)"
        mycursor.execute(sql,cust)
        mydb.commit()
        print("Account is successfully created!!!")
        print("****************************************************************************************************************************************")
        print('\n')
    
     
    elif(ch==2):
        
        acno=str(input("Enter account number:"))
        balance=float(input("Enter amount to be deposited:"))
        cust1=(acno,balance)
        sql1="Insert into banktrans(acno,balance) values(%s,%s)"
        mycursor.execute(sql1,cust1)
        mycursor.execute("update bank_master set initialam=initialam+'"+str(balance)+"' where acno='"+acno+"'")
    
        mydb.commit()
        print("Money has been deposited successully" , end=" ")
        
        print('\n')
        
        print("*************************************************************************************************************************************************")
        print('\n') 

        
    elif(ch==3):
         acno=str(input("Enter account number:"))
         wd=int(input("Enter amount to be withdrawn:"))
         
    
         mycursor.execute("update bank_master set initialam=initialam-'"+str(wd)+"' where acno='"+acno+"'")
         mydb.commit()
         print("Amount withdrawn!!")
         print("The remaining amount is:", end=" ")
         mycursor.execute("select balance from banktrans where acno='"+acno+"'")
         for i in  mycursor:
             print(i)
         print('\n')
    elif(ch==4):
        acno=str(input("Enter account number:"))
        mycursor.execute("select * from bank_master where acno='"+acno+"'")
        for i in mycursor:
            print(i)
            print('\n')
            print("************************************************************************************************************************")
            print('\n')
      
    elif (ch==5):
         acno=int(input("Enter the Account number of the Customer to be closed : "))
         rl=(acno,)
         sql1="Delete from bank_master where acno=%s"
         mycursor.execute(sql1,rl)
         sql2="Delete from banktrans where acno=%s"
         mycursor.execute(sql2,rl)
         mydb.commit()
         print('Account closed successfully!!')
         print("******************************************************************************************************************************")
         print('\n')
         
    elif(ch==6):
        
        mycursor.execute("select * from bank_master")
        for i in mycursor:
            print(i)
            print("********************************************************************************************************************************")
            print('\n')
         
    else:
        break
mydb.close()
 

    
