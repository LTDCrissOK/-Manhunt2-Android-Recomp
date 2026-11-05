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

// Function: sub_0039C888
// Address: 0x39c888 - 0x39c8c0
void sub_0039C888_0x39c888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C888_0x39c888");
#endif

    switch (ctx->pc) {
        case 0x39c89cu: goto label_39c89c;
        case 0x39c8a4u: goto label_39c8a4;
        case 0x39c8acu: goto label_39c8ac;
        default: break;
    }

    ctx->pc = 0x39c888u;

    // 0x39c888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39c88c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39c88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39c890: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39c890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39c894: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39C894u;
    SET_GPR_U32(ctx, 31, 0x39C89Cu);
    ctx->pc = 0x39C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C894u;
    // 0x39c898: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39C894u, 0x39C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C89Cu;
label_39c89c:
    // 0x39c89c: 0xc0e7230  jal         func_39C8C0
    ctx->pc = 0x39C89Cu;
    SET_GPR_U32(ctx, 31, 0x39C8A4u);
    ctx->pc = 0x39C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C89Cu;
    // 0x39c8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C8C0u, 0x39C89Cu, 0x39C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C8A4u;
label_39c8a4:
    // 0x39c8a4: 0xc0ebe5e  jal         func_3AF978
    ctx->pc = 0x39C8A4u;
    SET_GPR_U32(ctx, 31, 0x39C8ACu);
    ctx->pc = 0x39C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C8A4u;
    // 0x39c8a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF978u, 0x39C8A4u, 0x39C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C8ACu;
label_39c8ac:
    // 0x39c8ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39c8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39c8b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39c8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c8b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x39C8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8B8u;
        // 0x39c8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C8C0u;
}
