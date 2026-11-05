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

// Function: sub_003D0348
// Address: 0x3d0348 - 0x3d03b0
void sub_003D0348_0x3d0348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0348_0x3d0348");
#endif

    switch (ctx->pc) {
        case 0x3d035cu: goto label_3d035c;
        case 0x3d0380u: goto label_3d0380;
        case 0x3d0388u: goto label_3d0388;
        case 0x3d0390u: goto label_3d0390;
        default: break;
    }

    ctx->pc = 0x3d0348u;

    // 0x3d0348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d0348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d034c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3d034cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3d0350: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d0350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d0354: 0xc0f2694  jal         func_3C9A50
    ctx->pc = 0x3D0354u;
    SET_GPR_U32(ctx, 31, 0x3D035Cu);
    ctx->pc = 0x3D0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0354u;
    // 0x3d0358: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A50u, 0x3D0354u, 0x3D035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D035Cu;
label_3d035c:
    // 0x3d035c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3d035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d0360: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d0360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3d0364: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x3d0364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x3d0368: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x3d0368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3d036c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d036cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3d0370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d0370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0374: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3d0374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3d0378: 0xc0f2690  jal         func_3C9A40
    ctx->pc = 0x3D0378u;
    SET_GPR_U32(ctx, 31, 0x3D0380u);
    ctx->pc = 0x3D037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0378u;
    // 0x3d037c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A40u, 0x3D0378u, 0x3D0380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0380u;
label_3d0380:
    // 0x3d0380: 0xc0f2694  jal         func_3C9A50
    ctx->pc = 0x3D0380u;
    SET_GPR_U32(ctx, 31, 0x3D0388u);
    ctx->pc = 0x3D0384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0380u;
    // 0x3d0384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A50u, 0x3D0380u, 0x3D0388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0388u;
label_3d0388:
    // 0x3d0388: 0xc0f2690  jal         func_3C9A40
    ctx->pc = 0x3D0388u;
    SET_GPR_U32(ctx, 31, 0x3D0390u);
    ctx->pc = 0x3D038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0388u;
    // 0x3d038c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A40u, 0x3D0388u, 0x3D0390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0390u;
label_3d0390:
    // 0x3d0390: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3d0390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d0394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d0394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d0398: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x3d0398u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x3d039c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3d039cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d03a0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3d03a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3d03a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3d03a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3d03a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D03A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D03A8u;
        // 0x3d03ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D03A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D03B0u;
}
