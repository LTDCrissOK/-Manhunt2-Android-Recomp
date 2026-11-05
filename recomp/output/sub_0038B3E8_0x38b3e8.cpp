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

// Function: sub_0038B3E8
// Address: 0x38b3e8 - 0x38b608
void sub_0038B3E8_0x38b3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B3E8_0x38b3e8");
#endif

    switch (ctx->pc) {
        case 0x38b3e8u: goto label_38b3e8;
        case 0x38b3ecu: goto label_38b3ec;
        case 0x38b3f0u: goto label_38b3f0;
        case 0x38b3f4u: goto label_38b3f4;
        case 0x38b3f8u: goto label_38b3f8;
        case 0x38b3fcu: goto label_38b3fc;
        case 0x38b400u: goto label_38b400;
        case 0x38b404u: goto label_38b404;
        case 0x38b408u: goto label_38b408;
        case 0x38b40cu: goto label_38b40c;
        case 0x38b410u: goto label_38b410;
        case 0x38b414u: goto label_38b414;
        case 0x38b418u: goto label_38b418;
        case 0x38b41cu: goto label_38b41c;
        case 0x38b420u: goto label_38b420;
        case 0x38b424u: goto label_38b424;
        case 0x38b428u: goto label_38b428;
        case 0x38b42cu: goto label_38b42c;
        case 0x38b430u: goto label_38b430;
        case 0x38b434u: goto label_38b434;
        case 0x38b438u: goto label_38b438;
        case 0x38b43cu: goto label_38b43c;
        case 0x38b440u: goto label_38b440;
        case 0x38b444u: goto label_38b444;
        case 0x38b448u: goto label_38b448;
        case 0x38b44cu: goto label_38b44c;
        case 0x38b450u: goto label_38b450;
        case 0x38b454u: goto label_38b454;
        case 0x38b458u: goto label_38b458;
        case 0x38b45cu: goto label_38b45c;
        case 0x38b460u: goto label_38b460;
        case 0x38b464u: goto label_38b464;
        case 0x38b468u: goto label_38b468;
        case 0x38b46cu: goto label_38b46c;
        case 0x38b470u: goto label_38b470;
        case 0x38b474u: goto label_38b474;
        case 0x38b478u: goto label_38b478;
        case 0x38b47cu: goto label_38b47c;
        case 0x38b480u: goto label_38b480;
        case 0x38b484u: goto label_38b484;
        case 0x38b488u: goto label_38b488;
        case 0x38b48cu: goto label_38b48c;
        case 0x38b490u: goto label_38b490;
        case 0x38b494u: goto label_38b494;
        case 0x38b498u: goto label_38b498;
        case 0x38b49cu: goto label_38b49c;
        case 0x38b4a0u: goto label_38b4a0;
        case 0x38b4a4u: goto label_38b4a4;
        case 0x38b4a8u: goto label_38b4a8;
        case 0x38b4acu: goto label_38b4ac;
        case 0x38b4b0u: goto label_38b4b0;
        case 0x38b4b4u: goto label_38b4b4;
        case 0x38b4b8u: goto label_38b4b8;
        case 0x38b4bcu: goto label_38b4bc;
        case 0x38b4c0u: goto label_38b4c0;
        case 0x38b4c4u: goto label_38b4c4;
        case 0x38b4c8u: goto label_38b4c8;
        case 0x38b4ccu: goto label_38b4cc;
        case 0x38b4d0u: goto label_38b4d0;
        case 0x38b4d4u: goto label_38b4d4;
        case 0x38b4d8u: goto label_38b4d8;
        case 0x38b4dcu: goto label_38b4dc;
        case 0x38b4e0u: goto label_38b4e0;
        case 0x38b4e4u: goto label_38b4e4;
        case 0x38b4e8u: goto label_38b4e8;
        case 0x38b4ecu: goto label_38b4ec;
        case 0x38b4f0u: goto label_38b4f0;
        case 0x38b4f4u: goto label_38b4f4;
        case 0x38b4f8u: goto label_38b4f8;
        case 0x38b4fcu: goto label_38b4fc;
        case 0x38b500u: goto label_38b500;
        case 0x38b504u: goto label_38b504;
        case 0x38b508u: goto label_38b508;
        case 0x38b50cu: goto label_38b50c;
        case 0x38b510u: goto label_38b510;
        case 0x38b514u: goto label_38b514;
        case 0x38b518u: goto label_38b518;
        case 0x38b51cu: goto label_38b51c;
        case 0x38b520u: goto label_38b520;
        case 0x38b524u: goto label_38b524;
        case 0x38b528u: goto label_38b528;
        case 0x38b52cu: goto label_38b52c;
        case 0x38b530u: goto label_38b530;
        case 0x38b534u: goto label_38b534;
        case 0x38b538u: goto label_38b538;
        case 0x38b53cu: goto label_38b53c;
        case 0x38b540u: goto label_38b540;
        case 0x38b544u: goto label_38b544;
        case 0x38b548u: goto label_38b548;
        case 0x38b54cu: goto label_38b54c;
        case 0x38b550u: goto label_38b550;
        case 0x38b554u: goto label_38b554;
        case 0x38b558u: goto label_38b558;
        case 0x38b55cu: goto label_38b55c;
        case 0x38b560u: goto label_38b560;
        case 0x38b564u: goto label_38b564;
        case 0x38b568u: goto label_38b568;
        case 0x38b56cu: goto label_38b56c;
        case 0x38b570u: goto label_38b570;
        case 0x38b574u: goto label_38b574;
        case 0x38b578u: goto label_38b578;
        case 0x38b57cu: goto label_38b57c;
        case 0x38b580u: goto label_38b580;
        case 0x38b584u: goto label_38b584;
        case 0x38b588u: goto label_38b588;
        case 0x38b58cu: goto label_38b58c;
        case 0x38b590u: goto label_38b590;
        case 0x38b594u: goto label_38b594;
        case 0x38b598u: goto label_38b598;
        case 0x38b59cu: goto label_38b59c;
        case 0x38b5a0u: goto label_38b5a0;
        case 0x38b5a4u: goto label_38b5a4;
        case 0x38b5a8u: goto label_38b5a8;
        case 0x38b5acu: goto label_38b5ac;
        case 0x38b5b0u: goto label_38b5b0;
        case 0x38b5b4u: goto label_38b5b4;
        case 0x38b5b8u: goto label_38b5b8;
        case 0x38b5bcu: goto label_38b5bc;
        case 0x38b5c0u: goto label_38b5c0;
        case 0x38b5c4u: goto label_38b5c4;
        case 0x38b5c8u: goto label_38b5c8;
        case 0x38b5ccu: goto label_38b5cc;
        case 0x38b5d0u: goto label_38b5d0;
        case 0x38b5d4u: goto label_38b5d4;
        case 0x38b5d8u: goto label_38b5d8;
        case 0x38b5dcu: goto label_38b5dc;
        case 0x38b5e0u: goto label_38b5e0;
        case 0x38b5e4u: goto label_38b5e4;
        case 0x38b5e8u: goto label_38b5e8;
        case 0x38b5ecu: goto label_38b5ec;
        case 0x38b5f0u: goto label_38b5f0;
        case 0x38b5f4u: goto label_38b5f4;
        case 0x38b5f8u: goto label_38b5f8;
        case 0x38b5fcu: goto label_38b5fc;
        case 0x38b600u: goto label_38b600;
        case 0x38b604u: goto label_38b604;
        default: break;
    }

    ctx->pc = 0x38b3e8u;

