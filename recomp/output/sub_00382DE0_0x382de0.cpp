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

// Function: sub_00382DE0
// Address: 0x382de0 - 0x382e08
void sub_00382DE0_0x382de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382DE0_0x382de0");
#endif

    switch (ctx->pc) {
        case 0x382de0u: goto label_382de0;
        case 0x382de4u: goto label_382de4;
        case 0x382de8u: goto label_382de8;
        case 0x382decu: goto label_382dec;
        case 0x382df0u: goto label_382df0;
        case 0x382df4u: goto label_382df4;
        case 0x382df8u: goto label_382df8;
        case 0x382dfcu: goto label_382dfc;
        case 0x382e00u: goto label_382e00;
        case 0x382e04u: goto label_382e04;
        default: break;
    }

    ctx->pc = 0x382de0u;

label_382de0:
    // 0x382de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x382de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_382de4:
    // 0x382de4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x382de4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_382de8:
    // 0x382de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_382dec:
    // 0x382dec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x382decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382df0:
    // 0x382df0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x382df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_382df4:
    // 0x382df4: 0x40f809  jalr        $v0
label_382df8:
    if (ctx->pc == 0x382DF8u) {
        ctx->pc = 0x382DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382DF4u;
        // 0x382df8: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382DFCu;
        goto label_382dfc;
    }
    ctx->pc = 0x382DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382DFCu);
        ctx->pc = 0x382DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382DF4u;
        // 0x382df8: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382DF4u, 0x382DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382DFCu;
label_382dfc:
    // 0x382dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_382e00:
    // 0x382e00: 0x3e00008  jr          $ra
label_382e04:
    if (ctx->pc == 0x382E04u) {
        ctx->pc = 0x382E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E00u;
        // 0x382e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382E08u;
        goto label_fallthrough_0x382e00;
    }
    ctx->pc = 0x382E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E00u;
        // 0x382e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x382e00:
    ctx->pc = 0x382E08u;
}
