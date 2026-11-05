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

// Function: sub_0011B9D8
// Address: 0x11b9d8 - 0x11ba18
void sub_0011B9D8_0x11b9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B9D8_0x11b9d8");
#endif

    switch (ctx->pc) {
        case 0x11b9fcu: goto label_11b9fc;
        case 0x11ba04u: goto label_11ba04;
        default: break;
    }

    ctx->pc = 0x11b9d8u;

    // 0x11b9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b9dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b9e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11b9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11b9e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b9ec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B9ECu;
    {
        const bool branch_taken_0x11b9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b9ec) {
            ctx->pc = 0x11B9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B9ECu;
            // 0x11b9f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BA0Cu;
            goto label_11ba0c;
        }
    }
    ctx->pc = 0x11B9F4u;
    // 0x11b9f4: 0xc0471f2  jal         func_11C7C8
    ctx->pc = 0x11B9F4u;
    SET_GPR_U32(ctx, 31, 0x11B9FCu);
    ctx->pc = 0x11C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C7C8u, 0x11B9F4u, 0x11B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9FCu;
label_11b9fc:
    // 0x11b9fc: 0xc0472b6  jal         func_11CAD8
    ctx->pc = 0x11B9FCu;
    SET_GPR_U32(ctx, 31, 0x11BA04u);
    ctx->pc = 0x11BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9FCu;
    // 0x11ba00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CAD8u, 0x11B9FCu, 0x11BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA04u;
label_11ba04:
    // 0x11ba04: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11ba04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x11ba08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ba08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11ba0c:
    // 0x11ba0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11ba0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ba10: 0x3e00008  jr          $ra
    ctx->pc = 0x11BA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA10u;
        // 0x11ba14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BA18u;
}
