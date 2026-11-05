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

// Function: sub_00211368
// Address: 0x211368 - 0x2113b0
void sub_00211368_0x211368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211368_0x211368");
#endif

    switch (ctx->pc) {
        case 0x211380u: goto label_211380;
        case 0x211388u: goto label_211388;
        case 0x211390u: goto label_211390;
        default: break;
    }

    ctx->pc = 0x211368u;

    // 0x211368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21136c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21136cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211374: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x211374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x211378: 0xc0844c0  jal         func_211300
    ctx->pc = 0x211378u;
    SET_GPR_U32(ctx, 31, 0x211380u);
    ctx->pc = 0x21137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211378u;
    // 0x21137c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211300u, 0x211378u, 0x211380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211380u;
label_211380:
    // 0x211380: 0xc08583c  jal         func_2160F0
    ctx->pc = 0x211380u;
    SET_GPR_U32(ctx, 31, 0x211388u);
    ctx->pc = 0x211384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211380u;
    // 0x211384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2160F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2160F0u, 0x211380u, 0x211388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211388u;
label_211388:
    // 0x211388: 0xc0844ec  jal         func_2113B0
    ctx->pc = 0x211388u;
    SET_GPR_U32(ctx, 31, 0x211390u);
    ctx->pc = 0x21138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211388u;
    // 0x21138c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2113B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2113B0u, 0x211388u, 0x211390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211390u;
label_211390:
    // 0x211390: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x211390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x211394: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x211394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x211398: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x211398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21139c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21139cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2113a0: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2113a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x2113a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2113a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2113a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2113A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2113ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113A8u;
        // 0x2113ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2113A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2113B0u;
}
