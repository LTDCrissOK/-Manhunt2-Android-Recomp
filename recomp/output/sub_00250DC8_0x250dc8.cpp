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

// Function: sub_00250DC8
// Address: 0x250dc8 - 0x250e08
void sub_00250DC8_0x250dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250DC8_0x250dc8");
#endif

    switch (ctx->pc) {
        case 0x250dd8u: goto label_250dd8;
        default: break;
    }

    ctx->pc = 0x250dc8u;

    // 0x250dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250dcc: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x250dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x250dd0: 0x248201d0  addiu       $v0, $a0, 0x1D0
    ctx->pc = 0x250dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x250dd4: 0x0  nop
    ctx->pc = 0x250dd4u;
    // NOP
label_250dd8:
    // 0x250dd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x250dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x250ddc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x250ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x250de0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x250de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x250de4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x250de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x250de8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x250de8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250dec: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x250decu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250df0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x250df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x250df4: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x250DF4u;
    {
        const bool branch_taken_0x250df4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x250DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DF4u;
        // 0x250df8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250df4) {
            ctx->pc = 0x250DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250dd8;
        }
    }
    ctx->pc = 0x250DFCu;
    // 0x250dfc: 0xac8001cc  sw          $zero, 0x1CC($a0)
    ctx->pc = 0x250dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 460), GPR_U32(ctx, 0));
    // 0x250e00: 0x3e00008  jr          $ra
    ctx->pc = 0x250E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E00u;
        // 0x250e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250E08u;
}
