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

// Function: sub_0014A7E0
// Address: 0x14a7e0 - 0x14a850
void sub_0014A7E0_0x14a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A7E0_0x14a7e0");
#endif

    switch (ctx->pc) {
        case 0x14a7f8u: goto label_14a7f8;
        case 0x14a810u: goto label_14a810;
        case 0x14a820u: goto label_14a820;
        case 0x14a834u: goto label_14a834;
        case 0x14a83cu: goto label_14a83c;
        default: break;
    }

    ctx->pc = 0x14a7e0u;

    // 0x14a7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a7e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a7e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14a7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14a7ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a7f0: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x14A7F0u;
    SET_GPR_U32(ctx, 31, 0x14A7F8u);
    ctx->pc = 0x14A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A7F0u;
    // 0x14a7f4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14A7F0u, 0x14A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7F8u;
label_14a7f8:
    // 0x14a7f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a7fc: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A7FCu;
    {
        const bool branch_taken_0x14a7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7FCu;
        // 0x14a800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a7fc) {
            ctx->pc = 0x14A840u;
            goto label_14a840;
        }
    }
    ctx->pc = 0x14A804u;
    // 0x14a804: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14a804u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a808: 0xc052c56  jal         func_14B158
    ctx->pc = 0x14A808u;
    SET_GPR_U32(ctx, 31, 0x14A810u);
    ctx->pc = 0x14A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A808u;
    // 0x14a80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B158u, 0x14A808u, 0x14A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A810u;
label_14a810:
    // 0x14a810: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A810u;
    {
        const bool branch_taken_0x14a810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a810) {
            ctx->pc = 0x14A814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A810u;
            // 0x14a814: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A828u;
            goto label_14a828;
        }
    }
    ctx->pc = 0x14A818u;
    // 0x14a818: 0xc052b38  jal         func_14ACE0
    ctx->pc = 0x14A818u;
    SET_GPR_U32(ctx, 31, 0x14A820u);
    ctx->pc = 0x14A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A818u;
    // 0x14a81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACE0u, 0x14A818u, 0x14A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A820u;
label_14a820:
    // 0x14a820: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14A820u;
    {
        const bool branch_taken_0x14a820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A820u;
        // 0x14a824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a820) {
            ctx->pc = 0x14A840u;
            goto label_14a840;
        }
    }
    ctx->pc = 0x14A828u;
label_14a828:
    // 0x14a828: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a82c: 0xc052aea  jal         func_14ABA8
    ctx->pc = 0x14A82Cu;
    SET_GPR_U32(ctx, 31, 0x14A834u);
    ctx->pc = 0x14A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A82Cu;
    // 0x14a830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ABA8u, 0x14A82Cu, 0x14A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A834u;
label_14a834:
    // 0x14a834: 0xc052af6  jal         func_14ABD8
    ctx->pc = 0x14A834u;
    SET_GPR_U32(ctx, 31, 0x14A83Cu);
    ctx->pc = 0x14A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A834u;
    // 0x14a838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ABD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ABD8u, 0x14A834u, 0x14A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A83Cu;
label_14a83c:
    // 0x14a83c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a840:
    // 0x14a840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a844: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14a844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a848: 0x3e00008  jr          $ra
    ctx->pc = 0x14A848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A848u;
        // 0x14a84c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A850u;
}
