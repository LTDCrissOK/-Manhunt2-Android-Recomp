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

// Function: sub_00326FC0
// Address: 0x326fc0 - 0x327000
void sub_00326FC0_0x326fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326FC0_0x326fc0");
#endif

    switch (ctx->pc) {
        case 0x326fe0u: goto label_326fe0;
        default: break;
    }

    ctx->pc = 0x326fc0u;

    // 0x326fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326fc4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x326fc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326fc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326fcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x326fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x326fd0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326FD0u;
    {
        const bool branch_taken_0x326fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FD0u;
        // 0x326fd4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fd0) {
            ctx->pc = 0x326FECu;
            goto label_326fec;
        }
    }
    ctx->pc = 0x326FD8u;
    // 0x326fd8: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x326FD8u;
    SET_GPR_U32(ctx, 31, 0x326FE0u);
    ctx->pc = 0x326FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326FD8u;
    // 0x326fdc: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x326FD8u, 0x326FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FE0u;
label_326fe0:
    // 0x326fe0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x326fe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326fe4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x326FE4u;
    {
        const bool branch_taken_0x326fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FE4u;
        // 0x326fe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fe4) {
            ctx->pc = 0x326FF0u;
            goto label_326ff0;
        }
    }
    ctx->pc = 0x326FECu;
label_326fec:
    // 0x326fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326ff0:
    // 0x326ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x326FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FF4u;
        // 0x326ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326FFCu;
    // 0x326ffc: 0x0  nop
    ctx->pc = 0x326ffcu;
    // NOP
    ctx->pc = 0x327000u;
}
