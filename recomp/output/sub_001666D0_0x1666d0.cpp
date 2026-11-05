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

// Function: sub_001666D0
// Address: 0x1666d0 - 0x166768
void sub_001666D0_0x1666d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001666D0_0x1666d0");
#endif

    switch (ctx->pc) {
        case 0x1666d0u: goto label_1666d0;
        case 0x1666d4u: goto label_1666d4;
        case 0x1666d8u: goto label_1666d8;
        case 0x1666dcu: goto label_1666dc;
        case 0x1666e0u: goto label_1666e0;
        case 0x1666e4u: goto label_1666e4;
        case 0x1666e8u: goto label_1666e8;
        case 0x1666ecu: goto label_1666ec;
        case 0x1666f0u: goto label_1666f0;
        case 0x1666f4u: goto label_1666f4;
        case 0x1666f8u: goto label_1666f8;
        case 0x1666fcu: goto label_1666fc;
        case 0x166700u: goto label_166700;
        case 0x166704u: goto label_166704;
        case 0x166708u: goto label_166708;
        case 0x16670cu: goto label_16670c;
        case 0x166710u: goto label_166710;
        case 0x166714u: goto label_166714;
        case 0x166718u: goto label_166718;
        case 0x16671cu: goto label_16671c;
        case 0x166720u: goto label_166720;
        case 0x166724u: goto label_166724;
        case 0x166728u: goto label_166728;
        case 0x16672cu: goto label_16672c;
        case 0x166730u: goto label_166730;
        case 0x166734u: goto label_166734;
        case 0x166738u: goto label_166738;
        case 0x16673cu: goto label_16673c;
        case 0x166740u: goto label_166740;
        case 0x166744u: goto label_166744;
        case 0x166748u: goto label_166748;
        case 0x16674cu: goto label_16674c;
        case 0x166750u: goto label_166750;
        case 0x166754u: goto label_166754;
        case 0x166758u: goto label_166758;
        case 0x16675cu: goto label_16675c;
        case 0x166760u: goto label_166760;
        case 0x166764u: goto label_166764;
        default: break;
    }

    ctx->pc = 0x1666d0u;

label_1666d0:
    // 0x1666d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1666d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1666d4:
    // 0x1666d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1666d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1666d8:
    // 0x1666d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1666d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1666dc:
    // 0x1666dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1666dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1666e0:
    // 0x1666e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1666e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1666e4:
    // 0x1666e4: 0xc04f294  jal         func_13CA50
label_1666e8:
    if (ctx->pc == 0x1666E8u) {
        ctx->pc = 0x1666E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666E4u;
        // 0x1666e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666ECu;
        goto label_1666ec;
    }
    ctx->pc = 0x1666E4u;
    SET_GPR_U32(ctx, 31, 0x1666ECu);
    ctx->pc = 0x1666E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1666E4u;
    // 0x1666e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CA50u, 0x1666E4u, 0x1666ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666ECu;
label_1666ec:
    // 0x1666ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1666ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1666f0:
    // 0x1666f0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1666f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1666f4:
    // 0x1666f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1666f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1666f8:
    // 0x1666f8: 0xc04f33e  jal         func_13CCF8
label_1666fc:
    if (ctx->pc == 0x1666FCu) {
        ctx->pc = 0x1666FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666F8u;
        // 0x1666fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166700u;
        goto label_166700;
    }
    ctx->pc = 0x1666F8u;
    SET_GPR_U32(ctx, 31, 0x166700u);
    ctx->pc = 0x1666FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1666F8u;
    // 0x1666fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x1666F8u, 0x166700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166700u;
label_166700:
    // 0x166700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166704:
    // 0x166704: 0xc04f0b6  jal         func_13C2D8
label_166708:
    if (ctx->pc == 0x166708u) {
        ctx->pc = 0x166708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166704u;
        // 0x166708: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16670Cu;
        goto label_16670c;
    }
    ctx->pc = 0x166704u;
    SET_GPR_U32(ctx, 31, 0x16670Cu);
    ctx->pc = 0x166708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166704u;
    // 0x166708: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x166704u, 0x16670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16670Cu;
label_16670c:
    // 0x16670c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16670cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166710:
    // 0x166710: 0x8e0502e0  lw          $a1, 0x2E0($s0)
    ctx->pc = 0x166710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_166714:
    // 0x166714: 0xc0461e8  jal         func_1187A0
label_166718:
    if (ctx->pc == 0x166718u) {
        ctx->pc = 0x166718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166714u;
        // 0x166718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16671Cu;
        goto label_16671c;
    }
    ctx->pc = 0x166714u;
    SET_GPR_U32(ctx, 31, 0x16671Cu);
    ctx->pc = 0x166718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166714u;
    // 0x166718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x166714u, 0x16671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16671Cu;
label_16671c:
    // 0x16671c: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x16671cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_166720:
    // 0x166720: 0xc045fea  jal         func_117FA8
label_166724:
    if (ctx->pc == 0x166724u) {
        ctx->pc = 0x166724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166720u;
        // 0x166724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166728u;
        goto label_166728;
    }
    ctx->pc = 0x166720u;
    SET_GPR_U32(ctx, 31, 0x166728u);
    ctx->pc = 0x166724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166720u;
    // 0x166724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x166720u, 0x166728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166728u;
label_166728:
    // 0x166728: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x166728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_16672c:
    // 0x16672c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16672cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166730:
    // 0x166730: 0xc0460c4  jal         func_118310
label_166734:
    if (ctx->pc == 0x166734u) {
        ctx->pc = 0x166734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166730u;
        // 0x166734: 0x8c4500dc  lw          $a1, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166738u;
        goto label_166738;
    }
    ctx->pc = 0x166730u;
    SET_GPR_U32(ctx, 31, 0x166738u);
    ctx->pc = 0x166734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166730u;
    // 0x166734: 0x8c4500dc  lw          $a1, 0xDC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x166730u, 0x166738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166738u;
label_166738:
    // 0x166738: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x166738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_16673c:
    // 0x16673c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16673cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_166740:
    // 0x166740: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x166740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166744:
    // 0x166744: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x166744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_166748:
    // 0x166748: 0x40f809  jalr        $v0
label_16674c:
    if (ctx->pc == 0x16674Cu) {
        ctx->pc = 0x16674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166748u;
        // 0x16674c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166750u;
        goto label_166750;
    }
    ctx->pc = 0x166748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166750u);
        ctx->pc = 0x16674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166748u;
        // 0x16674c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166748u, 0x166750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166750u;
label_166750:
    // 0x166750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x166750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166754:
    // 0x166754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x166754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166758:
    // 0x166758: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x166758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16675c:
    // 0x16675c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16675cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_166760:
    // 0x166760: 0x3e00008  jr          $ra
label_166764:
    if (ctx->pc == 0x166764u) {
        ctx->pc = 0x166764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166760u;
        // 0x166764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166768u;
        goto label_fallthrough_0x166760;
    }
    ctx->pc = 0x166760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166760u;
        // 0x166764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x166760:
    ctx->pc = 0x166768u;
}
