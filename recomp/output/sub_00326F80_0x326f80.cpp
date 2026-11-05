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

// Function: sub_00326F80
// Address: 0x326f80 - 0x326fc0
void sub_00326F80_0x326f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326F80_0x326f80");
#endif

    switch (ctx->pc) {
        case 0x326fa4u: goto label_326fa4;
        default: break;
    }

    ctx->pc = 0x326f80u;

    // 0x326f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326f84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x326f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326f8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x326f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326f90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x326f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x326f94: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326F94u;
    {
        const bool branch_taken_0x326f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x326F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F94u;
        // 0x326f98: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f94) {
            ctx->pc = 0x326FB0u;
            goto label_326fb0;
        }
    }
    ctx->pc = 0x326F9Cu;
    // 0x326f9c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x326F9Cu;
    SET_GPR_U32(ctx, 31, 0x326FA4u);
    ctx->pc = 0x326FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F9Cu;
    // 0x326fa0: 0x24c50004  addiu       $a1, $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x326F9Cu, 0x326FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FA4u;
label_326fa4:
    // 0x326fa4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x326fa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326fa8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x326FA8u;
    {
        const bool branch_taken_0x326fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FA8u;
        // 0x326fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fa8) {
            ctx->pc = 0x326FB4u;
            goto label_326fb4;
        }
    }
    ctx->pc = 0x326FB0u;
label_326fb0:
    // 0x326fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326fb4:
    // 0x326fb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x326FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FB8u;
        // 0x326fbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326FC0u;
}
