#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BECB4
// Address: 0x3becb4 - 0x3bee54
void sub_003BECB4_0x3becb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BECB4_0x3becb4");
#endif

    switch (ctx->pc) {
        case 0x3bed18u: goto label_3bed18;
        case 0x3bedecu: goto label_3bedec;
        case 0x3bee28u: goto label_3bee28;
        default: break;
    }

    ctx->pc = 0x3becb4u;

    // 0x3becb4: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x3becb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x3becb8: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x3BECB8u;
    {
        const bool branch_taken_0x3becb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BECB8u;
        // 0x3becbc: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3becb8) {
            ctx->pc = 0x3BEE34u;
            goto label_3bee34;
        }
    }
    ctx->pc = 0x3BECC0u;
    // 0x3becc0: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x3becc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x3becc4: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x3becc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3becc8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3becc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3beccc: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3becccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3becd0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3becd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3becd4: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3becd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3becd8: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x3becd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x3becdc: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x3becdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x3bece0: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x3bece0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3bece4: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x3bece4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x3bece8: 0xa1438  dsll        $v0, $t2, 16
    ctx->pc = 0x3bece8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << 16);
    // 0x3becec: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x3bececu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3becf0: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3becf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3becf4: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3becf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3becf8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3becf8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3becfc: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3becfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3bed00: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3bed00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3bed04: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3bed04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3bed08: 0x4a102d  daddu       $v0, $v0, $t2
    ctx->pc = 0x3bed08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x3bed0c: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x3bed0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3bed10: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3BED10u;
    {
        const bool branch_taken_0x3bed10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BED10u;
        // 0x3bed14: 0x4a382d  daddu       $a3, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bed10) {
            ctx->pc = 0x3BEDACu;
            goto label_3bedac;
        }
    }
    ctx->pc = 0x3BED18u;
label_3bed18:
    // 0x3bed18: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x3bed18u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bed1c: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x3bed1cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x3bed20: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x3bed20u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x3bed24: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x3bed24u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3bed28: 0x71083389  pcpyld      $a2, $t0, $t0
    ctx->pc = 0x3bed28u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x3bed2c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3bed2cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3bed30: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x3bed30u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x3bed34: 0x70461489  pand        $v0, $v0, $a2
    ctx->pc = 0x3bed34u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x3bed38: 0x70471ba9  pcpyud      $v1, $v0, $a3
    ctx->pc = 0x3bed38u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x3bed3c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3bed3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3bed40: 0x5460003d  bnel        $v1, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x3BED40u;
    {
        const bool branch_taken_0x3bed40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bed40) {
            ctx->pc = 0x3BED44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BED40u;
            // 0x3bed44: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEE38u;
            goto label_3bee38;
        }
    }
    ctx->pc = 0x3BED48u;
    // 0x3bed48: 0x712814c9  pxor        $v0, $t1, $t0
    ctx->pc = 0x3bed48u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x3bed4c: 0x704a1a48  psubb       $v1, $v0, $t2
    ctx->pc = 0x3bed4cu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3bed50: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x3bed50u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3bed54: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x3bed54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bed58: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3bed58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3bed5c: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3bed5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3bed60: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3bed60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3bed64: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3bed64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3bed68: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3bed68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3bed6c: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3bed6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3bed70: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x3bed70u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3bed74: 0x70661c89  pand        $v1, $v1, $a2
    ctx->pc = 0x3bed74u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x3bed78: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x3bed78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bed7c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3bed7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3bed80: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3bed80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3bed84: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3bed84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3bed88: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3bed88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3bed8c: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x3bed8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x3bed90: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x3bed90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x3bed94: 0x706513a9  pcpyud      $v0, $v1, $a1
    ctx->pc = 0x3bed94u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x3bed98: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3bed98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3bed9c: 0x5060ffde  beql        $v1, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3BED9Cu;
    {
        const bool branch_taken_0x3bed9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bed9c) {
            ctx->pc = 0x3BEDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BED9Cu;
            // 0x3beda0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BED18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bed18;
        }
    }
    ctx->pc = 0x3BEDA4u;
    // 0x3beda4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3BEDA4u;
    {
        const bool branch_taken_0x3beda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEDA4u;
        // 0x3beda8: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beda4) {
            ctx->pc = 0x3BEE38u;
            goto label_3bee38;
        }
    }
    ctx->pc = 0x3BEDACu;
