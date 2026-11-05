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

// Function: sub_00264568
// Address: 0x264568 - 0x2645c0
void sub_00264568_0x264568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264568_0x264568");
#endif

    switch (ctx->pc) {
        case 0x26457cu: goto label_26457c;
        case 0x264590u: goto label_264590;
        case 0x2645acu: goto label_2645ac;
        default: break;
    }

    ctx->pc = 0x264568u;

    // 0x264568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26456c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264570: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x264570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x264574: 0xc09820a  jal         func_260828
    ctx->pc = 0x264574u;
    SET_GPR_U32(ctx, 31, 0x26457Cu);
    ctx->pc = 0x264578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264574u;
    // 0x264578: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260828u, 0x264574u, 0x26457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26457Cu;
label_26457c:
    // 0x26457c: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x26457cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x264580: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x264580u;
    {
        const bool branch_taken_0x264580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x264580) {
            ctx->pc = 0x264584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264580u;
            // 0x264584: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2645B0u;
            goto label_2645b0;
        }
    }
    ctx->pc = 0x264588u;
    // 0x264588: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x264588u;
    SET_GPR_U32(ctx, 31, 0x264590u);
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x264588u, 0x264590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264590u;
label_264590:
    // 0x264590: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x264590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x264594: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x264594u;
    {
        const bool branch_taken_0x264594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264594) {
            ctx->pc = 0x264598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264594u;
            // 0x264598: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2645B0u;
            goto label_2645b0;
        }
    }
    ctx->pc = 0x26459Cu;
    // 0x26459c: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x26459cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x2645a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2645a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2645a4: 0xc0d9080  jal         func_364200
    ctx->pc = 0x2645A4u;
    SET_GPR_U32(ctx, 31, 0x2645ACu);
    ctx->pc = 0x2645A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2645A4u;
    // 0x2645a8: 0x8c450098  lw          $a1, 0x98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364200u, 0x2645A4u, 0x2645ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2645ACu;
label_2645ac:
    // 0x2645ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2645acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2645b0:
    // 0x2645b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2645b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2645b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2645B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2645B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645B4u;
        // 0x2645b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2645B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2645BCu;
    // 0x2645bc: 0x0  nop
    ctx->pc = 0x2645bcu;
    // NOP
    ctx->pc = 0x2645c0u;
}
