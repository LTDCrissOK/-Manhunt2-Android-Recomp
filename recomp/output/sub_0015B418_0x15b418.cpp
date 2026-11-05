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

// Function: sub_0015B418
// Address: 0x15b418 - 0x15b688
void sub_0015B418_0x15b418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B418_0x15b418");
#endif

    switch (ctx->pc) {
        case 0x15b418u: goto label_15b418;
        case 0x15b41cu: goto label_15b41c;
        case 0x15b420u: goto label_15b420;
        case 0x15b424u: goto label_15b424;
        case 0x15b428u: goto label_15b428;
        case 0x15b42cu: goto label_15b42c;
        case 0x15b430u: goto label_15b430;
        case 0x15b434u: goto label_15b434;
        case 0x15b438u: goto label_15b438;
        case 0x15b43cu: goto label_15b43c;
        case 0x15b440u: goto label_15b440;
        case 0x15b444u: goto label_15b444;
        case 0x15b448u: goto label_15b448;
        case 0x15b44cu: goto label_15b44c;
        case 0x15b450u: goto label_15b450;
        case 0x15b454u: goto label_15b454;
        case 0x15b458u: goto label_15b458;
        case 0x15b45cu: goto label_15b45c;
        case 0x15b460u: goto label_15b460;
        case 0x15b464u: goto label_15b464;
        case 0x15b468u: goto label_15b468;
        case 0x15b46cu: goto label_15b46c;
        case 0x15b470u: goto label_15b470;
        case 0x15b474u: goto label_15b474;
        case 0x15b478u: goto label_15b478;
        case 0x15b47cu: goto label_15b47c;
        case 0x15b480u: goto label_15b480;
        case 0x15b484u: goto label_15b484;
        case 0x15b488u: goto label_15b488;
        case 0x15b48cu: goto label_15b48c;
        case 0x15b490u: goto label_15b490;
        case 0x15b494u: goto label_15b494;
        case 0x15b498u: goto label_15b498;
        case 0x15b49cu: goto label_15b49c;
        case 0x15b4a0u: goto label_15b4a0;
        case 0x15b4a4u: goto label_15b4a4;
        case 0x15b4a8u: goto label_15b4a8;
        case 0x15b4acu: goto label_15b4ac;
        case 0x15b4b0u: goto label_15b4b0;
        case 0x15b4b4u: goto label_15b4b4;
        case 0x15b4b8u: goto label_15b4b8;
        case 0x15b4bcu: goto label_15b4bc;
        case 0x15b4c0u: goto label_15b4c0;
        case 0x15b4c4u: goto label_15b4c4;
        case 0x15b4c8u: goto label_15b4c8;
        case 0x15b4ccu: goto label_15b4cc;
        case 0x15b4d0u: goto label_15b4d0;
        case 0x15b4d4u: goto label_15b4d4;
        case 0x15b4d8u: goto label_15b4d8;
        case 0x15b4dcu: goto label_15b4dc;
        case 0x15b4e0u: goto label_15b4e0;
        case 0x15b4e4u: goto label_15b4e4;
        case 0x15b4e8u: goto label_15b4e8;
        case 0x15b4ecu: goto label_15b4ec;
        case 0x15b4f0u: goto label_15b4f0;
        case 0x15b4f4u: goto label_15b4f4;
        case 0x15b4f8u: goto label_15b4f8;
        case 0x15b4fcu: goto label_15b4fc;
        case 0x15b500u: goto label_15b500;
        case 0x15b504u: goto label_15b504;
        case 0x15b508u: goto label_15b508;
        case 0x15b50cu: goto label_15b50c;
        case 0x15b510u: goto label_15b510;
        case 0x15b514u: goto label_15b514;
        case 0x15b518u: goto label_15b518;
        case 0x15b51cu: goto label_15b51c;
        case 0x15b520u: goto label_15b520;
        case 0x15b524u: goto label_15b524;
        case 0x15b528u: goto label_15b528;
        case 0x15b52cu: goto label_15b52c;
        case 0x15b530u: goto label_15b530;
        case 0x15b534u: goto label_15b534;
        case 0x15b538u: goto label_15b538;
        case 0x15b53cu: goto label_15b53c;
        case 0x15b540u: goto label_15b540;
        case 0x15b544u: goto label_15b544;
        case 0x15b548u: goto label_15b548;
        case 0x15b54cu: goto label_15b54c;
        case 0x15b550u: goto label_15b550;
        case 0x15b554u: goto label_15b554;
        case 0x15b558u: goto label_15b558;
        case 0x15b55cu: goto label_15b55c;
        case 0x15b560u: goto label_15b560;
        case 0x15b564u: goto label_15b564;
        case 0x15b568u: goto label_15b568;
        case 0x15b56cu: goto label_15b56c;
        case 0x15b570u: goto label_15b570;
        case 0x15b574u: goto label_15b574;
        case 0x15b578u: goto label_15b578;
        case 0x15b57cu: goto label_15b57c;
        case 0x15b580u: goto label_15b580;
        case 0x15b584u: goto label_15b584;
        case 0x15b588u: goto label_15b588;
        case 0x15b58cu: goto label_15b58c;
        case 0x15b590u: goto label_15b590;
        case 0x15b594u: goto label_15b594;
        case 0x15b598u: goto label_15b598;
        case 0x15b59cu: goto label_15b59c;
        case 0x15b5a0u: goto label_15b5a0;
        case 0x15b5a4u: goto label_15b5a4;
        case 0x15b5a8u: goto label_15b5a8;
        case 0x15b5acu: goto label_15b5ac;
        case 0x15b5b0u: goto label_15b5b0;
        case 0x15b5b4u: goto label_15b5b4;
        case 0x15b5b8u: goto label_15b5b8;
        case 0x15b5bcu: goto label_15b5bc;
        case 0x15b5c0u: goto label_15b5c0;
        case 0x15b5c4u: goto label_15b5c4;
        case 0x15b5c8u: goto label_15b5c8;
        case 0x15b5ccu: goto label_15b5cc;
        case 0x15b5d0u: goto label_15b5d0;
        case 0x15b5d4u: goto label_15b5d4;
        case 0x15b5d8u: goto label_15b5d8;
        case 0x15b5dcu: goto label_15b5dc;
        case 0x15b5e0u: goto label_15b5e0;
        case 0x15b5e4u: goto label_15b5e4;
        case 0x15b5e8u: goto label_15b5e8;
        case 0x15b5ecu: goto label_15b5ec;
        case 0x15b5f0u: goto label_15b5f0;
        case 0x15b5f4u: goto label_15b5f4;
        case 0x15b5f8u: goto label_15b5f8;
        case 0x15b5fcu: goto label_15b5fc;
        case 0x15b600u: goto label_15b600;
        case 0x15b604u: goto label_15b604;
        case 0x15b608u: goto label_15b608;
        case 0x15b60cu: goto label_15b60c;
        case 0x15b610u: goto label_15b610;
        case 0x15b614u: goto label_15b614;
        case 0x15b618u: goto label_15b618;
        case 0x15b61cu: goto label_15b61c;
        case 0x15b620u: goto label_15b620;
        case 0x15b624u: goto label_15b624;
        case 0x15b628u: goto label_15b628;
        case 0x15b62cu: goto label_15b62c;
        case 0x15b630u: goto label_15b630;
        case 0x15b634u: goto label_15b634;
        case 0x15b638u: goto label_15b638;
        case 0x15b63cu: goto label_15b63c;
        case 0x15b640u: goto label_15b640;
        case 0x15b644u: goto label_15b644;
        case 0x15b648u: goto label_15b648;
        case 0x15b64cu: goto label_15b64c;
        case 0x15b650u: goto label_15b650;
        case 0x15b654u: goto label_15b654;
        case 0x15b658u: goto label_15b658;
        case 0x15b65cu: goto label_15b65c;
        case 0x15b660u: goto label_15b660;
        case 0x15b664u: goto label_15b664;
        case 0x15b668u: goto label_15b668;
        case 0x15b66cu: goto label_15b66c;
        case 0x15b670u: goto label_15b670;
        case 0x15b674u: goto label_15b674;
        case 0x15b678u: goto label_15b678;
        case 0x15b67cu: goto label_15b67c;
        case 0x15b680u: goto label_15b680;
        case 0x15b684u: goto label_15b684;
        default: break;
    }

    ctx->pc = 0x15b418u;

