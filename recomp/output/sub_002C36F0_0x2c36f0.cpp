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

// Function: sub_002C36F0
// Address: 0x2c36f0 - 0x2c3888
void sub_002C36F0_0x2c36f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C36F0_0x2c36f0");
#endif

    switch (ctx->pc) {
        case 0x2c36f0u: goto label_2c36f0;
        case 0x2c36f4u: goto label_2c36f4;
        case 0x2c36f8u: goto label_2c36f8;
        case 0x2c36fcu: goto label_2c36fc;
        case 0x2c3700u: goto label_2c3700;
        case 0x2c3704u: goto label_2c3704;
        case 0x2c3708u: goto label_2c3708;
        case 0x2c370cu: goto label_2c370c;
        case 0x2c3710u: goto label_2c3710;
        case 0x2c3714u: goto label_2c3714;
        case 0x2c3718u: goto label_2c3718;
        case 0x2c371cu: goto label_2c371c;
        case 0x2c3720u: goto label_2c3720;
        case 0x2c3724u: goto label_2c3724;
        case 0x2c3728u: goto label_2c3728;
        case 0x2c372cu: goto label_2c372c;
        case 0x2c3730u: goto label_2c3730;
        case 0x2c3734u: goto label_2c3734;
        case 0x2c3738u: goto label_2c3738;
        case 0x2c373cu: goto label_2c373c;
        case 0x2c3740u: goto label_2c3740;
        case 0x2c3744u: goto label_2c3744;
        case 0x2c3748u: goto label_2c3748;
        case 0x2c374cu: goto label_2c374c;
        case 0x2c3750u: goto label_2c3750;
        case 0x2c3754u: goto label_2c3754;
        case 0x2c3758u: goto label_2c3758;
        case 0x2c375cu: goto label_2c375c;
        case 0x2c3760u: goto label_2c3760;
        case 0x2c3764u: goto label_2c3764;
        case 0x2c3768u: goto label_2c3768;
        case 0x2c376cu: goto label_2c376c;
        case 0x2c3770u: goto label_2c3770;
        case 0x2c3774u: goto label_2c3774;
        case 0x2c3778u: goto label_2c3778;
        case 0x2c377cu: goto label_2c377c;
        case 0x2c3780u: goto label_2c3780;
        case 0x2c3784u: goto label_2c3784;
        case 0x2c3788u: goto label_2c3788;
        case 0x2c378cu: goto label_2c378c;
        case 0x2c3790u: goto label_2c3790;
        case 0x2c3794u: goto label_2c3794;
        case 0x2c3798u: goto label_2c3798;
        case 0x2c379cu: goto label_2c379c;
        case 0x2c37a0u: goto label_2c37a0;
        case 0x2c37a4u: goto label_2c37a4;
        case 0x2c37a8u: goto label_2c37a8;
        case 0x2c37acu: goto label_2c37ac;
        case 0x2c37b0u: goto label_2c37b0;
        case 0x2c37b4u: goto label_2c37b4;
        case 0x2c37b8u: goto label_2c37b8;
        case 0x2c37bcu: goto label_2c37bc;
        case 0x2c37c0u: goto label_2c37c0;
        case 0x2c37c4u: goto label_2c37c4;
        case 0x2c37c8u: goto label_2c37c8;
        case 0x2c37ccu: goto label_2c37cc;
        case 0x2c37d0u: goto label_2c37d0;
        case 0x2c37d4u: goto label_2c37d4;
        case 0x2c37d8u: goto label_2c37d8;
        case 0x2c37dcu: goto label_2c37dc;
        case 0x2c37e0u: goto label_2c37e0;
        case 0x2c37e4u: goto label_2c37e4;
        case 0x2c37e8u: goto label_2c37e8;
        case 0x2c37ecu: goto label_2c37ec;
        case 0x2c37f0u: goto label_2c37f0;
        case 0x2c37f4u: goto label_2c37f4;
        case 0x2c37f8u: goto label_2c37f8;
        case 0x2c37fcu: goto label_2c37fc;
        case 0x2c3800u: goto label_2c3800;
        case 0x2c3804u: goto label_2c3804;
        case 0x2c3808u: goto label_2c3808;
        case 0x2c380cu: goto label_2c380c;
        case 0x2c3810u: goto label_2c3810;
        case 0x2c3814u: goto label_2c3814;
        case 0x2c3818u: goto label_2c3818;
        case 0x2c381cu: goto label_2c381c;
        case 0x2c3820u: goto label_2c3820;
        case 0x2c3824u: goto label_2c3824;
        case 0x2c3828u: goto label_2c3828;
        case 0x2c382cu: goto label_2c382c;
        case 0x2c3830u: goto label_2c3830;
        case 0x2c3834u: goto label_2c3834;
        case 0x2c3838u: goto label_2c3838;
        case 0x2c383cu: goto label_2c383c;
        case 0x2c3840u: goto label_2c3840;
        case 0x2c3844u: goto label_2c3844;
        case 0x2c3848u: goto label_2c3848;
        case 0x2c384cu: goto label_2c384c;
        case 0x2c3850u: goto label_2c3850;
        case 0x2c3854u: goto label_2c3854;
        case 0x2c3858u: goto label_2c3858;
        case 0x2c385cu: goto label_2c385c;
        case 0x2c3860u: goto label_2c3860;
        case 0x2c3864u: goto label_2c3864;
        case 0x2c3868u: goto label_2c3868;
        case 0x2c386cu: goto label_2c386c;
        case 0x2c3870u: goto label_2c3870;
        case 0x2c3874u: goto label_2c3874;
        case 0x2c3878u: goto label_2c3878;
        case 0x2c387cu: goto label_2c387c;
        case 0x2c3880u: goto label_2c3880;
        case 0x2c3884u: goto label_2c3884;
        default: break;
    }

    ctx->pc = 0x2c36f0u;

