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

// Function: sub_003993F8
// Address: 0x3993f8 - 0x399500
void sub_003993F8_0x3993f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003993F8_0x3993f8");
#endif

    switch (ctx->pc) {
        case 0x3993f8u: goto label_3993f8;
        case 0x3993fcu: goto label_3993fc;
        case 0x399400u: goto label_399400;
        case 0x399404u: goto label_399404;
        case 0x399408u: goto label_399408;
        case 0x39940cu: goto label_39940c;
        case 0x399410u: goto label_399410;
        case 0x399414u: goto label_399414;
        case 0x399418u: goto label_399418;
        case 0x39941cu: goto label_39941c;
        case 0x399420u: goto label_399420;
        case 0x399424u: goto label_399424;
        case 0x399428u: goto label_399428;
        case 0x39942cu: goto label_39942c;
        case 0x399430u: goto label_399430;
        case 0x399434u: goto label_399434;
        case 0x399438u: goto label_399438;
        case 0x39943cu: goto label_39943c;
        case 0x399440u: goto label_399440;
        case 0x399444u: goto label_399444;
        case 0x399448u: goto label_399448;
        case 0x39944cu: goto label_39944c;
        case 0x399450u: goto label_399450;
        case 0x399454u: goto label_399454;
        case 0x399458u: goto label_399458;
        case 0x39945cu: goto label_39945c;
        case 0x399460u: goto label_399460;
        case 0x399464u: goto label_399464;
        case 0x399468u: goto label_399468;
        case 0x39946cu: goto label_39946c;
        case 0x399470u: goto label_399470;
        case 0x399474u: goto label_399474;
        case 0x399478u: goto label_399478;
        case 0x39947cu: goto label_39947c;
        case 0x399480u: goto label_399480;
        case 0x399484u: goto label_399484;
        case 0x399488u: goto label_399488;
        case 0x39948cu: goto label_39948c;
        case 0x399490u: goto label_399490;
        case 0x399494u: goto label_399494;
        case 0x399498u: goto label_399498;
        case 0x39949cu: goto label_39949c;
        case 0x3994a0u: goto label_3994a0;
        case 0x3994a4u: goto label_3994a4;
        case 0x3994a8u: goto label_3994a8;
        case 0x3994acu: goto label_3994ac;
        case 0x3994b0u: goto label_3994b0;
        case 0x3994b4u: goto label_3994b4;
        case 0x3994b8u: goto label_3994b8;
        case 0x3994bcu: goto label_3994bc;
        case 0x3994c0u: goto label_3994c0;
        case 0x3994c4u: goto label_3994c4;
        case 0x3994c8u: goto label_3994c8;
        case 0x3994ccu: goto label_3994cc;
        case 0x3994d0u: goto label_3994d0;
        case 0x3994d4u: goto label_3994d4;
        case 0x3994d8u: goto label_3994d8;
        case 0x3994dcu: goto label_3994dc;
        case 0x3994e0u: goto label_3994e0;
        case 0x3994e4u: goto label_3994e4;
        case 0x3994e8u: goto label_3994e8;
        case 0x3994ecu: goto label_3994ec;
        case 0x3994f0u: goto label_3994f0;
        case 0x3994f4u: goto label_3994f4;
        case 0x3994f8u: goto label_3994f8;
        case 0x3994fcu: goto label_3994fc;
        default: break;
    }

    ctx->pc = 0x3993f8u;

label_3993f8:
    // 0x3993f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3993f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3993fc:
    // 0x3993fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3993fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_399400:
    // 0x399400: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x399400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_399404:
    // 0x399404: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x399404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_399408:
    // 0x399408: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x399408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39940c:
    // 0x39940c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_399410:
    // 0x399410: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x399410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_399414:
    // 0x399414: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x399414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_399418:
    // 0x399418: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x399418u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39941c:
    // 0x39941c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x39941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_399420:
    // 0x399420: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x399420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_399424:
    // 0x399424: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x399424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_399428:
    // 0x399428: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x399428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39942c:
    // 0x39942c: 0xc0e6a60  jal         func_39A980
label_399430:
    if (ctx->pc == 0x399430u) {
        ctx->pc = 0x399430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39942Cu;
        // 0x399430: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399434u;
        goto label_399434;
    }
    ctx->pc = 0x39942Cu;
    SET_GPR_U32(ctx, 31, 0x399434u);
    ctx->pc = 0x399430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39942Cu;
    // 0x399430: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A980u, 0x39942Cu, 0x399434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399434u;
label_399434:
    // 0x399434: 0x260707ff  addiu       $a3, $s0, 0x7FF
    ctx->pc = 0x399434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
