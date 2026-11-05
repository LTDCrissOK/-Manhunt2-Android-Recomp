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

// Function: sub_003A26E8
// Address: 0x3a26e8 - 0x3a2790
void sub_003A26E8_0x3a26e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A26E8_0x3a26e8");
#endif

    switch (ctx->pc) {
        case 0x3a26e8u: goto label_3a26e8;
        case 0x3a26ecu: goto label_3a26ec;
        case 0x3a26f0u: goto label_3a26f0;
        case 0x3a26f4u: goto label_3a26f4;
        case 0x3a26f8u: goto label_3a26f8;
        case 0x3a26fcu: goto label_3a26fc;
        case 0x3a2700u: goto label_3a2700;
        case 0x3a2704u: goto label_3a2704;
        case 0x3a2708u: goto label_3a2708;
        case 0x3a270cu: goto label_3a270c;
        case 0x3a2710u: goto label_3a2710;
        case 0x3a2714u: goto label_3a2714;
        case 0x3a2718u: goto label_3a2718;
        case 0x3a271cu: goto label_3a271c;
        case 0x3a2720u: goto label_3a2720;
        case 0x3a2724u: goto label_3a2724;
        case 0x3a2728u: goto label_3a2728;
        case 0x3a272cu: goto label_3a272c;
        case 0x3a2730u: goto label_3a2730;
        case 0x3a2734u: goto label_3a2734;
        case 0x3a2738u: goto label_3a2738;
        case 0x3a273cu: goto label_3a273c;
        case 0x3a2740u: goto label_3a2740;
        case 0x3a2744u: goto label_3a2744;
        case 0x3a2748u: goto label_3a2748;
        case 0x3a274cu: goto label_3a274c;
        case 0x3a2750u: goto label_3a2750;
        case 0x3a2754u: goto label_3a2754;
        case 0x3a2758u: goto label_3a2758;
        case 0x3a275cu: goto label_3a275c;
        case 0x3a2760u: goto label_3a2760;
        case 0x3a2764u: goto label_3a2764;
        case 0x3a2768u: goto label_3a2768;
        case 0x3a276cu: goto label_3a276c;
        case 0x3a2770u: goto label_3a2770;
        case 0x3a2774u: goto label_3a2774;
        case 0x3a2778u: goto label_3a2778;
        case 0x3a277cu: goto label_3a277c;
        case 0x3a2780u: goto label_3a2780;
        case 0x3a2784u: goto label_3a2784;
        case 0x3a2788u: goto label_3a2788;
        case 0x3a278cu: goto label_3a278c;
        default: break;
    }

    ctx->pc = 0x3a26e8u;

label_3a26e8:
    // 0x3a26e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a26e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a26ec:
    // 0x3a26ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a26ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3a26f0:
    // 0x3a26f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a26f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a26f4:
    // 0x3a26f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a26f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a26f8:
    // 0x3a26f8: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_3a26fc:
    if (ctx->pc == 0x3A26FCu) {
        ctx->pc = 0x3A26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A26F8u;
        // 0x3a26fc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2700u;
        goto label_3a2700;
    }
    ctx->pc = 0x3A26F8u;
    {
        const bool branch_taken_0x3a26f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A26F8u;
        // 0x3a26fc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a26f8) {
            ctx->pc = 0x3A2718u;
            goto label_3a2718;
        }
    }
    ctx->pc = 0x3A2700u;
label_3a2700:
    // 0x3a2700: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a2700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a2704:
    // 0x3a2704: 0xc0e8688  jal         func_3A1A20
label_3a2708:
    if (ctx->pc == 0x3A2708u) {
        ctx->pc = 0x3A2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2704u;
        // 0x3a2708: 0x2484d210  addiu       $a0, $a0, -0x2DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A270Cu;
        goto label_3a270c;
    }
    ctx->pc = 0x3A2704u;
    SET_GPR_U32(ctx, 31, 0x3A270Cu);
    ctx->pc = 0x3A2708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2704u;
    // 0x3a2708: 0x2484d210  addiu       $a0, $a0, -0x2DF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A20u, 0x3A2704u, 0x3A270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A270Cu;
