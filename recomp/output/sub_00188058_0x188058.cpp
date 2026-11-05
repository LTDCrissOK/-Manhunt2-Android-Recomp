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

// Function: sub_00188058
// Address: 0x188058 - 0x1880a0
void sub_00188058_0x188058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188058_0x188058");
#endif

    switch (ctx->pc) {
        case 0x18807cu: goto label_18807c;
        case 0x188088u: goto label_188088;
        default: break;
    }

    ctx->pc = 0x188058u;

    // 0x188058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18805c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18805cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x188060: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x188060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x188064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188068: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x188068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18806c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18806Cu;
    {
        const bool branch_taken_0x18806c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18806c) {
            ctx->pc = 0x188070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18806Cu;
            // 0x188070: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188094u;
            goto label_188094;
        }
    }
    ctx->pc = 0x188074u;
    // 0x188074: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x188074u;
    SET_GPR_U32(ctx, 31, 0x18807Cu);
    ctx->pc = 0x188078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188074u;
    // 0x188078: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x188074u, 0x18807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18807Cu;
label_18807c:
    // 0x18807c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18807cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188080: 0xc064e44  jal         func_193910
    ctx->pc = 0x188080u;
    SET_GPR_U32(ctx, 31, 0x188088u);
    ctx->pc = 0x188084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188080u;
    // 0x188084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193910u, 0x188080u, 0x188088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188088u;
label_188088:
    // 0x188088: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x188088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x18808c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x18808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x188090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x188090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188094:
    // 0x188094: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x188094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x188098: 0x3e00008  jr          $ra
    ctx->pc = 0x188098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188098u;
        // 0x18809c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1880A0u;
}
