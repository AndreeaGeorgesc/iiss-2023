# Definición de la clase MobilePhone
class MobilePhone:
  def __init__(self, brand=None, model=None, price=None):
    self.brand = brand
    self.model = model
    self.price = price

  def getBrand(self):
    return self.brand

  def getModel(self):
    return self.model

  def getPrice(self):
    return self.price

# Definición de la clase MobileTester
class MobileTester:
  def __init__(self, phone=None):
    self.phone = phone or MobilePhone()

  def testPhone(self):
    if not self.phone.getBrand():
      print('No se ha proporcionado una marca para el teléfono.')
    elif not self.phone.getModel():
      print('No se ha proporcionado un modelo para el teléfono.')
    elif not self.phone.getPrice():
      print('No se ha proporcionado un precio para el teléfono.')
    else:
      print('El teléfono ha pasado todas las pruebas.')

# Crear una instancia de MobileTester
phone1 = MobilePhone('Apple', 'iPhone X', 999)
tester1 = MobileTester(phone1)
tester1.testPhone()  # El teléfono ha pasado todas las pruebas.

phone2 = MobilePhone('Samsung', '', 899)
tester2 = MobileTester(phone2)
tester2.testPhone()  # No se ha proporcionado un modelo para el teléfono.

tester3 = MobileTester()
tester3.testPhone()  # No se ha proporcionado una marca para el teléfono.
