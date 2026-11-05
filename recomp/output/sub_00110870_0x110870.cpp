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

// Function: sub_00110870
// Address: 0x110870 - 0x1108b0
void sub_00110870_0x110870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110870_0x110870");
#endif

    switch (ctx->pc) {
        case 0x110890u: goto label_110890;
        case 0x11089cu: goto label_11089c;
        default: break;
    }

    ctx->pc = 0x110870u;

    // 0x110870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x110878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11087c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11087cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110880: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x110880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110884: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x110884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110888: 0xc05fc62  jal         func_17F188
    ctx->pc = 0x110888u;
    SET_GPR_U32(ctx, 31, 0x110890u);
    ctx->pc = 0x11088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110888u;
    // 0x11088c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F188u, 0x110888u, 0x110890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110890u;
label_110890:
    // 0x110890: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x110890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x110894: 0xc05fc6c  jal         func_17F1B0
    ctx->pc = 0x110894u;
    SET_GPR_U32(ctx, 31, 0x11089Cu);
    ctx->pc = 0x110898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110894u;
    // 0x110898: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F1B0u, 0x110894u, 0x11089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11089Cu;
label_11089c:
    // 0x11089c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11089cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1108a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1108a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1108a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1108a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1108a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1108A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1108ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108A8u;
        // 0x1108ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1108A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1108B0u;
}
