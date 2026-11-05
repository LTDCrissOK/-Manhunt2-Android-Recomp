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

// Function: sub_002394A0
// Address: 0x2394a0 - 0x2395c8
void sub_002394A0_0x2394a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002394A0_0x2394a0");
#endif

    switch (ctx->pc) {
        case 0x2394a0u: goto label_2394a0;
        case 0x2394a4u: goto label_2394a4;
        case 0x2394a8u: goto label_2394a8;
        case 0x2394acu: goto label_2394ac;
        case 0x2394b0u: goto label_2394b0;
        case 0x2394b4u: goto label_2394b4;
        case 0x2394b8u: goto label_2394b8;
        case 0x2394bcu: goto label_2394bc;
        case 0x2394c0u: goto label_2394c0;
        case 0x2394c4u: goto label_2394c4;
        case 0x2394c8u: goto label_2394c8;
        case 0x2394ccu: goto label_2394cc;
        case 0x2394d0u: goto label_2394d0;
        case 0x2394d4u: goto label_2394d4;
        case 0x2394d8u: goto label_2394d8;
        case 0x2394dcu: goto label_2394dc;
        case 0x2394e0u: goto label_2394e0;
        case 0x2394e4u: goto label_2394e4;
        case 0x2394e8u: goto label_2394e8;
        case 0x2394ecu: goto label_2394ec;
        case 0x2394f0u: goto label_2394f0;
        case 0x2394f4u: goto label_2394f4;
        case 0x2394f8u: goto label_2394f8;
        case 0x2394fcu: goto label_2394fc;
        case 0x239500u: goto label_239500;
        case 0x239504u: goto label_239504;
        case 0x239508u: goto label_239508;
        case 0x23950cu: goto label_23950c;
        case 0x239510u: goto label_239510;
        case 0x239514u: goto label_239514;
        case 0x239518u: goto label_239518;
        case 0x23951cu: goto label_23951c;
        case 0x239520u: goto label_239520;
        case 0x239524u: goto label_239524;
        case 0x239528u: goto label_239528;
        case 0x23952cu: goto label_23952c;
        case 0x239530u: goto label_239530;
        case 0x239534u: goto label_239534;
        case 0x239538u: goto label_239538;
        case 0x23953cu: goto label_23953c;
        case 0x239540u: goto label_239540;
        case 0x239544u: goto label_239544;
        case 0x239548u: goto label_239548;
        case 0x23954cu: goto label_23954c;
        case 0x239550u: goto label_239550;
        case 0x239554u: goto label_239554;
        case 0x239558u: goto label_239558;
        case 0x23955cu: goto label_23955c;
        case 0x239560u: goto label_239560;
        case 0x239564u: goto label_239564;
        case 0x239568u: goto label_239568;
        case 0x23956cu: goto label_23956c;
        case 0x239570u: goto label_239570;
        case 0x239574u: goto label_239574;
        case 0x239578u: goto label_239578;
        case 0x23957cu: goto label_23957c;
        case 0x239580u: goto label_239580;
        case 0x239584u: goto label_239584;
        case 0x239588u: goto label_239588;
        case 0x23958cu: goto label_23958c;
        case 0x239590u: goto label_239590;
        case 0x239594u: goto label_239594;
        case 0x239598u: goto label_239598;
        case 0x23959cu: goto label_23959c;
        case 0x2395a0u: goto label_2395a0;
        case 0x2395a4u: goto label_2395a4;
        case 0x2395a8u: goto label_2395a8;
        case 0x2395acu: goto label_2395ac;
        case 0x2395b0u: goto label_2395b0;
        case 0x2395b4u: goto label_2395b4;
        case 0x2395b8u: goto label_2395b8;
        case 0x2395bcu: goto label_2395bc;
        case 0x2395c0u: goto label_2395c0;
        case 0x2395c4u: goto label_2395c4;
        default: break;
    }

    ctx->pc = 0x2394a0u;

