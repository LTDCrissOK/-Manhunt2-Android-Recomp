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

// Function: sub_002D33E0
// Address: 0x2d33e0 - 0x2d3420
void sub_002D33E0_0x2d33e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D33E0_0x2d33e0");
#endif

    switch (ctx->pc) {
        case 0x2d3404u: goto label_2d3404;
        default: break;
    }

    ctx->pc = 0x2d33e0u;

    // 0x2d33e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d33e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d33e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d33e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d33e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d33e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d33ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d33ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d33f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d33f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d33f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D33F4u;
    {
        const bool branch_taken_0x2d33f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d33f4) {
            ctx->pc = 0x2D33F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D33F4u;
            // 0x2d33f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3410u;
            goto label_2d3410;
        }
    }
    ctx->pc = 0x2D33FCu;
    // 0x2d33fc: 0xc0e53ce  jal         func_394F38
    ctx->pc = 0x2D33FCu;
    SET_GPR_U32(ctx, 31, 0x2D3404u);
    ctx->pc = 0x394F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F38u, 0x2D33FCu, 0x2D3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3404u;
label_2d3404:
    // 0x2d3404: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d3404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d3408: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x2d3408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d340c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d340cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d3410:
    // 0x2d3410: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d3410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3414: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3414u;
        // 0x2d3418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D341Cu;
    // 0x2d341c: 0x0  nop
    ctx->pc = 0x2d341cu;
    // NOP
    ctx->pc = 0x2d3420u;
}
