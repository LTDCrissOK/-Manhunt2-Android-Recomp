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

// Function: sub_0016C488
// Address: 0x16c488 - 0x16c4b8
void sub_0016C488_0x16c488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C488_0x16c488");
#endif

    switch (ctx->pc) {
        case 0x16c49cu: goto label_16c49c;
        case 0x16c4a4u: goto label_16c4a4;
        default: break;
    }

    ctx->pc = 0x16c488u;

    // 0x16c488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c48c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c490: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16c490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16c494: 0xc04f7a6  jal         func_13DE98
    ctx->pc = 0x16C494u;
    SET_GPR_U32(ctx, 31, 0x16C49Cu);
    ctx->pc = 0x16C498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C494u;
    // 0x16c498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE98u, 0x16C494u, 0x16C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C49Cu;
label_16c49c:
    // 0x16c49c: 0xc05b3da  jal         func_16CF68
    ctx->pc = 0x16C49Cu;
    SET_GPR_U32(ctx, 31, 0x16C4A4u);
    ctx->pc = 0x16C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C49Cu;
    // 0x16c4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF68u, 0x16C49Cu, 0x16C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4A4u;
label_16c4a4:
    // 0x16c4a4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x16c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x16c4a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c4ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16c4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x16C4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4B0u;
        // 0x16c4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C4B8u;
}