label_38b3e8:
    // 0x38b3e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x38b3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_38b3ec:
    // 0x38b3ec: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x38b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_38b3f0:
    // 0x38b3f0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x38b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_38b3f4:
    // 0x38b3f4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x38b3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_38b3f8:
    // 0x38b3f8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x38b3f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38b3fc:
    // 0x38b3fc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x38b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_38b400:
    // 0x38b400: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x38b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_38b404:
    // 0x38b404: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x38b404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b408:
    // 0x38b408: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x38b408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_38b40c:
    // 0x38b40c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x38b40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_38b410:
    // 0x38b410: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x38b410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_38b414:
    // 0x38b414: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x38b414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_38b418:
    // 0x38b418: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x38b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_38b41c:
    // 0x38b41c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x38b41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_38b420:
    // 0x38b420: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38b420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_38b424:
    // 0x38b424: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x38b424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_38b428:
    // 0x38b428: 0x8c4306d8  lw          $v1, 0x6D8($v0)
    ctx->pc = 0x38b428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1752)));
label_38b42c:
    // 0x38b42c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_38b430:
    if (ctx->pc == 0x38B430u) {
        ctx->pc = 0x38B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B42Cu;
        // 0x38b430: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B434u;
        goto label_38b434;
    }
    ctx->pc = 0x38B42Cu;
    {
        const bool branch_taken_0x38b42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B42Cu;
        // 0x38b430: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b42c) {
            ctx->pc = 0x38B4CCu;
            goto label_38b4cc;
        }
    }
    ctx->pc = 0x38B434u;
