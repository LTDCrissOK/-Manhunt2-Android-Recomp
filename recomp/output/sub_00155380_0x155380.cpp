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

// Function: sub_00155380
// Address: 0x155380 - 0x1554b0
void sub_00155380_0x155380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155380_0x155380");
#endif

    switch (ctx->pc) {
        case 0x1553a4u: goto label_1553a4;
        case 0x1553b0u: goto label_1553b0;
        case 0x1553c0u: goto label_1553c0;
        case 0x1553d8u: goto label_1553d8;
        case 0x1553ecu: goto label_1553ec;
        case 0x1553fcu: goto label_1553fc;
        case 0x155408u: goto label_155408;
        case 0x15543cu: goto label_15543c;
        case 0x155478u: goto label_155478;
        case 0x155498u: goto label_155498;
        default: break;
    }

    ctx->pc = 0x155380u;

    // 0x155380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x155380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x155384: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x155384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155388: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x155388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15538c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15538cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x155390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x155390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155394: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x155394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x155398: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x155398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15539c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x15539Cu;
    SET_GPR_U32(ctx, 31, 0x1553A4u);
    ctx->pc = 0x1553A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15539Cu;
    // 0x1553a0: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x15539Cu, 0x1553A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553A4u;
label_1553a4:
    // 0x1553a4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1553a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1553a8: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1553A8u;
    SET_GPR_U32(ctx, 31, 0x1553B0u);
    ctx->pc = 0x1553ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553A8u;
    // 0x1553ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1553A8u, 0x1553B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553B0u;
label_1553b0:
    // 0x1553b0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1553b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1553b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1553b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553b8: 0xc0551e4  jal         func_154790
    ctx->pc = 0x1553B8u;
    SET_GPR_U32(ctx, 31, 0x1553C0u);
    ctx->pc = 0x1553BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553B8u;
    // 0x1553bc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154790u, 0x1553B8u, 0x1553C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553C0u;
label_1553c0:
    // 0x1553c0: 0x8e22066c  lw          $v0, 0x66C($s1)
    ctx->pc = 0x1553c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1644)));
    // 0x1553c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1553C4u;
    {
        const bool branch_taken_0x1553c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553C4u;
        // 0x1553c8: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553c4) {
            ctx->pc = 0x1553E0u;
            goto label_1553e0;
        }
    }
    ctx->pc = 0x1553CCu;
    // 0x1553cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1553ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553d0: 0xc04da44  jal         func_136910
    ctx->pc = 0x1553D0u;
    SET_GPR_U32(ctx, 31, 0x1553D8u);
    ctx->pc = 0x1553D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553D0u;
    // 0x1553d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136910u, 0x1553D0u, 0x1553D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553D8u;
label_1553d8:
    // 0x1553d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1553D8u;
    {
        const bool branch_taken_0x1553d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553D8u;
        // 0x1553dc: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553d8) {
            ctx->pc = 0x1553F0u;
            goto label_1553f0;
        }
    }
    ctx->pc = 0x1553E0u;
label_1553e0:
    // 0x1553e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1553e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553e4: 0xc04da44  jal         func_136910
    ctx->pc = 0x1553E4u;
    SET_GPR_U32(ctx, 31, 0x1553ECu);
    ctx->pc = 0x1553E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553E4u;
    // 0x1553e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136910u, 0x1553E4u, 0x1553ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553ECu;
label_1553ec:
    // 0x1553ec: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1553ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_1553f0:
    // 0x1553f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1553f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553f4: 0xc04d9f0  jal         func_1367C0
    ctx->pc = 0x1553F4u;
    SET_GPR_U32(ctx, 31, 0x1553FCu);
    ctx->pc = 0x1553F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553F4u;
    // 0x1553f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1367C0u, 0x1553F4u, 0x1553FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553FCu;
label_1553fc:
    // 0x1553fc: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1553fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x155400: 0xc0552c2  jal         func_154B08
    ctx->pc = 0x155400u;
    SET_GPR_U32(ctx, 31, 0x155408u);
    ctx->pc = 0x155404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155400u;
    // 0x155404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B08u, 0x155400u, 0x155408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155408u;
label_155408:
    // 0x155408: 0x9223046c  lbu         $v1, 0x46C($s1)
    ctx->pc = 0x155408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x15540c: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x15540cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x155410: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x155410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x155414: 0x26109a08  addiu       $s0, $s0, -0x65F8
    ctx->pc = 0x155414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x155418: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15541c: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x15541cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x155420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x155420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155424: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155428: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15542c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x155430: 0x8c52020c  lw          $s2, 0x20C($v0)
    ctx->pc = 0x155430u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x155434: 0xc043c56  jal         func_10F158
    ctx->pc = 0x155434u;
    SET_GPR_U32(ctx, 31, 0x15543Cu);
    ctx->pc = 0x155438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155434u;
    // 0x155438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x155434u, 0x15543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15543Cu;
label_15543c:
    // 0x15543c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x15543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x155440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155444: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x155444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x155448: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x155448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x15544c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15544Cu;
    {
        const bool branch_taken_0x15544c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15544Cu;
        // 0x155450: 0x8e310660  lw          $s1, 0x660($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15544c) {
            ctx->pc = 0x15545Cu;
            goto label_15545c;
        }
    }
    ctx->pc = 0x155454u;
    // 0x155454: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x155454u;
    {
        const bool branch_taken_0x155454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155454u;
        // 0x155458: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155454) {
            ctx->pc = 0x155468u;
            goto label_155468;
        }
    }
    ctx->pc = 0x15545Cu;
label_15545c:
    // 0x15545c: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x15545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x155460: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x155460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155464: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x155464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_155468:
    // 0x155468: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x155468u;
    {
        const bool branch_taken_0x155468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x155468) {
            ctx->pc = 0x15546Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155468u;
            // 0x15546c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15549Cu;
            goto label_15549c;
        }
    }
    ctx->pc = 0x155470u;
    // 0x155470: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x155470u;
    SET_GPR_U32(ctx, 31, 0x155478u);
    ctx->pc = 0x155474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155470u;
    // 0x155474: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x155470u, 0x155478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155478u;
label_155478:
    // 0x155478: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x155478u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15547c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x15547cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155480: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x155480u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x155484: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x155484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x155488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x155488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15548c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15548cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155490: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x155490u;
    SET_GPR_U32(ctx, 31, 0x155498u);
    ctx->pc = 0x155494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155490u;
    // 0x155494: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x155490u, 0x155498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155498u;
label_155498:
    // 0x155498: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x155498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15549c:
    // 0x15549c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15549cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1554a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1554a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1554a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1554a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1554a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1554A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1554ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554A8u;
        // 0x1554ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1554A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1554B0u;
}