label_15b418:
    // 0x15b418: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15b418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15b41c:
    // 0x15b41c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15b41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_15b420:
    // 0x15b420: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15b420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15b424:
    // 0x15b424: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15b424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15b428:
    // 0x15b428: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15b42c:
    // 0x15b42c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15b42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15b430:
    // 0x15b430: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15b430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_15b434:
    // 0x15b434: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15b434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_15b438:
    // 0x15b438: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15b438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_15b43c:
    // 0x15b43c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x15b43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_15b440:
    // 0x15b440: 0x92820a20  lbu         $v0, 0xA20($s4)
    ctx->pc = 0x15b440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2592)));
label_15b444:
    // 0x15b444: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_15b448:
    if (ctx->pc == 0x15B448u) {
        ctx->pc = 0x15B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B444u;
        // 0x15b448: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B44Cu;
        goto label_15b44c;
    }
    ctx->pc = 0x15B444u;
    {
        const bool branch_taken_0x15b444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B444u;
        // 0x15b448: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b444) {
            ctx->pc = 0x15B664u;
            goto label_15b664;
        }
    }
    ctx->pc = 0x15B44Cu;
label_15b44c:
    // 0x15b44c: 0xc056e92  jal         func_15BA48
label_15b450:
    if (ctx->pc == 0x15B450u) {
        ctx->pc = 0x15B454u;
        goto label_15b454;
    }
    ctx->pc = 0x15B44Cu;
    SET_GPR_U32(ctx, 31, 0x15B454u);
    ctx->pc = 0x15BA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BA48u, 0x15B44Cu, 0x15B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B454u;
