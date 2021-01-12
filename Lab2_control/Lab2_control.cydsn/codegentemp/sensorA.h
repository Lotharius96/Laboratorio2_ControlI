/*******************************************************************************
* File Name: sensorA.h  
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

#if !defined(CY_PINS_sensorA_H) /* Pins sensorA_H */
#define CY_PINS_sensorA_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "sensorA_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 sensorA__PORT == 15 && ((sensorA__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    sensorA_Write(uint8 value);
void    sensorA_SetDriveMode(uint8 mode);
uint8   sensorA_ReadDataReg(void);
uint8   sensorA_Read(void);
void    sensorA_SetInterruptMode(uint16 position, uint16 mode);
uint8   sensorA_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the sensorA_SetDriveMode() function.
     *  @{
     */
        #define sensorA_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define sensorA_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define sensorA_DM_RES_UP          PIN_DM_RES_UP
        #define sensorA_DM_RES_DWN         PIN_DM_RES_DWN
        #define sensorA_DM_OD_LO           PIN_DM_OD_LO
        #define sensorA_DM_OD_HI           PIN_DM_OD_HI
        #define sensorA_DM_STRONG          PIN_DM_STRONG
        #define sensorA_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define sensorA_MASK               sensorA__MASK
#define sensorA_SHIFT              sensorA__SHIFT
#define sensorA_WIDTH              1u

/* Interrupt constants */
#if defined(sensorA__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in sensorA_SetInterruptMode() function.
     *  @{
     */
        #define sensorA_INTR_NONE      (uint16)(0x0000u)
        #define sensorA_INTR_RISING    (uint16)(0x0001u)
        #define sensorA_INTR_FALLING   (uint16)(0x0002u)
        #define sensorA_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define sensorA_INTR_MASK      (0x01u) 
#endif /* (sensorA__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define sensorA_PS                     (* (reg8 *) sensorA__PS)
/* Data Register */
#define sensorA_DR                     (* (reg8 *) sensorA__DR)
/* Port Number */
#define sensorA_PRT_NUM                (* (reg8 *) sensorA__PRT) 
/* Connect to Analog Globals */                                                  
#define sensorA_AG                     (* (reg8 *) sensorA__AG)                       
/* Analog MUX bux enable */
#define sensorA_AMUX                   (* (reg8 *) sensorA__AMUX) 
/* Bidirectional Enable */                                                        
#define sensorA_BIE                    (* (reg8 *) sensorA__BIE)
/* Bit-mask for Aliased Register Access */
#define sensorA_BIT_MASK               (* (reg8 *) sensorA__BIT_MASK)
/* Bypass Enable */
#define sensorA_BYP                    (* (reg8 *) sensorA__BYP)
/* Port wide control signals */                                                   
#define sensorA_CTL                    (* (reg8 *) sensorA__CTL)
/* Drive Modes */
#define sensorA_DM0                    (* (reg8 *) sensorA__DM0) 
#define sensorA_DM1                    (* (reg8 *) sensorA__DM1)
#define sensorA_DM2                    (* (reg8 *) sensorA__DM2) 
/* Input Buffer Disable Override */
#define sensorA_INP_DIS                (* (reg8 *) sensorA__INP_DIS)
/* LCD Common or Segment Drive */
#define sensorA_LCD_COM_SEG            (* (reg8 *) sensorA__LCD_COM_SEG)
/* Enable Segment LCD */
#define sensorA_LCD_EN                 (* (reg8 *) sensorA__LCD_EN)
/* Slew Rate Control */
#define sensorA_SLW                    (* (reg8 *) sensorA__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define sensorA_PRTDSI__CAPS_SEL       (* (reg8 *) sensorA__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define sensorA_PRTDSI__DBL_SYNC_IN    (* (reg8 *) sensorA__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define sensorA_PRTDSI__OE_SEL0        (* (reg8 *) sensorA__PRTDSI__OE_SEL0) 
#define sensorA_PRTDSI__OE_SEL1        (* (reg8 *) sensorA__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define sensorA_PRTDSI__OUT_SEL0       (* (reg8 *) sensorA__PRTDSI__OUT_SEL0) 
#define sensorA_PRTDSI__OUT_SEL1       (* (reg8 *) sensorA__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define sensorA_PRTDSI__SYNC_OUT       (* (reg8 *) sensorA__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(sensorA__SIO_CFG)
    #define sensorA_SIO_HYST_EN        (* (reg8 *) sensorA__SIO_HYST_EN)
    #define sensorA_SIO_REG_HIFREQ     (* (reg8 *) sensorA__SIO_REG_HIFREQ)
    #define sensorA_SIO_CFG            (* (reg8 *) sensorA__SIO_CFG)
    #define sensorA_SIO_DIFF           (* (reg8 *) sensorA__SIO_DIFF)
#endif /* (sensorA__SIO_CFG) */

/* Interrupt Registers */
#if defined(sensorA__INTSTAT)
    #define sensorA_INTSTAT            (* (reg8 *) sensorA__INTSTAT)
    #define sensorA_SNAP               (* (reg8 *) sensorA__SNAP)
    
	#define sensorA_0_INTTYPE_REG 		(* (reg8 *) sensorA__0__INTTYPE)
#endif /* (sensorA__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_sensorA_H */


/* [] END OF FILE */
