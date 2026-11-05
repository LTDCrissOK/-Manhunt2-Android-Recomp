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

// Function: sub_00122728
// Address: 0x122728 - 0x122940
void sub_00122728_0x122728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122728_0x122728");
#endif

    switch (ctx->pc) {
        case 0x12277cu: goto label_12277c;
        case 0x122790u: goto label_122790;
        case 0x1227a4u: goto label_1227a4;
        case 0x1227c0u: goto label_1227c0;
        case 0x1227d8u: goto label_1227d8;
        case 0x1227e8u: goto label_1227e8;
        case 0x1227f4u: goto label_1227f4;
        case 0x12280cu: goto label_12280c;
        case 0x122818u: goto label_122818;
        case 0x122828u: goto label_122828;
        case 0x122838u: goto label_122838;
        case 0x122844u: goto label_122844;
        case 0x122850u: goto label_122850;
        case 0x12289cu: goto label_12289c;
        case 0x1228b8u: goto label_1228b8;
        case 0x1228d8u: goto label_1228d8;
        case 0x1228ecu: goto label_1228ec;
        case 0x1228fcu: goto label_1228fc;
        case 0x122908u: goto label_122908;
        default: break;
    }

    ctx->pc = 0x122728u;

    // 0x122728: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x122728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12272c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12272cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x122730: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x122730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x122734: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x122734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122738: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x122738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12273c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12273cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122740: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x122740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x122744: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x122744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122748: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x122748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x12274c: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x12274cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122750: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x122750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x122754: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x122754u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122758: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x122758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x12275c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x12275cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122760: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x122760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x122764: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x122764u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122768: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x122768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x12276c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12276cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122770: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x122770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x122774: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122774u;
    SET_GPR_U32(ctx, 31, 0x12277Cu);
    ctx->pc = 0x122778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122774u;
    // 0x122778: 0xafab0000  sw          $t3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122774u, 0x12277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12277Cu;
label_12277c:
    // 0x12277c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12277Cu;
    {
        const bool branch_taken_0x12277c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12277Cu;
        // 0x122780: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12277c) {
            ctx->pc = 0x1227B0u;
            goto label_1227b0;
        }
    }
    ctx->pc = 0x122784u;
    // 0x122784: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x122784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122788: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x122788u;
    SET_GPR_U32(ctx, 31, 0x122790u);
    ctx->pc = 0x12278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122788u;
    // 0x12278c: 0x24a5cdb0  addiu       $a1, $a1, -0x3250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x122788u, 0x122790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122790u;
label_122790:
    // 0x122790: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x122790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x122794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122798: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x122798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x12279c: 0xc04a2fc  jal         func_128BF0
    ctx->pc = 0x12279Cu;
    SET_GPR_U32(ctx, 31, 0x1227A4u);
    ctx->pc = 0x1227A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12279Cu;
    // 0x1227a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BF0u, 0x12279Cu, 0x1227A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227A4u;
label_1227a4:
    // 0x1227a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1227a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227a8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1227A8u;
    {
        const bool branch_taken_0x1227a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1227ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227A8u;
        // 0x1227ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227a8) {
            ctx->pc = 0x1227B8u;
            goto label_1227b8;
        }
    }
    ctx->pc = 0x1227B0u;
label_1227b0:
    // 0x1227b0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1227B0u;
    {
        const bool branch_taken_0x1227b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227B0u;
        // 0x1227b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227b0) {
            ctx->pc = 0x12290Cu;
            goto label_12290c;
        }
    }
    ctx->pc = 0x1227B8u;
label_1227b8:
    // 0x1227b8: 0xc04a32c  jal         func_128CB0
    ctx->pc = 0x1227B8u;
    SET_GPR_U32(ctx, 31, 0x1227C0u);
    ctx->pc = 0x1227BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227B8u;
    // 0x1227bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128CB0u, 0x1227B8u, 0x1227C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227C0u;
label_1227c0:
    // 0x1227c0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1227c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1227c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1227c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1227cc: 0x24050a2e  addiu       $a1, $zero, 0xA2E
    ctx->pc = 0x1227ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2606));
    // 0x1227d0: 0xc04a2e0  jal         func_128B80
    ctx->pc = 0x1227D0u;
    SET_GPR_U32(ctx, 31, 0x1227D8u);
    ctx->pc = 0x1227D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227D0u;
    // 0x1227d4: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x128B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B80u, 0x1227D0u, 0x1227D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227D8u;
