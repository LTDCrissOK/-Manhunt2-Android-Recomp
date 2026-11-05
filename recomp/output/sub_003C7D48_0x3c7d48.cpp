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

// Function: sub_003C7D48
// Address: 0x3c7d48 - 0x3c7db0
void sub_003C7D48_0x3c7d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7D48_0x3c7d48");
#endif

    switch (ctx->pc) {
        case 0x3c7d64u: goto label_3c7d64;
        case 0x3c7d88u: goto label_3c7d88;
        default: break;
    }

    ctx->pc = 0x3c7d48u;

    // 0x3c7d48: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x3c7d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3c7d4c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3c7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c7d50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3c7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c7d54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C7D54u;
    {
        const bool branch_taken_0x3c7d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D54u;
        // 0x3c7d58: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7d54) {
            ctx->pc = 0x3C7D74u;
            goto label_3c7d74;
        }
    }
    ctx->pc = 0x3C7D5Cu;
    // 0x3c7d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7D64u;
label_3c7d64:
    // 0x3c7d64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c7d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c7d68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c7d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D6Cu;
        // 0x3c7d70: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7D74u;
label_3c7d74:
    // 0x3c7d74: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x3c7d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x3c7d78: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x3c7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x3c7d7c: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x3c7d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3c7d80: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3c7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c7d84: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x3c7d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_3c7d88:
    // 0x3c7d88: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3c7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3c7d8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3c7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3c7d90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c7d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c7d94: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3C7D94u;
    {
        const bool branch_taken_0x3c7d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c7d94) {
            ctx->pc = 0x3C7D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7D94u;
            // 0x3c7d98: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7d64;
        }
    }
    ctx->pc = 0x3C7D9Cu;
    // 0x3c7d9c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3c7d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3c7da0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3C7DA0u;
    {
        const bool branch_taken_0x3c7da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7DA0u;
        // 0x3c7da4: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7da0) {
            ctx->pc = 0x3C7D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7d88;
        }
    }
    ctx->pc = 0x3C7DA8u;
    // 0x3c7da8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7DA8u;
        // 0x3c7dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7DB0u;
}
