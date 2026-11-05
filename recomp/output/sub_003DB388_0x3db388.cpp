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

// Function: sub_003DB388
// Address: 0x3db388 - 0x3db3b0
void sub_003DB388_0x3db388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB388_0x3db388");
#endif

    switch (ctx->pc) {
        case 0x3db398u: goto label_3db398;
        case 0x3db3a0u: goto label_3db3a0;
        default: break;
    }

    ctx->pc = 0x3db388u;

    // 0x3db388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db38c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db390: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB390u;
    SET_GPR_U32(ctx, 31, 0x3DB398u);
    ctx->pc = 0x3DB394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB390u;
    // 0x3db394: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB390u, 0x3DB398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB398u;
label_3db398:
    // 0x3db398: 0xc04cf12  jal         func_133C48
    ctx->pc = 0x3DB398u;
    SET_GPR_U32(ctx, 31, 0x3DB3A0u);
    ctx->pc = 0x3DB39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB398u;
    // 0x3db39c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133C48u, 0x3DB398u, 0x3DB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB3A0u;
label_3db3a0:
    // 0x3db3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB3A4u;
        // 0x3db3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB3ACu;
    // 0x3db3ac: 0x0  nop
    ctx->pc = 0x3db3acu;
    // NOP
    ctx->pc = 0x3db3b0u;
}
