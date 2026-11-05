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

// Function: sub_0012FF10
// Address: 0x12ff10 - 0x12ff50
void sub_0012FF10_0x12ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FF10_0x12ff10");
#endif

    switch (ctx->pc) {
        case 0x12ff28u: goto label_12ff28;
        case 0x12ff38u: goto label_12ff38;
        default: break;
    }

    ctx->pc = 0x12ff10u;

    // 0x12ff10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12ff14: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x12ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x12ff18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ff18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ff1c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x12ff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12ff20: 0xc047866  jal         func_11E198
    ctx->pc = 0x12FF20u;
    SET_GPR_U32(ctx, 31, 0x12FF28u);
    ctx->pc = 0x12FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FF20u;
    // 0x12ff24: 0x24449a08  addiu       $a0, $v0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x12FF20u, 0x12FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF28u;
label_12ff28:
    // 0x12ff28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FF28u;
    {
        const bool branch_taken_0x12ff28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ff28) {
            ctx->pc = 0x12FF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FF28u;
            // 0x12ff2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FF40u;
            goto label_12ff40;
        }
    }
    ctx->pc = 0x12FF30u;
    // 0x12ff30: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x12FF30u;
    SET_GPR_U32(ctx, 31, 0x12FF38u);
    ctx->pc = 0x12FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FF30u;
    // 0x12ff34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x12FF30u, 0x12FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF38u;
label_12ff38:
    // 0x12ff38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12FF38u;
    {
        const bool branch_taken_0x12ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF38u;
        // 0x12ff3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff38) {
            ctx->pc = 0x12FF44u;
            goto label_12ff44;
        }
    }
    ctx->pc = 0x12FF40u;
label_12ff40:
    // 0x12ff40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ff40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ff44:
    // 0x12ff44: 0x3e00008  jr          $ra
    ctx->pc = 0x12FF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF44u;
        // 0x12ff48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FF4Cu;
    // 0x12ff4c: 0x0  nop
    ctx->pc = 0x12ff4cu;
    // NOP
    ctx->pc = 0x12ff50u;
}
