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

// Function: sub_00177650
// Address: 0x177650 - 0x177680
void sub_00177650_0x177650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177650_0x177650");
#endif

    switch (ctx->pc) {
        case 0x177664u: goto label_177664;
        case 0x177670u: goto label_177670;
        default: break;
    }

    ctx->pc = 0x177650u;

    // 0x177650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177658: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17765c: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x17765Cu;
    SET_GPR_U32(ctx, 31, 0x177664u);
    ctx->pc = 0x177660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17765Cu;
    // 0x177660: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x17765Cu, 0x177664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177664u;
label_177664:
    // 0x177664: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177668: 0xc05e34a  jal         func_178D28
    ctx->pc = 0x177668u;
    SET_GPR_U32(ctx, 31, 0x177670u);
    ctx->pc = 0x17766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177668u;
    // 0x17766c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D28u, 0x177668u, 0x177670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177670u;
label_177670:
    // 0x177670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177674: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177678: 0x3e00008  jr          $ra
    ctx->pc = 0x177678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177678u;
        // 0x17767c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177680u;
}
