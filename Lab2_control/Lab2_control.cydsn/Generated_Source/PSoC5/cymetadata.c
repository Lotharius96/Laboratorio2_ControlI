/*******************************************************************************
* File Name: cymetadata.c
* 
* PSoC Creator  4.4
*
* Description:
* This file defines all extra memory spaces that need to be included.
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/


#include "stdint.h"


#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_CONFIG_ECC_SECTION
#define CY_CONFIG_ECC_SECTION __attribute__ ((__section__(".cyconfigecc"), used))
#endif
CY_CONFIG_ECC_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cyconfigecc"
#else
#error "Unsupported toolchain"
#endif
const uint8_t cy_meta_configecc[] = {
    0x01u, 0x52u, 0x00u, 0x40u, 0x01u, 0x64u, 0x00u, 0x40u,
    0x02u, 0x0Bu, 0x01u, 0x40u, 0x27u, 0x0Cu, 0x01u, 0x40u,
    0x18u, 0x0Du, 0x01u, 0x40u, 0x02u, 0x45u, 0x01u, 0x40u,
    0x01u, 0x46u, 0x01u, 0x40u, 0x02u, 0x50u, 0x01u, 0x40u,
    0x11u, 0x01u, 0x8Du, 0x0Du, 0xABu, 0x80u, 0xECu, 0x04u,
    0x8Eu, 0x05u, 0x92u, 0x02u, 0x9Bu, 0x01u, 0xA6u, 0x0Cu,
    0xA9u, 0x01u, 0xAEu, 0x01u, 0xB0u, 0x02u, 0xB2u, 0x01u,
    0xB4u, 0x08u, 0xB6u, 0x04u, 0xB7u, 0x01u, 0xBEu, 0x04u,
    0xC0u, 0x40u, 0xC1u, 0x05u, 0xC5u, 0xD1u, 0xC7u, 0x20u,
    0xC8u, 0x23u, 0xC9u, 0xFFu, 0xCAu, 0xFFu, 0xCBu, 0xFFu,
    0xCDu, 0xA0u, 0xCFu, 0x04u, 0xD0u, 0x18u, 0xD2u, 0x80u,
    0xD4u, 0x05u, 0xD8u, 0x04u, 0xD9u, 0x04u, 0xDAu, 0x04u,
    0xDBu, 0x04u, 0xDFu, 0x01u, 0xE0u, 0x40u, 0xE2u, 0xC0u,
    0xE4u, 0x40u, 0xE5u, 0x40u, 0xE6u, 0xC0u, 0xE8u, 0xC0u,
    0xEAu, 0xC0u, 0xECu, 0xC0u, 0xEEu, 0xC0u, 0x00u, 0x40u,
    0x09u, 0x02u, 0x10u, 0x22u, 0x18u, 0x40u, 0x19u, 0x14u,
    0x1Bu, 0x80u, 0x22u, 0x40u, 0x29u, 0x10u, 0x30u, 0x20u,
    0x40u, 0x40u, 0x48u, 0x22u, 0x49u, 0x01u, 0x50u, 0x02u,
    0x59u, 0x05u, 0x5Au, 0x80u, 0x71u, 0x02u, 0xC0u, 0x01u,
    0xC2u, 0x08u, 0xC4u, 0x05u, 0xCAu, 0x04u, 0xCCu, 0x04u,
    0xD0u, 0x01u, 0xD2u, 0x08u, 0xD6u, 0x0Bu, 0x53u, 0x01u,
    0xD4u, 0x01u, 0xABu, 0x01u, 0x00u, 0x01u, 0x0Eu, 0x01u,
    0x00u, 0xCBu, 0xCBu, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x01u, 0x01u, 0x00u, 0x01u, 0x00u, 0x00u, 0x00u
};

#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_CUST_NVL_SECTION
#define CY_CUST_NVL_SECTION __attribute__ ((__section__(".cycustnvl"), used))
#endif
CY_CUST_NVL_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cycustnvl"
#else
#error "Unsupported toolchain"
#endif
const uint8_t cy_meta_custnvl[] = {
    0x00u, 0x00u, 0x40u, 0x05u
};

#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_WO_NVL_SECTION
#define CY_WO_NVL_SECTION __attribute__ ((__section__(".cywolatch"), used))
#endif
CY_WO_NVL_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cywolatch"
#else
#error "Unsupported toolchain"
#endif
const uint8_t cy_meta_wonvl[] = {
    0xBCu, 0x90u, 0xACu, 0xAFu
};

#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_FLASH_PROT_SECTION
#define CY_FLASH_PROT_SECTION __attribute__ ((__section__(".cyflashprotect"), used))
#endif
CY_FLASH_PROT_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cyflashprotect"
#else
#error "Unsupported toolchain"
#endif
const uint8_t cy_meta_flashprotect[] = {
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u
};

#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_META_SECTION
#define CY_META_SECTION __attribute__ ((__section__(".cymeta"), used))
#endif
CY_META_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cymeta"
#else
#error "Unsupported toolchain"
#endif
const uint8_t cy_metadata[] = {
    0x00u, 0x01u, 0x2Eu, 0x16u, 0x10u, 0x69u, 0x00u, 0x01u,
    0x00u, 0x00u, 0x00u, 0x00u
};
