/* Specify the Entry point of our Program code */
ENTRY(RESET_HANDLER)

/* Specify our memory layout and attribues */
MEMORY
{
  /* Flash is read and execute only */
  FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 512K
  /* SRAM1 is read, write and execute */
  SRAM1 (rwx) : ORIGIN = 0x10000000, LENGTH = 16K
  /* SRAM2 is read, write and execute */
  SRAM2 (rwx) : ORIGIN = 0x20000000, LENGTH = 64K
}

SECTIONS
{
	/* Define .isr.text section in output file as the first output section */
	/* Set Virtual Memory Address of this output section in FLASH Memory Read and Execute only Section */
	.isr.text :
	{
		/* Include any input file .isr_text section in this section */
		/* Use keep command to avoid removing this .isr.text section */
		KEEP(*(.isr.text))
		*(.isr.text)		
		/* ALIGN Location Counter on the bounadry of the next 4 Bytes */ 
		. = ALIGN(4);
	} >FLASH
	/* Define .text section in output file as the second output section  */
	/* Set Virtual Memory Address of this output section in FLASH Memory Read and Execute only Section */
	.text :
	{
		/* Define a symbol that points to the start of the .text section */
		_stext = .;
		/* Include any input file section from the ones mentioned below in this output section */	
		*(.text)
		*(.text.*)
		*(.init)
		*(.fini)
		*(.rodata)
		*(.rodata.*)
    	*(.glue_7)         /* glue arm to thumb code */
    	*(.glue_7t)        /* glue thumb to arm code */
    	*(.eh_frame)
		
		/* ALIGN Location Counter on the bounadry of the next 4 Bytes */
		. = ALIGN(4);
		/* Define a symbol that points to the aligned end of the .text section */
		_etext = .;
	} >FLASH
	
	/* Define .data section in output file as the third output section  */
	/* Set Virtual Memory Address of this output section in SRAM2 Memory Read, Write and Execute Section */
	/* Set Load Memory Address of this output section in FLASH Memory Read and Execute only Section */
	.data :
	{
		/* Define a symbol that points to the start of the .data section */
		_sdata = .;
		/* Include any input file section from the ones mentioned below in this output section */
		*(.data)
		*(.data.*)
		/* ALIGN Location Counter on the bounadry of the next 4 Bytes */
		. = ALIGN(4);
		/* Define a symbol that points to the aligned end of the .data section */
		_edata = .;
	} >SRAM2 AT> FLASH
	
	.bss :
	{
		/* Define a symbol that points to the start of the .data section */
		_sbss = .;
		/* Include any input file section from the ones mentioned below in this output section */
		*(.bss)
		*(.bss.*)
		*(COMMON)
		/* ALIGN Location Counter on the bounadry of the next 4 Bytes */
		. = ALIGN(4);
		/* Define a symbol that points to the aligned end of the .bss section */
		_ebss = .;
	} >SRAM2

}
