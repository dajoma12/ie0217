import pandas as pd

# Crear un DataFrame con información sobre pasajeros del Titanic
df = pd.DataFrame(
    {
        "Name": [
            "Braund, Mr. Owen Harris",
            "Allen, Mr. William Henry",
            "Bonnell, Miss. Elizabeth"
        ],
        "Age": [22, 35, 58],
        "Sex": ["male", "male", "female"]
    }
)

# Imprimir el DataFrame
print(df)
