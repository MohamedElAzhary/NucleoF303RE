/*****************************************************************************/
// FileName     : stm32f03x6_startup.c
// Author       : Mohamed El Azhary
// Description  : This file contains startup code for stm32f303x6 controllers
//				  Startup code is responsible for:
//					1-	Disable all interrupts
//					2-	Initialize and stabilize the Clock
//					3-	Initialize the RAM
//						A-	Initialize Memory Mapped HW Registers.
//						B-	Copy any initialized data from Program memory to Data segment in Data memory.
//						C-	Zero the uninitialized data in the BSS segment in Data memory.
//						D-	Allocate space for and initialize the stack.
//					4-	Initialize the Stack Pointer, to point at the end of the RAM.
//					5-	Call main function
/*****************************************************************************/


/*******************************File-Includes*********************************/
#include <stdint.h>
/*****************************************************************************/

/**********************************Macros*************************************/
#define SRAM_START_ADDRESS		((void*)(0x20000000U))
#define SRAM_END_ADDRESS		((void*)(0x2000FFFFU))
#define STACK_START_ADDRESS		(SRAM_END_ADDRESS)
#define NULL ((void*) 0)
/*****************************************************************************/

/*****************************Function-Prototypes*****************************/
/* Reset Handler */
 void RESET_HANDLER(void);

/* Watchdog Handler */
 __attribute__ ((weak)) void WWDG_HANDLER(void);

/* PVD Handler */
 __attribute__ ((weak)) void PVD_HANDLER(void);			

/* Tamper Stamp Handler */
 __attribute__ ((weak)) void TAMPER_STAMP_HANDLER(void);

/* Flash Handler */
 __attribute__ ((weak)) void FLASH_HANDLER(void);

/* External Interrupts Handlers */
 __attribute__ ((weak)) void EXTI0_HANDLER(void);
 __attribute__ ((weak)) void EXTI1_HANDLER(void);
 __attribute__ ((weak)) void EXTI2_TS_HANDLER(void);
 __attribute__ ((weak)) void EXTI3_HANDLER(void);
 __attribute__ ((weak)) void EXTI4_HANDLER(void);
 __attribute__ ((weak)) void EXTI9_5_HANDLER(void);
 __attribute__ ((weak)) void EXTI15_10_HANDLER(void);

/* DMA Handlers */
 __attribute__ ((weak)) void DMA1_CHANNEL1_HANDLER(void);
 __attribute__ ((weak)) void DMA1_CHANNEL2_HANDLER(void);
 __attribute__ ((weak)) void DMA1_CHANNEL3_HANDLER(void);
 __attribute__ ((weak)) void DMA1_CHANNEL4_HANDLER(void);
 __attribute__ ((weak)) void DMA1_CHANNEL5_HANDLER(void);
 __attribute__ ((weak)) void DMA1_CHANNEL6_HANDLER(void);
 __attribute__ ((weak)) void DMA1_CHANNEL7_HANDLER(void);
 __attribute__ ((weak)) void DMA2_CHANNEL1_HANDLER(void);
 __attribute__ ((weak)) void DMA2_CHANNEL2_HANDLER(void);
 __attribute__ ((weak)) void DMA2_CHANNEL3_HANDLER(void);
 __attribute__ ((weak)) void DMA2_CHANNEL4_HANDLER(void);
 __attribute__ ((weak)) void DMA2_CHANNEL5_HANDLER(void);

/* ADC Handlers */
 __attribute__ ((weak)) void ADC1_ADC2_GLOBAL_HANDLER(void);
 __attribute__ ((weak)) void ADC3_HANDLER(void);
 __attribute__ ((weak)) void ADC4_HANDLER(void);

/* USB Handlers */
 __attribute__ ((weak)) void USB_HP_CAN_TX_HANDLER(void);
 __attribute__ ((weak)) void USB_LP_CAN_RX0_HANDLER(void);
 __attribute__ ((weak)) void USB_WAKEUP_HANDLER(void);
 __attribute__ ((weak)) void USB_HP_HANDLER(void);
 __attribute__ ((weak)) void USB_HL_HANDLER(void);
 __attribute__ ((weak)) void USB_WAKEUP_RMP_HANDLER(void);