label_15b454:
    // 0x15b454: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_15b458:
    if (ctx->pc == 0x15B458u) {
        ctx->pc = 0x15B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B454u;
        // 0x15b458: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B45Cu;
        goto label_15b45c;
    }
    ctx->pc = 0x15B454u;
    {
        const bool branch_taken_0x15b454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B454u;
        // 0x15b458: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b454) {
            ctx->pc = 0x15B660u;
            goto label_15b660;
        }
    }
    ctx->pc = 0x15B45Cu;
label_15b45c:
    // 0x15b45c: 0x92820a20  lbu         $v0, 0xA20($s4)
    ctx->pc = 0x15b45cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2592)));
label_15b460:
    // 0x15b460: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_15b464:
    if (ctx->pc == 0x15B464u) {
        ctx->pc = 0x15B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B460u;
        // 0x15b464: 0x27b60001  addiu       $s6, $sp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B468u;
        goto label_15b468;
    }
    ctx->pc = 0x15B460u;
    {
        const bool branch_taken_0x15b460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B460u;
        // 0x15b464: 0x27b60001  addiu       $s6, $sp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b460) {
            ctx->pc = 0x15B498u;
            goto label_15b498;
        }
    }
    ctx->pc = 0x15B468u;
label_15b468:
    // 0x15b468: 0x24120070  addiu       $s2, $zero, 0x70
    ctx->pc = 0x15b468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15b46c:
    // 0x15b46c: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x15b46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_15b470:
    // 0x15b470: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x15b470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_15b474:
    // 0x15b474: 0xc04d7c4  jal         func_135F10