label_2c36f0:
    // 0x2c36f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c36f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2c36f4:
    // 0x2c36f4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c36f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2c36f8:
    // 0x2c36f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c36f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2c36fc:
    // 0x2c36fc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2c36fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2c3700:
    // 0x2c3700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3704:
    // 0x2c3704: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2c3704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2c3708:
    // 0x2c3708: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c3708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c370c:
    // 0x2c370c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2c370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2c3710:
    // 0x2c3710: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2c3710u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c3714:
    // 0x2c3714: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2c3714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_2c3718:
    // 0x2c3718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c371c:
    // 0x2c371c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2c371cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2c3720:
    // 0x2c3720: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2c3720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_2c3724:
    // 0x2c3724: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2c3724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_2c3728:
    // 0x2c3728: 0xc0b11aa  jal         func_2C46A8
label_2c372c:
    if (ctx->pc == 0x2C372Cu) {
        ctx->pc = 0x2C372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3728u;
        // 0x2c372c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3730u;
        goto label_2c3730;
    }
    ctx->pc = 0x2C3728u;
    SET_GPR_U32(ctx, 31, 0x2C3730u);
    ctx->pc = 0x2C372Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3728u;
    // 0x2c372c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C3728u, 0x2C3730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3730u;
label_2c3730:
    // 0x2c3730: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c3734:
    // 0x2c3734: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x2c3734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2c3738:
    // 0x2c3738: 0xc0b11aa  jal         func_2C46A8
label_2c373c:
    if (ctx->pc == 0x2C373Cu) {
        ctx->pc = 0x2C373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3738u;
        // 0x2c373c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3740u;
        goto label_2c3740;
    }
    ctx->pc = 0x2C3738u;
    SET_GPR_U32(ctx, 31, 0x2C3740u);
    ctx->pc = 0x2C373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3738u;
    // 0x2c373c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C3738u, 0x2C3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3740u;
label_2c3740:
    // 0x2c3740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c3744:
    // 0x2c3744: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x2c3744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2c3748:
    // 0x2c3748: 0xc0b11aa  jal         func_2C46A8
