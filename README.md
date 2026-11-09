# Actividad 2 - Cálculo del Impuesto Sobre la Renta (ISR)

**Materia:** Lógica de Programación
**Profesor:** Gamalier Reyes del Carmen
**Estudiante:** [Tu nombre completo]
**Matrícula:** [Tu matrícula]

---

## Resumen

Programa en **C++** que lee el sueldo mensual de un empleado, calcula el ISR (Impuesto Sobre la Renta) según la escala salarial de la **DGII (República Dominicana) para el año 2026**, y muestra en pantalla:

- El sueldo mensual
- El descuento de ISR mensual (si no aplica descuento, muestra `0 (N/A - no aplica descuento)`)
- El sueldo después del ISR

El programa convierte el sueldo mensual a anual (x12), determina el tramo de la escala con estructuras de control de flujo (`if / else if / else`), calcula el ISR anual y lo divide entre 12 para obtener el descuento mensual. Además usa un ciclo `do-while` para permitir calcular varios sueldos sin cerrar el programa.

## Escala utilizada (DGII 2026)

| Renta anual (RD$) | ISR |
|---|---|
| Hasta 416,220.00 | Exento |
| 416,220.01 a 624,329.00 | 15% del excedente de 416,220.00 |
| 624,329.01 a 867,123.00 | RD$ 31,216.00 + 20% del excedente de 624,329.00 |
| Más de 867,123.00 | RD$ 79,776.00 + 25% del excedente de 867,123.00 |

> Nota: el programa aplica la escala directamente sobre el sueldo bruto, sin restar previamente los descuentos de la TSS (AFP y SFS).

## Archivos

- `isr.cpp` – código fuente del programa
- `README.md` – este documento
- `capturas/` – capturas de pantalla del programa en ejecución

## Cómo compilar y ejecutar

```bash
g++ isr.cpp -o isr
./isr
```

(En Windows con Visual Studio, abrir el archivo `.cpp` y ejecutar con `Ctrl + F5`.)

## Capturas de pantalla (escenarios)

Cada captura muestra el programa en ejecución con distintos sueldos (la terminal acumula los cálculos anteriores).

### Captura 1: Sueldo RD$ 30,000 (exento, no aplica descuento)
![Captura 1](capturas/captura1.png)

### Captura 2: Sueldos RD$ 30,000 y RD$ 50,000 (tramo 15%)
![Captura 2](capturas/captura2.png)

### Captura 3: Sueldos RD$ 30,000, 50,000 y 75,000 (tramo 25%)
![Captura 3](capturas/captura3.png)

### Captura 4: Sueldos RD$ 50,000, 75,000 y 90,000 (tramo 25%)
![Captura 4](capturas/captura4.png)

### Captura 5: Sueldos RD$ 75,000, 90,000 y 100,000 (tramo 25%)
![Captura 5](capturas/captura5.png)

## Resultados obtenidos

| Sueldo mensual | ISR mensual | Sueldo después de ISR |
|---|---|---|
| RD$ 30,000.00 | 0 (N/A) | RD$ 30,000.00 |
| RD$ 50,000.00 | RD$ 2,297.25 | RD$ 47,702.75 |
| RD$ 75,000.00 | RD$ 7,332.94 | RD$ 67,667.06 |
| RD$ 90,000.00 | RD$ 11,082.94 | RD$ 78,917.06 |
| RD$ 100,000.00 | RD$ 13,582.94 | RD$ 86,417.06 |

## Fuente

Escala del ISR para personas físicas asalariadas, Dirección General de Impuestos Internos (DGII): https://dgii.gov.do
