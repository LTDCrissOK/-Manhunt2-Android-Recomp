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

// Function: sub_0012BE48
// Address: 0x12be48 - 0x12be80
void sub_0012BE48_0x12be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BE48_0x12be48");
#endif

    switch (ctx->pc) {
        case 0x12be60u: goto label_12be60;
        case 0x12be6cu: goto label_12be6c;
        default: break;
    }

    ctx->pc = 0x12be48u;

    // 0x12be48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12be48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12be4c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12be50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12be50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12be54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12be54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12be58: 0xc041e7c  jal         func_1079F0
    ctx->pc = 0x12BE58u;
    SET_GPR_U32(ctx, 31, 0x12BE60u);
    ctx->pc = 0x12BE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE58u;
    // 0x12be5c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1079F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1079F0u, 0x12BE58u, 0x12BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE60u;
label_12be60:
    // 0x12be60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12be60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be64: 0xc05f45a  jal         func_17D168
    ctx->pc = 0x12BE64u;
    SET_GPR_U32(ctx, 31, 0x12BE6Cu);
    ctx->pc = 0x12BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE64u;
    // 0x12be68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D168u, 0x12BE64u, 0x12BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE6Cu;
label_12be6c:
    // 0x12be6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12be6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12be70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12be74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12be74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12be78: 0x3e00008  jr          $ra
    ctx->pc = 0x12BE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE78u;
        // 0x12be7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BE80u;
}
