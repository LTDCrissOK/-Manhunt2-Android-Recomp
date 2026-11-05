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

// Function: sub_003DA7D8
// Address: 0x3da7d8 - 0x3da808
void sub_003DA7D8_0x3da7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA7D8_0x3da7d8");
#endif

    switch (ctx->pc) {
        case 0x3da7f4u: goto label_3da7f4;
        default: break;
    }

    ctx->pc = 0x3da7d8u;

    // 0x3da7d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3da7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3da7dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3da7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3da7e0: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x3da7e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3da7e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA7E4u;
    {
        const bool branch_taken_0x3da7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA7E4u;
        // 0x3da7e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da7e4) {
            ctx->pc = 0x3DA7F8u;
            goto label_3da7f8;
        }
    }
    ctx->pc = 0x3DA7ECu;
    // 0x3da7ec: 0xc0f69ee  jal         func_3DA7B8
    ctx->pc = 0x3DA7ECu;
    SET_GPR_U32(ctx, 31, 0x3DA7F4u);
    ctx->pc = 0x3DA7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA7B8u, 0x3DA7ECu, 0x3DA7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA7F4u;
label_3da7f4:
    // 0x3da7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3da7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3da7f8:
    // 0x3da7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3da7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA7FCu;
        // 0x3da800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA804u;
    // 0x3da804: 0x0  nop
    ctx->pc = 0x3da804u;
    // NOP
    ctx->pc = 0x3da808u;
}
