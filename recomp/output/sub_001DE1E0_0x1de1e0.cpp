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

// Function: sub_001DE1E0
// Address: 0x1de1e0 - 0x1de228
void sub_001DE1E0_0x1de1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE1E0_0x1de1e0");
#endif

    switch (ctx->pc) {
        case 0x1de1f4u: goto label_1de1f4;
        case 0x1de1fcu: goto label_1de1fc;
        case 0x1de208u: goto label_1de208;
        default: break;
    }

    ctx->pc = 0x1de1e0u;

    // 0x1de1e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de1e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de1e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1de1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1de1ec: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x1DE1ECu;
    SET_GPR_U32(ctx, 31, 0x1DE1F4u);
    ctx->pc = 0x1DE1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1ECu;
    // 0x1de1f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x1DE1ECu, 0x1DE1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1F4u;
label_1de1f4:
    // 0x1de1f4: 0xc077ade  jal         func_1DEB78
    ctx->pc = 0x1DE1F4u;
    SET_GPR_U32(ctx, 31, 0x1DE1FCu);
    ctx->pc = 0x1DE1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1F4u;
    // 0x1de1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB78u, 0x1DE1F4u, 0x1DE1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1FCu;
label_1de1fc:
    // 0x1de1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de200: 0xc077b20  jal         func_1DEC80
    ctx->pc = 0x1DE200u;
    SET_GPR_U32(ctx, 31, 0x1DE208u);
    ctx->pc = 0x1DE204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE200u;
    // 0x1de204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEC80u, 0x1DE200u, 0x1DE208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE208u;
label_1de208:
    // 0x1de208: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1de208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1de20c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de210: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1de210u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1de214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1de214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de218: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1de218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1de21c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE21Cu;
        // 0x1de220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE224u;
    // 0x1de224: 0x0  nop
    ctx->pc = 0x1de224u;
    // NOP
    ctx->pc = 0x1de228u;
}
