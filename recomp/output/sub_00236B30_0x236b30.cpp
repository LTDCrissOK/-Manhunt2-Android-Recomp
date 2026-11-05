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

// Function: sub_00236B30
// Address: 0x236b30 - 0x236b68
void sub_00236B30_0x236b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236B30_0x236b30");
#endif

    switch (ctx->pc) {
        case 0x236b40u: goto label_236b40;
        case 0x236b50u: goto label_236b50;
        default: break;
    }

    ctx->pc = 0x236b30u;

    // 0x236b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236b38: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x236B38u;
    SET_GPR_U32(ctx, 31, 0x236B40u);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x236B38u, 0x236B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B40u;
label_236b40:
    // 0x236b40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236B40u;
    {
        const bool branch_taken_0x236b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B40u;
        // 0x236b44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b40) {
            ctx->pc = 0x236B54u;
            goto label_236b54;
        }
    }
    ctx->pc = 0x236B48u;
    // 0x236b48: 0xc097f52  jal         func_25FD48
    ctx->pc = 0x236B48u;
    SET_GPR_U32(ctx, 31, 0x236B50u);
    ctx->pc = 0x236B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B48u;
    // 0x236b4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FD48u, 0x236B48u, 0x236B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B50u;
label_236b50:
    // 0x236b50: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x236b50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_236b54:
    // 0x236b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236b58: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x236b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x236B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B5Cu;
        // 0x236b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236B64u;
    // 0x236b64: 0x0  nop
    ctx->pc = 0x236b64u;
    // NOP
    ctx->pc = 0x236b68u;
}