label_38b434:
    // 0x38b434: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x38b434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_38b438:
    // 0x38b438: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x38b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_38b43c:
    // 0x38b43c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38b440:
    // 0x38b440: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_38b444:
    if (ctx->pc == 0x38B444u) {
        ctx->pc = 0x38B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B440u;
        // 0x38b444: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B448u;
        goto label_38b448;
    }
    ctx->pc = 0x38B440u;
    {
        const bool branch_taken_0x38b440 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x38B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B440u;
        // 0x38b444: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b440) {
            ctx->pc = 0x38B4DCu;
            goto label_38b4dc;
        }
    }
    ctx->pc = 0x38B448u;
label_38b448:
    // 0x38b448: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x38b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_38b44c:
    // 0x38b44c: 0x269705c8  addiu       $s7, $s4, 0x5C8
    ctx->pc = 0x38b44cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
label_38b450:
    // 0x38b450: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x38b450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_38b454:
    // 0x38b454: 0x269605d8  addiu       $s6, $s4, 0x5D8
    ctx->pc = 0x38b454u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1496));
label_38b458:
    // 0x38b458: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x38b458u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_38b45c:
    // 0x38b45c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x38b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_38b460:
    // 0x38b460: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x38b460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_38b464:
    // 0x38b464: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x38b464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_38b468:
    // 0x38b468: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x38b468u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_38b46c:
    // 0x38b46c: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x38b46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_38b470:
    // 0x38b470: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x38b470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_38b474:
    // 0x38b474: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x38b474u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_38b478:
    // 0x38b478: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x38b478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_38b47c:
    // 0x38b47c: 0x263205a0  addiu       $s2, $s1, 0x5A0
    ctx->pc = 0x38b47cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
label_38b480:
    // 0x38b480: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x38b480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_38b484:
    // 0x38b484: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x38b484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_38b488:
    // 0x38b488: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x38b488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_38b48c:
    // 0x38b48c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38b490:
    // 0x38b490: 0x60f809  jalr        $v1
label_38b494:
    if (ctx->pc == 0x38B494u) {
        ctx->pc = 0x38B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B490u;
        // 0x38b494: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B498u;
        goto label_38b498;
    }
    ctx->pc = 0x38B490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38B498u);
        ctx->pc = 0x38B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B490u;
        // 0x38b494: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B490u, 0x38B498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B498u;
label_38b498:
    // 0x38b498: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x38b498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_38b49c:
    // 0x38b49c: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x38b49cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_38b4a0:
    // 0x38b4a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38b4a4:
    // 0x38b4a4: 0x40f809  jalr        $v0
label_38b4a8:
    if (ctx->pc == 0x38B4A8u) {
        ctx->pc = 0x38B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4A4u;
        // 0x38b4a8: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B4ACu;
        goto label_38b4ac;
    }
    ctx->pc = 0x38B4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38B4ACu);
        ctx->pc = 0x38B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4A4u;
        // 0x38b4a8: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B4A4u, 0x38B4ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B4ACu;
label_38b4ac:
    // 0x38b4ac: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x38b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_38b4b0:
    // 0x38b4b0: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x38b4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_38b4b4:
    // 0x38b4b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38b4b8:
    // 0x38b4b8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x38b4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_38b4bc:
    // 0x38b4bc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_38b4c0:
    if (ctx->pc == 0x38B4C0u) {
        ctx->pc = 0x38B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4BCu;
        // 0x38b4c0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B4C4u;
        goto label_38b4c4;
    }
    ctx->pc = 0x38B4BCu;
    {
        const bool branch_taken_0x38b4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4BCu;
        // 0x38b4c0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b4bc) {
            ctx->pc = 0x38B460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b460;
        }
    }
    ctx->pc = 0x38B4C4u;
label_38b4c4:
    // 0x38b4c4: 0x10000009  b           . + 4 + (0x9 << 2)
