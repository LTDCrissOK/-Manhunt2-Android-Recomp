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

// Function: sub_003E7F80
// Address: 0x3e7f80 - 0x3e7fa0
void sub_003E7F80_0x3e7f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7F80_0x3e7f80");
#endif

    switch (ctx->pc) {
        case 0x3e7f90u: goto label_3e7f90;
        default: break;
    }

    ctx->pc = 0x3e7f80u;

    // 0x3e7f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e7f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e7f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e7f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e7f88: 0xc0b0340  jal         func_2C0D00
    ctx->pc = 0x3E7F88u;
    SET_GPR_U32(ctx, 31, 0x3E7F90u);
    ctx->pc = 0x3E7F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7F88u;
    // 0x3e7f8c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D00u, 0x3E7F88u, 0x3E7F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7F90u;
label_3e7f90:
    // 0x3e7f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e7f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7f94: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F94u;
        // 0x3e7f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7F9Cu;
    // 0x3e7f9c: 0x0  nop
    ctx->pc = 0x3e7f9cu;
    // NOP
    ctx->pc = 0x3e7fa0u;
}
