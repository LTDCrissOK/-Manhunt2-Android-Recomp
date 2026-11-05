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

// Function: sub_003EBF88
// Address: 0x3ebf88 - 0x3ebfb0
void sub_003EBF88_0x3ebf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBF88_0x3ebf88");
#endif

    switch (ctx->pc) {
        case 0x3ebfa4u: goto label_3ebfa4;
        default: break;
    }

    ctx->pc = 0x3ebf88u;

    // 0x3ebf88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ebf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ebf8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ebf8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ebf90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ebf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ebf94: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3ebf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3ebf98: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3ebf98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3ebf9c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3EBF9Cu;
    SET_GPR_U32(ctx, 31, 0x3EBFA4u);
    ctx->pc = 0x3EBFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBF9Cu;
    // 0x3ebfa0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3EBF9Cu, 0x3EBFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBFA4u;
label_3ebfa4:
    // 0x3ebfa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ebfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ebfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EBFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFA8u;
        // 0x3ebfac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EBFB0u;
}
