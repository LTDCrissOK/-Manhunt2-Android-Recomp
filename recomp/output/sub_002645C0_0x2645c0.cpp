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

// Function: sub_002645C0
// Address: 0x2645c0 - 0x264610
void sub_002645C0_0x2645c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002645C0_0x2645c0");
#endif

    switch (ctx->pc) {
        case 0x2645d4u: goto label_2645d4;
        case 0x2645e8u: goto label_2645e8;
        case 0x264600u: goto label_264600;
        default: break;
    }

    ctx->pc = 0x2645c0u;

    // 0x2645c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2645c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2645c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2645c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2645c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2645c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2645cc: 0xc097fc6  jal         func_25FF18
    ctx->pc = 0x2645CCu;
    SET_GPR_U32(ctx, 31, 0x2645D4u);
    ctx->pc = 0x2645D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2645CCu;
    // 0x2645d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF18u, 0x2645CCu, 0x2645D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2645D4u;
label_2645d4:
    // 0x2645d4: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x2645d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x2645d8: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2645D8u;
    {
        const bool branch_taken_0x2645d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2645d8) {
            ctx->pc = 0x2645DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2645D8u;
            // 0x2645dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264604u;
            goto label_264604;
        }
    }
    ctx->pc = 0x2645E0u;
    // 0x2645e0: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2645E0u;
    SET_GPR_U32(ctx, 31, 0x2645E8u);
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2645E0u, 0x2645E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2645E8u;
label_2645e8:
    // 0x2645e8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2645e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2645ec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2645ECu;
    {
        const bool branch_taken_0x2645ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2645ec) {
            ctx->pc = 0x2645F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2645ECu;
            // 0x2645f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264604u;
            goto label_264604;
        }
    }
    ctx->pc = 0x2645F4u;
    // 0x2645f4: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x2645f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x2645f8: 0xc0d9080  jal         func_364200
    ctx->pc = 0x2645F8u;
    SET_GPR_U32(ctx, 31, 0x264600u);
    ctx->pc = 0x2645FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2645F8u;
    // 0x2645fc: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364200u, 0x2645F8u, 0x264600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264600u;
label_264600:
    // 0x264600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264604:
    // 0x264604: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x264604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x264608: 0x3e00008  jr          $ra
    ctx->pc = 0x264608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264608u;
        // 0x26460c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264610u;
}
