/**
 * \file
 *
 * Copyright (c) 2014-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#ifndef _SAM3XA_RSTC_COMPONENT_
#define _SAM3XA_RSTC_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Reset Controller */
/* ============================================================================= */
/** \addtogroup SAM3XA_RSTC Reset Controller */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Rstc hardware registers */
typedef struct {
  WoReg RSTC_CR; /**< \brief (Rstc Offset: 0x00) Control Register */
  RoReg RSTC_SR; /**< \brief (Rstc Offset: 0x04) Status Register */
  RwReg RSTC_MR; /**< \brief (Rstc Offset: 0x08) Mode Register */
} Rstc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- RSTC_CR : (RSTC Offset: 0x00) Control Register -------- */
#define RSTC_CR_PROCRST (0x1u << 0) /**< \brief (RSTC_CR) Processor Reset */
#define RSTC_CR_PERRST (0x1u << 2) /**< \brief (RSTC_CR) Peripheral Reset */
#define RSTC_CR_EXTRST (0x1u << 3) /**< \brief (RSTC_CR) External Reset */
#define RSTC_CR_KEY_Pos 24
#define RSTC_CR_KEY_Msk (0xffu << RSTC_CR_KEY_Pos) /**< \brief (RSTC_CR) Password */
#define RSTC_CR_KEY(value) ((RSTC_CR_KEY_Msk & ((value) << RSTC_CR_KEY_Pos)))
/* -------- RSTC_SR : (RSTC Offset: 0x04) Status Register -------- */
#define RSTC_SR_URSTS (0x1u << 0) /**< \brief (RSTC_SR) User Reset Status */
#define RSTC_SR_RSTTYP_Pos 8
#define RSTC_SR_RSTTYP_Msk (0x7u << RSTC_SR_RSTTYP_Pos) /**< \brief (RSTC_SR) Reset Type */
#define RSTC_SR_NRSTL (0x1u << 16) /**< \brief (RSTC_SR) NRST Pin Level */
#define RSTC_SR_SRCMP (0x1u << 17) /**< \brief (RSTC_SR) Software Reset Command in Progress */
/* -------- RSTC_MR : (RSTC Offset: 0x08) Mode Register -------- */
#define RSTC_MR_URSTEN (0x1u << 0) /**< \brief (RSTC_MR) User Reset Enable */
#define RSTC_MR_URSTIEN (0x1u << 4) /**< \brief (RSTC_MR) User Reset Interrupt Enable */
#define RSTC_MR_ERSTL_Pos 8
#define RSTC_MR_ERSTL_Msk (0xfu << RSTC_MR_ERSTL_Pos) /**< \brief (RSTC_MR) External Reset Length */
#define RSTC_MR_ERSTL(value) ((RSTC_MR_ERSTL_Msk & ((value) << RSTC_MR_ERSTL_Pos)))
#define RSTC_MR_KEY_Pos 24
#define RSTC_MR_KEY_Msk (0xffu << RSTC_MR_KEY_Pos) /**< \brief (RSTC_MR) Password */
#define RSTC_MR_KEY(value) ((RSTC_MR_KEY_Msk & ((value) << RSTC_MR_KEY_Pos)))

/*@}*/


#endif /* _SAM3XA_RSTC_COMPONENT_ */