label_2c374c:
    if (ctx->pc == 0x2C374Cu) {
        ctx->pc = 0x2C374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3748u;
        // 0x2c374c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3750u;
        goto label_2c3750;
    }
    ctx->pc = 0x2C3748u;
    SET_GPR_U32(ctx, 31, 0x2C3750u);
    ctx->pc = 0x2C374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3748u;
    // 0x2c374c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C3748u, 0x2C3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3750u;
label_2c3750:
    // 0x2c3750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c3754:
    // 0x2c3754: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2c3754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2c3758:
    // 0x2c3758: 0xc0b11aa  jal         func_2C46A8
label_2c375c:
    if (ctx->pc == 0x2C375Cu) {
        ctx->pc = 0x2C375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3758u;
        // 0x2c375c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3760u;
        goto label_2c3760;
    }
    ctx->pc = 0x2C3758u;
    SET_GPR_U32(ctx, 31, 0x2C3760u);
    ctx->pc = 0x2C375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3758u;
    // 0x2c375c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C3758u, 0x2C3760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3760u;
label_2c3760:
    // 0x2c3760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c3764:
    // 0x2c3764: 0x26050012  addiu       $a1, $s0, 0x12
    ctx->pc = 0x2c3764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2c3768:
    // 0x2c3768: 0xc0b11aa  jal         func_2C46A8
label_2c376c:
    if (ctx->pc == 0x2C376Cu) {
        ctx->pc = 0x2C376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3768u;
        // 0x2c376c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3770u;
        goto label_2c3770;
    }
    ctx->pc = 0x2C3768u;
    SET_GPR_U32(ctx, 31, 0x2C3770u);
    ctx->pc = 0x2C376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3768u;
    // 0x2c376c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C3768u, 0x2C3770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3770u;
label_2c3770:
    // 0x2c3770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c3774:
    // 0x2c3774: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x2c3774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2c3778:
    // 0x2c3778: 0xc0b11aa  jal         func_2C46A8
label_2c377c:
    if (ctx->pc == 0x2C377Cu) {
        ctx->pc = 0x2C377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3778u;
        // 0x2c377c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3780u;
        goto label_2c3780;
    }
    ctx->pc = 0x2C3778u;
    SET_GPR_U32(ctx, 31, 0x2C3780u);
    ctx->pc = 0x2C377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3778u;
    // 0x2c377c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C3778u, 0x2C3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3780u;
label_2c3780:
    // 0x2c3780: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2c3780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2c3784:
    // 0x2c3784: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_2c3788:
    if (ctx->pc == 0x2C3788u) {
        ctx->pc = 0x2C3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3784u;
        // 0x2c3788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C378Cu;
        goto label_2c378c;
    }
    ctx->pc = 0x2C3784u;
    {
        const bool branch_taken_0x2c3784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3784) {
            ctx->pc = 0x2C3788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3784u;
            // 0x2c3788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C37CCu;
            goto label_2c37cc;
        }
    }
    ctx->pc = 0x2C378Cu;
label_2c378c:
    // 0x2c378c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2c378cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2c3790:
    // 0x2c3790: 0xc0b0d44  jal         func_2C3510
label_2c3794:
    if (ctx->pc == 0x2C3794u) {
        ctx->pc = 0x2C3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3790u;
        // 0x2c3794: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3798u;
        goto label_2c3798;
    }
    ctx->pc = 0x2C3790u;
    SET_GPR_U32(ctx, 31, 0x2C3798u);
    ctx->pc = 0x2C3794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3790u;
    // 0x2c3794: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3510u, 0x2C3790u, 0x2C3798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3798u;
label_2c3798:
    // 0x2c3798: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c3798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c379c:
    // 0x2c379c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c379cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c37a0:
    // 0x2c37a0: 0xc0b11aa  jal         func_2C46A8
label_2c37a4:
    if (ctx->pc == 0x2C37A4u) {
        ctx->pc = 0x2C37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37A0u;
        // 0x2c37a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37A8u;
        goto label_2c37a8;
    }
    ctx->pc = 0x2C37A0u;
    SET_GPR_U32(ctx, 31, 0x2C37A8u);
    ctx->pc = 0x2C37A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37A0u;
    // 0x2c37a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C37A0u, 0x2C37A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37A8u;
