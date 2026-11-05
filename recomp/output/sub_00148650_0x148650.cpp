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

// Function: sub_00148650
// Address: 0x148650 - 0x1486c8
void sub_00148650_0x148650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148650_0x148650");
#endif

    switch (ctx->pc) {
        case 0x14866cu: goto label_14866c;
        case 0x148690u: goto label_148690;
        case 0x14869cu: goto label_14869c;
        case 0x1486acu: goto label_1486ac;
        default: break;
    }

    ctx->pc = 0x148650u;

    // 0x148650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x148654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x148658: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x148658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14865c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14865cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148660: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148664: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x148664u;
    SET_GPR_U32(ctx, 31, 0x14866Cu);
    ctx->pc = 0x148668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148664u;
    // 0x148668: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x148664u, 0x14866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14866Cu;
label_14866c:
    // 0x14866c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14866cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148674: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x148674u;
    {
        const bool branch_taken_0x148674 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x148678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148674u;
        // 0x148678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148674) {
            ctx->pc = 0x1486B0u;
            goto label_1486b0;
        }
    }
    ctx->pc = 0x14867Cu;
    // 0x14867c: 0x8e0206f0  lw          $v0, 0x6F0($s0)
    ctx->pc = 0x14867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
    // 0x148680: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148680u;
    {
        const bool branch_taken_0x148680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148680u;
        // 0x148684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148680) {
            ctx->pc = 0x148690u;
            goto label_148690;
        }
    }
    ctx->pc = 0x148688u;
    // 0x148688: 0xc052296  jal         func_148A58
    ctx->pc = 0x148688u;
    SET_GPR_U32(ctx, 31, 0x148690u);
    ctx->pc = 0x14868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148688u;
    // 0x14868c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148A58u, 0x148688u, 0x148690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148690u;
label_148690:
    // 0x148690: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x148690u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x148694: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x148694u;
    SET_GPR_U32(ctx, 31, 0x14869Cu);
    ctx->pc = 0x148698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148694u;
    // 0x148698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x148694u, 0x14869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14869Cu;
label_14869c:
    // 0x14869c: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14869Cu;
    {
        const bool branch_taken_0x14869c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1486A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14869Cu;
        // 0x1486a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14869c) {
            ctx->pc = 0x1486B0u;
            goto label_1486b0;
        }
    }
    ctx->pc = 0x1486A4u;
    // 0x1486a4: 0xc0524e4  jal         func_149390
    ctx->pc = 0x1486A4u;
    SET_GPR_U32(ctx, 31, 0x1486ACu);
    ctx->pc = 0x1486A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1486A4u;
    // 0x1486a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149390u, 0x1486A4u, 0x1486ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486ACu;
label_1486ac:
    // 0x1486ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1486acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1486b0:
    // 0x1486b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1486b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1486b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1486b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1486b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1486b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1486bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1486BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1486C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486BCu;
        // 0x1486c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1486BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1486C4u;
    // 0x1486c4: 0x0  nop
    ctx->pc = 0x1486c4u;
    // NOP
    ctx->pc = 0x1486c8u;
}
