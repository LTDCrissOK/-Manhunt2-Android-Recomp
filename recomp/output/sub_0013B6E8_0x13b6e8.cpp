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

// Function: sub_0013B6E8
// Address: 0x13b6e8 - 0x13b760
void sub_0013B6E8_0x13b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B6E8_0x13b6e8");
#endif

    switch (ctx->pc) {
        case 0x13b6e8u: goto label_13b6e8;
        case 0x13b6ecu: goto label_13b6ec;
        case 0x13b6f0u: goto label_13b6f0;
        case 0x13b6f4u: goto label_13b6f4;
        case 0x13b6f8u: goto label_13b6f8;
        case 0x13b6fcu: goto label_13b6fc;
        case 0x13b700u: goto label_13b700;
        case 0x13b704u: goto label_13b704;
        case 0x13b708u: goto label_13b708;
        case 0x13b70cu: goto label_13b70c;
        case 0x13b710u: goto label_13b710;
        case 0x13b714u: goto label_13b714;
        case 0x13b718u: goto label_13b718;
        case 0x13b71cu: goto label_13b71c;
        case 0x13b720u: goto label_13b720;
        case 0x13b724u: goto label_13b724;
        case 0x13b728u: goto label_13b728;
        case 0x13b72cu: goto label_13b72c;
        case 0x13b730u: goto label_13b730;
        case 0x13b734u: goto label_13b734;
        case 0x13b738u: goto label_13b738;
        case 0x13b73cu: goto label_13b73c;
        case 0x13b740u: goto label_13b740;
        case 0x13b744u: goto label_13b744;
        case 0x13b748u: goto label_13b748;
        case 0x13b74cu: goto label_13b74c;
        case 0x13b750u: goto label_13b750;
        case 0x13b754u: goto label_13b754;
        case 0x13b758u: goto label_13b758;
        case 0x13b75cu: goto label_13b75c;
        default: break;
    }

    ctx->pc = 0x13b6e8u;

label_13b6e8:
    // 0x13b6e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13b6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_13b6ec:
    // 0x13b6ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13b6f0:
    // 0x13b6f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13b6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_13b6f4:
    // 0x13b6f4: 0xc04d7d8  jal         func_135F60
label_13b6f8:
    if (ctx->pc == 0x13B6F8u) {
        ctx->pc = 0x13B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6F4u;
        // 0x13b6f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B6FCu;
        goto label_13b6fc;
    }
    ctx->pc = 0x13B6F4u;
    SET_GPR_U32(ctx, 31, 0x13B6FCu);
    ctx->pc = 0x13B6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B6F4u;
    // 0x13b6f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F60u, 0x13B6F4u, 0x13B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6FCu;
label_13b6fc:
    // 0x13b6fc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_13b700:
    if (ctx->pc == 0x13B700u) {
        ctx->pc = 0x13B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6FCu;
        // 0x13b700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B704u;
        goto label_13b704;
    }
    ctx->pc = 0x13B6FCu;
    {
        const bool branch_taken_0x13b6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6FCu;
        // 0x13b700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6fc) {
            ctx->pc = 0x13B74Cu;
            goto label_13b74c;
        }
    }
    ctx->pc = 0x13B704u;
label_13b704:
    // 0x13b704: 0xc04db8c  jal         func_136E30
label_13b708:
    if (ctx->pc == 0x13B708u) {
        ctx->pc = 0x13B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B704u;
        // 0x13b708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B70Cu;
        goto label_13b70c;
    }
    ctx->pc = 0x13B704u;
    SET_GPR_U32(ctx, 31, 0x13B70Cu);
    ctx->pc = 0x13B708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B704u;
    // 0x13b708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E30u, 0x13B704u, 0x13B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B70Cu;
label_13b70c:
    // 0x13b70c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_13b710:
    if (ctx->pc == 0x13B710u) {
        ctx->pc = 0x13B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B70Cu;
        // 0x13b710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B714u;
        goto label_13b714;
    }
    ctx->pc = 0x13B70Cu;
    {
        const bool branch_taken_0x13b70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b70c) {
            ctx->pc = 0x13B710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B70Cu;
            // 0x13b710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B74Cu;
            goto label_13b74c;
        }
    }
    ctx->pc = 0x13B714u;
label_13b714:
    // 0x13b714: 0x8e030468  lw          $v1, 0x468($s0)
    ctx->pc = 0x13b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
label_13b718:
    // 0x13b718: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x13b718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_13b71c:
    // 0x13b71c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13b71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13b720:
    // 0x13b720: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13b720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13b724:
    // 0x13b724: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x13b724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_13b728:
    // 0x13b728: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13b72c:
    // 0x13b72c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_13b730:
    // 0x13b730: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x13b730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_13b734:
    // 0x13b734: 0x60f809  jalr        $v1
label_13b738:
    if (ctx->pc == 0x13B738u) {
        ctx->pc = 0x13B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B734u;
        // 0x13b738: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B73Cu;
        goto label_13b73c;
    }
    ctx->pc = 0x13B734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13B73Cu);
        ctx->pc = 0x13B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B734u;
        // 0x13b738: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B734u, 0x13B73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B73Cu;
label_13b73c:
    // 0x13b73c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b740:
    // 0x13b740: 0xc04db8a  jal         func_136E28
label_13b744:
    if (ctx->pc == 0x13B744u) {
        ctx->pc = 0x13B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B740u;
        // 0x13b744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B748u;
        goto label_13b748;
    }
    ctx->pc = 0x13B740u;
    SET_GPR_U32(ctx, 31, 0x13B748u);
    ctx->pc = 0x13B744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B740u;
    // 0x13b744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E28u, 0x13B740u, 0x13B748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B748u;
label_13b748:
    // 0x13b748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b74c:
    // 0x13b74c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b74cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b750:
    // 0x13b750: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13b750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13b754:
    // 0x13b754: 0x3e00008  jr          $ra
label_13b758:
    if (ctx->pc == 0x13B758u) {
        ctx->pc = 0x13B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B754u;
        // 0x13b758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B75Cu;
        goto label_13b75c;
    }
    ctx->pc = 0x13B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B754u;
        // 0x13b758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B75Cu;
label_13b75c:
    // 0x13b75c: 0x0  nop
    ctx->pc = 0x13b75cu;
    // NOP
    ctx->pc = 0x13b760u;
}
