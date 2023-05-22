from aspectlib import Aspect

# Define the aspect
@Aspect
def logging_aspect(*args, **kwargs):
    print(f"Before executing method: {args[0].__ne__}")
    try:
        # Yield here to execute the original method
        result = yield
        print(f"After executing method: {args[0].__ne__}")
        print(f"Returned value: {result}")
    except Exception as e:
        print(f"Exception thrown by method: {args[0].__ne__}")
        print(f"Exception details: {str(e)}")
        raise

# Apply the aspect to a class method
class MyClass:
    @logging_aspect
    def my_method(self):
        print("Inside my_method")
        return 42

# Create an instance of MyClass
my_obj = MyClass()

# Call the method
my_obj.my_method()
