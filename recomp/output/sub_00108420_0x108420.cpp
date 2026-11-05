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

// Function: sub_00108420
// Address: 0x108420 - 0x108448
void sub_00108420_0x108420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108420_0x108420");
#endif

    switch (ctx->pc) {
        case 0x108438u: goto label_108438;
        default: break;
    }

    ctx->pc = 0x108420u;

    // 0x108420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108424: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108428: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108428u;
    {
        const bool branch_taken_0x108428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108428u;
        // 0x10842c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108428) {
            ctx->pc = 0x108438u;
            goto label_108438;
        }
    }
    ctx->pc = 0x108430u;
    // 0x108430: 0xc05fbe8  jal         func_17EFA0
    ctx->pc = 0x108430u;
    SET_GPR_U32(ctx, 31, 0x108438u);
    ctx->pc = 0x108434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108430u;
    // 0x108434: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EFA0u, 0x108430u, 0x108438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108438u;
label_108438:
    // 0x108438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10843c: 0x3e00008  jr          $ra
    ctx->pc = 0x10843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10843Cu;
        // 0x108440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10843Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108444u;
    // 0x108444: 0x0  nop
    ctx->pc = 0x108444u;
    // NOP
    ctx->pc = 0x108448u;
}
