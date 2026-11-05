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

// Function: sub_00232850
// Address: 0x232850 - 0x2328e8
void sub_00232850_0x232850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232850_0x232850");
#endif

    switch (ctx->pc) {
        case 0x232850u: goto label_232850;
        case 0x232854u: goto label_232854;
        case 0x232858u: goto label_232858;
        case 0x23285cu: goto label_23285c;
        case 0x232860u: goto label_232860;
        case 0x232864u: goto label_232864;
        case 0x232868u: goto label_232868;
        case 0x23286cu: goto label_23286c;
        case 0x232870u: goto label_232870;
        case 0x232874u: goto label_232874;
        case 0x232878u: goto label_232878;
        case 0x23287cu: goto label_23287c;
        case 0x232880u: goto label_232880;
        case 0x232884u: goto label_232884;
        case 0x232888u: goto label_232888;
        case 0x23288cu: goto label_23288c;
        case 0x232890u: goto label_232890;
        case 0x232894u: goto label_232894;
        case 0x232898u: goto label_232898;
        case 0x23289cu: goto label_23289c;
        case 0x2328a0u: goto label_2328a0;
        case 0x2328a4u: goto label_2328a4;
        case 0x2328a8u: goto label_2328a8;
        case 0x2328acu: goto label_2328ac;
        case 0x2328b0u: goto label_2328b0;
        case 0x2328b4u: goto label_2328b4;
        case 0x2328b8u: goto label_2328b8;
        case 0x2328bcu: goto label_2328bc;
        case 0x2328c0u: goto label_2328c0;
        case 0x2328c4u: goto label_2328c4;
        case 0x2328c8u: goto label_2328c8;
        case 0x2328ccu: goto label_2328cc;
        case 0x2328d0u: goto label_2328d0;
        case 0x2328d4u: goto label_2328d4;
        case 0x2328d8u: goto label_2328d8;
        case 0x2328dcu: goto label_2328dc;
        case 0x2328e0u: goto label_2328e0;
        case 0x2328e4u: goto label_2328e4;
        default: break;
    }

    ctx->pc = 0x232850u;

label_232850:
    // 0x232850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_232854:
    // 0x232854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232858:
    // 0x232858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23285c:
    // 0x23285c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23285cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232860:
    // 0x232860: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_232864:
    // 0x232864: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x232864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_232868:
    // 0x232868: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x232868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23286c:
    // 0x23286c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23286cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_232870:
    // 0x232870: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_232874:
    if (ctx->pc == 0x232874u) {
        ctx->pc = 0x232874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232870u;
        // 0x232874: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232878u;
        goto label_232878;
    }
    ctx->pc = 0x232870u;
    {
        const bool branch_taken_0x232870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x232874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232870u;
        // 0x232874: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232870) {
            ctx->pc = 0x232898u;
            goto label_232898;
        }
    }
    ctx->pc = 0x232878u;
label_232878:
    // 0x232878: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x232878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_23287c:
    // 0x23287c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23287cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232880:
    // 0x232880: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x232880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232884:
    // 0x232884: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x232884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_232888:
    // 0x232888: 0x40f809  jalr        $v0
label_23288c:
    if (ctx->pc == 0x23288Cu) {
        ctx->pc = 0x23288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232888u;
        // 0x23288c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232890u;
        goto label_232890;
    }
    ctx->pc = 0x232888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232890u);
        ctx->pc = 0x23288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232888u;
        // 0x23288c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232888u, 0x232890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232890u;
label_232890:
    // 0x232890: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_232894:
    if (ctx->pc == 0x232894u) {
        ctx->pc = 0x232894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232890u;
        // 0x232894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232898u;
        goto label_232898;
    }
    ctx->pc = 0x232890u;
    {
        const bool branch_taken_0x232890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232890u;
        // 0x232894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232890) {
            ctx->pc = 0x2328D0u;
            goto label_2328d0;
        }
    }
    ctx->pc = 0x232898u;
label_232898:
    // 0x232898: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x232898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23289c:
    // 0x23289c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2328a0:
    // 0x2328a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2328a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2328a4:
    // 0x2328a4: 0xc0923b4  jal         func_248ED0
label_2328a8:
    if (ctx->pc == 0x2328A8u) {
        ctx->pc = 0x2328A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328A4u;
        // 0x2328a8: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328ACu;
        goto label_2328ac;
    }
    ctx->pc = 0x2328A4u;
    SET_GPR_U32(ctx, 31, 0x2328ACu);
    ctx->pc = 0x2328A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328A4u;
    // 0x2328a8: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248ED0u, 0x2328A4u, 0x2328ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328ACu;
label_2328ac:
    // 0x2328ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2328b0:
    if (ctx->pc == 0x2328B0u) {
        ctx->pc = 0x2328B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328ACu;
        // 0x2328b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328B4u;
        goto label_2328b4;
    }
    ctx->pc = 0x2328ACu;
    {
        const bool branch_taken_0x2328ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2328B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328ACu;
        // 0x2328b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328ac) {
            ctx->pc = 0x2328CCu;
            goto label_2328cc;
        }
    }
    ctx->pc = 0x2328B4u;
label_2328b4:
    // 0x2328b4: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
label_2328b8:
    if (ctx->pc == 0x2328B8u) {
        ctx->pc = 0x2328B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328B4u;
        // 0x2328b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328BCu;
        goto label_2328bc;
    }
    ctx->pc = 0x2328B4u;
    {
        const bool branch_taken_0x2328b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2328b4) {
            ctx->pc = 0x2328B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2328B4u;
            // 0x2328b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2328D4u;
            goto label_2328d4;
        }
    }
    ctx->pc = 0x2328BCu;
label_2328bc:
    // 0x2328bc: 0xc0924aa  jal         func_2492A8
label_2328c0:
    if (ctx->pc == 0x2328C0u) {
        ctx->pc = 0x2328C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328BCu;
        // 0x2328c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328C4u;
        goto label_2328c4;
    }
    ctx->pc = 0x2328BCu;
    SET_GPR_U32(ctx, 31, 0x2328C4u);
    ctx->pc = 0x2328C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328BCu;
    // 0x2328c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A8u, 0x2328BCu, 0x2328C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328C4u;
label_2328c4:
    // 0x2328c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2328c8:
    if (ctx->pc == 0x2328C8u) {
        ctx->pc = 0x2328C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328C4u;
        // 0x2328c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328CCu;
        goto label_2328cc;
    }
    ctx->pc = 0x2328C4u;
    {
        const bool branch_taken_0x2328c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2328C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328C4u;
        // 0x2328c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328c4) {
            ctx->pc = 0x2328D0u;
            goto label_2328d0;
        }
    }
    ctx->pc = 0x2328CCu;
label_2328cc:
    // 0x2328cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2328ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2328d0:
    // 0x2328d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2328d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2328d4:
    // 0x2328d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2328d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2328d8:
    // 0x2328d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2328d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2328dc:
    // 0x2328dc: 0x3e00008  jr          $ra
label_2328e0:
    if (ctx->pc == 0x2328E0u) {
        ctx->pc = 0x2328E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328DCu;
        // 0x2328e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328E4u;
        goto label_2328e4;
    }
    ctx->pc = 0x2328DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2328E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328DCu;
        // 0x2328e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2328DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2328E4u;
label_2328e4:
    // 0x2328e4: 0x0  nop
    ctx->pc = 0x2328e4u;
    // NOP
    ctx->pc = 0x2328e8u;
}