label_2394a0:
    // 0x2394a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2394a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2394a4:
    // 0x2394a4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2394a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2394a8:
    // 0x2394a8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2394a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2394ac:
    // 0x2394ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2394acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2394b0:
    // 0x2394b0: 0x9202036c  lbu         $v0, 0x36C($s0)
    ctx->pc = 0x2394b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 876)));
label_2394b4:
    // 0x2394b4: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2394b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_2394b8:
    // 0x2394b8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2394bc:
    if (ctx->pc == 0x2394BCu) {
        ctx->pc = 0x2394BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394B8u;
        // 0x2394bc: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394C0u;
        goto label_2394c0;
    }
    ctx->pc = 0x2394B8u;
    {
        const bool branch_taken_0x2394b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394B8u;
        // 0x2394bc: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394b8) {
            ctx->pc = 0x2395A4u;
            goto label_2395a4;
        }
    }
    ctx->pc = 0x2394C0u;
label_2394c0:
    // 0x2394c0: 0xc08fed2  jal         func_23FB48
label_2394c4:
    if (ctx->pc == 0x2394C4u) {
        ctx->pc = 0x2394C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394C0u;
        // 0x2394c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394C8u;
        goto label_2394c8;
    }
    ctx->pc = 0x2394C0u;
    SET_GPR_U32(ctx, 31, 0x2394C8u);
    ctx->pc = 0x2394C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2394C0u;
    // 0x2394c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2394C0u, 0x2394C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394C8u;
label_2394c8:
    // 0x2394c8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2394c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2394cc:
    // 0x2394cc: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x2394ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2394d0:
    // 0x2394d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2394d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2394d4:
    // 0x2394d4: 0xc0763f2  jal         func_1D8FC8
label_2394d8:
    if (ctx->pc == 0x2394D8u) {
        ctx->pc = 0x2394D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394D4u;
        // 0x2394d8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394DCu;
        goto label_2394dc;
    }
    ctx->pc = 0x2394D4u;
    SET_GPR_U32(ctx, 31, 0x2394DCu);
    ctx->pc = 0x2394D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2394D4u;
    // 0x2394d8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x2394D4u, 0x2394DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394DCu;
label_2394dc:
    // 0x2394dc: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2394dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2394e0:
    // 0x2394e0: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2394e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2394e4:
    // 0x2394e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2394e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2394e8:
    // 0x2394e8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2394e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2394ec:
    // 0x2394ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2394ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2394f0:
    // 0x2394f0: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2394f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2394f4:
    // 0x2394f4: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x2394f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_2394f8:
    // 0x2394f8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_2394fc:
    if (ctx->pc == 0x2394FCu) {
        ctx->pc = 0x2394FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394F8u;
        // 0x2394fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239500u;
        goto label_239500;
    }
    ctx->pc = 0x2394F8u;
    {
        const bool branch_taken_0x2394f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2394FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394F8u;
        // 0x2394fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394f8) {
            ctx->pc = 0x2395A8u;
            goto label_2395a8;
        }
    }
    ctx->pc = 0x239500u;
label_239500:
    // 0x239500: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x239500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_239504:
    // 0x239504: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x239504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_239508:
    // 0x239508: 0xc08e0fa  jal         func_2383E8
label_23950c:
    if (ctx->pc == 0x23950Cu) {
        ctx->pc = 0x23950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239508u;
        // 0x23950c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239510u;
        goto label_239510;
    }
    ctx->pc = 0x239508u;
    SET_GPR_U32(ctx, 31, 0x239510u);
    ctx->pc = 0x23950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239508u;
    // 0x23950c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E8u, 0x239508u, 0x239510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239510u;
label_239510:
    // 0x239510: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_239514:
    if (ctx->pc == 0x239514u) {
        ctx->pc = 0x239514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239510u;
        // 0x239514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239518u;
        goto label_239518;
    }
    ctx->pc = 0x239510u;
    {
        const bool branch_taken_0x239510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239510u;
        // 0x239514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239510) {
            ctx->pc = 0x2395A8u;
            goto label_2395a8;
        }
    }
    ctx->pc = 0x239518u;
label_239518:
    // 0x239518: 0xc0b1488  jal         func_2C5220