label_15b478:
    if (ctx->pc == 0x15B478u) {
        ctx->pc = 0x15B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B474u;
        // 0x15b478: 0x8e04032c  lw          $a0, 0x32C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B47Cu;
        goto label_15b47c;
    }
    ctx->pc = 0x15B474u;
    SET_GPR_U32(ctx, 31, 0x15B47Cu);
    ctx->pc = 0x15B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B474u;
    // 0x15b478: 0x8e04032c  lw          $a0, 0x32C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F10u, 0x15B474u, 0x15B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B47Cu;
label_15b47c:
    // 0x15b47c: 0xa202034c  sb          $v0, 0x34C($s0)
    ctx->pc = 0x15b47cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 844), (uint8_t)GPR_U32(ctx, 2));
label_15b480:
    // 0x15b480: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x15b480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15b484:
    // 0x15b484: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x15b484u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15b488:
    // 0x15b488: 0x92820a20  lbu         $v0, 0xA20($s4)
    ctx->pc = 0x15b488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2592)));
label_15b48c:
    // 0x15b48c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x15b48cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15b490:
    // 0x15b490: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_15b494:
    if (ctx->pc == 0x15B494u) {
        ctx->pc = 0x15B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B490u;
        // 0x15b494: 0x2321018  mult        $v0, $s1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B498u;
        goto label_15b498;
    }
    ctx->pc = 0x15B490u;
    {
        const bool branch_taken_0x15b490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B490u;
        // 0x15b494: 0x2321018  mult        $v0, $s1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b490) {
            ctx->pc = 0x15B470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b470;
        }
    }
    ctx->pc = 0x15B498u;
label_15b498:
    // 0x15b498: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x15b498u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
label_15b49c:
    // 0x15b49c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15b49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b4a0:
    // 0x15b4a0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x15b4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_15b4a4:
    // 0x15b4a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15b4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15b4a8:
    // 0x15b4a8: 0xc056df0  jal         func_15B7C0
label_15b4ac:
    if (ctx->pc == 0x15B4ACu) {
        ctx->pc = 0x15B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4A8u;
        // 0x15b4ac: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4B0u;
        goto label_15b4b0;
    }
    ctx->pc = 0x15B4A8u;
    SET_GPR_U32(ctx, 31, 0x15B4B0u);
    ctx->pc = 0x15B4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4A8u;
    // 0x15b4ac: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B7C0u, 0x15B4A8u, 0x15B4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4B0u;
label_15b4b0:
    // 0x15b4b0: 0xc056e1a  jal         func_15B868
label_15b4b4:
    if (ctx->pc == 0x15B4B4u) {
        ctx->pc = 0x15B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4B0u;
        // 0x15b4b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4B8u;
        goto label_15b4b8;
    }
    ctx->pc = 0x15B4B0u;
    SET_GPR_U32(ctx, 31, 0x15B4B8u);
    ctx->pc = 0x15B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4B0u;
    // 0x15b4b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B868u, 0x15B4B0u, 0x15B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4B8u;
label_15b4b8:
    // 0x15b4b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15b4b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b4bc:
    // 0x15b4bc: 0x5260002e  beql        $s3, $zero, . + 4 + (0x2E << 2)
label_15b4c0:
    if (ctx->pc == 0x15B4C0u) {
        ctx->pc = 0x15B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4BCu;
        // 0x15b4c0: 0x92820a20  lbu         $v0, 0xA20($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4C4u;
        goto label_15b4c4;
    }
    ctx->pc = 0x15B4BCu;
    {
        const bool branch_taken_0x15b4bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b4bc) {
            ctx->pc = 0x15B4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B4BCu;
            // 0x15b4c0: 0x92820a20  lbu         $v0, 0xA20($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B578u;
            goto label_15b578;
        }
    }
    ctx->pc = 0x15B4C4u;
label_15b4c4:
    // 0x15b4c4: 0x24150070  addiu       $s5, $zero, 0x70
    ctx->pc = 0x15b4c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15b4c8:
    // 0x15b4c8: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x15b4c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_15b4cc:
    // 0x15b4cc: 0x0  nop
    ctx->pc = 0x15b4ccu;
    // NOP
label_15b4d0:
    // 0x15b4d0: 0xc056e60  jal         func_15B980
