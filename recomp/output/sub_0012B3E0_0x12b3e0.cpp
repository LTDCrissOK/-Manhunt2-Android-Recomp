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

// Function: sub_0012B3E0
// Address: 0x12b3e0 - 0x12b428
void sub_0012B3E0_0x12b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B3E0_0x12b3e0");
#endif

    switch (ctx->pc) {
        case 0x12b3f4u: goto label_12b3f4;
        case 0x12b3fcu: goto label_12b3fc;
        case 0x12b404u: goto label_12b404;
        default: break;
    }

    ctx->pc = 0x12b3e0u;

    // 0x12b3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b3e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b3e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12b3ec: 0xc04b124  jal         func_12C490
    ctx->pc = 0x12B3ECu;
    SET_GPR_U32(ctx, 31, 0x12B3F4u);
    ctx->pc = 0x12B3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3ECu;
    // 0x12b3f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C490u, 0x12B3ECu, 0x12B3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3F4u;
label_12b3f4:
    // 0x12b3f4: 0xc04b1ae  jal         func_12C6B8
    ctx->pc = 0x12B3F4u;
    SET_GPR_U32(ctx, 31, 0x12B3FCu);
    ctx->pc = 0x12B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3F4u;
    // 0x12b3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C6B8u, 0x12B3F4u, 0x12B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3FCu;
label_12b3fc:
    // 0x12b3fc: 0xc04b1be  jal         func_12C6F8
    ctx->pc = 0x12B3FCu;
    SET_GPR_U32(ctx, 31, 0x12B404u);
    ctx->pc = 0x12B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3FCu;
    // 0x12b400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C6F8u, 0x12B3FCu, 0x12B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B404u;
label_12b404:
    // 0x12b404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b408: 0xae0004cc  sw          $zero, 0x4CC($s0)
    ctx->pc = 0x12b408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 0));
    // 0x12b40c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12b410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b414: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12b414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b418: 0x3e00008  jr          $ra
    ctx->pc = 0x12B418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B418u;
        // 0x12b41c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B420u;
    // 0x12b420: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12b424: 0x0  nop
    ctx->pc = 0x12b424u;
    // NOP
    ctx->pc = 0x12b428u;
}
