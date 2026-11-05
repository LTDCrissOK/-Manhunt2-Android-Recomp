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

// Function: sub_003EC028
// Address: 0x3ec028 - 0x3ec050
void sub_003EC028_0x3ec028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC028_0x3ec028");
#endif

    switch (ctx->pc) {
        case 0x3ec044u: goto label_3ec044;
        default: break;
    }

    ctx->pc = 0x3ec028u;

    // 0x3ec028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec02c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ec02cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec034: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3ec034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3ec038: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3ec038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3ec03c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3EC03Cu;
    SET_GPR_U32(ctx, 31, 0x3EC044u);
    ctx->pc = 0x3EC040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC03Cu;
    // 0x3ec040: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3EC03Cu, 0x3EC044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC044u;
label_3ec044:
    // 0x3ec044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec048: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC048u;
        // 0x3ec04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC050u;
}
