/*******************************************************************************
* File Name: giro1.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_giro1_H) /* Pins giro1_H */
#define CY_PINS_giro1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "giro1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 giro1__PORT == 15 && ((giro1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    giro1_Write(uint8 value);
void    giro1_SetDriveMode(uint8 mode);
uint8   giro1_ReadDataReg(void);
uint8   giro1_Read(void);
void    giro1_SetInterruptMode(uint16 position, uint16 mode);
uint8   giro1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the giro1_SetDriveMode() function.
     *  @{
     */
        #define giro1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define giro1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define giro1_DM_RES_UP          PIN_DM_RES_UP
        #define giro1_DM_RES_DWN         PIN_DM_RES_DWN
        #define giro1_DM_OD_LO           PIN_DM_OD_LO
        #define giro1_DM_OD_HI           PIN_DM_OD_HI
        #define giro1_DM_STRONG          PIN_DM_STRONG
        #define giro1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define giro1_MASK               giro1__MASK
#define giro1_SHIFT              giro1__SHIFT
#define giro1_WIDTH              1u

/* Interrupt constants */
#if defined(giro1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in giro1_SetInterruptMode() function.
     *  @{
     */
        #define giro1_INTR_NONE      (uint16)(0x0000u)
        #define giro1_INTR_RISING    (uint16)(0x0001u)
        #define giro1_INTR_FALLING   (uint16)(0x0002u)
        #define giro1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define giro1_INTR_MASK      (0x01u) 
#endif /* (giro1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define giro1_PS                     (* (reg8 *) giro1__PS)
/* Data Register */
#define giro1_DR                     (* (reg8 *) giro1__DR)
/* Port Number */
#define giro1_PRT_NUM                (* (reg8 *) giro1__PRT) 
/* Connect to Analog Globals */                                                  
#define giro1_AG                     (* (reg8 *) giro1__AG)                       
/* Analog MUX bux enable */
#define giro1_AMUX                   (* (reg8 *) giro1__AMUX) 
/* Bidirectional Enable */                                                        
#define giro1_BIE                    (* (reg8 *) giro1__BIE)
/* Bit-mask for Aliased Register Access */
#define giro1_BIT_MASK               (* (reg8 *) giro1__BIT_MASK)
/* Bypass Enable */
#define giro1_BYP                    (* (reg8 *) giro1__BYP)
/* Port wide control signals */                                                   
#define giro1_CTL                    (* (reg8 *) giro1__CTL)
/* Drive Modes */
#define giro1_DM0                    (* (reg8 *) giro1__DM0) 
#define giro1_DM1                    (* (reg8 *) giro1__DM1)
#define giro1_DM2                    (* (reg8 *) giro1__DM2) 
/* Input Buffer Disable Override */
#define giro1_INP_DIS                (* (reg8 *) giro1__INP_DIS)
/* LCD Common or Segment Drive */
#define giro1_LCD_COM_SEG            (* (reg8 *) giro1__LCD_COM_SEG)
/* Enable Segment LCD */
#define giro1_LCD_EN                 (* (reg8 *) giro1__LCD_EN)
/* Slew Rate Control */
#define giro1_SLW                    (* (reg8 *) giro1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define giro1_PRTDSI__CAPS_SEL       (* (reg8 *) giro1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define giro1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) giro1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define giro1_PRTDSI__OE_SEL0        (* (reg8 *) giro1__PRTDSI__OE_SEL0) 
#define giro1_PRTDSI__OE_SEL1        (* (reg8 *) giro1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define giro1_PRTDSI__OUT_SEL0       (* (reg8 *) giro1__PRTDSI__OUT_SEL0) 
#define giro1_PRTDSI__OUT_SEL1       (* (reg8 *) giro1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define giro1_PRTDSI__SYNC_OUT       (* (reg8 *) giro1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(giro1__SIO_CFG)
    #define giro1_SIO_HYST_EN        (* (reg8 *) giro1__SIO_HYST_EN)
    #define giro1_SIO_REG_HIFREQ     (* (reg8 *) giro1__SIO_REG_HIFREQ)
    #define giro1_SIO_CFG            (* (reg8 *) giro1__SIO_CFG)
    #define giro1_SIO_DIFF           (* (reg8 *) giro1__SIO_DIFF)
#endif /* (giro1__SIO_CFG) */

/* Interrupt Registers */
#if defined(giro1__INTSTAT)
    #define giro1_INTSTAT            (* (reg8 *) giro1__INTSTAT)
    #define giro1_SNAP               (* (reg8 *) giro1__SNAP)
    
	#define giro1_0_INTTYPE_REG 		(* (reg8 *) giro1__0__INTTYPE)
#endif /* (giro1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_giro1_H */


/* [] END OF FILE */
