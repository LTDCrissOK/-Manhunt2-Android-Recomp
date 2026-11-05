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

// Function: sub_0016A470
// Address: 0x16a470 - 0x16a498
void sub_0016A470_0x16a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A470_0x16a470");
#endif

    ctx->pc = 0x16a470u;

    // 0x16a470: 0x90820194  lbu         $v0, 0x194($a0)
    ctx->pc = 0x16a470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x16a474: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x16a474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16a478: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x16a478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16a47c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A47Cu;
    {
        const bool branch_taken_0x16a47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A47Cu;
        // 0x16a480: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a47c) {
            ctx->pc = 0x16A490u;
            goto label_16a490;
        }
    }
    ctx->pc = 0x16A484u;
    // 0x16a484: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16a484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16a488: 0x3e00008  jr          $ra
    ctx->pc = 0x16A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A488u;
        // 0x16a48c: 0x8c620154  lw          $v0, 0x154($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A490u;
label_16a490:
    // 0x16a490: 0x3e00008  jr          $ra
    ctx->pc = 0x16A490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A490u;
        // 0x16a494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A498u;
}
