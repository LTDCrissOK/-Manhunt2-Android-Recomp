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

// Function: sub_002A8140
// Address: 0x2a8140 - 0x2a8178
void sub_002A8140_0x2a8140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8140_0x2a8140");
#endif

    switch (ctx->pc) {
        case 0x2a8154u: goto label_2a8154;
        default: break;
    }

    ctx->pc = 0x2a8140u;

    // 0x2a8140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a8144: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a8144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a8148: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a8148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a814c: 0xc0a96c0  jal         func_2A5B00
    ctx->pc = 0x2A814Cu;
    SET_GPR_U32(ctx, 31, 0x2A8154u);
    ctx->pc = 0x2A8150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A814Cu;
    // 0x2a8150: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B00u, 0x2A814Cu, 0x2A8154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8154u;
label_2a8154:
    // 0x2a8154: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2a8154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2a8158: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a8158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a815c: 0x24633760  addiu       $v1, $v1, 0x3760
    ctx->pc = 0x2a815cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14176));
    // 0x2a8160: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a8160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a8164: 0xae030278  sw          $v1, 0x278($s0)
    ctx->pc = 0x2a8164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
    // 0x2a8168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a8168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a816c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A816Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A816Cu;
        // 0x2a8170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A816Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8174u;
    // 0x2a8174: 0x0  nop
    ctx->pc = 0x2a8174u;
    // NOP
    ctx->pc = 0x2a8178u;
}
