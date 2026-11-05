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

// Function: sub_003713E8
// Address: 0x3713e8 - 0x3714b8
void sub_003713E8_0x3713e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003713E8_0x3713e8");
#endif

    switch (ctx->pc) {
        case 0x371410u: goto label_371410;
        case 0x371420u: goto label_371420;
        case 0x371440u: goto label_371440;
        case 0x371460u: goto label_371460;
        case 0x371484u: goto label_371484;
        case 0x371494u: goto label_371494;
        default: break;
    }

    ctx->pc = 0x3713e8u;

    // 0x3713e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3713e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3713ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3713ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3713f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3713f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3713f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3713f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3713f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3713f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3713fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3713fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371400: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x371400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x371404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x371404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x371408: 0xc0dc472  jal         func_3711C8
    ctx->pc = 0x371408u;
    SET_GPR_U32(ctx, 31, 0x371410u);
    ctx->pc = 0x37140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371408u;
    // 0x37140c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3711C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3711C8u, 0x371408u, 0x371410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371410u;
label_371410:
    // 0x371410: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x371410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x371414: 0x10520008  beq         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x371414u;
    {
        const bool branch_taken_0x371414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x371418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371414u;
        // 0x371418: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371414) {
            ctx->pc = 0x371438u;
            goto label_371438;
        }
    }
    ctx->pc = 0x37141Cu;
    // 0x37141c: 0x0  nop
    ctx->pc = 0x37141cu;
    // NOP
label_371420:
    // 0x371420: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x371420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x371424: 0x0  nop
    ctx->pc = 0x371424u;
    // NOP
    // 0x371428: 0x0  nop
    ctx->pc = 0x371428u;
    // NOP
    // 0x37142c: 0x0  nop
    ctx->pc = 0x37142cu;
    // NOP
    // 0x371430: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x371430u;
    {
        const bool branch_taken_0x371430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x371430) {
            ctx->pc = 0x371420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371420;
        }
    }
    ctx->pc = 0x371438u;
label_371438:
    // 0x371438: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x371438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37143c: 0x0  nop
    ctx->pc = 0x37143cu;
    // NOP
label_371440:
    // 0x371440: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x371440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x371444: 0x0  nop
    ctx->pc = 0x371444u;
    // NOP
    // 0x371448: 0x0  nop
    ctx->pc = 0x371448u;
    // NOP
    // 0x37144c: 0x0  nop
    ctx->pc = 0x37144cu;
    // NOP
    // 0x371450: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x371450u;
    {
        const bool branch_taken_0x371450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x371450) {
            ctx->pc = 0x371440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371440;
        }
    }
    ctx->pc = 0x371458u;
    // 0x371458: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x371458u;
    SET_GPR_U32(ctx, 31, 0x371460u);
    ctx->pc = 0x37145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371458u;
    // 0x37145c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x371458u, 0x371460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371460u;
label_371460:
    // 0x371460: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x371460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x371464: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x371464u;
    {
        const bool branch_taken_0x371464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x371464) {
            ctx->pc = 0x37147Cu;
            goto label_37147c;
        }
    }
    ctx->pc = 0x37146Cu;
    // 0x37146c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x37146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x371470: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x371470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371474: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x371474u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x371478: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x371478u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_37147c:
    // 0x37147c: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x37147Cu;
    SET_GPR_U32(ctx, 31, 0x371484u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x37147Cu, 0x371484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371484u;
label_371484:
    // 0x371484: 0x1200ffe2  beqz        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x371484u;
    {
        const bool branch_taken_0x371484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x371484) {
            ctx->pc = 0x371410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371410;
        }
    }
    ctx->pc = 0x37148Cu;
    // 0x37148c: 0xc0dc2b8  jal         func_370AE0
    ctx->pc = 0x37148Cu;
    SET_GPR_U32(ctx, 31, 0x371494u);
    ctx->pc = 0x370AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370AE0u, 0x37148Cu, 0x371494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371494u;
label_371494:
    // 0x371494: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x371494u;
    {
        const bool branch_taken_0x371494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371494u;
        // 0x371498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371494) {
            ctx->pc = 0x371410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371410;
        }
    }
    ctx->pc = 0x37149Cu;
    // 0x37149c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37149cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3714a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3714a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3714a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3714a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3714a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3714a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3714ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3714ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3714B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714ACu;
        // 0x3714b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3714ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3714B4u;
    // 0x3714b4: 0x0  nop
    ctx->pc = 0x3714b4u;
    // NOP
    ctx->pc = 0x3714b8u;
}
