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

// Function: sub_003DB7A0
// Address: 0x3db7a0 - 0x3db7e8
void sub_003DB7A0_0x3db7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB7A0_0x3db7a0");
#endif

    switch (ctx->pc) {
        case 0x3db7b8u: goto label_3db7b8;
        default: break;
    }

    ctx->pc = 0x3db7a0u;

    // 0x3db7a0: 0x9486000c  lhu         $a2, 0xC($a0)
    ctx->pc = 0x3db7a0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3db7a4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x3DB7A4u;
    {
        const bool branch_taken_0x3db7a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7A4u;
        // 0x3db7a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db7a4) {
            ctx->pc = 0x3DB7E0u;
            goto label_3db7e0;
        }
    }
    ctx->pc = 0x3DB7ACu;
    // 0x3db7ac: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3db7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3db7b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3db7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3db7b4: 0x0  nop
    ctx->pc = 0x3db7b4u;
    // NOP
label_3db7b8:
    // 0x3db7b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3db7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3db7bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3db7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db7c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DB7C0u;
    {
        const bool branch_taken_0x3db7c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7C0u;
        // 0x3db7c4: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db7c0) {
            ctx->pc = 0x3DB7D0u;
            goto label_3db7d0;
        }
    }
    ctx->pc = 0x3DB7C8u;
    // 0x3db7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7C8u;
        // 0x3db7cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB7D0u;
label_3db7d0:
    // 0x3db7d0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3db7d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3db7d4: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x3db7d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3db7d8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3DB7D8u;
    {
        const bool branch_taken_0x3db7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7D8u;
        // 0x3db7dc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db7d8) {
            ctx->pc = 0x3DB7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3db7b8;
        }
    }
    ctx->pc = 0x3DB7E0u;
label_3db7e0:
    // 0x3db7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7E0u;
        // 0x3db7e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB7E8u;
}
