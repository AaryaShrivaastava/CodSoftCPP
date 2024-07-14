tasks=[]

def addTask():
    task = input("Please Enter A Task : ")
    tasks.append(task)
    print(f"Tasks '{task}' added to the list,")

def listTasks():
    if not tasks:
        print("There are no tasks in the TO-Do-List currently .")
    else : 
        print("Current Tasks : ")
        for index, task in enumerate(tasks) : 
            print(f"Task #{index + 1}. {task}")
def deleteTask():
    listTasks()
    try:
        taskToDelete = int(input("\nEnter Index Of The Task To Be Deleted : ")) 
        if 0<= taskToDelete < len(tasks):
            tasks.pop(taskToDelete)
        else : 
            print(f"Task #{taskToDelete} was not found !")
            
    except:
        print("\nInvalid Input !")

if __name__ == "__main__":

    print("Welcome to the to do list app : ")
    while True:
        print("\n")
        print("Please select one of the following options : ")
        print("---------------------------------------------")
        print("1. Add a new task")
        print("2. Delete a task")
        print("3. List tasks")
        print("4. Quit")

        choice = input("\nEnter your choice : ")
        if (choice == "1"):
            addTask()
        elif (choice == "2"):
            deleteTask()
        elif (choice == "3"):
            listTasks()
        elif (choice == "4"):
            break
        else :
            print("\nInvalid input, please try again !")

    print("👋🏻👋🏻Goodbye👋🏻👋🏻")