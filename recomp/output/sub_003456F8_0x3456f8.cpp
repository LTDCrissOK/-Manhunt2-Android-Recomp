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

// Function: sub_003456F8
// Address: 0x3456f8 - 0x345958
void sub_003456F8_0x3456f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003456F8_0x3456f8");
#endif

    switch (ctx->pc) {
        case 0x3456f8u: goto label_3456f8;
        case 0x3456fcu: goto label_3456fc;
        case 0x345700u: goto label_345700;
        case 0x345704u: goto label_345704;
        case 0x345708u: goto label_345708;
        case 0x34570cu: goto label_34570c;
        case 0x345710u: goto label_345710;
        case 0x345714u: goto label_345714;
        case 0x345718u: goto label_345718;
        case 0x34571cu: goto label_34571c;
        case 0x345720u: goto label_345720;
        case 0x345724u: goto label_345724;
        case 0x345728u: goto label_345728;
        case 0x34572cu: goto label_34572c;
        case 0x345730u: goto label_345730;
        case 0x345734u: goto label_345734;
        case 0x345738u: goto label_345738;
        case 0x34573cu: goto label_34573c;
        case 0x345740u: goto label_345740;
        case 0x345744u: goto label_345744;
        case 0x345748u: goto label_345748;
        case 0x34574cu: goto label_34574c;
        case 0x345750u: goto label_345750;
        case 0x345754u: goto label_345754;
        case 0x345758u: goto label_345758;
        case 0x34575cu: goto label_34575c;
        case 0x345760u: goto label_345760;
        case 0x345764u: goto label_345764;
        case 0x345768u: goto label_345768;
        case 0x34576cu: goto label_34576c;
        case 0x345770u: goto label_345770;
        case 0x345774u: goto label_345774;
        case 0x345778u: goto label_345778;
        case 0x34577cu: goto label_34577c;
        case 0x345780u: goto label_345780;
        case 0x345784u: goto label_345784;
        case 0x345788u: goto label_345788;
        case 0x34578cu: goto label_34578c;
        case 0x345790u: goto label_345790;
        case 0x345794u: goto label_345794;
        case 0x345798u: goto label_345798;
        case 0x34579cu: goto label_34579c;
        case 0x3457a0u: goto label_3457a0;
        case 0x3457a4u: goto label_3457a4;
        case 0x3457a8u: goto label_3457a8;
        case 0x3457acu: goto label_3457ac;
        case 0x3457b0u: goto label_3457b0;
        case 0x3457b4u: goto label_3457b4;
        case 0x3457b8u: goto label_3457b8;
        case 0x3457bcu: goto label_3457bc;
        case 0x3457c0u: goto label_3457c0;
        case 0x3457c4u: goto label_3457c4;
        case 0x3457c8u: goto label_3457c8;
        case 0x3457ccu: goto label_3457cc;
        case 0x3457d0u: goto label_3457d0;
        case 0x3457d4u: goto label_3457d4;
        case 0x3457d8u: goto label_3457d8;
        case 0x3457dcu: goto label_3457dc;
        case 0x3457e0u: goto label_3457e0;
        case 0x3457e4u: goto label_3457e4;
        case 0x3457e8u: goto label_3457e8;
        case 0x3457ecu: goto label_3457ec;
        case 0x3457f0u: goto label_3457f0;
        case 0x3457f4u: goto label_3457f4;
        case 0x3457f8u: goto label_3457f8;
        case 0x3457fcu: goto label_3457fc;
        case 0x345800u: goto label_345800;
        case 0x345804u: goto label_345804;
        case 0x345808u: goto label_345808;
        case 0x34580cu: goto label_34580c;
        case 0x345810u: goto label_345810;
        case 0x345814u: goto label_345814;
        case 0x345818u: goto label_345818;
        case 0x34581cu: goto label_34581c;
        case 0x345820u: goto label_345820;
        case 0x345824u: goto label_345824;
        case 0x345828u: goto label_345828;
        case 0x34582cu: goto label_34582c;
        case 0x345830u: goto label_345830;
        case 0x345834u: goto label_345834;
        case 0x345838u: goto label_345838;
        case 0x34583cu: goto label_34583c;
        case 0x345840u: goto label_345840;
        case 0x345844u: goto label_345844;
        case 0x345848u: goto label_345848;
        case 0x34584cu: goto label_34584c;
        case 0x345850u: goto label_345850;
        case 0x345854u: goto label_345854;
        case 0x345858u: goto label_345858;
        case 0x34585cu: goto label_34585c;
        case 0x345860u: goto label_345860;
        case 0x345864u: goto label_345864;
        case 0x345868u: goto label_345868;
        case 0x34586cu: goto label_34586c;
        case 0x345870u: goto label_345870;
        case 0x345874u: goto label_345874;
        case 0x345878u: goto label_345878;
        case 0x34587cu: goto label_34587c;
        case 0x345880u: goto label_345880;
        case 0x345884u: goto label_345884;
        case 0x345888u: goto label_345888;
        case 0x34588cu: goto label_34588c;
        case 0x345890u: goto label_345890;
        case 0x345894u: goto label_345894;
        case 0x345898u: goto label_345898;
        case 0x34589cu: goto label_34589c;
        case 0x3458a0u: goto label_3458a0;
        case 0x3458a4u: goto label_3458a4;
        case 0x3458a8u: goto label_3458a8;
        case 0x3458acu: goto label_3458ac;
        case 0x3458b0u: goto label_3458b0;
        case 0x3458b4u: goto label_3458b4;
        case 0x3458b8u: goto label_3458b8;
        case 0x3458bcu: goto label_3458bc;
        case 0x3458c0u: goto label_3458c0;
        case 0x3458c4u: goto label_3458c4;
        case 0x3458c8u: goto label_3458c8;
        case 0x3458ccu: goto label_3458cc;
        case 0x3458d0u: goto label_3458d0;
        case 0x3458d4u: goto label_3458d4;
        case 0x3458d8u: goto label_3458d8;
        case 0x3458dcu: goto label_3458dc;
        case 0x3458e0u: goto label_3458e0;
        case 0x3458e4u: goto label_3458e4;
        case 0x3458e8u: goto label_3458e8;
        case 0x3458ecu: goto label_3458ec;
        case 0x3458f0u: goto label_3458f0;
        case 0x3458f4u: goto label_3458f4;
        case 0x3458f8u: goto label_3458f8;
        case 0x3458fcu: goto label_3458fc;
        case 0x345900u: goto label_345900;
        case 0x345904u: goto label_345904;
        case 0x345908u: goto label_345908;
        case 0x34590cu: goto label_34590c;
        case 0x345910u: goto label_345910;
        case 0x345914u: goto label_345914;
        case 0x345918u: goto label_345918;
        case 0x34591cu: goto label_34591c;
        case 0x345920u: goto label_345920;
        case 0x345924u: goto label_345924;
        case 0x345928u: goto label_345928;
        case 0x34592cu: goto label_34592c;
        case 0x345930u: goto label_345930;
        case 0x345934u: goto label_345934;
        case 0x345938u: goto label_345938;
        case 0x34593cu: goto label_34593c;
        case 0x345940u: goto label_345940;
        case 0x345944u: goto label_345944;
        case 0x345948u: goto label_345948;
        case 0x34594cu: goto label_34594c;
        case 0x345950u: goto label_345950;
        case 0x345954u: goto label_345954;
        default: break;
    }

    ctx->pc = 0x3456f8u;

