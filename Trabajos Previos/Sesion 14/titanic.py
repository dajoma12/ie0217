import pandas as pd


# Leer el archivo CSV
titanic = pd.read_csv("titanic.csv")

# Guardar los datos en un archivo Excel
titanic.to_excel("titanic.xlsx", sheet_name="passengers", index=False)

# Los primeros 8 datos
titanic.head(8)

# Los tipos de datos
titanic.dtypes

# busqueda
ages = titanic["age"]

# Ver el tipo de la serie
type(titanic["Age"])
# Output: pandas.core.series.shape

titanic["Age"].shape
# Output: (891,)

# Filtro de solo columas de edad y sex
age_sex = titanic[["Age", "Sex"]]
age_sex.head()

# Tipo de serie
type(titanic[['Age', 'Sex']])
titanic[["Age", 'Sex']].shape

# Aplica un filtro
above_35 = titanic[titanic["Age"] > 35]
above_35.head()

# Filtrar si esta en 2 o 3
class_23 = titanic[titanic["Pclass"].isin([2, 3])]
class_23.head()

# Un filtrado equivalente al anterior
class_23 = titanic[(titanic["Pclass"] == 2) | (titanic["Pclass"] == 3)]

# Limpieza de datos corruptos
age_no_na = titanic[titanic["Age"].notna()]
age_no_na.head()
age_no_na.shape

# Filtrado de edad y que devuelve una serie con el nombre
adult_name = titanic.log[titanic["Age"] > 35, "Name"]

# Filtrado con respecto a indices
titanic.iloc[9:25, 2:5]

# Encuentra el promedio
titanic["Age"].mean()

# Encuentra la media
titanic[["Age", "Fare"]].median()

# Da unos datos generales
titanic[["Age", "Fare"]].describe()

# Encuentra la informacion solicitada
titanic.agg(
    {
        "Age" : ["min", "max", "median", "skew"],
        "Fare": ["min", "max", "median", "skew"],
    }
)

# Agrupar por sexo y edad
titanic[["Sex", "Age"]].groupby("Sex").mean()

# Agrupar por sexo
titanic.groupby("Sex").mean(numeric_only=True)

# Contar las apariciones
titanic["Pclass"].value_counts()
titanic.groupby("Pclass")["Pclass"].count()

# Acomodar por edad
titanic.sort_values(by="Age").head()

# Acomoda por clase y edad
titanic.sort_values(by=['Pclass', 'Age'], ascending=False).head()