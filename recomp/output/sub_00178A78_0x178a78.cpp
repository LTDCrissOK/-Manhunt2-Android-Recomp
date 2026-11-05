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

// Function: sub_00178A78
// Address: 0x178a78 - 0x178aa8
void sub_00178A78_0x178a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178A78_0x178a78");
#endif

    switch (ctx->pc) {
        case 0x178a8cu: goto label_178a8c;
        case 0x178a98u: goto label_178a98;
        default: break;
    }

    ctx->pc = 0x178a78u;

    // 0x178a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178a80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x178a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x178a84: 0xc05ebbe  jal         func_17AEF8
    ctx->pc = 0x178A84u;
    SET_GPR_U32(ctx, 31, 0x178A8Cu);
    ctx->pc = 0x178A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A84u;
    // 0x178a88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AEF8u, 0x178A84u, 0x178A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A8Cu;
label_178a8c:
    // 0x178a8c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x178a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x178a90: 0xc04f71c  jal         func_13DC70
    ctx->pc = 0x178A90u;
    SET_GPR_U32(ctx, 31, 0x178A98u);
    ctx->pc = 0x178A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A90u;
    // 0x178a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC70u, 0x178A90u, 0x178A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A98u;
label_178a98:
    // 0x178a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178a9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x178AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AA0u;
        // 0x178aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178AA8u;
}
