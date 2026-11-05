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

// Function: sub_002FF818
// Address: 0x2ff818 - 0x2ff850
void sub_002FF818_0x2ff818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF818_0x2ff818");
#endif

    switch (ctx->pc) {
        case 0x2ff82cu: goto label_2ff82c;
        case 0x2ff83cu: goto label_2ff83c;
        default: break;
    }

    ctx->pc = 0x2ff818u;

    // 0x2ff818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff81c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff820: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ff820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ff824: 0xc0bfcc4  jal         func_2FF310
    ctx->pc = 0x2FF824u;
    SET_GPR_U32(ctx, 31, 0x2FF82Cu);
    ctx->pc = 0x2FF828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF824u;
    // 0x2ff828: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF310u, 0x2FF824u, 0x2FF82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF82Cu;
label_2ff82c:
    // 0x2ff82c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ff830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff834: 0xc0bfc80  jal         func_2FF200
    ctx->pc = 0x2FF834u;
    SET_GPR_U32(ctx, 31, 0x2FF83Cu);
    ctx->pc = 0x2FF838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF834u;
    // 0x2ff838: 0xc48c02e4  lwc1        $f12, 0x2E4($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF200u, 0x2FF834u, 0x2FF83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF83Cu;
label_2ff83c:
    // 0x2ff83c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff840: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ff840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff844: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF844u;
        // 0x2ff848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF84Cu;
    // 0x2ff84c: 0x0  nop
    ctx->pc = 0x2ff84cu;
    // NOP
    ctx->pc = 0x2ff850u;
}
