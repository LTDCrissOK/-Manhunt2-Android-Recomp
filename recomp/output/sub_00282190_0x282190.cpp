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

// Function: sub_00282190
// Address: 0x282190 - 0x2821c0
void sub_00282190_0x282190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282190_0x282190");
#endif

    switch (ctx->pc) {
        case 0x2821a0u: goto label_2821a0;
        case 0x2821a8u: goto label_2821a8;
        default: break;
    }

    ctx->pc = 0x282190u;

    // 0x282190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x282190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282198: 0xc0d584a  jal         func_356128
    ctx->pc = 0x282198u;
    SET_GPR_U32(ctx, 31, 0x2821A0u);
    ctx->pc = 0x356128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356128u, 0x282198u, 0x2821A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2821A0u;
label_2821a0:
    // 0x2821a0: 0xc0d58e0  jal         func_356380
    ctx->pc = 0x2821A0u;
    SET_GPR_U32(ctx, 31, 0x2821A8u);
    ctx->pc = 0x2821A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2821A0u;
    // 0x2821a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356380u, 0x2821A0u, 0x2821A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2821A8u;
label_2821a8:
    // 0x2821a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2821a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2821ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2821ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2821B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821ACu;
        // 0x2821b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2821ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2821B4u;
    // 0x2821b4: 0x0  nop
    ctx->pc = 0x2821b4u;
    // NOP
    // 0x2821b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2821b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2821bc: 0x0  nop
    ctx->pc = 0x2821bcu;
    // NOP
    ctx->pc = 0x2821c0u;
}
