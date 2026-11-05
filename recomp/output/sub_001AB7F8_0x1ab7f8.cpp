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

// Function: sub_001AB7F8
// Address: 0x1ab7f8 - 0x1ab888
void sub_001AB7F8_0x1ab7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB7F8_0x1ab7f8");
#endif

    switch (ctx->pc) {
        case 0x1ab830u: goto label_1ab830;
        case 0x1ab844u: goto label_1ab844;
        case 0x1ab86cu: goto label_1ab86c;
        case 0x1ab878u: goto label_1ab878;
        default: break;
    }

    ctx->pc = 0x1ab7f8u;

    // 0x1ab7f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab7fc: 0x24020680  addiu       $v0, $zero, 0x680
    ctx->pc = 0x1ab7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x1ab800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab804: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ab804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ab808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab80c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1ab80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1ab810: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab814: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ab814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ab818: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ab818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab81c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB81Cu;
    {
        const bool branch_taken_0x1ab81c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB81Cu;
        // 0x1ab820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab81c) {
            ctx->pc = 0x1AB838u;
            goto label_1ab838;
        }
    }
    ctx->pc = 0x1AB824u;
    // 0x1ab824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab828: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB828u;
    SET_GPR_U32(ctx, 31, 0x1AB830u);
    ctx->pc = 0x1AB82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB828u;
    // 0x1ab82c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB828u, 0x1AB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB830u;
label_1ab830:
    // 0x1ab830: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB830u;
    {
        const bool branch_taken_0x1ab830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB830u;
        // 0x1ab834: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab830) {
            ctx->pc = 0x1AB848u;
            goto label_1ab848;
        }
    }
    ctx->pc = 0x1AB838u;
label_1ab838:
    // 0x1ab838: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab83c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB83Cu;
    SET_GPR_U32(ctx, 31, 0x1AB844u);
    ctx->pc = 0x1AB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB83Cu;
    // 0x1ab840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB83Cu, 0x1AB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB844u;
label_1ab844:
    // 0x1ab844: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1ab844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_1ab848:
    // 0x1ab848: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB848u;
    {
        const bool branch_taken_0x1ab848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab848) {
            ctx->pc = 0x1AB84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB848u;
            // 0x1ab84c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB87Cu;
            goto label_1ab87c;
        }
    }
    ctx->pc = 0x1AB850u;
    // 0x1ab850: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1ab850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1ab854: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1ab854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1ab858: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB858u;
    {
        const bool branch_taken_0x1ab858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab858) {
            ctx->pc = 0x1AB85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB858u;
            // 0x1ab85c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB87Cu;
            goto label_1ab87c;
        }
    }
    ctx->pc = 0x1AB860u;
    // 0x1ab860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab864: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x1AB864u;
    SET_GPR_U32(ctx, 31, 0x1AB86Cu);
    ctx->pc = 0x1AB868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB864u;
    // 0x1ab868: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x1AB864u, 0x1AB86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB86Cu;
label_1ab86c:
    // 0x1ab86c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab870: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1AB870u;
    SET_GPR_U32(ctx, 31, 0x1AB878u);
    ctx->pc = 0x1AB874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB870u;
    // 0x1ab874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1AB870u, 0x1AB878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB878u;
label_1ab878:
    // 0x1ab878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab87c:
    // 0x1ab87c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab880: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB880u;
        // 0x1ab884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB888u;
}