label_3bedac:
    // 0x3bedac: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x3bedacu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bedb0: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x3bedb0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x3bedb4: 0x126102f  dsubu       $v0, $t1, $a2
    ctx->pc = 0x3bedb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) - GPR_U64(ctx, 6));
    // 0x3bedb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bedb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bedbc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3bedbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3bedc0: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3BEDC0u;
    {
        const bool branch_taken_0x3bedc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bedc0) {
            ctx->pc = 0x3BEDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEDC0u;
            // 0x3bedc4: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEE38u;
            goto label_3bee38;
        }
    }
    ctx->pc = 0x3BEDC8u;
    // 0x3bedc8: 0x1271026  xor         $v0, $t1, $a3
    ctx->pc = 0x3bedc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x3bedcc: 0x46182f  dsubu       $v1, $v0, $a2
    ctx->pc = 0x3bedccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x3bedd0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3bedd0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3bedd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3bedd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bedd8: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x3bedd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x3beddc: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3BEDDCu;
    {
        const bool branch_taken_0x3beddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3beddc) {
            ctx->pc = 0x3BEDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEDDCu;
            // 0x3bede0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEE38u;
            goto label_3bee38;
        }
    }
    ctx->pc = 0x3BEDE4u;
    // 0x3bede4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3bede4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bede8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3bede8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3bedec:
    // 0x3bedec: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x3bedecu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bedf0: 0xc9102f  dsubu       $v0, $a2, $t1
    ctx->pc = 0x3bedf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 9));
    // 0x3bedf4: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x3bedf4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x3bedf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bedf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bedfc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3bedfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3bee00: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3BEE00u;
    {
        const bool branch_taken_0x3bee00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEE00u;
        // 0x3bee04: 0xc71026  xor         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bee00) {
            ctx->pc = 0x3BEE34u;
            goto label_3bee34;
        }
    }
    ctx->pc = 0x3BEE08u;
    // 0x3bee08: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3bee08u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3bee0c: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x3bee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x3bee10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bee10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bee14: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3bee14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3bee18: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3BEE18u;
    {
        const bool branch_taken_0x3bee18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bee18) {
            ctx->pc = 0x3BEE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEE18u;
            // 0x3bee1c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEDECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bedec;
        }
    }
    ctx->pc = 0x3BEE20u;
    // 0x3bee20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3BEE20u;
    {
        const bool branch_taken_0x3bee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEE20u;
        // 0x3bee24: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bee20) {
            ctx->pc = 0x3BEE38u;
            goto label_3bee38;
        }
    }
    ctx->pc = 0x3BEE28u;
label_3bee28:
    // 0x3bee28: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BEE28u;
    {
        const bool branch_taken_0x3bee28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3bee28) {
            ctx->pc = 0x3BEE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEE28u;
            // 0x3bee2c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BEE44u;
            goto label_3bee44;
        }
    }
    ctx->pc = 0x3BEE30u;
    // 0x3bee30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3bee30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3bee34:
    // 0x3bee34: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3bee34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3bee38:
    // 0x3bee38: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BEE38u;
    {
        const bool branch_taken_0x3bee38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bee38) {
            ctx->pc = 0x3BEE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bee28;
        }
    }
    ctx->pc = 0x3BEE40u;
    // 0x3bee40: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3bee40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3bee44:
    // 0x3bee44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bee44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bee48: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x3bee48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x3bee4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BEE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEE4Cu;
        // 0x3bee50: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEE54u;
}
