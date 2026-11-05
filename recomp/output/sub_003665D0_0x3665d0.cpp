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

// Function: sub_003665D0
// Address: 0x3665d0 - 0x3666c8
void sub_003665D0_0x3665d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003665D0_0x3665d0");
#endif

    switch (ctx->pc) {
        case 0x3665e0u: goto label_3665e0;
        default: break;
    }

    ctx->pc = 0x3665d0u;

    // 0x3665d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3665d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3665d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3665d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3665d8: 0xc0d9924  jal         func_366490
    ctx->pc = 0x3665D8u;
    SET_GPR_U32(ctx, 31, 0x3665E0u);
    ctx->pc = 0x366490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366490u, 0x3665D8u, 0x3665E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3665E0u;
label_3665e0:
    // 0x3665e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3665e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3665e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3665e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3665e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3665E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3665ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3665E8u;
        // 0x3665ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3665E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3665F0u;
    // 0x3665f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3665f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3665f4: 0x0  nop
    ctx->pc = 0x3665f4u;
    // NOP
    // 0x3665f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3665f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3665fc: 0x0  nop
    ctx->pc = 0x3665fcu;
    // NOP
    // 0x366600: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366604: 0x0  nop
    ctx->pc = 0x366604u;
    // NOP
    // 0x366608: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36660c: 0x0  nop
    ctx->pc = 0x36660cu;
    // NOP
    // 0x366610: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366614: 0x0  nop
    ctx->pc = 0x366614u;
    // NOP
    // 0x366618: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36661c: 0x0  nop
    ctx->pc = 0x36661cu;
    // NOP
    // 0x366620: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366624: 0x0  nop
    ctx->pc = 0x366624u;
    // NOP
    // 0x366628: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36662c: 0x0  nop
    ctx->pc = 0x36662cu;
    // NOP
    // 0x366630: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366634: 0x0  nop
    ctx->pc = 0x366634u;
    // NOP
    // 0x366638: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36663c: 0x0  nop
    ctx->pc = 0x36663cu;
    // NOP
    // 0x366640: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366644: 0x0  nop
    ctx->pc = 0x366644u;
    // NOP
    // 0x366648: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36664c: 0x0  nop
    ctx->pc = 0x36664cu;
    // NOP
    // 0x366650: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366654: 0x0  nop
    ctx->pc = 0x366654u;
    // NOP
    // 0x366658: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36665c: 0x0  nop
    ctx->pc = 0x36665cu;
    // NOP
    // 0x366660: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366664: 0x0  nop
    ctx->pc = 0x366664u;
    // NOP
    // 0x366668: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36666c: 0x0  nop
    ctx->pc = 0x36666cu;
    // NOP
    // 0x366670: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366674: 0x0  nop
    ctx->pc = 0x366674u;
    // NOP
    // 0x366678: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36667c: 0x0  nop
    ctx->pc = 0x36667cu;
    // NOP
    // 0x366680: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366684: 0x0  nop
    ctx->pc = 0x366684u;
    // NOP
    // 0x366688: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36668c: 0x0  nop
    ctx->pc = 0x36668cu;
    // NOP
    // 0x366690: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366694: 0x0  nop
    ctx->pc = 0x366694u;
    // NOP
    // 0x366698: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36669c: 0x0  nop
    ctx->pc = 0x36669cu;
    // NOP
    // 0x3666a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3666a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3666a4: 0x0  nop
    ctx->pc = 0x3666a4u;
    // NOP
    // 0x3666a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3666a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3666ac: 0x0  nop
    ctx->pc = 0x3666acu;
    // NOP
    // 0x3666b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3666b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3666b4: 0x0  nop
    ctx->pc = 0x3666b4u;
    // NOP
    // 0x3666b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3666b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3666bc: 0x0  nop
    ctx->pc = 0x3666bcu;
    // NOP
    // 0x3666c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3666c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3666c4: 0x0  nop
    ctx->pc = 0x3666c4u;
    // NOP
    ctx->pc = 0x3666c8u;
}