label_15b4d4:
    if (ctx->pc == 0x15B4D4u) {
        ctx->pc = 0x15B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4D0u;
        // 0x15b4d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4D8u;
        goto label_15b4d8;
    }
    ctx->pc = 0x15B4D0u;
    SET_GPR_U32(ctx, 31, 0x15B4D8u);
    ctx->pc = 0x15B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4D0u;
    // 0x15b4d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B980u, 0x15B4D0u, 0x15B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4D8u;
label_15b4d8:
    // 0x15b4d8: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x15b4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15b4dc:
    // 0x15b4dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15b4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b4e0:
    // 0x15b4e0: 0x748821  addu        $s1, $v1, $s4
    ctx->pc = 0x15b4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_15b4e4:
    // 0x15b4e4: 0xc056da2  jal         func_15B688
label_15b4e8:
    if (ctx->pc == 0x15B4E8u) {
        ctx->pc = 0x15B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4E4u;
        // 0x15b4e8: 0x8e32032c  lw          $s2, 0x32C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B4ECu;
        goto label_15b4ec;
    }
    ctx->pc = 0x15B4E4u;
    SET_GPR_U32(ctx, 31, 0x15B4ECu);
    ctx->pc = 0x15B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B4E4u;
    // 0x15b4e8: 0x8e32032c  lw          $s2, 0x32C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B688u, 0x15B4E4u, 0x15B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4ECu;
label_15b4ec:
    // 0x15b4ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15b4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b4f0:
    // 0x15b4f0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x15b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_15b4f4:
    // 0x15b4f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15b4f8:
    // 0x15b4f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15b4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b4fc:
    // 0x15b4fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15b500:
    // 0x15b500: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15b500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b504:
    // 0x15b504: 0xc04d6fe  jal         func_135BF8
label_15b508:
    if (ctx->pc == 0x15B508u) {
        ctx->pc = 0x15B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B504u;
        // 0x15b508: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B50Cu;
        goto label_15b50c;
    }
    ctx->pc = 0x15B504u;
    SET_GPR_U32(ctx, 31, 0x15B50Cu);
    ctx->pc = 0x15B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B504u;
    // 0x15b508: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BF8u, 0x15B504u, 0x15B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B50Cu;
label_15b50c:
    // 0x15b50c: 0x9222034c  lbu         $v0, 0x34C($s1)
    ctx->pc = 0x15b50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 844)));
label_15b510:
    // 0x15b510: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15b510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b514:
    // 0x15b514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b518:
    // 0x15b518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b51c:
    // 0x15b51c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15b520:
    // 0x15b520: 0xc04f10c  jal         func_13C430
label_15b524:
    if (ctx->pc == 0x15B524u) {
        ctx->pc = 0x15B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B520u;
        // 0x15b524: 0xa222034c  sb          $v0, 0x34C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 844), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B528u;
        goto label_15b528;
    }
    ctx->pc = 0x15B520u;
    SET_GPR_U32(ctx, 31, 0x15B528u);
    ctx->pc = 0x15B524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B520u;
    // 0x15b524: 0xa222034c  sb          $v0, 0x34C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 844), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x15B520u, 0x15B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B528u;
label_15b528:
    // 0x15b528: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15b528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b52c:
    // 0x15b52c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15b52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b530:
    // 0x15b530: 0xc04f124  jal         func_13C490
label_15b534:
    if (ctx->pc == 0x15B534u) {
        ctx->pc = 0x15B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B530u;
        // 0x15b534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B538u;
        goto label_15b538;
    }
    ctx->pc = 0x15B530u;
    SET_GPR_U32(ctx, 31, 0x15B538u);
    ctx->pc = 0x15B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B530u;
    // 0x15b534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C490u, 0x15B530u, 0x15B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B538u;
label_15b538:
    // 0x15b538: 0x8e260324  lw          $a2, 0x324($s1)
    ctx->pc = 0x15b538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_15b53c:
    // 0x15b53c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15b53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b540:
    // 0x15b540: 0xc04f118  jal         func_13C460
