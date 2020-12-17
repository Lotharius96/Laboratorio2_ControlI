/*******************************************************************************
* File Name: giro2.h  
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

#if !defined(CY_PINS_giro2_H) /* Pins giro2_H */
#define CY_PINS_giro2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "giro2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 giro2__PORT == 15 && ((giro2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    giro2_Write(uint8 value);
void    giro2_SetDriveMode(uint8 mode);
uint8   giro2_ReadDataReg(void);
uint8   giro2_Read(void);
void    giro2_SetInterruptMode(uint16 position, uint16 mode);
uint8   giro2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the giro2_SetDriveMode() function.
     *  @{
     */
        #define giro2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define giro2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define giro2_DM_RES_UP          PIN_DM_RES_UP
        #define giro2_DM_RES_DWN         PIN_DM_RES_DWN
        #define giro2_DM_OD_LO           PIN_DM_OD_LO
        #define giro2_DM_OD_HI           PIN_DM_OD_HI
        #define giro2_DM_STRONG          PIN_DM_STRONG
        #define giro2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define giro2_MASK               giro2__MASK
#define giro2_SHIFT              giro2__SHIFT
#define giro2_WIDTH              1u

/* Interrupt constants */
#if defined(giro2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in giro2_SetInterruptMode() function.
     *  @{
     */
        #define giro2_INTR_NONE      (uint16)(0x0000u)
        #define giro2_INTR_RISING    (uint16)(0x0001u)
        #define giro2_INTR_FALLING   (uint16)(0x0002u)
        #define giro2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define giro2_INTR_MASK      (0x01u) 
#endif /* (giro2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define giro2_PS                     (* (reg8 *) giro2__PS)
/* Data Register */
#define giro2_DR                     (* (reg8 *) giro2__DR)
/* Port Number */
#define giro2_PRT_NUM                (* (reg8 *) giro2__PRT) 
/* Connect to Analog Globals */                                                  
#define giro2_AG                     (* (reg8 *) giro2__AG)                       
/* Analog MUX bux enable */
#define giro2_AMUX                   (* (reg8 *) giro2__AMUX) 
/* Bidirectional Enable */                                                        
#define giro2_BIE                    (* (reg8 *) giro2__BIE)
/* Bit-mask for Aliased Register Access */
#define giro2_BIT_MASK               (* (reg8 *) giro2__BIT_MASK)
/* Bypass Enable */
#define giro2_BYP                    (* (reg8 *) giro2__BYP)
/* Port wide control signals */                                                   
#define giro2_CTL                    (* (reg8 *) giro2__CTL)
/* Drive Modes */
#define giro2_DM0                    (* (reg8 *) giro2__DM0) 
#define giro2_DM1                    (* (reg8 *) giro2__DM1)
#define giro2_DM2                    (* (reg8 *) giro2__DM2) 
/* Input Buffer Disable Override */
#define giro2_INP_DIS                (* (reg8 *) giro2__INP_DIS)
/* LCD Common or Segment Drive */
#define giro2_LCD_COM_SEG            (* (reg8 *) giro2__LCD_COM_SEG)
/* Enable Segment LCD */
#define giro2_LCD_EN                 (* (reg8 *) giro2__LCD_EN)
/* Slew Rate Control */
#define giro2_SLW                    (* (reg8 *) giro2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define giro2_PRTDSI__CAPS_SEL       (* (reg8 *) giro2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define giro2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) giro2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define giro2_PRTDSI__OE_SEL0        (* (reg8 *) giro2__PRTDSI__OE_SEL0) 
#define giro2_PRTDSI__OE_SEL1        (* (reg8 *) giro2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define giro2_PRTDSI__OUT_SEL0       (* (reg8 *) giro2__PRTDSI__OUT_SEL0) 
#define giro2_PRTDSI__OUT_SEL1       (* (reg8 *) giro2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define giro2_PRTDSI__SYNC_OUT       (* (reg8 *) giro2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(giro2__SIO_CFG)
    #define giro2_SIO_HYST_EN        (* (reg8 *) giro2__SIO_HYST_EN)
    #define giro2_SIO_REG_HIFREQ     (* (reg8 *) giro2__SIO_REG_HIFREQ)
    #define giro2_SIO_CFG            (* (reg8 *) giro2__SIO_CFG)
    #define giro2_SIO_DIFF           (* (reg8 *) giro2__SIO_DIFF)
#endif /* (giro2__SIO_CFG) */

/* Interrupt Registers */
#if defined(giro2__INTSTAT)
    #define giro2_INTSTAT            (* (reg8 *) giro2__INTSTAT)
    #define giro2_SNAP               (* (reg8 *) giro2__SNAP)
    
	#define giro2_0_INTTYPE_REG 		(* (reg8 *) giro2__0__INTTYPE)
#endif /* (giro2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_giro2_H */


/* [] END OF FILE */