/* CAN Handlers */
 __attribute__ ((weak)) void CAN_RX1_HANDLER(void);
 __attribute__ ((weak)) void CAN_SCE_HANDLER(void);

/* Timers Handlers */
 __attribute__ ((weak)) void TIM1_BRK_TIM15_HANDLER(void);
 __attribute__ ((weak)) void TIM1_UP_TIM16_HANDLER(void);
 __attribute__ ((weak)) void TIM1_TRG_COM_TIM17_HANDLER(void);
 __attribute__ ((weak)) void TIM1_CC_HANDLER(void);
 __attribute__ ((weak)) void TIM2_HANDLER(void);
 __attribute__ ((weak)) void TIM3_HANDLER(void);
 __attribute__ ((weak)) void TIM4_HANDLER(void);
 __attribute__ ((weak)) void TIM6_DAC_HANDLER(void);
 __attribute__ ((weak)) void TIM7_HANDLER(void);
 __attribute__ ((weak)) void TIM8_BRK_HANDLER(void);
 __attribute__ ((weak)) void TIM8_UP_HANDLER(void);
 __attribute__ ((weak)) void TIM8_TRG_COM_HANDLER(void);
 __attribute__ ((weak)) void TIM8_CC_HANDLER(void);
 __attribute__ ((weak)) void TIM20_BRK_HANDLER(void);
 __attribute__ ((weak)) void TIM20_UP_HANDLER(void);
 __attribute__ ((weak)) void TIM20_TRG_COM_HANDLER(void);
 __attribute__ ((weak)) void TIM20_CC_HANDLER(void);

/* I2C Handlers */
 __attribute__ ((weak)) void I2C1_EV_HANDLER(void);
 __attribute__ ((weak)) void I2C1_ER_HANDLER(void);
 __attribute__ ((weak)) void I2C2_EV_HANDLER(void);
 __attribute__ ((weak)) void I2C2_ER_HANDLER(void);
 __attribute__ ((weak)) void I2C3_EV_HANDLER(void);
 __attribute__ ((weak)) void I2C3_ER_HANDLER(void);

/* SPI Handlers */
 __attribute__ ((weak)) void SPI1_HANDLER(void);
 __attribute__ ((weak)) void SPI2_HANDLER(void);
 __attribute__ ((weak)) void SPI3_HANDLER(void);
 __attribute__ ((weak)) void SPI4_HANDLER(void);			

/* USARTT Handlers */
 __attribute__ ((weak)) void USART1_HANDLER(void);
 __attribute__ ((weak)) void USART2_HANDLER(void);
 __attribute__ ((weak)) void USART3_HANDLER(void);
 __attribute__ ((weak)) void UART4_HANDLER(void);
 __attribute__ ((weak)) void UART5_HANDLER(void);

/* RTC Handlers */
 __attribute__ ((weak)) void RTC_ALARM_HANDLER(void);
 __attribute__ ((weak)) void RTC_WKUP_HANDLER(void);

/* RCC Handler */
 __attribute__ ((weak)) void RCC_HANDLER(void);

/* FMC Handler */
 __attribute__ ((weak)) void FMC_HANDLER(void);

/* COMP Handlers */
 __attribute__ ((weak)) void COMP1_COMP2_COMP3_HANDLER(void);
 __attribute__ ((weak)) void COMP4_COMP5_COMP6_HANDLER(void);
 __attribute__ ((weak)) void COMP7_HANDLER(void);

/* FPU Handler */
 __attribute__ ((weak)) void FPU_HANDLER(void);

/* NMI Handler */
 __attribute__ ((weak)) void NMI_HANDLER(void);

/* HARDFAULT Handler */
 __attribute__ ((weak)) void HARDFAULT_HANDLER(void);

/* MEMMANGE Handler */
 __attribute__ ((weak)) void MEMMANGE_HANDLER(void);

