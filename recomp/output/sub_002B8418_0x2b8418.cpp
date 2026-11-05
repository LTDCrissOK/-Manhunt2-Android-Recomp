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

// Function: sub_002B8418
// Address: 0x2b8418 - 0x2b8450
void sub_002B8418_0x2b8418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8418_0x2b8418");
#endif

    switch (ctx->pc) {
        case 0x2b8434u: goto label_2b8434;
        default: break;
    }

    ctx->pc = 0x2b8418u;

    // 0x2b8418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b841c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2b841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b8420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8424: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b8424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b8428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b842c: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B842Cu;
    SET_GPR_U32(ctx, 31, 0x2B8434u);
    ctx->pc = 0x2B8430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B842Cu;
    // 0x2b8430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B842Cu, 0x2B8434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8434u;
label_2b8434:
    // 0x2b8434: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b8434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b8438: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b8438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b843c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b843cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b8440: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b8440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b8444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8448: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8448u;
        // 0x2b844c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8450u;
}