label_3456f8:
    // 0x3456f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3456f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3456fc:
    // 0x3456fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3456fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_345700:
    // 0x345700: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x345700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_345704:
    // 0x345704: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x345704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_345708:
    // 0x345708: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x345708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_34570c:
    // 0x34570c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34570cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_345710:
    // 0x345710: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x345710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_345714:
    // 0x345714: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x345714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_345718:
    // 0x345718: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x345718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_34571c:
    // 0x34571c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34571cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_345720:
    // 0x345720: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x345720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_345724:
    // 0x345724: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_345728:
    if (ctx->pc == 0x345728u) {
        ctx->pc = 0x345728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345724u;
        // 0x345728: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34572Cu;
        goto label_34572c;
    }
    ctx->pc = 0x345724u;
    {
        const bool branch_taken_0x345724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345724u;
        // 0x345728: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345724) {
            ctx->pc = 0x345784u;
            goto label_345784;
        }
    }
    ctx->pc = 0x34572Cu;
label_34572c:
    // 0x34572c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x34572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_345730:
    // 0x345730: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_345734:
    if (ctx->pc == 0x345734u) {
        ctx->pc = 0x345734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345730u;
        // 0x345734: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345738u;
        goto label_345738;
    }
    ctx->pc = 0x345730u;
    {
        const bool branch_taken_0x345730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345730u;
        // 0x345734: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345730) {
            ctx->pc = 0x345770u;
            goto label_345770;
        }
    }
    ctx->pc = 0x345738u;
