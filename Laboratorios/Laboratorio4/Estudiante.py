from Persona import Person


class Student(Person):
    def __init__(self, name, age, student_id):
        # Quiero ejecutar el método de la clase base
        super().__init__(name, age)
        self.student_id = student_id
        self.courses = []

    # metodo para matricular
    def enroll_course(self, course):
        self.courses.append(course)

    # metodo que muestra la informacion
    def display_info(self):
        # Primero llama despegar de la clase persona
        super().display_info()
        # Formateo
        print(f"Student ID: {self.student_id} \
              \nCourses: {', '.join(self.courses)}")