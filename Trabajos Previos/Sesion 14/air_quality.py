# Crea una nueva columna multiplicada por un factor
air_quality["london_mg_per_cubic"] = air_quality["station_london"] * 1.882

# Crea una nueva columas con las divisiones entre los datos de cada una
air_quality["ratio_paris_antwerp"] = (
    air_quality["station_paris"] / air_quality["station_antwer"]
)

# renombra las columnas
air_quality_renamed = air_quality_renamed(
    colums={
        "station_antwerp":"BETR801",
        "Station_paris":"FR04014",
        "Station_london":"London Westminster",
    }
)

# Cambiar de minusculas a mayusculas
air_quality_renamed = air_quality_renamed.rename(colums=str.lower)