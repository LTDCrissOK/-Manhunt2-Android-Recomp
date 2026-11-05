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

// Function: sub_001586C8
// Address: 0x1586c8 - 0x158750
void sub_001586C8_0x1586c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001586C8_0x1586c8");
#endif

    switch (ctx->pc) {
        case 0x1586c8u: goto label_1586c8;
        case 0x1586ccu: goto label_1586cc;
        case 0x1586d0u: goto label_1586d0;
        case 0x1586d4u: goto label_1586d4;
        case 0x1586d8u: goto label_1586d8;
        case 0x1586dcu: goto label_1586dc;
        case 0x1586e0u: goto label_1586e0;
        case 0x1586e4u: goto label_1586e4;
        case 0x1586e8u: goto label_1586e8;
        case 0x1586ecu: goto label_1586ec;
        case 0x1586f0u: goto label_1586f0;
        case 0x1586f4u: goto label_1586f4;
        case 0x1586f8u: goto label_1586f8;
        case 0x1586fcu: goto label_1586fc;
        case 0x158700u: goto label_158700;
        case 0x158704u: goto label_158704;
        case 0x158708u: goto label_158708;
        case 0x15870cu: goto label_15870c;
        case 0x158710u: goto label_158710;
        case 0x158714u: goto label_158714;
        case 0x158718u: goto label_158718;
        case 0x15871cu: goto label_15871c;
        case 0x158720u: goto label_158720;
        case 0x158724u: goto label_158724;
        case 0x158728u: goto label_158728;
        case 0x15872cu: goto label_15872c;
        case 0x158730u: goto label_158730;
        case 0x158734u: goto label_158734;
        case 0x158738u: goto label_158738;
        case 0x15873cu: goto label_15873c;
        case 0x158740u: goto label_158740;
        case 0x158744u: goto label_158744;
        case 0x158748u: goto label_158748;
        case 0x15874cu: goto label_15874c;
        default: break;
    }

    ctx->pc = 0x1586c8u;

label_1586c8:
    // 0x1586c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1586c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1586cc:
    // 0x1586cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1586ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1586d0:
    // 0x1586d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1586d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1586d4:
    // 0x1586d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1586d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1586d8:
    // 0x1586d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1586d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1586dc:
    // 0x1586dc: 0xc04f1f4  jal         func_13C7D0
label_1586e0:
    if (ctx->pc == 0x1586E0u) {
        ctx->pc = 0x1586E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586DCu;
        // 0x1586e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586E4u;
        goto label_1586e4;
    }
    ctx->pc = 0x1586DCu;
    SET_GPR_U32(ctx, 31, 0x1586E4u);
    ctx->pc = 0x1586E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1586DCu;
    // 0x1586e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7D0u, 0x1586DCu, 0x1586E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1586E4u;
label_1586e4:
    // 0x1586e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1586e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1586e8:
    // 0x1586e8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1586e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1586ec:
    // 0x1586ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1586ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1586f0:
    // 0x1586f0: 0xc04f33e  jal         func_13CCF8
label_1586f4:
    if (ctx->pc == 0x1586F4u) {
        ctx->pc = 0x1586F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586F0u;
        // 0x1586f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586F8u;
        goto label_1586f8;
    }
    ctx->pc = 0x1586F0u;
    SET_GPR_U32(ctx, 31, 0x1586F8u);
    ctx->pc = 0x1586F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1586F0u;
    // 0x1586f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x1586F0u, 0x1586F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1586F8u;
label_1586f8:
    // 0x1586f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1586f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1586fc:
    // 0x1586fc: 0xc04f0b6  jal         func_13C2D8
label_158700:
    if (ctx->pc == 0x158700u) {
        ctx->pc = 0x158700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586FCu;
        // 0x158700: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158704u;
        goto label_158704;
    }
    ctx->pc = 0x1586FCu;
    SET_GPR_U32(ctx, 31, 0x158704u);
    ctx->pc = 0x158700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1586FCu;
    // 0x158700: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x1586FCu, 0x158704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158704u;
label_158704:
    // 0x158704: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158708:
    // 0x158708: 0x8e2502e4  lw          $a1, 0x2E4($s1)
    ctx->pc = 0x158708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_15870c:
    // 0x15870c: 0xc045fea  jal         func_117FA8
label_158710:
    if (ctx->pc == 0x158710u) {
        ctx->pc = 0x158710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15870Cu;
        // 0x158710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158714u;
        goto label_158714;
    }
    ctx->pc = 0x15870Cu;
    SET_GPR_U32(ctx, 31, 0x158714u);
    ctx->pc = 0x158710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15870Cu;
    // 0x158710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x15870Cu, 0x158714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158714u;
label_158714:
    // 0x158714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158718:
    // 0x158718: 0xc046104  jal         func_118410
label_15871c:
    if (ctx->pc == 0x15871Cu) {
        ctx->pc = 0x15871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158718u;
        // 0x15871c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158720u;
        goto label_158720;
    }
    ctx->pc = 0x158718u;
    SET_GPR_U32(ctx, 31, 0x158720u);
    ctx->pc = 0x15871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158718u;
    // 0x15871c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x158718u, 0x158720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158720u;
label_158720:
    // 0x158720: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x158720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_158724:
    // 0x158724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158728:
    // 0x158728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15872c:
    // 0x15872c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_158730:
    // 0x158730: 0x40f809  jalr        $v0
label_158734:
    if (ctx->pc == 0x158734u) {
        ctx->pc = 0x158734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158730u;
        // 0x158734: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158738u;
        goto label_158738;
    }
    ctx->pc = 0x158730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158738u);
        ctx->pc = 0x158734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158730u;
        // 0x158734: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158730u, 0x158738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158738u;
label_158738:
    // 0x158738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15873c:
    // 0x15873c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15873cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_158740:
    // 0x158740: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_158744:
    // 0x158744: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x158744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_158748:
    // 0x158748: 0x3e00008  jr          $ra
label_15874c:
    if (ctx->pc == 0x15874Cu) {
        ctx->pc = 0x15874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158748u;
        // 0x15874c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158750u;
        goto label_fallthrough_0x158748;
    }
    ctx->pc = 0x158748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158748u;
        // 0x15874c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x158748:
    ctx->pc = 0x158750u;
}
