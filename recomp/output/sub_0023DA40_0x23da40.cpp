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

// Function: sub_0023DA40
// Address: 0x23da40 - 0x23db38
void sub_0023DA40_0x23da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DA40_0x23da40");
#endif

    ctx->pc = 0x23da40u;

    // 0x23da40: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x23da40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da44: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x23da44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x23da48: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DA48u;
    {
        const bool branch_taken_0x23da48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23da48) {
            ctx->pc = 0x23DA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DA48u;
            // 0x23da4c: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DA68u;
            goto label_23da68;
        }
    }
    ctx->pc = 0x23DA50u;
    // 0x23da50: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x23da50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23da54: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x23da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x23da58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DA58u;
    {
        const bool branch_taken_0x23da58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA58u;
        // 0x23da5c: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da58) {
            ctx->pc = 0x23DA68u;
            goto label_23da68;
        }
    }
    ctx->pc = 0x23DA60u;
    // 0x23da60: 0x3e00008  jr          $ra
    ctx->pc = 0x23DA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA60u;
        // 0x23da64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DA68u;
label_23da68:
    // 0x23da68: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x23da68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23da6c: 0x244b46a0  addiu       $t3, $v0, 0x46A0
    ctx->pc = 0x23da6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 18080));
    // 0x23da70: 0x1636021  addu        $t4, $t3, $v1
    ctx->pc = 0x23da70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x23da74: 0x8d86761c  lw          $a2, 0x761C($t4)
    ctx->pc = 0x23da74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 30236)));
    // 0x23da78: 0x28c20384  slti        $v0, $a2, 0x384
    ctx->pc = 0x23da78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)900) ? 1 : 0);
    // 0x23da7c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x23DA7Cu;
    {
        const bool branch_taken_0x23da7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA7Cu;
        // 0x23da80: 0x63880  sll         $a3, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da7c) {
            ctx->pc = 0x23DB2Cu;
            goto label_23db2c;
        }
    }
    ctx->pc = 0x23DA84u;
    // 0x23da84: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x23da84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x23da88: 0x8d847618  lw          $a0, 0x7618($t4)
    ctx->pc = 0x23da88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 30232)));
    // 0x23da8c: 0x3402e100  ori         $v0, $zero, 0xE100
    ctx->pc = 0x23da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57600);
    // 0x23da90: 0x3408a8c0  ori         $t0, $zero, 0xA8C0
    ctx->pc = 0x23da90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43200);
    // 0x23da94: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x23da94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x23da98: 0x3403e808  ori         $v1, $zero, 0xE808
    ctx->pc = 0x23da98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59400);
    // 0x23da9c: 0x8d490008  lw          $t1, 0x8($t2)
    ctx->pc = 0x23da9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x23daa0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x23daa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23daa4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x23daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x23daa8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x23daa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x23daac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x23daacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x23dab0: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x23dab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x23dab4: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x23dab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x23dab8: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x23dab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x23dabc: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x23dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x23dac0: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x23dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x23dac4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23dac4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dac8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x23dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23dacc: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x23daccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x23dad0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23dad4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23dad4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dad8: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x23dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23dadc: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x23dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x23dae0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x23dae4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23dae4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23dae8: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x23dae8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23daec: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x23daecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x23daf0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23daf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23daf4: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x23daf4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23daf8: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x23daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x23dafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23db00: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x23db00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23db04: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x23db04u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23db08: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x23db08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x23db0c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x23db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x23db10: 0x8d837618  lw          $v1, 0x7618($t4)
    ctx->pc = 0x23db10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 30232)));
    // 0x23db14: 0x8d84761c  lw          $a0, 0x761C($t4)
    ctx->pc = 0x23db14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 30236)));
    // 0x23db18: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x23db18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x23db1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23db1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23db20: 0xad837618  sw          $v1, 0x7618($t4)
    ctx->pc = 0x23db20u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 30232), GPR_U32(ctx, 3));
    // 0x23db24: 0x3e00008  jr          $ra
    ctx->pc = 0x23DB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB24u;
        // 0x23db28: 0xad84761c  sw          $a0, 0x761C($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 30236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DB2Cu;
label_23db2c:
    // 0x23db2c: 0x3e00008  jr          $ra
    ctx->pc = 0x23DB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB2Cu;
        // 0x23db30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DB34u;
    // 0x23db34: 0x0  nop
    ctx->pc = 0x23db34u;
    // NOP
    ctx->pc = 0x23db38u;
}
