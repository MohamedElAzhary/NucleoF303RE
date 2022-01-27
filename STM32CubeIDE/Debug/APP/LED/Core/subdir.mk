################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/LED/Core/Led_core.c 

OBJS += \
./APP/LED/Core/Led_core.o 

C_DEPS += \
./APP/LED/Core/Led_core.d 


# Each subdirectory must supply rules for building sources it contributes
APP/LED/Core/%.o: ../APP/LED/Core/%.c APP/LED/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -c -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/MCAL/STM32F303RE_MCAL/BSW/Port/Api" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/MCAL/STM32F303RE_MCAL/Defines" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/MCAL/STM32F303RE_MCAL/BSW/Port/Cfg_Templates" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/MCAL/STM32F303RE_MCAL/BSW/Port/Core" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/APP/LED/Api" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/APP/LED/Cfgs_Templates" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/APP/LED/Core" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/APP/BUTTON/Api" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/APP/BUTTON/Cfgs_Templates" -I"D:/Library/Microcontrollers/MyRepos/NucleoF303RE/STM32CubeIDE/APP/BUTTON/Core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