label_38b4c8:
    if (ctx->pc == 0x38B4C8u) {
        ctx->pc = 0x38B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4C4u;
        // 0x38b4c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B4CCu;
        goto label_38b4cc;
    }
    ctx->pc = 0x38B4C4u;
    {
        const bool branch_taken_0x38b4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4C4u;
        // 0x38b4c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b4c4) {
            ctx->pc = 0x38B4ECu;
            goto label_38b4ec;
        }
    }
    ctx->pc = 0x38B4CCu;
label_38b4cc:
    // 0x38b4cc: 0x268206d0  addiu       $v0, $s4, 0x6D0
    ctx->pc = 0x38b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_38b4d0:
    // 0x38b4d0: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x38b4d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_38b4d4:
    // 0x38b4d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_38b4d8:
    if (ctx->pc == 0x38B4D8u) {
        ctx->pc = 0x38B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4D4u;
        // 0x38b4d8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B4DCu;
        goto label_38b4dc;
    }
    ctx->pc = 0x38B4D4u;
    {
        const bool branch_taken_0x38b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4D4u;
        // 0x38b4d8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b4d4) {
            ctx->pc = 0x38B4E8u;
            goto label_38b4e8;
        }
    }
    ctx->pc = 0x38B4DCu;
label_38b4dc:
    // 0x38b4dc: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x38b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_38b4e0:
    // 0x38b4e0: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x38b4e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_38b4e4:
    // 0x38b4e4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x38b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_38b4e8:
    // 0x38b4e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x38b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_38b4ec:
    // 0x38b4ec: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x38b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_38b4f0:
    // 0x38b4f0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x38b4f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38b4f4:
    // 0x38b4f4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x38b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_38b4f8:
    // 0x38b4f8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x38b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_38b4fc:
    // 0x38b4fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38b500:
    // 0x38b500: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_38b504:
    if (ctx->pc == 0x38B504u) {
        ctx->pc = 0x38B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B500u;
        // 0x38b504: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B508u;
        goto label_38b508;
    }
    ctx->pc = 0x38B500u;
    {
        const bool branch_taken_0x38b500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B500u;
        // 0x38b504: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b500) {
            ctx->pc = 0x38B520u;
            goto label_38b520;
        }
    }
    ctx->pc = 0x38B508u;
label_38b508:
    // 0x38b508: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x38b508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_38b50c:
    // 0x38b50c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_38b510:
    if (ctx->pc == 0x38B510u) {
        ctx->pc = 0x38B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B50Cu;
        // 0x38b510: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B514u;
        goto label_38b514;
    }
    ctx->pc = 0x38B50Cu;
    {
        const bool branch_taken_0x38b50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B50Cu;
        // 0x38b510: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b50c) {
            ctx->pc = 0x38B520u;
            goto label_38b520;
        }
    }
    ctx->pc = 0x38B514u;
label_38b514:
    // 0x38b514: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38b514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38b518:
    // 0x38b518: 0xc0e28f8  jal         func_38A3E0
label_38b51c:
    if (ctx->pc == 0x38B51Cu) {
        ctx->pc = 0x38B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B518u;
        // 0x38b51c: 0x24a594d8  addiu       $a1, $a1, -0x6B28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B520u;
        goto label_38b520;
    }
    ctx->pc = 0x38B518u;
    SET_GPR_U32(ctx, 31, 0x38B520u);
    ctx->pc = 0x38B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B518u;
    // 0x38b51c: 0x24a594d8  addiu       $a1, $a1, -0x6B28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38B518u, 0x38B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B520u;
label_38b520:
    // 0x38b520: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x38b520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_38b524:
    // 0x38b524: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x38b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_38b528:
    // 0x38b528: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x38b528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38b52c:
    // 0x38b52c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x38b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_38b530:
    // 0x38b530: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x38b530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_38b534:
    // 0x38b534: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38b534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38b538:
    // 0x38b538: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_38b53c:
    if (ctx->pc == 0x38B53Cu) {
        ctx->pc = 0x38B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B538u;
        // 0x38b53c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B540u;
        goto label_38b540;
    }
    ctx->pc = 0x38B538u;
    {
        const bool branch_taken_0x38b538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B538u;
        // 0x38b53c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b538) {
            ctx->pc = 0x38B580u;
            goto label_38b580;
        }
    }
    ctx->pc = 0x38B540u;
