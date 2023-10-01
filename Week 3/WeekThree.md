# <center>Week Three</center>

## Classes and Objects

> A class is an implementation of a `type`. It is the only way to implement a user-defined type (UDT) in C++.
>
> A class contains `data members` / `attributes`. It has operations, member functions and methods. A class defines a `namespace`. 
>
> A class is a `blueprint` for creating objects. They also provide `access modifiers` to control access to the data members and member functions.
>
> <a href="classes.cpp">Here</a> is a sample program to demonstrate the use of classes and objects.
>
## Access Specifiers

> Classes provide `access specifiers` for data and function members to enforce `data hiding` that separates the `implementation` from the `interface` and promotes `abstraction`.
>
> There are three access specifiers in C++:
>
> - `public`: The data members and member functions declared as public are accessible to all other functions and classes.
> - `private`: The data members and member functions declared as private are accessible only to the member functions of the same class.
> - `protected`: The data members and member functions declared as protected are accessible to the member functions of the same class and to the member functions of the derived class.
>
> <a href="access_specifiers.cpp">Here</a> is a sample program to demonstrate the use of access specifiers.

## Getters and Setters

> **Get** and **Set** methods of a class are th interface defined fr accessing and using the private data members. The implementation details of the data members are kept hidden.
>
> Not all data members are allowed to be updated or read, hence based on the requirement of the interface, data members can be read only, write only or read-write.
>
> |**Variables**|**get**|**set**|
> |:---:|:---:|:---:|
> |**Read Only**|True|False|
> |**Write Only**|False|True|
> |**Read-Write**|True|True|
> |**No Access**|False|False|
>
>
> `Encapsulation` is thus achieved by using access specifiers and getters and setters.


## Constructors and Destructors

> Objects are initialized using constructors. `Constructors` are special member functions of a class that are executed whenever we create new objects of that class.
>
> Constructors have the same name as the class and do not have any return type. They can be overloaded.
>
> `Destructors` are special member functions of a class that are executed whenever an object goes out of scope or whenever the `delete` expression is applied to a pointer to the object of that class.
>
> Memory for an object must be available before it's construction and can be released only after its destruction.
>
> The `lifetime of an object` is the time between its creation and destruction. The lifetime of an object depends on the scope of the object.