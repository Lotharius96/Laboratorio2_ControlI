/*******************************************************************************
* File Name: sensorB.h  
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

#if !defined(CY_PINS_sensorB_H) /* Pins sensorB_H */
#define CY_PINS_sensorB_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "sensorB_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 sensorB__PORT == 15 && ((sensorB__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    sensorB_Write(uint8 value);
void    sensorB_SetDriveMode(uint8 mode);
uint8   sensorB_ReadDataReg(void);
uint8   sensorB_Read(void);
void    sensorB_SetInterruptMode(uint16 position, uint16 mode);
uint8   sensorB_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the sensorB_SetDriveMode() function.
     *  @{
     */
        #define sensorB_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define sensorB_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define sensorB_DM_RES_UP          PIN_DM_RES_UP
        #define sensorB_DM_RES_DWN         PIN_DM_RES_DWN
        #define sensorB_DM_OD_LO           PIN_DM_OD_LO
        #define sensorB_DM_OD_HI           PIN_DM_OD_HI
        #define sensorB_DM_STRONG          PIN_DM_STRONG
        #define sensorB_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define sensorB_MASK               sensorB__MASK
#define sensorB_SHIFT              sensorB__SHIFT
#define sensorB_WIDTH              1u

/* Interrupt constants */
#if defined(sensorB__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in sensorB_SetInterruptMode() function.
     *  @{
     */
        #define sensorB_INTR_NONE      (uint16)(0x0000u)
        #define sensorB_INTR_RISING    (uint16)(0x0001u)
        #define sensorB_INTR_FALLING   (uint16)(0x0002u)
        #define sensorB_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define sensorB_INTR_MASK      (0x01u) 
#endif /* (sensorB__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define sensorB_PS                     (* (reg8 *) sensorB__PS)
/* Data Register */
#define sensorB_DR                     (* (reg8 *) sensorB__DR)
/* Port Number */
#define sensorB_PRT_NUM                (* (reg8 *) sensorB__PRT) 
/* Connect to Analog Globals */                                                  
#define sensorB_AG                     (* (reg8 *) sensorB__AG)                       
/* Analog MUX bux enable */
#define sensorB_AMUX                   (* (reg8 *) sensorB__AMUX) 
/* Bidirectional Enable */                                                        
#define sensorB_BIE                    (* (reg8 *) sensorB__BIE)
/* Bit-mask for Aliased Register Access */
#define sensorB_BIT_MASK               (* (reg8 *) sensorB__BIT_MASK)
/* Bypass Enable */
#define sensorB_BYP                    (* (reg8 *) sensorB__BYP)
/* Port wide control signals */                                                   
#define sensorB_CTL                    (* (reg8 *) sensorB__CTL)
/* Drive Modes */
#define sensorB_DM0                    (* (reg8 *) sensorB__DM0) 
#define sensorB_DM1                    (* (reg8 *) sensorB__DM1)
#define sensorB_DM2                    (* (reg8 *) sensorB__DM2) 
/* Input Buffer Disable Override */
#define sensorB_INP_DIS                (* (reg8 *) sensorB__INP_DIS)
/* LCD Common or Segment Drive */
#define sensorB_LCD_COM_SEG            (* (reg8 *) sensorB__LCD_COM_SEG)
/* Enable Segment LCD */
#define sensorB_LCD_EN                 (* (reg8 *) sensorB__LCD_EN)
/* Slew Rate Control */
#define sensorB_SLW                    (* (reg8 *) sensorB__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define sensorB_PRTDSI__CAPS_SEL       (* (reg8 *) sensorB__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define sensorB_PRTDSI__DBL_SYNC_IN    (* (reg8 *) sensorB__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define sensorB_PRTDSI__OE_SEL0        (* (reg8 *) sensorB__PRTDSI__OE_SEL0) 
#define sensorB_PRTDSI__OE_SEL1        (* (reg8 *) sensorB__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define sensorB_PRTDSI__OUT_SEL0       (* (reg8 *) sensorB__PRTDSI__OUT_SEL0) 
#define sensorB_PRTDSI__OUT_SEL1       (* (reg8 *) sensorB__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define sensorB_PRTDSI__SYNC_OUT       (* (reg8 *) sensorB__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(sensorB__SIO_CFG)
    #define sensorB_SIO_HYST_EN        (* (reg8 *) sensorB__SIO_HYST_EN)
    #define sensorB_SIO_REG_HIFREQ     (* (reg8 *) sensorB__SIO_REG_HIFREQ)
    #define sensorB_SIO_CFG            (* (reg8 *) sensorB__SIO_CFG)
    #define sensorB_SIO_DIFF           (* (reg8 *) sensorB__SIO_DIFF)
#endif /* (sensorB__SIO_CFG) */

/* Interrupt Registers */
#if defined(sensorB__INTSTAT)
    #define sensorB_INTSTAT            (* (reg8 *) sensorB__INTSTAT)
    #define sensorB_SNAP               (* (reg8 *) sensorB__SNAP)
    
	#define sensorB_0_INTTYPE_REG 		(* (reg8 *) sensorB__0__INTTYPE)
#endif /* (sensorB__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_sensorB_H */


/* [] END OF FILE */