/* BUSFAULT Handler */
 __attribute__ ((weak)) void BUSFAULT_HANDLER(void);

/* USAGEFAULT Handler */
 __attribute__ ((weak)) void USAGEFAULT_HANDLER(void);

/* SVCALL Handler */
 __attribute__ ((weak)) void SVCALL_HANDLER(void);

/* PENDSV Handler */
 __attribute__ ((weak)) void PENDSV_HANDLER(void);

/* SYSTICK Handler */
 __attribute__ ((weak)) void SYSTICK_HANDLER(void);

/*****************************************************************************/

 extern int main(void);

/*******************************Global-Variables******************************/
/* Externing linker file symbols */
extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;

// Creating the vector table
// The vector table should not be included in flash .data segment as initialized
// global variables are stored in .data segment in RAM, but we should store this
// array in the location of the vector table in the start of the ROM(flash).
__attribute__ ((used, section(".isr.text")))  void* vectors[]={
	STACK_START_ADDRESS,		/* Address 0x0000 0000 */
	&RESET_HANDLER,		/* Address 0x0000 0004 */
	&NMI_HANDLER,		/* Address 0x0000 0008 */
	&HARDFAULT_HANDLER,		/* Address 0x0000 000C */
	&MEMMANGE_HANDLER,		/* Address 0x0000 0010 */
	&BUSFAULT_HANDLER,		/* Address 0x0000 0014 */
	&USAGEFAULT_HANDLER,		/* Address 0x0000 0018 */
	NULL,		/* Address 0x0000 001C */
	NULL,		/* Address 0x0000 0020 */
	NULL,		/* Address 0x0000 0024 */
	NULL,		/* Address 0x0000 0028 */
	&SVCALL_HANDLER,		/* Address 0x0000 002C */
	&PENDSV_HANDLER,		/* Address 0x0000 0038 */
	&SYSTICK_HANDLER,		/* Address 0x0000 003C */
	&WWDG_HANDLER,		/* Address 0x0000 0040 */
	&PVD_HANDLER,		/* Address 0x0000 0044*/
	&TAMPER_STAMP_HANDLER,		/* Address 0x0000 0048 */
	&RTC_WKUP_HANDLER,		/* Address 0x0000 004C */
	&FLASH_HANDLER,		/* Address 0x0000 0050 */
	&RCC_HANDLER,		/* Address 0x0000 0054 */
	&EXTI0_HANDLER,		/* Address 0x0000 0058 */
	&EXTI1_HANDLER,		/* Address 0x0000 005C */
	&EXTI2_TS_HANDLER,		/* Address 0x0000 0060 */
	&EXTI3_HANDLER,		/* Address 0x0000 0064 */
	&EXTI4_HANDLER,		/* Address 0x0000 0068 */
	&DMA1_CHANNEL1_HANDLER,		/* Address 0x0000 006C */
	&DMA1_CHANNEL2_HANDLER,		/* Address 0x0000 0070 */
	&DMA1_CHANNEL3_HANDLER,		/* Address 0x0000 0074 */
	&DMA1_CHANNEL4_HANDLER,		/* Address 0x0000 0078 */
	&DMA1_CHANNEL5_HANDLER,		/* Address 0x0000 007C */
	&DMA1_CHANNEL6_HANDLER,		/* Address 0x0000 0080 */
	&DMA1_CHANNEL7_HANDLER,		/* Address 0x0000 0084 */
	&ADC1_ADC2_GLOBAL_HANDLER,		/* Address 0x0000 0088 */
	&USB_HP_CAN_TX_HANDLER,		/* Address 0x0000 008C */
	&USB_LP_CAN_RX0_HANDLER,		/* Address 0x0000 0090 */
	&CAN_RX1_HANDLER,		/* Address 0x0000 0094 */
	&CAN_SCE_HANDLER,		/* Address 0x0000 0098 */
	&EXTI9_5_HANDLER,		/* Address 0x0000 009C */
	&TIM1_BRK_TIM15_HANDLER,		/* Address 0x0000 00A0 */
	&TIM1_UP_TIM16_HANDLER,		/* Address 0x0000 00A4 */
	&TIM1_TRG_COM_TIM17_HANDLER,		/* Address 0x0000 00A8 */
	&TIM1_CC_HANDLER,		/* Address 0x0000 00AC */
	&TIM2_HANDLER,		/* Address 0x0000 00B0 */
	&TIM3_HANDLER,		/* Address 0x0000 00B4 */
	&TIM4_HANDLER,		/* Address 0x0000 00B8 */
	&I2C1_EV_HANDLER,		/* Address 0x0000 00BC */
	&I2C1_ER_HANDLER,		/* Address 0x0000 00C0 */
	&I2C2_EV_HANDLER,		/* Address 0x0000 00C4 */
	&I2C2_ER_HANDLER,		/* Address 0x0000 00C8 */
	&SPI1_HANDLER,		/* Address 0x0000 00CC */
	&SPI2_HANDLER,		/* Address 0x0000 00D0 */
	&USART1_HANDLER,		/* Address 0x0000 00D4 */
	&USART2_HANDLER,		/* Address 0x0000 00D8 */
	&USART3_HANDLER,		/* Address 0x0000 00DC */
	&EXTI15_10_HANDLER,		/* Address 0x0000 00E0 */
	&RTC_ALARM_HANDLER,		/* Address 0x0000 00E4 */
	&USB_WAKEUP_HANDLER,		/* Address 0x0000 00E8 */
	&TIM8_BRK_HANDLER,		/* Address 0x0000 00EC */
	&TIM8_UP_HANDLER,				/* Address 0x0000 00F0 */
	&TIM8_TRG_COM_HANDLER,		/* Address 0x0000 00F4 */
	&TIM8_CC_HANDLER,		/* Address 0x0000 00F8 */
	&ADC3_HANDLER,		/* Address 0x0000 00FC */
	&FMC_HANDLER,		/* Address 0x0000 0100 */
	NULL,		/* Address 0x0000 0104 */
	NULL,		/* Address 0x0000 0108 */
	&SPI3_HANDLER,		/* Address 0x0000 010C */
	&UART4_HANDLER,		/* Address 0x0000 0110 */
	&UART5_HANDLER,		/* Address 0x0000 0114 */
	&TIM6_DAC_HANDLER,		/* Address 0x0000 0118 */
	&TIM7_HANDLER,		/* Address 0x0000 011C */
	&DMA2_CHANNEL1_HANDLER,		/* Address 0x0000 0120 */
	&DMA2_CHANNEL2_HANDLER,		/* Address 0x0000 0124 */
	&DMA2_CHANNEL3_HANDLER,		/* Address 0x0000 0128 */
	&DMA2_CHANNEL4_HANDLER,		/* Address 0x0000 012C */
	&DMA2_CHANNEL5_HANDLER,		/* Address 0x0000 0130 */
	&ADC4_HANDLER,		/* Address 0x0000 0134 */
	NULL,		/* Address 0x0000 0138 */
	NULL,		/* Address 0x0000 013C */
	&COMP1_COMP2_COMP3_HANDLER,		/* Address 0x0000 0140 */
	&COMP4_COMP5_COMP6_HANDLER,		/* Address 0x0000 0144 */
	&COMP7_HANDLER,		/* Address 0x0000 0148 */
	NULL,		/* Address 0x0000 014C */
	NULL,		/* Address 0x0000 0150 */
	NULL,		/* Address 0x0000 0154 */
	NULL,		/* Address 0x0000 0158 */
	NULL,		/* Address 0x0000 015C */
	&I2C3_EV_HANDLER,		/* Address 0x0000 0160 */
	&I2C3_ER_HANDLER,		/* Address 0x0000 0164 */
	&USB_HP_HANDLER,		/* Address 0x0000 0168 */
	&USB_HL_HANDLER,		/* Address 0x0000 016C */
	&USB_WAKEUP_RMP_HANDLER,		/* Address 0x0000 0170 */
	&TIM20_BRK_HANDLER,		/* Address 0x0000 0174 */
	&TIM20_UP_HANDLER,		/* Address 0x0000 0178 */
	&TIM20_TRG_COM_HANDLER,		/* Address 0x0000 017C */
	&TIM20_CC_HANDLER,		/* Address 0x0000 0180 */
	&FPU_HANDLER,		/* Address 0x0000 0184 */
	&SPI4_HANDLER		/* Address 0x0000 0190 */
};
	
