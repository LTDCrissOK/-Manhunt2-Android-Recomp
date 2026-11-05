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

// Function: sub_003DB220
// Address: 0x3db220 - 0x3db248
void sub_003DB220_0x3db220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB220_0x3db220");
#endif

    switch (ctx->pc) {
        case 0x3db230u: goto label_3db230;
        case 0x3db238u: goto label_3db238;
        default: break;
    }

    ctx->pc = 0x3db220u;

    // 0x3db220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db228: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB228u;
    SET_GPR_U32(ctx, 31, 0x3DB230u);
    ctx->pc = 0x3DB22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB228u;
    // 0x3db22c: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB228u, 0x3DB230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB230u;
label_3db230:
    // 0x3db230: 0xc05ef6a  jal         func_17BDA8
    ctx->pc = 0x3DB230u;
    SET_GPR_U32(ctx, 31, 0x3DB238u);
    ctx->pc = 0x3DB234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB230u;
    // 0x3db234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BDA8u, 0x3DB230u, 0x3DB238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB238u;
label_3db238:
    // 0x3db238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db23c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB23Cu;
        // 0x3db240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB244u;
    // 0x3db244: 0x0  nop
    ctx->pc = 0x3db244u;
    // NOP
    ctx->pc = 0x3db248u;
}
