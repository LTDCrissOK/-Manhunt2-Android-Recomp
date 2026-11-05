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

// Function: sub_0036C600
// Address: 0x36c600 - 0x36c640
void sub_0036C600_0x36c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C600_0x36c600");
#endif

    switch (ctx->pc) {
        case 0x36c618u: goto label_36c618;
        case 0x36c630u: goto label_36c630;
        default: break;
    }

    ctx->pc = 0x36c600u;

    // 0x36c600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c608: 0x3c10ff00  lui         $s0, 0xFF00
    ctx->pc = 0x36c608u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65280 << 16));
    // 0x36c60c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36c60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36c610: 0xc0dcc22  jal         func_373088
    ctx->pc = 0x36C610u;
    SET_GPR_U32(ctx, 31, 0x36C618u);
    ctx->pc = 0x36C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C610u;
    // 0x36c614: 0x4800b  movn        $s0, $zero, $a0 (Delay Slot)
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373088u, 0x36C610u, 0x36C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C618u;
label_36c618:
    // 0x36c618: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x36c618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x36c61c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x36c61cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x36c620: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36c620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36c624: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x36c624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x36c628: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x36C628u;
    SET_GPR_U32(ctx, 31, 0x36C630u);
    ctx->pc = 0x36C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C628u;
    // 0x36c62c: 0x502825  or          $a1, $v0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x36C628u, 0x36C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C630u;
label_36c630:
    // 0x36c630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c634: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c638: 0x3e00008  jr          $ra
    ctx->pc = 0x36C638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C638u;
        // 0x36c63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C640u;
}