label_345738:
    // 0x345738: 0x8e430118  lw          $v1, 0x118($s2)
    ctx->pc = 0x345738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_34573c:
    // 0x34573c: 0x0  nop
    ctx->pc = 0x34573cu;
    // NOP
label_345740:
    // 0x345740: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x345740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_345744:
    // 0x345744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x345744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_345748:
    // 0x345748: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x345748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34574c:
    // 0x34574c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_345750:
    if (ctx->pc == 0x345750u) {
        ctx->pc = 0x345750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34574Cu;
        // 0x345750: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345754u;
        goto label_345754;
    }
    ctx->pc = 0x34574Cu;
    {
        const bool branch_taken_0x34574c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34574c) {
            ctx->pc = 0x345750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34574Cu;
            // 0x345750: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345760u;
            goto label_345760;
        }
    }
    ctx->pc = 0x345754u;
label_345754:
    // 0x345754: 0xc0f5222  jal         func_3D4888
label_345758:
    if (ctx->pc == 0x345758u) {
        ctx->pc = 0x34575Cu;
        goto label_34575c;
    }
    ctx->pc = 0x345754u;
    SET_GPR_U32(ctx, 31, 0x34575Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x345754u, 0x34575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34575Cu;
label_34575c:
    // 0x34575c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x34575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_345760:
    // 0x345760: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x345760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_345764:
    // 0x345764: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x345764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_345768:
    // 0x345768: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_34576c:
    if (ctx->pc == 0x34576Cu) {
        ctx->pc = 0x34576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345768u;
        // 0x34576c: 0x8e430118  lw          $v1, 0x118($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345770u;
        goto label_345770;
    }
    ctx->pc = 0x345768u;
    {
        const bool branch_taken_0x345768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345768) {
            ctx->pc = 0x34576Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345768u;
            // 0x34576c: 0x8e430118  lw          $v1, 0x118($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345740;
        }
    }
    ctx->pc = 0x345770u;
label_345770:
    // 0x345770: 0x8e440118  lw          $a0, 0x118($s2)
    ctx->pc = 0x345770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_345774:
    // 0x345774: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_345778:
    if (ctx->pc == 0x345778u) {
        ctx->pc = 0x345778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345774u;
        // 0x345778: 0x152080  sll         $a0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34577Cu;
        goto label_34577c;
    }
    ctx->pc = 0x345774u;
    {
        const bool branch_taken_0x345774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x345774) {
            ctx->pc = 0x345778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345774u;
            // 0x345778: 0x152080  sll         $a0, $s5, 2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345788u;
            goto label_345788;
        }
    }
    ctx->pc = 0x34577Cu;
label_34577c:
    // 0x34577c: 0xc0f528a  jal         func_3D4A28
label_345780:
    if (ctx->pc == 0x345780u) {
        ctx->pc = 0x345784u;
        goto label_345784;
    }
    ctx->pc = 0x34577Cu;
    SET_GPR_U32(ctx, 31, 0x345784u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x34577Cu, 0x345784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345784u;
label_345784:
    // 0x345784: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x345784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_345788:
    // 0x345788: 0xc0f52a8  jal         func_3D4AA0
label_34578c:
    if (ctx->pc == 0x34578Cu) {
        ctx->pc = 0x34578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345788u;
        // 0x34578c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345790u;
        goto label_345790;
    }
    ctx->pc = 0x345788u;
    SET_GPR_U32(ctx, 31, 0x345790u);
    ctx->pc = 0x34578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345788u;
    // 0x34578c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x345788u, 0x345790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345790u;
label_345790:
    // 0x345790: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x345790u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_345794:
    // 0x345794: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x345794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_345798:
    // 0x345798: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x345798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_34579c:
    // 0x34579c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34579cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3457a0:
    // 0x3457a0: 0xae420118  sw          $v0, 0x118($s2)
    ctx->pc = 0x3457a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 2));
