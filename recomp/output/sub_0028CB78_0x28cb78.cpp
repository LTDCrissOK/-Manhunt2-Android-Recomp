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

// Function: sub_0028CB78
// Address: 0x28cb78 - 0x28cda8
void sub_0028CB78_0x28cb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CB78_0x28cb78");
#endif

    switch (ctx->pc) {
        case 0x28cbbcu: goto label_28cbbc;
        case 0x28cbd8u: goto label_28cbd8;
        case 0x28cc48u: goto label_28cc48;
        case 0x28ccd0u: goto label_28ccd0;
        case 0x28cd44u: goto label_28cd44;
        case 0x28cd58u: goto label_28cd58;
        case 0x28cd68u: goto label_28cd68;
        case 0x28cd80u: goto label_28cd80;
        case 0x28cd88u: goto label_28cd88;
        default: break;
    }

    ctx->pc = 0x28cb78u;

    // 0x28cb78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28cb7c: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x28cb7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x28cb80: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x28cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x28cb84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28cb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cb88: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x28cb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x28cb8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28cb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb90: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x28cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x28cb94: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x28cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28cb98: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x28cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x28cb9c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x28cb9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cba0: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x28cba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x28cba4: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x28cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x28cba8: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x28cba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x28cbac: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x28cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x28cbb0: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x28cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x28cbb4: 0xc0a3294  jal         func_28CA50
    ctx->pc = 0x28CBB4u;
    SET_GPR_U32(ctx, 31, 0x28CBBCu);
    ctx->pc = 0x28CBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBB4u;
    // 0x28cbb8: 0xa3a60004  sb          $a2, 0x4($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CA50u, 0x28CBB4u, 0x28CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBBCu;
label_28cbbc:
    // 0x28cbbc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x28cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x28cbc0: 0x24443500  addiu       $a0, $v0, 0x3500
    ctx->pc = 0x28cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x28cbc4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x28cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3504u));
    // 0x28cbc8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x28cbc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A350Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A350Cu, _value); } while (0);
    // 0x28cbcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28cbccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cbd0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x28CBD0u;
    {
        const bool branch_taken_0x28cbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBD0u;
        // 0x28cbd4: 0x3c14006c  lui         $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbd0) {
            ctx->pc = 0x28CCA0u;
            goto label_28cca0;
        }
    }
    ctx->pc = 0x28CBD8u;
label_28cbd8:
    // 0x28cbd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28cbd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cbdc: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x28cbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x28cbe0: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x28cbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x28cbe4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CBE4u;
    {
        const bool branch_taken_0x28cbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBE4u;
        // 0x28cbe8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbe4) {
            ctx->pc = 0x28CBF8u;
            goto label_28cbf8;
        }
    }
    ctx->pc = 0x28CBECu;
    // 0x28cbec: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x28cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x28cbf0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x28cbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x28cbf4: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x28cbf4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28cbf8:
    // 0x28cbf8: 0x8e220188  lw          $v0, 0x188($s1)
    ctx->pc = 0x28cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x28cbfc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28CBFCu;
    {
        const bool branch_taken_0x28cbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBFCu;
        // 0x28cc00: 0x30828001  andi        $v0, $a0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbfc) {
            ctx->pc = 0x28CC34u;
            goto label_28cc34;
        }
    }
    ctx->pc = 0x28CC04u;
    // 0x28cc04: 0x38428001  xori        $v0, $v0, 0x8001
    ctx->pc = 0x28cc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32769);
    // 0x28cc08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28CC08u;
    {
        const bool branch_taken_0x28cc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC08u;
        // 0x28cc0c: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc08) {
            ctx->pc = 0x28CC30u;
            goto label_28cc30;
        }
    }
    ctx->pc = 0x28CC10u;
    // 0x28cc10: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28cc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28cc14: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x28cc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x28cc18: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CC18u;
    {
        const bool branch_taken_0x28cc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC18u;
        // 0x28cc1c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc18) {
            ctx->pc = 0x28CC30u;
            goto label_28cc30;
        }
    }
    ctx->pc = 0x28CC20u;
    // 0x28cc20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28cc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28cc24: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x28cc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x28cc28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CC28u;
    {
        const bool branch_taken_0x28cc28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC28u;
        // 0x28cc2c: 0x38a30181  xori        $v1, $a1, 0x181 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)385);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc28) {
            ctx->pc = 0x28CC38u;
            goto label_28cc38;
        }
    }
    ctx->pc = 0x28CC30u;
