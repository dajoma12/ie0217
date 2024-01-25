from Persona import Person


class Teacher(Person):
    def __init__(self, name, age, employee_id):
        super().__init__(name, age)
        self.employee_id = employee_id  # declaración del ID
        self.courses_taught = []  # Cursos enseñados

    # Asigna los cursos
    def assign_course(self, course):
        # agrega a la lista de cursos
        self.courses_taught.append(course)

    # Muestra la información
    def display_info(self): 
        super().display_info()
        print(f"\nEmployee ID: {self.employee_id} \
              \nCourses taught: {', '.join(self.courses_taught)}")
