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

// Function: sub_001B37A8
// Address: 0x1b37a8 - 0x1b3a00
void sub_001B37A8_0x1b37a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B37A8_0x1b37a8");
#endif

    switch (ctx->pc) {
        case 0x1b37c8u: goto label_1b37c8;
        case 0x1b37f4u: goto label_1b37f4;
        case 0x1b3804u: goto label_1b3804;
        case 0x1b381cu: goto label_1b381c;
        case 0x1b3850u: goto label_1b3850;
        case 0x1b385cu: goto label_1b385c;
        case 0x1b386cu: goto label_1b386c;
        case 0x1b3884u: goto label_1b3884;
        case 0x1b3890u: goto label_1b3890;
        case 0x1b38a0u: goto label_1b38a0;
        case 0x1b3904u: goto label_1b3904;
        case 0x1b3910u: goto label_1b3910;
        case 0x1b3920u: goto label_1b3920;
        case 0x1b3950u: goto label_1b3950;
        default: break;
    }

    ctx->pc = 0x1b37a8u;

    // 0x1b37a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b37a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b37ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b37acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b37b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b37b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b37b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b37b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b37b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b37b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1b37bc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b37bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b37c0: 0xc06cdb4  jal         func_1B36D0
    ctx->pc = 0x1B37C0u;
    SET_GPR_U32(ctx, 31, 0x1B37C8u);
    ctx->pc = 0x1B37C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37C0u;
    // 0x1b37c4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x1B37C0u, 0x1B37C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37C8u;
label_1b37c8:
    // 0x1b37c8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B37C8u;
    {
        const bool branch_taken_0x1b37c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37C8u;
        // 0x1b37cc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37c8) {
            ctx->pc = 0x1B37E4u;
            goto label_1b37e4;
        }
    }
    ctx->pc = 0x1B37D0u;
    // 0x1b37d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b37d4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1b37d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1b37d8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B37D8u;
    {
        const bool branch_taken_0x1b37d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37D8u;
        // 0x1b37dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37d8) {
            ctx->pc = 0x1B37FCu;
            goto label_1b37fc;
        }
    }
    ctx->pc = 0x1B37E0u;
    // 0x1b37e0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b37e4:
    // 0x1b37e4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1b37e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1b37e8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1b37e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1b37ec: 0xc06cdb4  jal         func_1B36D0
    ctx->pc = 0x1B37ECu;
    SET_GPR_U32(ctx, 31, 0x1B37F4u);
    ctx->pc = 0x1B37F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37ECu;
    // 0x1b37f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x1B37ECu, 0x1B37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37F4u;
label_1b37f4:
    // 0x1b37f4: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1B37F4u;
    {
        const bool branch_taken_0x1b37f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37F4u;
        // 0x1b37f8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37f4) {
            ctx->pc = 0x1B39ECu;
            goto label_1b39ec;
        }
    }
    ctx->pc = 0x1B37FCu;
label_1b37fc:
    // 0x1b37fc: 0xc06fb58  jal         func_1BED60
    ctx->pc = 0x1B37FCu;
    SET_GPR_U32(ctx, 31, 0x1B3804u);
    ctx->pc = 0x1B3800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37FCu;
    // 0x1b3800: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x1B37FCu, 0x1B3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3804u;
label_1b3804:
    // 0x1b3804: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1b3804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1b3808: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1B3808u;
    {
        const bool branch_taken_0x1b3808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3808u;
        // 0x1b380c: 0x38420002  xori        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3808) {
            ctx->pc = 0x1B39BCu;
            goto label_1b39bc;
        }
    }
    ctx->pc = 0x1B3810u;
    // 0x1b3810: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x1b3810u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1b3814: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B3814u;
    SET_GPR_U32(ctx, 31, 0x1B381Cu);
    ctx->pc = 0x1B3818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3814u;
    // 0x1b3818: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B3814u, 0x1B381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B381Cu;