/*****************************************************************************/




/*****************************Function-Definitions****************************/
/* RESET Handler */
void RESET_HANDLER(void)
{
	/* Copying .data from Flash to .data in SRAM1*/
	/* Local counter to count number of transferred bytes */
	uint32_t i;
	/* Local variable to hold number of bytes found in data section */
	/* Subtracting start data section address from end data section address after casting them to uint32_t to get size in bytes */
	uint32_t data_size_bytes = (uint32_t)&_edata - (uint32_t)&_sdata; // Extracting data section size
	/* DestinationAddress Local Pointer to point at start data section address after casting it to uint8_t* for 1-byte per transfer operation */
	/* _sdata refers to start address of data at SRAM1 Memory as _sdata is a Virtual Memory Address and data is assigned in SRAM1 */
	uint8_t* DestinationAddress = (uint8_t*) &_sdata;
	/* SourceAddress Local Pointer to point at end text section address after casting it to uint8_t* for 1-byte per transfer operation */
	/* _etext refers to end address of text at FLASH Memory as _etext is a Virtual Memory Address and _etext is assigned in FLASH */
	uint8_t* SourceAddress = (uint8_t*) &_etext;
	/* For data_size_bytes number of bytes, move data pointed at by SourceAddress to position pointed at by DestinationAddress then increment both addresses */
	for(i=0; i < data_size_bytes; i++)
	{
		*DestinationAddress++ = *SourceAddress++;
	}
	
	/* Initializing .bss data in SRAM */
	/* Local variable to hold number of bytes found in bss section */
	/* Subtracting start bss section address from end bss section address after casting them to uint32_t to get size in bytes */
	uint32_t bss_size_bytes = (uint32_t)&_ebss - (uint32_t)&_sbss; // Extracting bss section size
	/* DestinationAddress Local Pointer to point at start bss section address after casting it to uint8_t* for 1-byte per transfer operation */
	DestinationAddress = (uint8_t*) &_sbss;
	/* No SourceAddress was used as variables stored in bss section are initialized with 0 */
	/* For bss_size_bytes number of bytes, value 0 to position pointed at by DestinationAddress then increment DestinationAddress */
	for(i=0; i < bss_size_bytes; i++)
	{
		*DestinationAddress++ = 0;
	}
	
	/* Call Main function */
	main();

	/* In case no Main found loop in while(1) */
	while(1);
}

