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

// Function: sub_0016E750
// Address: 0x16e750 - 0x16e780
void sub_0016E750_0x16e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E750_0x16e750");
#endif

    switch (ctx->pc) {
        case 0x16e764u: goto label_16e764;
        case 0x16e76cu: goto label_16e76c;
        default: break;
    }

    ctx->pc = 0x16e750u;

    // 0x16e750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e758: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e75c: 0xc04f820  jal         func_13E080
    ctx->pc = 0x16E75Cu;
    SET_GPR_U32(ctx, 31, 0x16E764u);
    ctx->pc = 0x16E760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E75Cu;
    // 0x16e760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x16E75Cu, 0x16E764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E764u;
label_16e764:
    // 0x16e764: 0xc05b3da  jal         func_16CF68
    ctx->pc = 0x16E764u;
    SET_GPR_U32(ctx, 31, 0x16E76Cu);
    ctx->pc = 0x16E768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E764u;
    // 0x16e768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF68u, 0x16E764u, 0x16E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E76Cu;
label_16e76c:
    // 0x16e76c: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x16e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x16e770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e774: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e778: 0x3e00008  jr          $ra
    ctx->pc = 0x16E778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E778u;
        // 0x16e77c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E780u;
}
