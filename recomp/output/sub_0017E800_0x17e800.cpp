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

// Function: sub_0017E800
// Address: 0x17e800 - 0x17e890
void sub_0017E800_0x17e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E800_0x17e800");
#endif

    switch (ctx->pc) {
        case 0x17e830u: goto label_17e830;
        case 0x17e83cu: goto label_17e83c;
        case 0x17e848u: goto label_17e848;
        case 0x17e864u: goto label_17e864;
        default: break;
    }

    ctx->pc = 0x17e800u;

    // 0x17e800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e804: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17e804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17e808: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17e808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17e80c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e810: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17e810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17e818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17e81c: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x17e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x17e820: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17E820u;
    {
        const bool branch_taken_0x17e820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E820u;
        // 0x17e824: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e820) {
            ctx->pc = 0x17E86Cu;
            goto label_17e86c;
        }
    }
    ctx->pc = 0x17E828u;
    // 0x17e828: 0xc0462ec  jal         func_118BB0
    ctx->pc = 0x17E828u;
    SET_GPR_U32(ctx, 31, 0x17E830u);
    ctx->pc = 0x17E82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E828u;
    // 0x17e82c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BB0u, 0x17E828u, 0x17E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E830u;
label_17e830:
    // 0x17e830: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17e830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e834: 0xc0461b0  jal         func_1186C0
    ctx->pc = 0x17E834u;
    SET_GPR_U32(ctx, 31, 0x17E83Cu);
    ctx->pc = 0x17E838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E834u;
    // 0x17e838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1186C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1186C0u, 0x17E834u, 0x17E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E83Cu;
label_17e83c:
    // 0x17e83c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e840: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x17E840u;
    SET_GPR_U32(ctx, 31, 0x17E848u);
    ctx->pc = 0x17E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E840u;
    // 0x17e844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x17E840u, 0x17E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E848u;
label_17e848:
    // 0x17e848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17e848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e84c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e850: 0x8c8700b4  lw          $a3, 0xB4($a0)
    ctx->pc = 0x17e850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x17e854: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17e854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e858: 0x8c8800b8  lw          $t0, 0xB8($a0)
    ctx->pc = 0x17e858u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x17e85c: 0xc05fa24  jal         func_17E890
    ctx->pc = 0x17E85Cu;
    SET_GPR_U32(ctx, 31, 0x17E864u);
    ctx->pc = 0x17E860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E85Cu;
    // 0x17e860: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E890u, 0x17E85Cu, 0x17E864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E864u;
label_17e864:
    // 0x17e864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E864u;
    {
        const bool branch_taken_0x17e864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E864u;
        // 0x17e868: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e864) {
            ctx->pc = 0x17E874u;
            goto label_17e874;
        }
    }
    ctx->pc = 0x17E86Cu;
label_17e86c:
    // 0x17e86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e874:
    // 0x17e874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e878: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17e878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e87c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17e87cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e884: 0x3e00008  jr          $ra
    ctx->pc = 0x17E884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E884u;
        // 0x17e888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E88Cu;
    // 0x17e88c: 0x0  nop
    ctx->pc = 0x17e88cu;
    // NOP
    ctx->pc = 0x17e890u;
}