label_2c37a8:
    // 0x2c37a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c37a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c37ac:
    // 0x2c37ac: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2c37acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c37b0:
    // 0x2c37b0: 0xc0b11aa  jal         func_2C46A8
label_2c37b4:
    if (ctx->pc == 0x2C37B4u) {
        ctx->pc = 0x2C37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37B0u;
        // 0x2c37b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37B8u;
        goto label_2c37b8;
    }
    ctx->pc = 0x2C37B0u;
    SET_GPR_U32(ctx, 31, 0x2C37B8u);
    ctx->pc = 0x2C37B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37B0u;
    // 0x2c37b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C37B0u, 0x2C37B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37B8u;
label_2c37b8:
    // 0x2c37b8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2c37b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c37bc:
    // 0x2c37bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c37bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c37c0:
    // 0x2c37c0: 0xc0b0e60  jal         func_2C3980
label_2c37c4:
    if (ctx->pc == 0x2C37C4u) {
        ctx->pc = 0x2C37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37C0u;
        // 0x2c37c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37C8u;
        goto label_2c37c8;
    }
    ctx->pc = 0x2C37C0u;
    SET_GPR_U32(ctx, 31, 0x2C37C8u);
    ctx->pc = 0x2C37C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37C0u;
    // 0x2c37c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3980u, 0x2C37C0u, 0x2C37C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37C8u;
label_2c37c8:
    // 0x2c37c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c37c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c37cc:
    // 0x2c37cc: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x2c37ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2c37d0:
    // 0x2c37d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c37d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c37d4:
    // 0x2c37d4: 0xc0b11aa  jal         func_2C46A8
label_2c37d8:
    if (ctx->pc == 0x2C37D8u) {
        ctx->pc = 0x2C37D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37D4u;
        // 0x2c37d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37DCu;
        goto label_2c37dc;
    }
    ctx->pc = 0x2C37D4u;
    SET_GPR_U32(ctx, 31, 0x2C37DCu);
    ctx->pc = 0x2C37D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37D4u;
    // 0x2c37d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C37D4u, 0x2C37DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37DCu;
label_2c37dc:
    // 0x2c37dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c37dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2c37e0:
    // 0x2c37e0: 0x82050018  lb          $a1, 0x18($s0)
    ctx->pc = 0x2c37e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_2c37e4:
    // 0x2c37e4: 0xc0fb2a0  jal         func_3ECA80
label_2c37e8:
    if (ctx->pc == 0x2C37E8u) {
        ctx->pc = 0x2C37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37E4u;
        // 0x2c37e8: 0x24845220  addiu       $a0, $a0, 0x5220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37ECu;
        goto label_2c37ec;
    }
    ctx->pc = 0x2C37E4u;
    SET_GPR_U32(ctx, 31, 0x2C37ECu);
    ctx->pc = 0x2C37E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37E4u;
    // 0x2c37e8: 0x24845220  addiu       $a0, $a0, 0x5220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ECA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ECA80u, 0x2C37E4u, 0x2C37ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37ECu;
label_2c37ec:
    // 0x2c37ec: 0x82030018  lb          $v1, 0x18($s0)
    ctx->pc = 0x2c37ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_2c37f0:
    // 0x2c37f0: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_2c37f4:
    if (ctx->pc == 0x2C37F4u) {
        ctx->pc = 0x2C37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37F0u;
        // 0x2c37f4: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37F8u;
        goto label_2c37f8;
    }
    ctx->pc = 0x2C37F0u;
    {
        const bool branch_taken_0x2c37f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37F0u;
        // 0x2c37f4: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37f0) {
            ctx->pc = 0x2C385Cu;
            goto label_2c385c;
        }
    }
    ctx->pc = 0x2C37F8u;
label_2c37f8:
    // 0x2c37f8: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x2c37f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