label_38b540:
    // 0x38b540: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x38b540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_38b544:
    // 0x38b544: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x38b544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_38b548:
    // 0x38b548: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x38b548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38b54c:
    // 0x38b54c: 0x8c6505a4  lw          $a1, 0x5A4($v1)
    ctx->pc = 0x38b54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_38b550:
    // 0x38b550: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x38b550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_38b554:
    // 0x38b554: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x38b554u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_38b558:
    // 0x38b558: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x38b558u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_38b55c:
    // 0x38b55c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x38b55cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_38b560:
    // 0x38b560: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x38b560u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38b564:
    // 0x38b564: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x38b564u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_38b568:
    // 0x38b568: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x38b568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38b56c:
    // 0x38b56c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x38b56cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38b570:
    // 0x38b570: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x38b570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38b574:
    // 0x38b574: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38b574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38b578:
    // 0x38b578: 0x80e33be  j           func_38CEF8
label_38b57c:
    if (ctx->pc == 0x38B57Cu) {
        ctx->pc = 0x38B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B578u;
        // 0x38b57c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B580u;
        goto label_38b580;
    }
    ctx->pc = 0x38B578u;
    ctx->pc = 0x38B57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B578u;
    // 0x38b57c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CEF8u, 0x38B578u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x38B580u;
label_38b580:
    // 0x38b580: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x38b580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_38b584:
    // 0x38b584: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_38b588:
    if (ctx->pc == 0x38B588u) {
        ctx->pc = 0x38B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B584u;
        // 0x38b588: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B58Cu;
        goto label_38b58c;
    }
    ctx->pc = 0x38B584u;
    {
        const bool branch_taken_0x38b584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B584u;
        // 0x38b588: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b584) {
            ctx->pc = 0x38B5C4u;
            goto label_38b5c4;
        }
    }
    ctx->pc = 0x38B58Cu;
label_38b58c:
    // 0x38b58c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x38b58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_38b590:
    // 0x38b590: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x38b590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_38b594:
    // 0x38b594: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x38b594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38b598:
    // 0x38b598: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x38b598u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_38b59c:
    // 0x38b59c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x38b59cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_38b5a0:
    // 0x38b5a0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x38b5a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_38b5a4:
    // 0x38b5a4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x38b5a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38b5a8:
    // 0x38b5a8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x38b5a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_38b5ac:
    // 0x38b5ac: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x38b5acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38b5b0:
    // 0x38b5b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x38b5b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38b5b4:
    // 0x38b5b4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x38b5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38b5b8:
    // 0x38b5b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38b5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38b5bc:
    // 0x38b5bc: 0x80e33be  j           func_38CEF8
label_38b5c0:
    if (ctx->pc == 0x38B5C0u) {
        ctx->pc = 0x38B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5BCu;
        // 0x38b5c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B5C4u;
        goto label_38b5c4;
    }
    ctx->pc = 0x38B5BCu;
    ctx->pc = 0x38B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B5BCu;
    // 0x38b5c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CEF8u, 0x38B5BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x38B5C4u;
label_38b5c4:
    // 0x38b5c4: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x38b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_38b5c8:
    // 0x38b5c8: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x38b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_38b5cc:
    // 0x38b5cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x38b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38b5d0:
    // 0x38b5d0: 0x8c6605a4  lw          $a2, 0x5A4($v1)
    ctx->pc = 0x38b5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_38b5d4:
    // 0x38b5d4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x38b5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_38b5d8:
    // 0x38b5d8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x38b5d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_38b5dc:
    // 0x38b5dc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x38b5dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_38b5e0:
    // 0x38b5e0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x38b5e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_38b5e4:
    // 0x38b5e4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x38b5e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38b5e8:
    // 0x38b5e8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x38b5e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_38b5ec:
    // 0x38b5ec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x38b5ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38b5f0:
    // 0x38b5f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x38b5f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38b5f4:
    // 0x38b5f4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x38b5f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38b5f8:
    // 0x38b5f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38b5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38b5fc:
    // 0x38b5fc: 0x80e3382  j           func_38CE08
label_38b600:
    if (ctx->pc == 0x38B600u) {
        ctx->pc = 0x38B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5FCu;
        // 0x38b600: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B604u;
        goto label_38b604;
    }
    ctx->pc = 0x38B5FCu;
    ctx->pc = 0x38B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B5FCu;
    // 0x38b600: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE08u, 0x38B5FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x38B604u;
label_38b604:
    // 0x38b604: 0x0  nop
    ctx->pc = 0x38b604u;
    // NOP
    ctx->pc = 0x38b608u;
}
