################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/STM32F303RE_MCAL/BSW/Port/Core/Port_core.c 

OBJS += \
./Core/Port_core.o 

C_DEPS += \
./Core/Port_core.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Port_core.o: D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/MCAL/STM32F303RE_MCAL/BSW/Port/Core/Port_core.c Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -c -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