label_3a270c:
    // 0x3a270c: 0x10000019  b           . + 4 + (0x19 << 2)
label_3a2710:
    if (ctx->pc == 0x3A2710u) {
        ctx->pc = 0x3A2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A270Cu;
        // 0x3a2710: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2714u;
        goto label_3a2714;
    }
    ctx->pc = 0x3A270Cu;
    {
        const bool branch_taken_0x3a270c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A270Cu;
        // 0x3a2710: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a270c) {
            ctx->pc = 0x3A2774u;
            goto label_3a2774;
        }
    }
    ctx->pc = 0x3A2714u;
label_3a2714:
    // 0x3a2714: 0x0  nop
    ctx->pc = 0x3a2714u;
    // NOP
label_3a2718:
    // 0x3a2718: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3a2718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a271c:
    // 0x3a271c: 0x3c107fff  lui         $s0, 0x7FFF
    ctx->pc = 0x3a271cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
label_3a2720:
    // 0x3a2720: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x3a2720u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_3a2724:
    // 0x3a2724: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x3a2724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_3a2728:
    // 0x3a2728: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3a272c:
    if (ctx->pc == 0x3A272Cu) {
        ctx->pc = 0x3A272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2728u;
        // 0x3a272c: 0x2405012d  addiu       $a1, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2730u;
        goto label_3a2730;
    }
    ctx->pc = 0x3A2728u;
    {
        const bool branch_taken_0x3a2728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2728u;
        // 0x3a272c: 0x2405012d  addiu       $a1, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2728) {
            ctx->pc = 0x3A2770u;
            goto label_3a2770;
        }
    }
    ctx->pc = 0x3A2730u;
label_3a2730:
    // 0x3a2730: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3a2730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a2734:
    // 0x3a2734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a2734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2738:
    // 0x3a2738: 0x40f809  jalr        $v0
label_3a273c:
    if (ctx->pc == 0x3A273Cu) {
        ctx->pc = 0x3A273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2738u;
        // 0x3a273c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2740u;
        goto label_3a2740;
    }
    ctx->pc = 0x3A2738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2740u);
        ctx->pc = 0x3A273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2738u;
        // 0x3a273c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2738u, 0x3A2740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2740u;
label_3a2740:
    // 0x3a2740: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a2740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a2744:
    // 0x3a2744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a2744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2748:
    // 0x3a2748: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3a2748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a274c:
    // 0x3a274c: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x3a274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3a2750:
    // 0x3a2750: 0x2405012e  addiu       $a1, $zero, 0x12E
    ctx->pc = 0x3a2750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_3a2754:
    // 0x3a2754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a2754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2758:
    // 0x3a2758: 0x40f809  jalr        $v0
label_3a275c:
    if (ctx->pc == 0x3A275Cu) {
        ctx->pc = 0x3A275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2758u;
        // 0x3a275c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2760u;
        goto label_3a2760;
    }
    ctx->pc = 0x3A2758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2760u);
        ctx->pc = 0x3A275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2758u;
        // 0x3a275c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2758u, 0x3A2760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2760u;
label_3a2760:
    // 0x3a2760: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3a2760u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_3a2764:
    // 0x3a2764: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a2764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3a2768:
    // 0x3a2768: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3a2768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3a276c:
    // 0x3a276c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3a276cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_3a2770:
    // 0x3a2770: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a2770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a2774:
    // 0x3a2774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2778:
    // 0x3a2778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a2778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a277c:
    // 0x3a277c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a277cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a2780:
    // 0x3a2780: 0x3e00008  jr          $ra
label_3a2784:
    if (ctx->pc == 0x3A2784u) {
        ctx->pc = 0x3A2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2780u;
        // 0x3a2784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2788u;
        goto label_3a2788;
    }
    ctx->pc = 0x3A2780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2780u;
        // 0x3a2784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2788u;
label_3a2788:
    // 0x3a2788: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a2788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a278c:
    // 0x3a278c: 0x0  nop
    ctx->pc = 0x3a278cu;
    // NOP
    ctx->pc = 0x3a2790u;
}