label_23951c:
    if (ctx->pc == 0x23951Cu) {
        ctx->pc = 0x23951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239518u;
        // 0x23951c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239520u;
        goto label_239520;
    }
    ctx->pc = 0x239518u;
    SET_GPR_U32(ctx, 31, 0x239520u);
    ctx->pc = 0x23951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239518u;
    // 0x23951c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x239518u, 0x239520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239520u;
label_239520:
    // 0x239520: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x239520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_239524:
    // 0x239524: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x239524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_239528:
    // 0x239528: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x239528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_23952c:
    // 0x23952c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23952cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_239530:
    // 0x239530: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x239530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_239534:
    // 0x239534: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x239534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_239538:
    // 0x239538: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x239538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23953c:
    // 0x23953c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x23953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_239540:
    // 0x239540: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x239540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_239544:
    // 0x239544: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x239544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_239548:
    // 0x239548: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x239548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_23954c:
    // 0x23954c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x23954cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_239550:
    // 0x239550: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x239550u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_239554:
    // 0x239554: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x239554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_239558:
    // 0x239558: 0x8e02048c  lw          $v0, 0x48C($s0)
    ctx->pc = 0x239558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1164)));
label_23955c:
    // 0x23955c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x23955cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_239560:
    // 0x239560: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x239560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_239564:
    // 0x239564: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x239564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_239568:
    // 0x239568: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x239568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23956c:
    // 0x23956c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23956cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239570:
    // 0x239570: 0xc44c96ac  lwc1        $f12, -0x6954($v0)
    ctx->pc = 0x239570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_239574:
    // 0x239574: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239578:
    // 0x239578: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x239578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23957c:
    // 0x23957c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23957cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_239580:
    // 0x239580: 0xc08e23a  jal         func_2388E8
label_239584:
    if (ctx->pc == 0x239584u) {
        ctx->pc = 0x239584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239580u;
        // 0x239584: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239588u;
        goto label_239588;
    }
    ctx->pc = 0x239580u;
    SET_GPR_U32(ctx, 31, 0x239588u);
    ctx->pc = 0x239584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239580u;
    // 0x239584: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x239580u, 0x239588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239588u;
label_239588:
    // 0x239588: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x239588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_23958c:
    // 0x23958c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x23958cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_239590:
    // 0x239590: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x239590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_239594:
    // 0x239594: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x239594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_239598:
    // 0x239598: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x239598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_23959c:
    // 0x23959c: 0x40f809  jalr        $v0
label_2395a0:
    if (ctx->pc == 0x2395A0u) {
        ctx->pc = 0x2395A4u;
        goto label_2395a4;
    }
    ctx->pc = 0x23959Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2395A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23959Cu, 0x2395A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2395A4u;
label_2395a4:
    // 0x2395a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2395a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2395a8:
    // 0x2395a8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2395a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2395ac:
    // 0x2395ac: 0xc08fed2  jal         func_23FB48
label_2395b0:
    if (ctx->pc == 0x2395B0u) {
        ctx->pc = 0x2395B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395ACu;
        // 0x2395b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2395B4u;
        goto label_2395b4;
    }
    ctx->pc = 0x2395ACu;
    SET_GPR_U32(ctx, 31, 0x2395B4u);
    ctx->pc = 0x2395B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2395ACu;
    // 0x2395b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2395ACu, 0x2395B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2395B4u;
label_2395b4:
    // 0x2395b4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2395b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2395b8:
    // 0x2395b8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2395b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2395bc:
    // 0x2395bc: 0x3e00008  jr          $ra
label_2395c0:
    if (ctx->pc == 0x2395C0u) {
        ctx->pc = 0x2395C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395BCu;
        // 0x2395c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2395C4u;
        goto label_2395c4;
    }
    ctx->pc = 0x2395BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2395C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395BCu;
        // 0x2395c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2395BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2395C4u;
label_2395c4:
    // 0x2395c4: 0x0  nop
    ctx->pc = 0x2395c4u;
    // NOP
    ctx->pc = 0x2395c8u;
}
