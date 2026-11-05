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

// Function: sub_003A3F90
// Address: 0x3a3f90 - 0x3a3fc0
void sub_003A3F90_0x3a3f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3F90_0x3a3f90");
#endif

    switch (ctx->pc) {
        case 0x3a3facu: goto label_3a3fac;
        default: break;
    }

    ctx->pc = 0x3a3f90u;

    // 0x3a3f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a3f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a3f94: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a3f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a3f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a3f9c: 0x24422a90  addiu       $v0, $v0, 0x2A90
    ctx->pc = 0x3a3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10896));
    // 0x3a3fa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a3fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3fa4: 0xc0e95aa  jal         func_3A56A8
    ctx->pc = 0x3A3FA4u;
    SET_GPR_U32(ctx, 31, 0x3A3FACu);
    ctx->pc = 0x3A3FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3FA4u;
    // 0x3a3fa8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A56A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A56A8u, 0x3A3FA4u, 0x3A3FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3FACu;
label_3a3fac:
    // 0x3a3fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3fb0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a3fb4: 0x24422aa8  addiu       $v0, $v0, 0x2AA8
    ctx->pc = 0x3a3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10920));
    // 0x3a3fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FB8u;
        // 0x3a3fbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3FC0u;
}
