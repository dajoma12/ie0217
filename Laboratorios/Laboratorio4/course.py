class Course():
    def __init__(self, course_code, course_name):
        self.course_code = course_code  # codigo de cursos
        self.course_name = course_name  # nombre cursos

    # Imprime la informacion
    def display_info(self):
        print(f"Course code: {self.course_code} \
              \nCourse name: {self.course_name}")