label_2c37fc:
    // 0x2c37fc: 0x3c130100  lui         $s3, 0x100
    ctx->pc = 0x2c37fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)256 << 16));
label_2c3800:
    // 0x2c3800: 0x3c140100  lui         $s4, 0x100
    ctx->pc = 0x2c3800u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)256 << 16));
label_2c3804:
    // 0x2c3804: 0x0  nop
    ctx->pc = 0x2c3804u;
    // NOP
label_2c3808:
    // 0x2c3808: 0x26a452b8  addiu       $a0, $s5, 0x52B8
    ctx->pc = 0x2c3808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 21176));
label_2c380c:
    // 0x2c380c: 0xc0fb2ec  jal         func_3ECBB0
label_2c3810:
    if (ctx->pc == 0x2C3810u) {
        ctx->pc = 0x2C3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C380Cu;
        // 0x2c3810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3814u;
        goto label_2c3814;
    }
    ctx->pc = 0x2C380Cu;
    SET_GPR_U32(ctx, 31, 0x2C3814u);
    ctx->pc = 0x2C3810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C380Cu;
    // 0x2c3810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ECBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ECBB0u, 0x2C380Cu, 0x2C3814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3814u;
label_2c3814:
    // 0x2c3814: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2c3814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2c3818:
    // 0x2c3818: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x2c3818u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2c381c:
    // 0x2c381c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c381cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c3820:
    // 0x2c3820: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2c3820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2c3824:
    // 0x2c3824: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c3824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2c3828:
    // 0x2c3828: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2c3828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2c382c:
    // 0x2c382c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2c382cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2c3830:
    // 0x2c3830: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2c3830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2c3834:
    // 0x2c3834: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x2c3834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_2c3838:
    // 0x2c3838: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c3838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c383c:
    // 0x2c383c: 0x40f809  jalr        $v0
label_2c3840:
    if (ctx->pc == 0x2C3840u) {
        ctx->pc = 0x2C3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C383Cu;
        // 0x2c3840: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3844u;
        goto label_2c3844;
    }
    ctx->pc = 0x2C383Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3844u);
        ctx->pc = 0x2C3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C383Cu;
        // 0x2c3840: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C383Cu, 0x2C3844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3844u;
label_2c3844:
    // 0x2c3844: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2c3844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c3848:
    // 0x2c3848: 0x82020018  lb          $v0, 0x18($s0)
    ctx->pc = 0x2c3848u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_2c384c:
    // 0x2c384c: 0x38e03  sra         $s1, $v1, 24
    ctx->pc = 0x2c384cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 24));
label_2c3850:
    // 0x2c3850: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2c3850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c3854:
    // 0x2c3854: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_2c3858:
    if (ctx->pc == 0x2C3858u) {
        ctx->pc = 0x2C3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3854u;
        // 0x2c3858: 0x2749821  addu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C385Cu;
        goto label_2c385c;
    }
    ctx->pc = 0x2C3854u;
    {
        const bool branch_taken_0x2c3854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3854u;
        // 0x2c3858: 0x2749821  addu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3854) {
            ctx->pc = 0x2C3808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3808;
        }
    }
    ctx->pc = 0x2C385Cu;
label_2c385c:
    // 0x2c385c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c385cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c3860:
    // 0x2c3860: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3864:
    // 0x2c3864: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2c3864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c3868:
    // 0x2c3868: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2c3868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c386c:
    // 0x2c386c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2c386cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2c3870:
    // 0x2c3870: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2c3870u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c3874:
    // 0x2c3874: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2c3874u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2c3878:
    // 0x2c3878: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2c3878u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c387c:
    // 0x2c387c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2c387cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2c3880:
    // 0x2c3880: 0x3e00008  jr          $ra
label_2c3884:
    if (ctx->pc == 0x2C3884u) {
        ctx->pc = 0x2C3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3880u;
        // 0x2c3884: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3888u;
        goto label_fallthrough_0x2c3880;
    }
    ctx->pc = 0x2C3880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3880u;
        // 0x2c3884: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c3880:
    ctx->pc = 0x2C3888u;
}