label_28cc30:
    // 0x28cc30: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x28cc30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28cc34:
    // 0x28cc34: 0x38a30181  xori        $v1, $a1, 0x181
    ctx->pc = 0x28cc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)385);
label_28cc38:
    // 0x28cc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cc3c: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x28cc3cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x28cc40: 0xc0a368a  jal         func_28DA28
    ctx->pc = 0x28CC40u;
    SET_GPR_U32(ctx, 31, 0x28CC48u);
    ctx->pc = 0x28CC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC40u;
    // 0x28cc44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DA28u, 0x28CC40u, 0x28CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC48u;
label_28cc48:
    // 0x28cc48: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x28cc48u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x28cc4c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x28CC4Cu;
    {
        const bool branch_taken_0x28cc4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC4Cu;
        // 0x28cc50: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc4c) {
            ctx->pc = 0x28CC88u;
            goto label_28cc88;
        }
    }
    ctx->pc = 0x28CC54u;
    // 0x28cc54: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x28cc54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x28cc58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28CC58u;
    {
        const bool branch_taken_0x28cc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC58u;
        // 0x28cc5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc58) {
            ctx->pc = 0x28CC88u;
            goto label_28cc88;
        }
    }
    ctx->pc = 0x28CC60u;
    // 0x28cc60: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x28cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28cc64: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x28cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x28cc68: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x28cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x28cc6c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x28cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28cc70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28cc74: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x28cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x28cc78: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x28cc78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x28cc7c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x28cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28cc80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28cc84: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x28cc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_28cc88:
    // 0x28cc88: 0x26433500  addiu       $v1, $s2, 0x3500
    ctx->pc = 0x28cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
    // 0x28cc8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28cc90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CC90u;
    {
        const bool branch_taken_0x28cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cc90) {
            ctx->pc = 0x28CC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CC90u;
            // 0x28cc94: 0x26423500  addiu       $v0, $s2, 0x3500 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CCA4u;
            goto label_28cca4;
        }
    }
    ctx->pc = 0x28CC98u;
    // 0x28cc98: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x28cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28cc9c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x28cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_28cca0:
    // 0x28cca0: 0x26423500  addiu       $v0, $s2, 0x3500
    ctx->pc = 0x28cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
label_28cca4:
    // 0x28cca4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x28cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28cca8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28CCA8u;
    {
        const bool branch_taken_0x28cca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCA8u;
        // 0x28ccac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cca8) {
            ctx->pc = 0x28CCB4u;
            goto label_28ccb4;
        }
    }
    ctx->pc = 0x28CCB0u;
    // 0x28ccb0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x28ccb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28ccb4:
    // 0x28ccb4: 0x5620ffc8  bnel        $s1, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x28CCB4u;
    {
        const bool branch_taken_0x28ccb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ccb4) {
            ctx->pc = 0x28CCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CCB4u;
            // 0x28ccb8: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28cbd8;
        }
    }
    ctx->pc = 0x28CCBCu;
    // 0x28ccbc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28ccc0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28ccc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ccc4: 0x2448ca10  addiu       $t0, $v0, -0x35F0
    ctx->pc = 0x28ccc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x28ccc8: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x28ccc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28cccc: 0x0  nop
    ctx->pc = 0x28ccccu;
    // NOP
