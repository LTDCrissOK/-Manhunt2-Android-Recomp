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

// Function: sub_002D7F90
// Address: 0x2d7f90 - 0x2d7fc0
void sub_002D7F90_0x2d7f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7F90_0x2d7f90");
#endif

    switch (ctx->pc) {
        case 0x2d7fa8u: goto label_2d7fa8;
        default: break;
    }

    ctx->pc = 0x2d7f90u;

    // 0x2d7f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d7f94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7f98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d7f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d7fa0: 0xc0f7676  jal         func_3DD9D8
    ctx->pc = 0x2D7FA0u;
    SET_GPR_U32(ctx, 31, 0x2D7FA8u);
    ctx->pc = 0x2D7FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7FA0u;
    // 0x2d7fa4: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x2D7FA0u, 0x2D7FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7FA8u;
label_2d7fa8:
    // 0x2d7fa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7fac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d7facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7fb0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2d7fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FB8u;
        // 0x2d7fbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7FC0u;
}