label_1b381c:
    // 0x1b381c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x1b381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1b3820: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x1b3820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x1b3824: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1b3824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1b3828: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3828u;
    {
        const bool branch_taken_0x1b3828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3828u;
        // 0x1b382c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3828) {
            ctx->pc = 0x1B3840u;
            goto label_1b3840;
        }
    }
    ctx->pc = 0x1B3830u;
    // 0x1b3830: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x1b3830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x1b3834: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x1b3834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x1b3838: 0x38420045  xori        $v0, $v0, 0x45
    ctx->pc = 0x1b3838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)69);
    // 0x1b383c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1b383cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b3840:
    // 0x1b3840: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B3840u;
    {
        const bool branch_taken_0x1b3840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3840u;
        // 0x1b3844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3840) {
            ctx->pc = 0x1B38DCu;
            goto label_1b38dc;
        }
    }
    ctx->pc = 0x1B3848u;
    // 0x1b3848: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1B3848u;
    SET_GPR_U32(ctx, 31, 0x1B3850u);
    ctx->pc = 0x1B384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3848u;
    // 0x1b384c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1B3848u, 0x1B3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3850u;
label_1b3850:
    // 0x1b3850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3854: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1B3854u;
    SET_GPR_U32(ctx, 31, 0x1B385Cu);
    ctx->pc = 0x1B3858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3854u;
    // 0x1b3858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1B3854u, 0x1B385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B385Cu;
label_1b385c:
    // 0x1b385c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B385Cu;
    {
        const bool branch_taken_0x1b385c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B385Cu;
        // 0x1b3860: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b385c) {
            ctx->pc = 0x1B3870u;
            goto label_1b3870;
        }
    }
    ctx->pc = 0x1B3864u;
    // 0x1b3864: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1B3864u;
    SET_GPR_U32(ctx, 31, 0x1B386Cu);
    ctx->pc = 0x1B3868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3864u;
    // 0x1b3868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1B3864u, 0x1B386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B386Cu;
label_1b386c:
    // 0x1b386c: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1b386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1b3870:
    // 0x1b3870: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b3870u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3874: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b3874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b3878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b387c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1B387Cu;
    SET_GPR_U32(ctx, 31, 0x1B3884u);
    ctx->pc = 0x1B3880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B387Cu;
    // 0x1b3880: 0x24050436  addiu       $a1, $zero, 0x436 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1078));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1B387Cu, 0x1B3884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3884u;
label_1b3884:
    // 0x1b3884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3888: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1B3888u;
    SET_GPR_U32(ctx, 31, 0x1B3890u);
    ctx->pc = 0x1B388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3888u;
    // 0x1b388c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1B3888u, 0x1B3890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3890u;
label_1b3890:
    // 0x1b3890: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3890u;
    {
        const bool branch_taken_0x1b3890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3890u;
        // 0x1b3894: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3890) {
            ctx->pc = 0x1B38A4u;
            goto label_1b38a4;
        }
    }
    ctx->pc = 0x1B3898u;
    // 0x1b3898: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1B3898u;
    SET_GPR_U32(ctx, 31, 0x1B38A0u);
    ctx->pc = 0x1B389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3898u;
    // 0x1b389c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1B3898u, 0x1B38A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38A0u;
label_1b38a0:
    // 0x1b38a0: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1b38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1b38a4:
    // 0x1b38a4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b38a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b38a8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1b38a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b38ac: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b38acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b38b0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b38b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b38b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b38b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b38b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b38b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b38bc: 0x0  nop
    ctx->pc = 0x1b38bcu;
    // NOP
    // 0x1b38c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b38c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b38c4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b38c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b38c8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1b38c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1b38cc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b38ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b38d0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b38d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b38d4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B38D4u;
    {
        const bool branch_taken_0x1b38d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b38d4) {
            ctx->pc = 0x1B392Cu;
            goto label_1b392c;
        }
    }
    ctx->pc = 0x1B38DCu;
label_1b38dc:
    // 0x1b38dc: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x1b38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x1b38e0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1b38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b38e4: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x1b38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x1b38e8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B38E8u;
    {
        const bool branch_taken_0x1b38e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38E8u;
        // 0x1b38ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b38e8) {
            ctx->pc = 0x1B38F8u;
            goto label_1b38f8;
        }
    }
    ctx->pc = 0x1B38F0u;
    // 0x1b38f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B38F0u;
    {
        const bool branch_taken_0x1b38f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B38F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38F0u;
        // 0x1b38f4: 0x24050446  addiu       $a1, $zero, 0x446 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1094));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b38f0) {
            ctx->pc = 0x1B38FCu;
            goto label_1b38fc;
        }
    }
    ctx->pc = 0x1B38F8u;