label_15b544:
    if (ctx->pc == 0x15B544u) {
        ctx->pc = 0x15B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B540u;
        // 0x15b544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B548u;
        goto label_15b548;
    }
    ctx->pc = 0x15B540u;
    SET_GPR_U32(ctx, 31, 0x15B548u);
    ctx->pc = 0x15B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B540u;
    // 0x15b544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x15B540u, 0x15B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B548u;
label_15b548:
    // 0x15b548: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b54c:
    // 0x15b54c: 0xc058026  jal         func_160098
label_15b550:
    if (ctx->pc == 0x15B550u) {
        ctx->pc = 0x15B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B54Cu;
        // 0x15b550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B554u;
        goto label_15b554;
    }
    ctx->pc = 0x15B54Cu;
    SET_GPR_U32(ctx, 31, 0x15B554u);
    ctx->pc = 0x15B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B54Cu;
    // 0x15b550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160098u, 0x15B54Cu, 0x15B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B554u;
label_15b554:
    // 0x15b554: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x15b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_15b558:
    // 0x15b558: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15b558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b55c:
    // 0x15b55c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x15b55cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15b560:
    // 0x15b560: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15b560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15b564:
    // 0x15b564: 0xc056df0  jal         func_15B7C0
label_15b568:
    if (ctx->pc == 0x15B568u) {
        ctx->pc = 0x15B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B564u;
        // 0x15b568: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B56Cu;
        goto label_15b56c;
    }
    ctx->pc = 0x15B564u;
    SET_GPR_U32(ctx, 31, 0x15B56Cu);
    ctx->pc = 0x15B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B564u;
    // 0x15b568: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B7C0u, 0x15B564u, 0x15B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B56Cu;
label_15b56c:
    // 0x15b56c: 0x1660ffd8  bnez        $s3, . + 4 + (-0x28 << 2)
label_15b570:
    if (ctx->pc == 0x15B570u) {
        ctx->pc = 0x15B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B56Cu;
        // 0x15b570: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B574u;
        goto label_15b574;
    }
    ctx->pc = 0x15B56Cu;
    {
        const bool branch_taken_0x15b56c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B56Cu;
        // 0x15b570: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b56c) {
            ctx->pc = 0x15B4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b4d0;
        }
    }
    ctx->pc = 0x15B574u;
label_15b574:
    // 0x15b574: 0x92820a20  lbu         $v0, 0xA20($s4)
    ctx->pc = 0x15b574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2592)));
label_15b578:
    // 0x15b578: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x15b578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15b57c:
    // 0x15b57c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_15b580:
    if (ctx->pc == 0x15B580u) {
        ctx->pc = 0x15B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B57Cu;
        // 0x15b580: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B584u;
        goto label_15b584;
    }
    ctx->pc = 0x15B57Cu;
    {
        const bool branch_taken_0x15b57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B57Cu;
        // 0x15b580: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b57c) {
            ctx->pc = 0x15B664u;
            goto label_15b664;
        }
    }
    ctx->pc = 0x15B584u;
label_15b584:
    // 0x15b584: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x15b584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_15b588:
    // 0x15b588: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x15b588u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_15b58c:
    // 0x15b58c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15b590:
    // 0x15b590: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x15b590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_15b594:
    // 0x15b594: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_15b598:
    if (ctx->pc == 0x15B598u) {
        ctx->pc = 0x15B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B594u;
        // 0x15b598: 0x24150070  addiu       $s5, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B59Cu;
        goto label_15b59c;
    }
    ctx->pc = 0x15B594u;
    {
        const bool branch_taken_0x15b594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B594u;
        // 0x15b598: 0x24150070  addiu       $s5, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b594) {
            ctx->pc = 0x15B664u;
            goto label_15b664;
        }
    }
    ctx->pc = 0x15B59Cu;
label_15b59c:
    // 0x15b59c: 0x0  nop
    ctx->pc = 0x15b59cu;
    // NOP
