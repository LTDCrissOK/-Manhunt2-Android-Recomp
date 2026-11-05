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

// Function: sub_003E9648
// Address: 0x3e9648 - 0x3e96f0
void sub_003E9648_0x3e9648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9648_0x3e9648");
#endif

    switch (ctx->pc) {
        case 0x3e9668u: goto label_3e9668;
        case 0x3e9680u: goto label_3e9680;
        case 0x3e9690u: goto label_3e9690;
        case 0x3e96a8u: goto label_3e96a8;
        case 0x3e96c0u: goto label_3e96c0;
        case 0x3e96d0u: goto label_3e96d0;
        default: break;
    }

    ctx->pc = 0x3e9648u;

    // 0x3e9648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e964c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e964cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e9650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e9654: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e9658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e965c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9660: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3E9660u;
    {
        const bool branch_taken_0x3e9660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9660) {
            ctx->pc = 0x3E9664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9660u;
            // 0x3e9664: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E969Cu;
            goto label_3e969c;
        }
    }
    ctx->pc = 0x3E9668u;
label_3e9668:
    // 0x3e9668: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e966c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9670: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9670u;
    {
        const bool branch_taken_0x3e9670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9670) {
            ctx->pc = 0x3E9674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9670u;
            // 0x3e9674: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9688u;
            goto label_3e9688;
        }
    }
    ctx->pc = 0x3E9678u;
    // 0x3e9678: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E9678u;
    SET_GPR_U32(ctx, 31, 0x3E9680u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9678u, 0x3E9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9680u;
label_3e9680:
    // 0x3e9680: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9684: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9688:
    // 0x3e9688: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9688u;
    SET_GPR_U32(ctx, 31, 0x3E9690u);
    ctx->pc = 0x3E968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9688u;
    // 0x3e968c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9688u, 0x3E9690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9690u;
label_3e9690:
    // 0x3e9690: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E9690u;
    {
        const bool branch_taken_0x3e9690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9690u;
        // 0x3e9694: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9690) {
            ctx->pc = 0x3E9668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9668;
        }
    }
    ctx->pc = 0x3E9698u;
    // 0x3e9698: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e969c:
    // 0x3e969c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E969Cu;
    {
        const bool branch_taken_0x3e969c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e969c) {
            ctx->pc = 0x3E96A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E969Cu;
            // 0x3e96a0: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E96DCu;
            goto label_3e96dc;
        }
    }
    ctx->pc = 0x3E96A4u;
    // 0x3e96a4: 0x0  nop
    ctx->pc = 0x3e96a4u;
    // NOP
label_3e96a8:
    // 0x3e96a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e96ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e96acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e96b0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E96B0u;
    {
        const bool branch_taken_0x3e96b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e96b0) {
            ctx->pc = 0x3E96B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E96B0u;
            // 0x3e96b4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E96C8u;
            goto label_3e96c8;
        }
    }
    ctx->pc = 0x3E96B8u;
    // 0x3e96b8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E96B8u;
    SET_GPR_U32(ctx, 31, 0x3E96C0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E96B8u, 0x3E96C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E96C0u;
label_3e96c0:
    // 0x3e96c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e96c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e96c4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e96c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e96c8:
    // 0x3e96c8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E96C8u;
    SET_GPR_U32(ctx, 31, 0x3E96D0u);
    ctx->pc = 0x3E96CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E96C8u;
    // 0x3e96cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E96C8u, 0x3E96D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E96D0u;
label_3e96d0:
    // 0x3e96d0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E96D0u;
    {
        const bool branch_taken_0x3e96d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96D0u;
        // 0x3e96d4: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e96d0) {
            ctx->pc = 0x3E96A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e96a8;
        }
    }
    ctx->pc = 0x3E96D8u;
    // 0x3e96d8: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e96d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e96dc:
    // 0x3e96dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e96dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e96e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e96e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e96e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e96e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e96e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E96E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96E8u;
        // 0x3e96ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E96E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E96F0u;
}