label_399438:
    // 0x399438: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x399438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_39943c:
    // 0x39943c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x39943cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399440:
    // 0x399440: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x399440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_399444:
    // 0x399444: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x399444u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_399448:
    // 0x399448: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x399448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_39944c:
    // 0x39944c: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x39944cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_399450:
    // 0x399450: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x399450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_399454:
    // 0x399454: 0x312c0  sll         $v0, $v1, 11
    ctx->pc = 0x399454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_399458:
    // 0x399458: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x399458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39945c:
    // 0x39945c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x39945cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_399460:
    // 0x399460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x399460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399464:
    // 0x399464: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x399464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_399468:
    // 0x399468: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x399468u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_39946c:
    // 0x39946c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39946cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_399470:
    // 0x399470: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x399470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
label_399474:
    // 0x399474: 0xae670030  sw          $a3, 0x30($s3)
    ctx->pc = 0x399474u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 7));
label_399478:
    // 0x399478: 0xae660060  sw          $a2, 0x60($s3)
    ctx->pc = 0x399478u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 6));
label_39947c:
    // 0x39947c: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x39947cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
label_399480:
    // 0x399480: 0xa2750001  sb          $s5, 0x1($s3)
    ctx->pc = 0x399480u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 21));
label_399484:
    // 0x399484: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x399484u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_399488:
    // 0x399488: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x399488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_39948c:
    // 0x39948c: 0xfe700010  sd          $s0, 0x10($s3)
    ctx->pc = 0x39948cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 16));
label_399490:
    // 0x399490: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x399490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_399494:
    // 0x399494: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_399498:
    if (ctx->pc == 0x399498u) {
        ctx->pc = 0x399498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399494u;
        // 0x399498: 0xae60005c  sw          $zero, 0x5C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39949Cu;
        goto label_39949c;
    }
    ctx->pc = 0x399494u;
    {
        const bool branch_taken_0x399494 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x399498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399494u;
        // 0x399498: 0xae60005c  sw          $zero, 0x5C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399494) {
            ctx->pc = 0x3994D4u;
            goto label_3994d4;
        }
    }
    ctx->pc = 0x39949Cu;
label_39949c:
    // 0x39949c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x39949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3994a0:
    // 0x3994a0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3994a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3994a4:
    // 0x3994a4: 0x40f809  jalr        $v0
label_3994a8:
    if (ctx->pc == 0x3994A8u) {
        ctx->pc = 0x3994ACu;
        goto label_3994ac;
    }
    ctx->pc = 0x3994A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3994ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3994A4u, 0x3994ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3994ACu;
label_3994ac:
    // 0x3994ac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3994acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3994b0:
    // 0x3994b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3994b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3994b4:
    // 0x3994b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3994b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3994b8:
    // 0x3994b8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3994b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3994bc:
    // 0x3994bc: 0x40f809  jalr        $v0
label_3994c0:
    if (ctx->pc == 0x3994C0u) {
        ctx->pc = 0x3994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994BCu;
        // 0x3994c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3994C4u;
        goto label_3994c4;
    }
    ctx->pc = 0x3994BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3994C4u);
        ctx->pc = 0x3994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994BCu;
        // 0x3994c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3994BCu, 0x3994C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3994C4u;
label_3994c4:
    // 0x3994c4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3994c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3994c8:
    // 0x3994c8: 0xae700020  sw          $s0, 0x20($s3)
    ctx->pc = 0x3994c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 16));
label_3994cc:
    // 0x3994cc: 0xae700044  sw          $s0, 0x44($s3)
    ctx->pc = 0x3994ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 16));
label_3994d0:
    // 0x3994d0: 0xae70001c  sw          $s0, 0x1C($s3)
    ctx->pc = 0x3994d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 16));
label_3994d4:
    // 0x3994d4: 0xa2750000  sb          $s5, 0x0($s3)
    ctx->pc = 0x3994d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 21));
label_3994d8:
    // 0x3994d8: 0xa2600048  sb          $zero, 0x48($s3)
    ctx->pc = 0x3994d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 0));
label_3994dc:
    // 0x3994dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3994dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3994e0:
    // 0x3994e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3994e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3994e4:
    // 0x3994e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3994e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3994e8:
    // 0x3994e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3994e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3994ec:
    // 0x3994ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3994ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3994f0:
    // 0x3994f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3994f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3994f4:
    // 0x3994f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3994f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3994f8:
    // 0x3994f8: 0x80e6a66  j           func_39A998
label_3994fc:
    if (ctx->pc == 0x3994FCu) {
        ctx->pc = 0x3994FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994F8u;
        // 0x3994fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399500u;
        goto label_fallthrough_0x3994f8;
    }
    ctx->pc = 0x3994F8u;
    ctx->pc = 0x3994FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3994F8u;
    // 0x3994fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    sub_0039A998_0x39a998(rdram, ctx, runtime); return;
label_fallthrough_0x3994f8:
    ctx->pc = 0x399500u;
}