label_15b5a0:
    // 0x15b5a0: 0xc056e60  jal         func_15B980
label_15b5a4:
    if (ctx->pc == 0x15B5A4u) {
        ctx->pc = 0x15B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5A0u;
        // 0x15b5a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5A8u;
        goto label_15b5a8;
    }
    ctx->pc = 0x15B5A0u;
    SET_GPR_U32(ctx, 31, 0x15B5A8u);
    ctx->pc = 0x15B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5A0u;
    // 0x15b5a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B980u, 0x15B5A0u, 0x15B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5A8u;
label_15b5a8:
    // 0x15b5a8: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x15b5a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15b5ac:
    // 0x15b5ac: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x15b5acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_15b5b0:
    // 0x15b5b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15b5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b5b4:
    // 0x15b5b4: 0x748821  addu        $s1, $v1, $s4
    ctx->pc = 0x15b5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_15b5b8:
    // 0x15b5b8: 0xc056e60  jal         func_15B980
label_15b5bc:
    if (ctx->pc == 0x15B5BCu) {
        ctx->pc = 0x15B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5B8u;
        // 0x15b5bc: 0x8e30032c  lw          $s0, 0x32C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5C0u;
        goto label_15b5c0;
    }
    ctx->pc = 0x15B5B8u;
    SET_GPR_U32(ctx, 31, 0x15B5C0u);
    ctx->pc = 0x15B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5B8u;
    // 0x15b5bc: 0x8e30032c  lw          $s0, 0x32C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B980u, 0x15B5B8u, 0x15B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5C0u;
label_15b5c0:
    // 0x15b5c0: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x15b5c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15b5c4:
    // 0x15b5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b5c8:
    // 0x15b5c8: 0x749021  addu        $s2, $v1, $s4
    ctx->pc = 0x15b5c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_15b5cc:
    // 0x15b5cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15b5d0:
    // 0x15b5d0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x15b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_15b5d4:
    // 0x15b5d4: 0x40f809  jalr        $v0
label_15b5d8:
    if (ctx->pc == 0x15B5D8u) {
        ctx->pc = 0x15B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5D4u;
        // 0x15b5d8: 0x8e53032c  lw          $s3, 0x32C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5DCu;
        goto label_15b5dc;
    }
    ctx->pc = 0x15B5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B5DCu);
        ctx->pc = 0x15B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5D4u;
        // 0x15b5d8: 0x8e53032c  lw          $s3, 0x32C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B5D4u, 0x15B5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B5DCu;
label_15b5dc:
    // 0x15b5dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15b5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b5e0:
    // 0x15b5e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15b5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b5e4:
    // 0x15b5e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b5e8:
    // 0x15b5e8: 0xc04d6fe  jal         func_135BF8
label_15b5ec:
    if (ctx->pc == 0x15B5ECu) {
        ctx->pc = 0x15B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5E8u;
        // 0x15b5ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B5F0u;
        goto label_15b5f0;
    }
    ctx->pc = 0x15B5E8u;
    SET_GPR_U32(ctx, 31, 0x15B5F0u);
    ctx->pc = 0x15B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5E8u;
    // 0x15b5ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BF8u, 0x15B5E8u, 0x15B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5F0u;
label_15b5f0:
    // 0x15b5f0: 0x9223034c  lbu         $v1, 0x34C($s1)
    ctx->pc = 0x15b5f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 844)));
label_15b5f4:
    // 0x15b5f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b5f8:
    // 0x15b5f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15b5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b5fc:
    // 0x15b5fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_15b600:
    // 0x15b600: 0xa223034c  sb          $v1, 0x34C($s1)
    ctx->pc = 0x15b600u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 844), (uint8_t)GPR_U32(ctx, 3));
label_15b604:
    // 0x15b604: 0x9242034c  lbu         $v0, 0x34C($s2)
    ctx->pc = 0x15b604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 844)));
label_15b608:
    // 0x15b608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15b60c:
    // 0x15b60c: 0xc04f750  jal         func_13DD40