label_3457a4:
    // 0x3457a4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3457a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3457a8:
    // 0x3457a8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3457a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3457ac:
    // 0x3457ac: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3457acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3457b0:
    // 0x3457b0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3457b4:
    if (ctx->pc == 0x3457B4u) {
        ctx->pc = 0x3457B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457B0u;
        // 0x3457b4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3457B8u;
        goto label_3457b8;
    }
    ctx->pc = 0x3457B0u;
    {
        const bool branch_taken_0x3457b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3457B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457B0u;
        // 0x3457b4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3457b0) {
            ctx->pc = 0x345824u;
            goto label_345824;
        }
    }
    ctx->pc = 0x3457B8u;
label_3457b8:
    // 0x3457b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3457b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3457bc:
    // 0x3457bc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x3457bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3457c0:
    // 0x3457c0: 0x60f809  jalr        $v1
label_3457c4:
    if (ctx->pc == 0x3457C4u) {
        ctx->pc = 0x3457C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457C0u;
        // 0x3457c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3457C8u;
        goto label_3457c8;
    }
    ctx->pc = 0x3457C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3457C8u);
        ctx->pc = 0x3457C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457C0u;
        // 0x3457c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3457C0u, 0x3457C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3457C8u;
label_3457c8:
    // 0x3457c8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3457c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3457cc:
    // 0x3457cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3457ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3457d0:
    // 0x3457d0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x3457d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3457d4:
    // 0x3457d4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3457d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3457d8:
    // 0x3457d8: 0x0  nop
    ctx->pc = 0x3457d8u;
    // NOP
label_3457dc:
    // 0x3457dc: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_3457e0:
    if (ctx->pc == 0x3457E0u) {
        ctx->pc = 0x3457E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457DCu;
        // 0x3457e0: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3457E4u;
        goto label_3457e4;
    }
    ctx->pc = 0x3457DCu;
    {
        const bool branch_taken_0x3457dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3457dc) {
            ctx->pc = 0x3457E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3457DCu;
            // 0x3457e0: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34581Cu;
            goto label_34581c;
        }
    }
    ctx->pc = 0x3457E4u;
label_3457e4:
    // 0x3457e4: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x3457e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_3457e8:
    // 0x3457e8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3457e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3457ec:
    // 0x3457ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3457ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3457f0:
    // 0x3457f0: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x3457f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_3457f4:
    // 0x3457f4: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x3457f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_3457f8:
    // 0x3457f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3457f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3457fc:
    // 0x3457fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3457fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_345800:
    // 0x345800: 0xac760018  sw          $s6, 0x18($v1)
    ctx->pc = 0x345800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 22));
label_345804:
    // 0x345804: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x345804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_345808:
    // 0x345808: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x345808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_34580c:
    // 0x34580c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34580cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_345810:
    // 0x345810: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x345810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_345814:
    // 0x345814: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x345814u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_345818:
    // 0x345818: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x345818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_34581c:
    // 0x34581c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x34581cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_345820:
    // 0x345820: 0xae4200dc  sw          $v0, 0xDC($s2)
    ctx->pc = 0x345820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
label_345824:
    // 0x345824: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x345824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_345828:
    // 0x345828: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_34582c:
    if (ctx->pc == 0x34582Cu) {
        ctx->pc = 0x34582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345828u;
        // 0x34582c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345830u;
        goto label_345830;
    }
    ctx->pc = 0x345828u;
    {
        const bool branch_taken_0x345828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345828u;
        // 0x34582c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345828) {
            ctx->pc = 0x345870u;
            goto label_345870;
        }
    }
    ctx->pc = 0x345830u;
label_345830:
    // 0x345830: 0x8e510118  lw          $s1, 0x118($s2)
    ctx->pc = 0x345830u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_345834:
    // 0x345834: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x345834u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_345838:
    // 0x345838: 0xc0f5240  jal         func_3D4900
