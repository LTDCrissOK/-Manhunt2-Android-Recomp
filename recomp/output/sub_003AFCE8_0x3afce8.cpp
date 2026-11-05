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

// Function: sub_003AFCE8
// Address: 0x3afce8 - 0x3afd60
void sub_003AFCE8_0x3afce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AFCE8_0x3afce8");
#endif

    ctx->pc = 0x3afce8u;

    // 0x3afce8: 0x28a50014  slti        $a1, $a1, 0x14
    ctx->pc = 0x3afce8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3afcec: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3afcecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afcf0: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3AFCF0u;
    {
        const bool branch_taken_0x3afcf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFCF0u;
        // 0x3afcf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afcf0) {
            ctx->pc = 0x3AFD58u;
            goto label_3afd58;
        }
    }
    ctx->pc = 0x3AFCF8u;
    // 0x3afcf8: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x3afcf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3afcfc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3afcfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3afd00: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x3afd00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3afd04: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3afd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3afd08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3afd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3afd0c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3afd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3afd10: 0x14650011  bne         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AFD10u;
    {
        const bool branch_taken_0x3afd10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AFD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD10u;
        // 0x3afd14: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afd10) {
            ctx->pc = 0x3AFD58u;
            goto label_3afd58;
        }
    }
    ctx->pc = 0x3AFD18u;
    // 0x3afd18: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x3afd18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3afd1c: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x3afd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3afd20: 0x91040003  lbu         $a0, 0x3($t0)
    ctx->pc = 0x3afd20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3afd24: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3afd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3afd28: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3afd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3afd2c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3afd2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3afd30: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3afd30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3afd34: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3afd34u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3afd38: 0x28840010  slti        $a0, $a0, 0x10
    ctx->pc = 0x3afd38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3afd3c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AFD3Cu;
    {
        const bool branch_taken_0x3afd3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD3Cu;
        // 0x3afd40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afd3c) {
            ctx->pc = 0x3AFD58u;
            goto label_3afd58;
        }
    }
    ctx->pc = 0x3AFD44u;
    // 0x3afd44: 0x91040012  lbu         $a0, 0x12($t0)
    ctx->pc = 0x3afd44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x3afd48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3afd48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd4c: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3afd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3afd50: 0x91030013  lbu         $v1, 0x13($t0)
    ctx->pc = 0x3afd50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 19)));
    // 0x3afd54: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3afd54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_3afd58:
    // 0x3afd58: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFD60u;
}