label_15b610:
    if (ctx->pc == 0x15B610u) {
        ctx->pc = 0x15B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B60Cu;
        // 0x15b610: 0xa242034c  sb          $v0, 0x34C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 844), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B614u;
        goto label_15b614;
    }
    ctx->pc = 0x15B60Cu;
    SET_GPR_U32(ctx, 31, 0x15B614u);
    ctx->pc = 0x15B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B60Cu;
    // 0x15b610: 0xa242034c  sb          $v0, 0x34C($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 844), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x15B60Cu, 0x15B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B614u;
label_15b614:
    // 0x15b614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15b614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b618:
    // 0x15b618: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15b618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b61c:
    // 0x15b61c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15b61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b620:
    // 0x15b620: 0xc04f124  jal         func_13C490
label_15b624:
    if (ctx->pc == 0x15B624u) {
        ctx->pc = 0x15B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B620u;
        // 0x15b624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B628u;
        goto label_15b628;
    }
    ctx->pc = 0x15B620u;
    SET_GPR_U32(ctx, 31, 0x15B628u);
    ctx->pc = 0x15B624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B620u;
    // 0x15b624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C490u, 0x15B620u, 0x15B628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B628u;
label_15b628:
    // 0x15b628: 0x8e460324  lw          $a2, 0x324($s2)
    ctx->pc = 0x15b628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
label_15b62c:
    // 0x15b62c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b630:
    // 0x15b630: 0xc04f118  jal         func_13C460
label_15b634:
    if (ctx->pc == 0x15B634u) {
        ctx->pc = 0x15B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B630u;
        // 0x15b634: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B638u;
        goto label_15b638;
    }
    ctx->pc = 0x15B630u;
    SET_GPR_U32(ctx, 31, 0x15B638u);
    ctx->pc = 0x15B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B630u;
    // 0x15b634: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x15B630u, 0x15B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B638u;
label_15b638:
    // 0x15b638: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15b638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15b63c:
    // 0x15b63c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15b63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15b640:
    // 0x15b640: 0xc056df0  jal         func_15B7C0
label_15b644:
    if (ctx->pc == 0x15B644u) {
        ctx->pc = 0x15B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B640u;
        // 0x15b644: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B648u;
        goto label_15b648;
    }
    ctx->pc = 0x15B640u;
    SET_GPR_U32(ctx, 31, 0x15B648u);
    ctx->pc = 0x15B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B640u;
    // 0x15b644: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B7C0u, 0x15B640u, 0x15B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B648u;
label_15b648:
    // 0x15b648: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x15b648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_15b64c:
    // 0x15b64c: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x15b64cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_15b650:
    // 0x15b650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15b654:
    // 0x15b654: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x15b654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_15b658:
    // 0x15b658: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_15b65c:
    if (ctx->pc == 0x15B65Cu) {
        ctx->pc = 0x15B660u;
        goto label_15b660;
    }
    ctx->pc = 0x15B658u;
    {
        const bool branch_taken_0x15b658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b658) {
            ctx->pc = 0x15B5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b5a0;
        }
    }
    ctx->pc = 0x15B660u;
label_15b660:
    // 0x15b660: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15b660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15b664:
    // 0x15b664: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15b664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15b668:
    // 0x15b668: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15b668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15b66c:
    // 0x15b66c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15b66cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15b670:
    // 0x15b670: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15b670u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15b674:
    // 0x15b674: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15b674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15b678:
    // 0x15b678: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15b678u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15b67c:
    // 0x15b67c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x15b67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15b680:
    // 0x15b680: 0x3e00008  jr          $ra
label_15b684:
    if (ctx->pc == 0x15B684u) {
        ctx->pc = 0x15B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B680u;
        // 0x15b684: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B688u;
        goto label_fallthrough_0x15b680;
    }
    ctx->pc = 0x15B680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B680u;
        // 0x15b684: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b680:
    ctx->pc = 0x15B688u;
}