label_1b38f8:
    // 0x1b38f8: 0x24050448  addiu       $a1, $zero, 0x448
    ctx->pc = 0x1b38f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
label_1b38fc:
    // 0x1b38fc: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1B38FCu;
    SET_GPR_U32(ctx, 31, 0x1B3904u);
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1B38FCu, 0x1B3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3904u;
label_1b3904:
    // 0x1b3904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3908: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1B3908u;
    SET_GPR_U32(ctx, 31, 0x1B3910u);
    ctx->pc = 0x1B390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3908u;
    // 0x1b390c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1B3908u, 0x1B3910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3910u;
label_1b3910:
    // 0x1b3910: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3910u;
    {
        const bool branch_taken_0x1b3910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3910u;
        // 0x1b3914: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3910) {
            ctx->pc = 0x1B3924u;
            goto label_1b3924;
        }
    }
    ctx->pc = 0x1B3918u;
    // 0x1b3918: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1B3918u;
    SET_GPR_U32(ctx, 31, 0x1B3920u);
    ctx->pc = 0x1B391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3918u;
    // 0x1b391c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1B3918u, 0x1B3920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3920u;
label_1b3920:
    // 0x1b3920: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1b3920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1b3924:
    // 0x1b3924: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b3924u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3928: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b3928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1b392c:
    // 0x1b392c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B392Cu;
    {
        const bool branch_taken_0x1b392c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B392Cu;
        // 0x1b3930: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b392c) {
            ctx->pc = 0x1B3948u;
            goto label_1b3948;
        }
    }
    ctx->pc = 0x1B3934u;
    // 0x1b3934: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1b3934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3938: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1b3938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b393c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1b393cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1b3940: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1b3940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1b3944: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x1b3944u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1b3948:
    // 0x1b3948: 0xc06e0fa  jal         func_1B83E8
    ctx->pc = 0x1B3948u;
    SET_GPR_U32(ctx, 31, 0x1B3950u);
    ctx->pc = 0x1B394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3948u;
    // 0x1b394c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x1B3948u, 0x1B3950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3950u;
label_1b3950:
    // 0x1b3950: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B3950u;
    {
        const bool branch_taken_0x1b3950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3950u;
        // 0x1b3954: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3950) {
            ctx->pc = 0x1B39E0u;
            goto label_1b39e0;
        }
    }
    ctx->pc = 0x1B3958u;
    // 0x1b3958: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x1b3958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1b395c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b395cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b3960: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b3960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b3964: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b3964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b3968: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1b3968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1b396c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3970: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x1b3970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1b3974: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x1b3974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3978: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x1b3978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b397c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1b397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b3980: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b3980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b3984: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b3984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3988: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1b3988u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1b398c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1b398cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1b3990: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b3990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b3994: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1b3994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b3998: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1b3998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1b399c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x1b399cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b39a0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1b39a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1b39a4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1b39a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b39a8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1b39a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b39ac: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b39acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b39b0: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1b39b0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b39b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B39B4u;
    {
        const bool branch_taken_0x1b39b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39B4u;
        // 0x1b39b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39b4) {
            ctx->pc = 0x1B39E4u;
            goto label_1b39e4;
        }
    }
    ctx->pc = 0x1B39BCu;
label_1b39bc:
    // 0x1b39bc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B39BCu;
    {
        const bool branch_taken_0x1b39bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B39C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39BCu;
        // 0x1b39c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39bc) {
            ctx->pc = 0x1B39E4u;
            goto label_1b39e4;
        }
    }
    ctx->pc = 0x1B39C4u;
    // 0x1b39c4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1b39c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b39c8: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x1b39c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
    // 0x1b39cc: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1b39ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1b39d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b39d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b39d4: 0x0  nop
    ctx->pc = 0x1b39d4u;
    // NOP
    // 0x1b39d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b39d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b39dc: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1b39dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1b39e0:
    // 0x1b39e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b39e4:
    // 0x1b39e4: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x1b39e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
    // 0x1b39e8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b39e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b39ec:
    // 0x1b39ec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b39ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b39f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b39f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b39f4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b39f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b39f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B39F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39F8u;
        // 0x1b39fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B39F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3A00u;
}
