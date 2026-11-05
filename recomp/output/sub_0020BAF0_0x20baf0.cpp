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

// Function: sub_0020BAF0
// Address: 0x20baf0 - 0x20bb30
void sub_0020BAF0_0x20baf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BAF0_0x20baf0");
#endif

    switch (ctx->pc) {
        case 0x20bb08u: goto label_20bb08;
        case 0x20bb18u: goto label_20bb18;
        default: break;
    }

    ctx->pc = 0x20baf0u;

    // 0x20baf0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x20baf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20baf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20baf8: 0x8c4494b8  lw          $a0, -0x6B48($v0)
    ctx->pc = 0x20baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F94B8u));
    // 0x20bafc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20bafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20bb00: 0xc0ef802  jal         func_3BE008
    ctx->pc = 0x20BB00u;
    SET_GPR_U32(ctx, 31, 0x20BB08u);
    ctx->pc = 0x3BE008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE008u, 0x20BB00u, 0x20BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB08u;
label_20bb08:
    // 0x20bb08: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x20bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x20bb0c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x20bb0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x20bb10: 0xc0f4b9e  jal         func_3D2E78
    ctx->pc = 0x20BB10u;
    SET_GPR_U32(ctx, 31, 0x20BB18u);
    ctx->pc = 0x20BB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB10u;
    // 0x20bb14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E78u, 0x20BB10u, 0x20BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB18u;
label_20bb18:
    // 0x20bb18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20bb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bb1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20bb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20bb20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20bb20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20bb24: 0x3e00008  jr          $ra
    ctx->pc = 0x20BB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB24u;
        // 0x20bb28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BB2Cu;
    // 0x20bb2c: 0x0  nop
    ctx->pc = 0x20bb2cu;
    // NOP
    ctx->pc = 0x20bb30u;
}