label_34583c:
    if (ctx->pc == 0x34583Cu) {
        ctx->pc = 0x34583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345838u;
        // 0x34583c: 0x2718821  addu        $s1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345840u;
        goto label_345840;
    }
    ctx->pc = 0x345838u;
    SET_GPR_U32(ctx, 31, 0x345840u);
    ctx->pc = 0x34583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345838u;
    // 0x34583c: 0x2718821  addu        $s1, $s3, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x345838u, 0x345840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345840u;
label_345840:
    // 0x345840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x345840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_345844:
    // 0x345844: 0xc0f6a96  jal         func_3DAA58
label_345848:
    if (ctx->pc == 0x345848u) {
        ctx->pc = 0x345848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345844u;
        // 0x345848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34584Cu;
        goto label_34584c;
    }
    ctx->pc = 0x345844u;
    SET_GPR_U32(ctx, 31, 0x34584Cu);
    ctx->pc = 0x345848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345844u;
    // 0x345848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x345844u, 0x34584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34584Cu;
label_34584c:
    // 0x34584c: 0xc0f6a96  jal         func_3DAA58
label_345850:
    if (ctx->pc == 0x345850u) {
        ctx->pc = 0x345850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34584Cu;
        // 0x345850: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345854u;
        goto label_345854;
    }
    ctx->pc = 0x34584Cu;
    SET_GPR_U32(ctx, 31, 0x345854u);
    ctx->pc = 0x345850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34584Cu;
    // 0x345850: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34584Cu, 0x345854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345854u;
label_345854:
    // 0x345854: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x345854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_345858:
    // 0x345858: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x345858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_34585c:
    // 0x34585c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x34585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_345860:
    // 0x345860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x345860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_345864:
    // 0x345864: 0x5460ffd4  bnel        $v1, $zero, . + 4 + (-0x2C << 2)
label_345868:
    if (ctx->pc == 0x345868u) {
        ctx->pc = 0x345868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345864u;
        // 0x345868: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34586Cu;
        goto label_34586c;
    }
    ctx->pc = 0x345864u;
    {
        const bool branch_taken_0x345864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x345864) {
            ctx->pc = 0x345868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345864u;
            // 0x345868: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3457B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3457b8;
        }
    }
    ctx->pc = 0x34586Cu;
label_34586c:
    // 0x34586c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x34586cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_345870:
    // 0x345870: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x345870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_345874:
    // 0x345874: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x345874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_345878:
    // 0x345878: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x345878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_34587c:
    // 0x34587c: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x34587cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
label_345880:
    // 0x345880: 0xc0f52a8  jal         func_3D4AA0
label_345884:
    if (ctx->pc == 0x345884u) {
        ctx->pc = 0x345884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345880u;
        // 0x345884: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345888u;
        goto label_345888;
    }
    ctx->pc = 0x345880u;
    SET_GPR_U32(ctx, 31, 0x345888u);
    ctx->pc = 0x345884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345880u;
    // 0x345884: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x345880u, 0x345888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345888u;
label_345888:
    // 0x345888: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x345888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_34588c:
    // 0x34588c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34588cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_345890:
    // 0x345890: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
label_345894:
    if (ctx->pc == 0x345894u) {
        ctx->pc = 0x345894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345890u;
        // 0x345894: 0xae420124  sw          $v0, 0x124($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345898u;
        goto label_345898;
    }
    ctx->pc = 0x345890u;
    {
        const bool branch_taken_0x345890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x345894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345890u;
        // 0x345894: 0xae420124  sw          $v0, 0x124($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345890) {
            ctx->pc = 0x345924u;
            goto label_345924;
        }
    }
    ctx->pc = 0x345898u;
label_345898:
    // 0x345898: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x345898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34589c:
    // 0x34589c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34589cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3458a0:
    // 0x3458a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3458a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3458a4:
    // 0x3458a4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3458a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3458a8:
    // 0x3458a8: 0xa0640008  sb          $a0, 0x8($v1)
    ctx->pc = 0x3458a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 4));
label_3458ac:
    // 0x3458ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3458acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3458b0:
    // 0x3458b0: 0xa0640009  sb          $a0, 0x9($v1)
    ctx->pc = 0x3458b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 4));
