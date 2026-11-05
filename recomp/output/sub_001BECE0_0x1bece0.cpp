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

// Function: sub_001BECE0
// Address: 0x1bece0 - 0x1bed10
void sub_001BECE0_0x1bece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BECE0_0x1bece0");
#endif

    switch (ctx->pc) {
        case 0x1bed00u: goto label_1bed00;
        default: break;
    }

    ctx->pc = 0x1bece0u;

    // 0x1bece0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bece4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bece4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bece8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1becec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bececu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1becf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1becf4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1becf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1becf8: 0xc06fb70  jal         func_1BEDC0
    ctx->pc = 0x1BECF8u;
    SET_GPR_U32(ctx, 31, 0x1BED00u);
    ctx->pc = 0x1BECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECF8u;
    // 0x1becfc: 0xac460014  sw          $a2, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEDC0u, 0x1BECF8u, 0x1BED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED00u;
label_1bed00:
    // 0x1bed00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bed00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bed04: 0x3e00008  jr          $ra
    ctx->pc = 0x1BED04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED04u;
        // 0x1bed08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BED04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BED0Cu;
    // 0x1bed0c: 0x0  nop
    ctx->pc = 0x1bed0cu;
    // NOP
    ctx->pc = 0x1bed10u;
}
