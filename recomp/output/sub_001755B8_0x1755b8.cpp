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

// Function: sub_001755B8
// Address: 0x1755b8 - 0x1755e8
void sub_001755B8_0x1755b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001755B8_0x1755b8");
#endif

    switch (ctx->pc) {
        case 0x1755ccu: goto label_1755cc;
        case 0x1755d4u: goto label_1755d4;
        default: break;
    }

    ctx->pc = 0x1755b8u;

    // 0x1755b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1755b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1755bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1755bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1755c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1755c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1755c4: 0xc05d5d6  jal         func_175758
    ctx->pc = 0x1755C4u;
    SET_GPR_U32(ctx, 31, 0x1755CCu);
    ctx->pc = 0x1755C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1755C4u;
    // 0x1755c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175758u, 0x1755C4u, 0x1755CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1755CCu;
label_1755cc:
    // 0x1755cc: 0xc05d60a  jal         func_175828
    ctx->pc = 0x1755CCu;
    SET_GPR_U32(ctx, 31, 0x1755D4u);
    ctx->pc = 0x1755D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1755CCu;
    // 0x1755d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175828u, 0x1755CCu, 0x1755D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1755D4u;
label_1755d4:
    // 0x1755d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1755d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1755d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1755d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1755dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1755DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1755E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755DCu;
        // 0x1755e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1755DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1755E4u;
    // 0x1755e4: 0x0  nop
    ctx->pc = 0x1755e4u;
    // NOP
    ctx->pc = 0x1755e8u;
}
