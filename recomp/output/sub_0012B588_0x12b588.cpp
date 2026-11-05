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

// Function: sub_0012B588
// Address: 0x12b588 - 0x12b5b8
void sub_0012B588_0x12b588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B588_0x12b588");
#endif

    switch (ctx->pc) {
        case 0x12b59cu: goto label_12b59c;
        case 0x12b5a8u: goto label_12b5a8;
        default: break;
    }

    ctx->pc = 0x12b588u;

    // 0x12b588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b58c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b590: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12b594: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12B594u;
    SET_GPR_U32(ctx, 31, 0x12B59Cu);
    ctx->pc = 0x12B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B594u;
    // 0x12b598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12B594u, 0x12B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B59Cu;
label_12b59c:
    // 0x12b59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b5a0: 0xc04b148  jal         func_12C520
    ctx->pc = 0x12B5A0u;
    SET_GPR_U32(ctx, 31, 0x12B5A8u);
    ctx->pc = 0x12B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5A0u;
    // 0x12b5a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C520u, 0x12B5A0u, 0x12B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5A8u;
label_12b5a8:
    // 0x12b5a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b5ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12b5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x12B5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5B0u;
        // 0x12b5b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B5B8u;
}