label_1227d8:
    // 0x1227d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1227d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1227dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227e0: 0xc05a6b0  jal         func_169AC0
    ctx->pc = 0x1227E0u;
    SET_GPR_U32(ctx, 31, 0x1227E8u);
    ctx->pc = 0x1227E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227E0u;
    // 0x1227e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AC0u, 0x1227E0u, 0x1227E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227E8u;
label_1227e8:
    // 0x1227e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1227e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227ec: 0xc05a6ba  jal         func_169AE8
    ctx->pc = 0x1227ECu;
    SET_GPR_U32(ctx, 31, 0x1227F4u);
    ctx->pc = 0x1227F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227ECu;
    // 0x1227f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AE8u, 0x1227ECu, 0x1227F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227F4u;
label_1227f4:
    // 0x1227f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1227f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1227f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1227F8u;
    {
        const bool branch_taken_0x1227f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1227FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227F8u;
        // 0x1227fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227f8) {
            ctx->pc = 0x122810u;
            goto label_122810;
        }
    }
    ctx->pc = 0x122800u;
    // 0x122800: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x122800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122804: 0xc05a6d2  jal         func_169B48
    ctx->pc = 0x122804u;
    SET_GPR_U32(ctx, 31, 0x12280Cu);
    ctx->pc = 0x122808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122804u;
    // 0x122808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B48u, 0x122804u, 0x12280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12280Cu;
label_12280c:
    // 0x12280c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12280cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_122810:
    // 0x122810: 0xc05a70e  jal         func_169C38
    ctx->pc = 0x122810u;
    SET_GPR_U32(ctx, 31, 0x122818u);
    ctx->pc = 0x122814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122810u;
    // 0x122814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C38u, 0x122810u, 0x122818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122818u;
label_122818:
    // 0x122818: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x122818u;
    {
        const bool branch_taken_0x122818 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122818u;
        // 0x12281c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122818) {
            ctx->pc = 0x122828u;
            goto label_122828;
        }
    }
    ctx->pc = 0x122820u;
    // 0x122820: 0xc05a6e6  jal         func_169B98
    ctx->pc = 0x122820u;
    SET_GPR_U32(ctx, 31, 0x122828u);
    ctx->pc = 0x122824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122820u;
    // 0x122824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B98u, 0x122820u, 0x122828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122828u;
label_122828:
    // 0x122828: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x122828u;
    {
        const bool branch_taken_0x122828 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x12282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122828u;
        // 0x12282c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122828) {
            ctx->pc = 0x122838u;
            goto label_122838;
        }
    }
    ctx->pc = 0x122830u;
    // 0x122830: 0xc05a6fa  jal         func_169BE8
    ctx->pc = 0x122830u;
    SET_GPR_U32(ctx, 31, 0x122838u);
    ctx->pc = 0x122834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122830u;
    // 0x122834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169BE8u, 0x122830u, 0x122838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122838u;
label_122838:
    // 0x122838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12283c: 0xc05a75e  jal         func_169D78
    ctx->pc = 0x12283Cu;
    SET_GPR_U32(ctx, 31, 0x122844u);
    ctx->pc = 0x122840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12283Cu;
    // 0x122840: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169D78u, 0x12283Cu, 0x122844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122844u;
label_122844:
    // 0x122844: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x122844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122848: 0xc05a772  jal         func_169DC8
    ctx->pc = 0x122848u;
    SET_GPR_U32(ctx, 31, 0x122850u);
    ctx->pc = 0x12284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122848u;
    // 0x12284c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DC8u, 0x122848u, 0x122850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122850u;
label_122850:
    // 0x122850: 0x16a0000b  bnez        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x122850u;
    {
        const bool branch_taken_0x122850 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x122850) {
            ctx->pc = 0x122880u;
            goto label_122880;
        }
    }
    ctx->pc = 0x122858u;
    // 0x122858: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x122858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x12285c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x12285cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x122860: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x122860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122864: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x122864u;
    {
        const bool branch_taken_0x122864 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x122864) {
            ctx->pc = 0x122894u;
            goto label_122894;
        }
    }
    ctx->pc = 0x12286Cu;
    // 0x12286c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x12286cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x122870: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x122870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x122874: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x122874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122878: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x122878u;
    {
        const bool branch_taken_0x122878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122878) {
            ctx->pc = 0x122894u;
            goto label_122894;
        }
    }
    ctx->pc = 0x122880u;
