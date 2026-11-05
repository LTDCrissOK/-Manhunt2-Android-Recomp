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

// Function: sub_00259798
// Address: 0x259798 - 0x2598e8
void sub_00259798_0x259798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259798_0x259798");
#endif

    switch (ctx->pc) {
        case 0x2597dcu: goto label_2597dc;
        case 0x2597fcu: goto label_2597fc;
        case 0x25980cu: goto label_25980c;
        case 0x25984cu: goto label_25984c;
        case 0x25985cu: goto label_25985c;
        case 0x25986cu: goto label_25986c;
        case 0x25987cu: goto label_25987c;
        case 0x2598bcu: goto label_2598bc;
        default: break;
    }

    ctx->pc = 0x259798u;

    // 0x259798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25979c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25979cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2597a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2597a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2597a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2597a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2597a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2597a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2597ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2597acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2597b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2597b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2597b4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2597b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2597b8: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x2597b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x2597bc: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2597BCu;
    {
        const bool branch_taken_0x2597bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597BCu;
        // 0x2597c0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597bc) {
            ctx->pc = 0x2598C0u;
            goto label_2598c0;
        }
    }
    ctx->pc = 0x2597C4u;
    // 0x2597c4: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x2597c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x2597c8: 0x1282003e  beq         $s4, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2597C8u;
    {
        const bool branch_taken_0x2597c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2597CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597C8u;
        // 0x2597cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597c8) {
            ctx->pc = 0x2598C4u;
            goto label_2598c4;
        }
    }
    ctx->pc = 0x2597D0u;
    // 0x2597d0: 0x8e500104  lw          $s0, 0x104($s2)
    ctx->pc = 0x2597d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2597d4: 0xc0844c0  jal         func_211300
    ctx->pc = 0x2597D4u;
    SET_GPR_U32(ctx, 31, 0x2597DCu);
    ctx->pc = 0x2597D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2597D4u;
    // 0x2597d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211300u, 0x2597D4u, 0x2597DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597DCu;
label_2597dc:
    // 0x2597dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2597dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2597e0: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x2597e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x2597e4: 0xae500224  sw          $s0, 0x224($s2)
    ctx->pc = 0x2597e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 548), GPR_U32(ctx, 16));
    // 0x2597e8: 0xae420104  sw          $v0, 0x104($s2)
    ctx->pc = 0x2597e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
    // 0x2597ec: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2597ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2597f0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2597f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2597f4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2597F4u;
    SET_GPR_U32(ctx, 31, 0x2597FCu);
    ctx->pc = 0x2597F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2597F4u;
    // 0x2597f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2597F4u, 0x2597FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597FCu;
label_2597fc:
    // 0x2597fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2597FCu;
    {
        const bool branch_taken_0x2597fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597FCu;
        // 0x259800: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597fc) {
            ctx->pc = 0x259810u;
            goto label_259810;
        }
    }
    ctx->pc = 0x259804u;
    // 0x259804: 0xc0c4900  jal         func_312400
    ctx->pc = 0x259804u;
    SET_GPR_U32(ctx, 31, 0x25980Cu);
    ctx->pc = 0x259808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259804u;
    // 0x259808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x259804u, 0x25980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25980Cu;
label_25980c:
    // 0x25980c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x25980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_259810:
    // 0x259810: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x259810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259814: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x259814u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259818: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x259818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25981c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x25981cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259820: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x259820u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259824: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x259824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x259828: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x259828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25982c: 0xfa210060  sqc2        $vf1, 0x60($s1)
    ctx->pc = 0x25982cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259830: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x259830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x259834: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x259834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259838: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x259838u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25983c: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x25983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x259840: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x259840u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259844: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x259844u;
    SET_GPR_U32(ctx, 31, 0x25984Cu);
    ctx->pc = 0x259848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259844u;
    // 0x259848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x259844u, 0x25984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25984Cu;
label_25984c:
    // 0x25984c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25984Cu;
    {
        const bool branch_taken_0x25984c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25984c) {
            ctx->pc = 0x259850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25984Cu;
            // 0x259850: 0x8e420224  lw          $v0, 0x224($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259860u;
            goto label_259860;
        }
    }
    ctx->pc = 0x259854u;
    // 0x259854: 0xc0c4900  jal         func_312400
    ctx->pc = 0x259854u;
    SET_GPR_U32(ctx, 31, 0x25985Cu);
    ctx->pc = 0x259858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259854u;
    // 0x259858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x259854u, 0x25985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25985Cu;
label_25985c:
    // 0x25985c: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x25985cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_259860:
    // 0x259860: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x259860u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259864: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x259864u;
    SET_GPR_U32(ctx, 31, 0x25986Cu);
    ctx->pc = 0x259868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259864u;
    // 0x259868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x259864u, 0x25986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25986Cu;
label_25986c:
    // 0x25986c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25986Cu;
    {
        const bool branch_taken_0x25986c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25986Cu;
        // 0x259870: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25986c) {
            ctx->pc = 0x259880u;
            goto label_259880;
        }
    }
    ctx->pc = 0x259874u;
    // 0x259874: 0xc0c4900  jal         func_312400
    ctx->pc = 0x259874u;
    SET_GPR_U32(ctx, 31, 0x25987Cu);
    ctx->pc = 0x259878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259874u;
    // 0x259878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x259874u, 0x25987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25987Cu;
label_25987c:
    // 0x25987c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x25987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_259880:
    // 0x259880: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x259880u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259884: 0xfa210080  sqc2        $vf1, 0x80($s1)
    ctx->pc = 0x259884u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259888: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x259888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25988c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x25988cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259890: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x259890u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x259894: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x259894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x259898: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x259898u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25989c: 0xfa2100a0  sqc2        $vf1, 0xA0($s1)
    ctx->pc = 0x25989cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2598a0: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x2598a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2598a4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2598a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2598a8: 0xfa2100b0  sqc2        $vf1, 0xB0($s1)
    ctx->pc = 0x2598a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2598ac: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2598ACu;
    {
        const bool branch_taken_0x2598ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2598B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598ACu;
        // 0x2598b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598ac) {
            ctx->pc = 0x2598BCu;
            goto label_2598bc;
        }
    }
    ctx->pc = 0x2598B4u;
    // 0x2598b4: 0xc084492  jal         func_211248
    ctx->pc = 0x2598B4u;
    SET_GPR_U32(ctx, 31, 0x2598BCu);
    ctx->pc = 0x2598B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2598B4u;
    // 0x2598b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211248u, 0x2598B4u, 0x2598BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2598BCu;
label_2598bc:
    // 0x2598bc: 0xae54013c  sw          $s4, 0x13C($s2)
    ctx->pc = 0x2598bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 20));
label_2598c0:
    // 0x2598c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2598c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2598c4:
    // 0x2598c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2598c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2598c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2598c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2598cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2598ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2598d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2598d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2598d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2598d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2598d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2598d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2598dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2598DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2598E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598DCu;
        // 0x2598e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2598DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2598E4u;
    // 0x2598e4: 0x0  nop
    ctx->pc = 0x2598e4u;
    // NOP
    ctx->pc = 0x2598e8u;
}