label_28ccd0:
    // 0x28ccd0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x28ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28ccd4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28CCD4u;
    {
        const bool branch_taken_0x28ccd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCD4u;
        // 0x28ccd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccd4) {
            ctx->pc = 0x28CD20u;
            goto label_28cd20;
        }
    }
    ctx->pc = 0x28CCDCu;
    // 0x28ccdc: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x28ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x28cce0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x28cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28cce4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x28cce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x28cce8: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x28cce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x28ccec: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x28ccecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x28ccf0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28CCF0u;
    {
        const bool branch_taken_0x28ccf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCF0u;
        // 0x28ccf4: 0x122300a  movz        $a2, $t1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccf0) {
            ctx->pc = 0x28CD20u;
            goto label_28cd20;
        }
    }
    ctx->pc = 0x28CCF8u;
    // 0x28ccf8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x28ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x28ccfc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x28ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x28cd00: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x28cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x28cd04: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x28cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28cd08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28cd0c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x28cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x28cd10: 0xa0660004  sb          $a2, 0x4($v1)
    ctx->pc = 0x28cd10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x28cd14: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x28cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28cd18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28cd1c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x28cd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_28cd20:
    // 0x28cd20: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28cd20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28cd24: 0x4e1ffea  bgez        $a3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x28CD24u;
    {
        const bool branch_taken_0x28cd24 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x28CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD24u;
        // 0x28cd28: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd24) {
            ctx->pc = 0x28CCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ccd0;
        }
    }
    ctx->pc = 0x28CD2Cu;
    // 0x28cd2c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x28cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28cd30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28cd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28cd34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd38: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x28cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x28cd3c: 0xc0f854e  jal         func_3E1538
    ctx->pc = 0x28CD3Cu;
    SET_GPR_U32(ctx, 31, 0x28CD44u);
    ctx->pc = 0x28CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD3Cu;
    // 0x28cd40: 0x3a52821  addu        $a1, $sp, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1538u, 0x28CD3Cu, 0x28CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD44u;
label_28cd44:
    // 0x28cd44: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x28cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28cd48: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28CD48u;
    {
        const bool branch_taken_0x28cd48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD48u;
        // 0x28cd4c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd48) {
            ctx->pc = 0x28CD78u;
            goto label_28cd78;
        }
    }
    ctx->pc = 0x28CD50u;
    // 0x28cd50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28cd54: 0x0  nop
    ctx->pc = 0x28cd54u;
    // NOP
label_28cd58:
    // 0x28cd58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28cd58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28cd5c: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x28cd5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28cd60: 0xc0a336a  jal         func_28CDA8
    ctx->pc = 0x28CD60u;
    SET_GPR_U32(ctx, 31, 0x28CD68u);
    ctx->pc = 0x28CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD60u;
    // 0x28cd64: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDA8u, 0x28CD60u, 0x28CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD68u;
label_28cd68:
    // 0x28cd68: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x28cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28cd6c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x28cd6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28cd70: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28CD70u;
    {
        const bool branch_taken_0x28cd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cd70) {
            ctx->pc = 0x28CD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CD70u;
            // 0x28cd74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28cd58;
        }
    }
    ctx->pc = 0x28CD78u;
label_28cd78:
    // 0x28cd78: 0xc0a3b0c  jal         func_28EC30
    ctx->pc = 0x28CD78u;
    SET_GPR_U32(ctx, 31, 0x28CD80u);
    ctx->pc = 0x28CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD78u;
    // 0x28cd7c: 0x2684c9f0  addiu       $a0, $s4, -0x3610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC30u, 0x28CD78u, 0x28CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD80u;
label_28cd80:
    // 0x28cd80: 0xc0a359c  jal         func_28D670
    ctx->pc = 0x28CD80u;
    SET_GPR_U32(ctx, 31, 0x28CD88u);
    ctx->pc = 0x28D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D670u, 0x28CD80u, 0x28CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD88u;
label_28cd88:
    // 0x28cd88: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x28cd88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28cd8c: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x28cd8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x28cd90: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x28cd90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28cd94: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x28cd94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x28cd98: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x28cd98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28cd9c: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x28cd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28cda0: 0x3e00008  jr          $ra
    ctx->pc = 0x28CDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDA0u;
        // 0x28cda4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CDA8u;
}
