################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/BUTTON/Core/Button_core.c 

OBJS += \
./APP/BUTTON/Core/Button_core.o 

C_DEPS += \
./APP/BUTTON/Core/Button_core.d 


# Each subdirectory must supply rules for building sources it contributes
APP/BUTTON/Core/%.o: ../APP/BUTTON/Core/%.c APP/BUTTON/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -c -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/APP/BUTTON/Api" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/APP/BUTTON/Core" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/APP/LED/Api" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/APP/LED/Core" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/MCAL/STM32F303RE_MCAL/BSW/Port/Api" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/MCAL/STM32F303RE_MCAL/BSW/Port/Core" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/MCAL/STM32F303RE_MCAL/BSW/USART/Api" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/MCAL/STM32F303RE_MCAL/BSW/USART/Core" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/MCAL/STM32F303RE_MCAL/Defines" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/CFGH/inc" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/MCAL/STM32F303RE_MCAL/BSW/RCC/Api" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/MCAL/STM32F303RE_MCAL/BSW/RCC/Core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