/* NMI Handler */
 __attribute__ ((weak)) void NMI_HANDLER(void)
{
	while(1);
}

/* HARDFAULT Handler */
 __attribute__ ((weak)) void HARDFAULT_HANDLER(void)
{
	while(1);
}

/* MEMMANGE Handler */
 __attribute__ ((weak)) void MEMMANGE_HANDLER(void)
{
	while(1);
}

/* BUSFAULT Handler */
 __attribute__ ((weak)) void BUSFAULT_HANDLER(void)
{
	while(1);
}

/* USAGEFAULT Handler */
 __attribute__ ((weak)) void USAGEFAULT_HANDLER(void)
{
	while(1);
}

/* SVCALL Handler */
 __attribute__ ((weak)) void SVCALL_HANDLER(void)
{
	while(1);
}

/* PENDSV Handler */
 __attribute__ ((weak)) void PENDSV_HANDLER(void)
{
	while(1);
}

/* SYSTICK Handler */
 __attribute__ ((weak)) void SYSTICK_HANDLER(void)
{
	while(1);
}


 __attribute__ ((weak)) void WWDG_HANDLER(void)
{
	while(1);
}

 __attribute__ ((weak)) void PVD_HANDLER(void)
{
	while(1);
}			

 __attribute__ ((weak)) void TAMPER_STAMP_HANDLER(void)
{
	while(1);
}

 __attribute__ ((weak)) void RTC_WKUP_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void FLASH_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void RCC_HANDLER(void)				
{
	while(1);
}

 __attribute__ ((weak)) void EXTI0_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void EXTI1_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void EXTI2_TS_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void EXTI3_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void EXTI4_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void DMA1_CHANNEL1_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void DMA1_CHANNEL2_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void DMA1_CHANNEL3_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void DMA1_CHANNEL4_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void DMA1_CHANNEL5_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void DMA1_CHANNEL6_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void DMA1_CHANNEL7_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void ADC1_ADC2_GLOBAL_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void USB_HP_CAN_TX_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void USB_LP_CAN_RX0_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void CAN_RX1_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void CAN_SCE_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void EXTI9_5_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void TIM1_BRK_TIM15_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void TIM1_UP_TIM16_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void TIM1_TRG_COM_TIM17_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void TIM1_CC_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void TIM2_HANDLER(void)				
{
	while(1);
}

 __attribute__ ((weak)) void TIM3_HANDLER(void)				
{
	while(1);
}

 __attribute__ ((weak)) void TIM4_HANDLER(void)				
{
	while(1);
}

 __attribute__ ((weak)) void I2C1_EV_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void I2C1_ER_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void I2C2_EV_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void I2C2_ER_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void SPI1_HANDLER(void)				
{
	while(1);
}

 __attribute__ ((weak)) void SPI2_HANDLER(void)				
{
	while(1);
}

 __attribute__ ((weak)) void USART1_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void USART2_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void USART3_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void EXTI15_10_HANDLER(void)		
{
	while(1);
}

 __attribute__ ((weak)) void RTC_ALARM_HANDLER(void)		
{
	while(1);
}

 __attribute__ ((weak)) void USB_WAKEUP_HANDLER(void)		
{
	while(1);
}

 __attribute__ ((weak)) void TIM8_BRK_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void TIM8_UP_HANDLER(void)
{
	while(1);
}

 __attribute__ ((weak)) void TIM8_TRG_COM_HANDLER(void)		
{
	while(1);
}

 __attribute__ ((weak)) void TIM8_CC_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void ADC3_HANDLER(void)				
{
	while(1);
}

 __attribute__ ((weak)) void FMC_HANDLER(void)				
{
	while(1);
}

 __attribute__ ((weak)) void SPI3_HANDLER(void)				
{
	while(1);
}

 __attribute__ ((weak)) void UART4_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void UART5_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void TIM6_DAC_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void TIM7_HANDLER(void)				
{
	while(1);
}

 __attribute__ ((weak)) void DMA2_CHANNEL1_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void DMA2_CHANNEL2_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void DMA2_CHANNEL3_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void DMA2_CHANNEL4_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void DMA2_CHANNEL5_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void ADC4_HANDLER(void)				
{
	while(1);
}

 __attribute__ ((weak)) void COMP1_COMP2_COMP3_HANDLER(void)		
{
	while(1);
}

 __attribute__ ((weak)) void COMP4_COMP5_COMP6_HANDLER(void)		
{
	while(1);
}

 __attribute__ ((weak)) void COMP7_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void I2C3_EV_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void I2C3_ER_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void USB_HP_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void USB_HL_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void USB_WAKEUP_RMP_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void TIM20_BRK_HANDLER(void)		
{
	while(1);
}

 __attribute__ ((weak)) void TIM20_UP_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void TIM20_TRG_COM_HANDLER(void)	
{
	while(1);
}

 __attribute__ ((weak)) void TIM20_CC_HANDLER(void)			
{
	while(1);
}

 __attribute__ ((weak)) void FPU_HANDLER(void)				
{
	while(1);
}

 __attribute__ ((weak)) void SPI4_HANDLER(void)				
{
	while(1);
}
				
	
/*****************************************************************************/