label_122880:
    // 0x122880: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x122880u;
    {
        const bool branch_taken_0x122880 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x122880) {
            ctx->pc = 0x1228A4u;
            goto label_1228a4;
        }
    }
    ctx->pc = 0x122888u;
    // 0x122888: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x122888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x12288c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12288cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x122890: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x122890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_122894:
    // 0x122894: 0xc05a722  jal         func_169C88
    ctx->pc = 0x122894u;
    SET_GPR_U32(ctx, 31, 0x12289Cu);
    ctx->pc = 0x122898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122894u;
    // 0x122898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C88u, 0x122894u, 0x12289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12289Cu;
label_12289c:
    // 0x12289c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12289Cu;
    {
        const bool branch_taken_0x12289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12289Cu;
        // 0x1228a0: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12289c) {
            ctx->pc = 0x1228BCu;
            goto label_1228bc;
        }
    }
    ctx->pc = 0x1228A4u;
label_1228a4:
    // 0x1228a4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1228a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1228a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1228a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1228ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1228acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1228b0: 0xc05a722  jal         func_169C88
    ctx->pc = 0x1228B0u;
    SET_GPR_U32(ctx, 31, 0x1228B8u);
    ctx->pc = 0x1228B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1228B0u;
    // 0x1228b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C88u, 0x1228B0u, 0x1228B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228B8u;
label_1228b8:
    // 0x1228b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1228b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1228bc:
    // 0x1228bc: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x1228bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x1228c0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1228c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1228c4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1228C4u;
    {
        const bool branch_taken_0x1228c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228C4u;
        // 0x1228c8: 0xae0300bc  sw          $v1, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228c4) {
            ctx->pc = 0x1228D8u;
            goto label_1228d8;
        }
    }
    ctx->pc = 0x1228CCu;
    // 0x1228cc: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1228ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1228d0: 0xc05a6c8  jal         func_169B20
    ctx->pc = 0x1228D0u;
    SET_GPR_U32(ctx, 31, 0x1228D8u);
    ctx->pc = 0x1228D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1228D0u;
    // 0x1228d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B20u, 0x1228D0u, 0x1228D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228D8u;
label_1228d8:
    // 0x1228d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1228d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1228dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1228DCu;
    {
        const bool branch_taken_0x1228dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228DCu;
        // 0x1228e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228dc) {
            ctx->pc = 0x1228F4u;
            goto label_1228f4;
        }
    }
    ctx->pc = 0x1228E4u;
    // 0x1228e4: 0xc05a74a  jal         func_169D28
    ctx->pc = 0x1228E4u;
    SET_GPR_U32(ctx, 31, 0x1228ECu);
    ctx->pc = 0x1228E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1228E4u;
    // 0x1228e8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169D28u, 0x1228E4u, 0x1228ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228ECu;
label_1228ec:
    // 0x1228ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1228ECu;
    {
        const bool branch_taken_0x1228ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228ECu;
        // 0x1228f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228ec) {
            ctx->pc = 0x122900u;
            goto label_122900;
        }
    }
    ctx->pc = 0x1228F4u;
label_1228f4:
    // 0x1228f4: 0xc05a74a  jal         func_169D28
    ctx->pc = 0x1228F4u;
    SET_GPR_U32(ctx, 31, 0x1228FCu);
    ctx->pc = 0x1228F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1228F4u;
    // 0x1228f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169D28u, 0x1228F4u, 0x1228FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228FCu;
label_1228fc:
    // 0x1228fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1228fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_122900:
    // 0x122900: 0xc049944  jal         func_126510
    ctx->pc = 0x122900u;
    SET_GPR_U32(ctx, 31, 0x122908u);
    ctx->pc = 0x122904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122900u;
    // 0x122904: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126510u, 0x122900u, 0x122908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122908u;
label_122908:
    // 0x122908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12290c:
    // 0x12290c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12290cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122910: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x122910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122914: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x122914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122918: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x122918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12291c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12291cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122920: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x122920u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122924: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x122924u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x122928: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x122928u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12292c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x12292cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x122930: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x122930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x122934: 0x3e00008  jr          $ra
    ctx->pc = 0x122934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122934u;
        // 0x122938: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12293Cu;
    // 0x12293c: 0x0  nop
    ctx->pc = 0x12293cu;
    // NOP
    ctx->pc = 0x122940u;
}