label_3458b4:
    // 0x3458b4: 0x285102b  sltu        $v0, $s4, $a1
    ctx->pc = 0x3458b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3458b8:
    // 0x3458b8: 0xa064000a  sb          $a0, 0xA($v1)
    ctx->pc = 0x3458b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 4));
label_3458bc:
    // 0x3458bc: 0xa064000b  sb          $a0, 0xB($v1)
    ctx->pc = 0x3458bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 4));
label_3458c0:
    // 0x3458c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3458c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3458c4:
    // 0x3458c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3458c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3458c8:
    // 0x3458c8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3458c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_3458cc:
    // 0x3458cc: 0xa0640008  sb          $a0, 0x8($v1)
    ctx->pc = 0x3458ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 4));
label_3458d0:
    // 0x3458d0: 0xa0640009  sb          $a0, 0x9($v1)
    ctx->pc = 0x3458d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 4));
label_3458d4:
    // 0x3458d4: 0xa064000a  sb          $a0, 0xA($v1)
    ctx->pc = 0x3458d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 4));
label_3458d8:
    // 0x3458d8: 0xa064000b  sb          $a0, 0xB($v1)
    ctx->pc = 0x3458d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 4));
label_3458dc:
    // 0x3458dc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3458dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3458e0:
    // 0x3458e0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3458e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3458e4:
    // 0x3458e4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3458e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_3458e8:
    // 0x3458e8: 0xa0640008  sb          $a0, 0x8($v1)
    ctx->pc = 0x3458e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 4));
label_3458ec:
    // 0x3458ec: 0xa0640009  sb          $a0, 0x9($v1)
    ctx->pc = 0x3458ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 4));
label_3458f0:
    // 0x3458f0: 0xa064000a  sb          $a0, 0xA($v1)
    ctx->pc = 0x3458f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 4));
label_3458f4:
    // 0x3458f4: 0xa064000b  sb          $a0, 0xB($v1)
    ctx->pc = 0x3458f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 4));
label_3458f8:
    // 0x3458f8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3458f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3458fc:
    // 0x3458fc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3458fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_345900:
    // 0x345900: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x345900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_345904:
    // 0x345904: 0xa0640008  sb          $a0, 0x8($v1)
    ctx->pc = 0x345904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 4));
label_345908:
    // 0x345908: 0xa0640009  sb          $a0, 0x9($v1)
    ctx->pc = 0x345908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 4));
label_34590c:
    // 0x34590c: 0xa064000a  sb          $a0, 0xA($v1)
    ctx->pc = 0x34590cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 4));
label_345910:
    // 0x345910: 0xa064000b  sb          $a0, 0xB($v1)
    ctx->pc = 0x345910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 4));
label_345914:
    // 0x345914: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x345914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_345918:
    // 0x345918: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x345918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_34591c:
    // 0x34591c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_345920:
    if (ctx->pc == 0x345920u) {
        ctx->pc = 0x345920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34591Cu;
        // 0x345920: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345924u;
        goto label_345924;
    }
    ctx->pc = 0x34591Cu;
    {
        const bool branch_taken_0x34591c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34591Cu;
        // 0x345920: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34591c) {
            ctx->pc = 0x3458A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3458a8;
        }
    }
    ctx->pc = 0x345924u;
label_345924:
    // 0x345924: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x345924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_345928:
    // 0x345928: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x345928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34592c:
    // 0x34592c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34592cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_345930:
    // 0x345930: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x345930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_345934:
    // 0x345934: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x345934u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_345938:
    // 0x345938: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x345938u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_34593c:
    // 0x34593c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x34593cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_345940:
    // 0x345940: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x345940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_345944:
    // 0x345944: 0x3e00008  jr          $ra
label_345948:
    if (ctx->pc == 0x345948u) {
        ctx->pc = 0x345948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345944u;
        // 0x345948: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34594Cu;
        goto label_34594c;
    }
    ctx->pc = 0x345944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345944u;
        // 0x345948: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34594Cu;
label_34594c:
    // 0x34594c: 0x0  nop
    ctx->pc = 0x34594cu;
    // NOP
label_345950:
    // 0x345950: 0x0  nop
    ctx->pc = 0x345950u;
    // NOP
label_345954:
    // 0x345954: 0x0  nop
    ctx->pc = 0x345954u;
    // NOP
    ctx->pc = 0x345958u;
}
