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

// Function: sub_00139408
// Address: 0x139408 - 0x1395a8
void sub_00139408_0x139408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139408_0x139408");
#endif

    switch (ctx->pc) {
        case 0x139408u: goto label_139408;
        case 0x13940cu: goto label_13940c;
        case 0x139410u: goto label_139410;
        case 0x139414u: goto label_139414;
        case 0x139418u: goto label_139418;
        case 0x13941cu: goto label_13941c;
        case 0x139420u: goto label_139420;
        case 0x139424u: goto label_139424;
        case 0x139428u: goto label_139428;
        case 0x13942cu: goto label_13942c;
        case 0x139430u: goto label_139430;
        case 0x139434u: goto label_139434;
        case 0x139438u: goto label_139438;
        case 0x13943cu: goto label_13943c;
        case 0x139440u: goto label_139440;
        case 0x139444u: goto label_139444;
        case 0x139448u: goto label_139448;
        case 0x13944cu: goto label_13944c;
        case 0x139450u: goto label_139450;
        case 0x139454u: goto label_139454;
        case 0x139458u: goto label_139458;
        case 0x13945cu: goto label_13945c;
        case 0x139460u: goto label_139460;
        case 0x139464u: goto label_139464;
        case 0x139468u: goto label_139468;
        case 0x13946cu: goto label_13946c;
        case 0x139470u: goto label_139470;
        case 0x139474u: goto label_139474;
        case 0x139478u: goto label_139478;
        case 0x13947cu: goto label_13947c;
        case 0x139480u: goto label_139480;
        case 0x139484u: goto label_139484;
        case 0x139488u: goto label_139488;
        case 0x13948cu: goto label_13948c;
        case 0x139490u: goto label_139490;
        case 0x139494u: goto label_139494;
        case 0x139498u: goto label_139498;
        case 0x13949cu: goto label_13949c;
        case 0x1394a0u: goto label_1394a0;
        case 0x1394a4u: goto label_1394a4;
        case 0x1394a8u: goto label_1394a8;
        case 0x1394acu: goto label_1394ac;
        case 0x1394b0u: goto label_1394b0;
        case 0x1394b4u: goto label_1394b4;
        case 0x1394b8u: goto label_1394b8;
        case 0x1394bcu: goto label_1394bc;
        case 0x1394c0u: goto label_1394c0;
        case 0x1394c4u: goto label_1394c4;
        case 0x1394c8u: goto label_1394c8;
        case 0x1394ccu: goto label_1394cc;
        case 0x1394d0u: goto label_1394d0;
        case 0x1394d4u: goto label_1394d4;
        case 0x1394d8u: goto label_1394d8;
        case 0x1394dcu: goto label_1394dc;
        case 0x1394e0u: goto label_1394e0;
        case 0x1394e4u: goto label_1394e4;
        case 0x1394e8u: goto label_1394e8;
        case 0x1394ecu: goto label_1394ec;
        case 0x1394f0u: goto label_1394f0;
        case 0x1394f4u: goto label_1394f4;
        case 0x1394f8u: goto label_1394f8;
        case 0x1394fcu: goto label_1394fc;
        case 0x139500u: goto label_139500;
        case 0x139504u: goto label_139504;
        case 0x139508u: goto label_139508;
        case 0x13950cu: goto label_13950c;
        case 0x139510u: goto label_139510;
        case 0x139514u: goto label_139514;
        case 0x139518u: goto label_139518;
        case 0x13951cu: goto label_13951c;
        case 0x139520u: goto label_139520;
        case 0x139524u: goto label_139524;
        case 0x139528u: goto label_139528;
        case 0x13952cu: goto label_13952c;
        case 0x139530u: goto label_139530;
        case 0x139534u: goto label_139534;
        case 0x139538u: goto label_139538;
        case 0x13953cu: goto label_13953c;
        case 0x139540u: goto label_139540;
        case 0x139544u: goto label_139544;
        case 0x139548u: goto label_139548;
        case 0x13954cu: goto label_13954c;
        case 0x139550u: goto label_139550;
        case 0x139554u: goto label_139554;
        case 0x139558u: goto label_139558;
        case 0x13955cu: goto label_13955c;
        case 0x139560u: goto label_139560;
        case 0x139564u: goto label_139564;
        case 0x139568u: goto label_139568;
        case 0x13956cu: goto label_13956c;
        case 0x139570u: goto label_139570;
        case 0x139574u: goto label_139574;
        case 0x139578u: goto label_139578;
        case 0x13957cu: goto label_13957c;
        case 0x139580u: goto label_139580;
        case 0x139584u: goto label_139584;
        case 0x139588u: goto label_139588;
        case 0x13958cu: goto label_13958c;
        case 0x139590u: goto label_139590;
        case 0x139594u: goto label_139594;
        case 0x139598u: goto label_139598;
        case 0x13959cu: goto label_13959c;
        case 0x1395a0u: goto label_1395a0;
        case 0x1395a4u: goto label_1395a4;
        default: break;
    }

    ctx->pc = 0x139408u;

label_139408:
    // 0x139408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13940c:
    // 0x13940c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_139410:
    // 0x139410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_139414:
    // 0x139414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x139414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_139418:
    // 0x139418: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x139418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13941c:
    // 0x13941c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_139420:
    // 0x139420: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_139424:
    // 0x139424: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x139424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_139428:
    // 0x139428: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
label_13942c:
    if (ctx->pc == 0x13942Cu) {
        ctx->pc = 0x13942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139428u;
        // 0x13942c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139430u;
        goto label_139430;
    }
    ctx->pc = 0x139428u;
    {
        const bool branch_taken_0x139428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139428) {
            ctx->pc = 0x13942Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139428u;
            // 0x13942c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13958Cu;
            goto label_13958c;
        }
    }
    ctx->pc = 0x139430u;
label_139430:
    // 0x139430: 0xc04ee04  jal         func_13B810
label_139434:
    if (ctx->pc == 0x139434u) {
        ctx->pc = 0x139438u;
        goto label_139438;
    }
    ctx->pc = 0x139430u;
    SET_GPR_U32(ctx, 31, 0x139438u);
    ctx->pc = 0x13B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B810u, 0x139430u, 0x139438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139438u;
label_139438:
    // 0x139438: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x139438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13943c:
    // 0x13943c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x13943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_139440:
    // 0x139440: 0x60f809  jalr        $v1
label_139444:
    if (ctx->pc == 0x139444u) {
        ctx->pc = 0x139444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139440u;
        // 0x139444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139448u;
        goto label_139448;
    }
    ctx->pc = 0x139440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x139448u);
        ctx->pc = 0x139444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139440u;
        // 0x139444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139440u, 0x139448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139448u;
label_139448:
    // 0x139448: 0xc04db02  jal         func_136C08
label_13944c:
    if (ctx->pc == 0x13944Cu) {
        ctx->pc = 0x13944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139448u;
        // 0x13944c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139450u;
        goto label_139450;
    }
    ctx->pc = 0x139448u;
    SET_GPR_U32(ctx, 31, 0x139450u);
    ctx->pc = 0x13944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139448u;
    // 0x13944c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x139448u, 0x139450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139450u;
label_139450:
    // 0x139450: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x139450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_139454:
    // 0x139454: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_139458:
    if (ctx->pc == 0x139458u) {
        ctx->pc = 0x139458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139454u;
        // 0x139458: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13945Cu;
        goto label_13945c;
    }
    ctx->pc = 0x139454u;
    {
        const bool branch_taken_0x139454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139454u;
        // 0x139458: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139454) {
            ctx->pc = 0x139464u;
            goto label_139464;
        }
    }
    ctx->pc = 0x13945Cu;
label_13945c:
    // 0x13945c: 0xc049620  jal         func_125880
label_139460:
    if (ctx->pc == 0x139460u) {
        ctx->pc = 0x139460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13945Cu;
        // 0x139460: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139464u;
        goto label_139464;
    }
    ctx->pc = 0x13945Cu;
    SET_GPR_U32(ctx, 31, 0x139464u);
    ctx->pc = 0x139460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13945Cu;
    // 0x139460: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125880u, 0x13945Cu, 0x139464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139464u;
label_139464:
    // 0x139464: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x139464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_139468:
    // 0x139468: 0xa200046c  sb          $zero, 0x46C($s0)
    ctx->pc = 0x139468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
label_13946c:
    // 0x13946c: 0x24539c14  addiu       $s3, $v0, -0x63EC
    ctx->pc = 0x13946cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
label_139470:
    // 0x139470: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x139470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139474:
    // 0x139474: 0x0  nop
    ctx->pc = 0x139474u;
    // NOP
label_139478:
    // 0x139478: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x139478u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_13947c:
    // 0x13947c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_139480:
    // 0x139480: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x139480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_139484:
    // 0x139484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x139484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_139488:
    // 0x139488: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x139488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13948c:
    // 0x13948c: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
label_139490:
    if (ctx->pc == 0x139490u) {
        ctx->pc = 0x139490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13948Cu;
        // 0x139490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139494u;
        goto label_139494;
    }
    ctx->pc = 0x13948Cu;
    {
        const bool branch_taken_0x13948c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x139490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13948Cu;
        // 0x139490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13948c) {
            ctx->pc = 0x139560u;
            goto label_139560;
        }
    }
    ctx->pc = 0x139494u;
label_139494:
    // 0x139494: 0xc04e896  jal         func_13A258
label_139498:
    if (ctx->pc == 0x139498u) {
        ctx->pc = 0x139498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139494u;
        // 0x139498: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13949Cu;
        goto label_13949c;
    }
    ctx->pc = 0x139494u;
    SET_GPR_U32(ctx, 31, 0x13949Cu);
    ctx->pc = 0x139498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139494u;
    // 0x139498: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A258u, 0x139494u, 0x13949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13949Cu;
label_13949c:
    // 0x13949c: 0xc04e7b4  jal         func_139ED0
label_1394a0:
    if (ctx->pc == 0x1394A0u) {
        ctx->pc = 0x1394A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13949Cu;
        // 0x1394a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1394A4u;
        goto label_1394a4;
    }
    ctx->pc = 0x13949Cu;
    SET_GPR_U32(ctx, 31, 0x1394A4u);
    ctx->pc = 0x1394A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13949Cu;
    // 0x1394a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139ED0u, 0x13949Cu, 0x1394A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1394A4u;
label_1394a4:
    // 0x1394a4: 0xc04ee62  jal         func_13B988
label_1394a8:
    if (ctx->pc == 0x1394A8u) {
        ctx->pc = 0x1394A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394A4u;
        // 0x1394a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1394ACu;
        goto label_1394ac;
    }
    ctx->pc = 0x1394A4u;
    SET_GPR_U32(ctx, 31, 0x1394ACu);
    ctx->pc = 0x1394A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1394A4u;
    // 0x1394a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B988u, 0x1394A4u, 0x1394ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1394ACu;
label_1394ac:
    // 0x1394ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1394b0:
    if (ctx->pc == 0x1394B0u) {
        ctx->pc = 0x1394B4u;
        goto label_1394b4;
    }
    ctx->pc = 0x1394ACu;
    {
        const bool branch_taken_0x1394ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1394ac) {
            ctx->pc = 0x1394F0u;
            goto label_1394f0;
        }
    }
    ctx->pc = 0x1394B4u;
label_1394b4:
    // 0x1394b4: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1394b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1394b8:
    // 0x1394b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1394b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1394bc:
    // 0x1394bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1394bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1394c0:
    // 0x1394c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1394c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1394c4:
    // 0x1394c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1394c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1394c8:
    // 0x1394c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1394c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1394cc:
    // 0x1394cc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1394ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1394d0:
    // 0x1394d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1394d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1394d4:
    // 0x1394d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1394d8:
    if (ctx->pc == 0x1394D8u) {
        ctx->pc = 0x1394D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394D4u;
        // 0x1394d8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1394DCu;
        goto label_1394dc;
    }
    ctx->pc = 0x1394D4u;
    {
        const bool branch_taken_0x1394d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1394D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394D4u;
        // 0x1394d8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1394d4) {
            ctx->pc = 0x1394E4u;
            goto label_1394e4;
        }
    }
    ctx->pc = 0x1394DCu;
label_1394dc:
    // 0x1394dc: 0xc043fee  jal         func_10FFB8
label_1394e0:
    if (ctx->pc == 0x1394E0u) {
        ctx->pc = 0x1394E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394DCu;
        // 0x1394e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1394E4u;
        goto label_1394e4;
    }
    ctx->pc = 0x1394DCu;
    SET_GPR_U32(ctx, 31, 0x1394E4u);
    ctx->pc = 0x1394E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1394DCu;
    // 0x1394e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFB8u, 0x1394DCu, 0x1394E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1394E4u;
label_1394e4:
    // 0x1394e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1394e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1394e8:
    // 0x1394e8: 0xc04ecde  jal         func_13B378
label_1394ec:
    if (ctx->pc == 0x1394ECu) {
        ctx->pc = 0x1394ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394E8u;
        // 0x1394ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1394F0u;
        goto label_1394f0;
    }
    ctx->pc = 0x1394E8u;
    SET_GPR_U32(ctx, 31, 0x1394F0u);
    ctx->pc = 0x1394ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1394E8u;
    // 0x1394ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B378u, 0x1394E8u, 0x1394F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1394F0u;
label_1394f0:
    // 0x1394f0: 0xc04e624  jal         func_139890
label_1394f4:
    if (ctx->pc == 0x1394F4u) {
        ctx->pc = 0x1394F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394F0u;
        // 0x1394f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1394F8u;
        goto label_1394f8;
    }
    ctx->pc = 0x1394F0u;
    SET_GPR_U32(ctx, 31, 0x1394F8u);
    ctx->pc = 0x1394F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1394F0u;
    // 0x1394f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139890u, 0x1394F0u, 0x1394F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1394F8u;
label_1394f8:
    // 0x1394f8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1394fc:
    if (ctx->pc == 0x1394FCu) {
        ctx->pc = 0x1394FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394F8u;
        // 0x1394fc: 0x8e050ab0  lw          $a1, 0xAB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139500u;
        goto label_139500;
    }
    ctx->pc = 0x1394F8u;
    {
        const bool branch_taken_0x1394f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1394f8) {
            ctx->pc = 0x1394FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1394F8u;
            // 0x1394fc: 0x8e050ab0  lw          $a1, 0xAB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13952Cu;
            goto label_13952c;
        }
    }
    ctx->pc = 0x139500u;
label_139500:
    // 0x139500: 0xc04e586  jal         func_139618
label_139504:
    if (ctx->pc == 0x139504u) {
        ctx->pc = 0x139504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139500u;
        // 0x139504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139508u;
        goto label_139508;
    }
    ctx->pc = 0x139500u;
    SET_GPR_U32(ctx, 31, 0x139508u);
    ctx->pc = 0x139504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139500u;
    // 0x139504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139618u, 0x139500u, 0x139508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139508u;
label_139508:
    // 0x139508: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_13950c:
    if (ctx->pc == 0x13950Cu) {
        ctx->pc = 0x13950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139508u;
        // 0x13950c: 0x8e050ab0  lw          $a1, 0xAB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139510u;
        goto label_139510;
    }
    ctx->pc = 0x139508u;
    {
        const bool branch_taken_0x139508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139508) {
            ctx->pc = 0x13950Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139508u;
            // 0x13950c: 0x8e050ab0  lw          $a1, 0xAB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13952Cu;
            goto label_13952c;
        }
    }
    ctx->pc = 0x139510u;
label_139510:
    // 0x139510: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_139514:
    if (ctx->pc == 0x139514u) {
        ctx->pc = 0x139514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139510u;
        // 0x139514: 0x8e050ab0  lw          $a1, 0xAB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139518u;
        goto label_139518;
    }
    ctx->pc = 0x139510u;
    {
        const bool branch_taken_0x139510 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x139510) {
            ctx->pc = 0x139514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139510u;
            // 0x139514: 0x8e050ab0  lw          $a1, 0xAB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13952Cu;
            goto label_13952c;
        }
    }
    ctx->pc = 0x139518u;
label_139518:
    // 0x139518: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x139518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13951c:
    // 0x13951c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x13951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_139520:
    // 0x139520: 0x40f809  jalr        $v0
label_139524:
    if (ctx->pc == 0x139524u) {
        ctx->pc = 0x139524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139520u;
        // 0x139524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139528u;
        goto label_139528;
    }
    ctx->pc = 0x139520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139528u);
        ctx->pc = 0x139524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139520u;
        // 0x139524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139520u, 0x139528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139528u;
label_139528:
    // 0x139528: 0x8e050ab0  lw          $a1, 0xAB0($s0)
    ctx->pc = 0x139528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
label_13952c:
    // 0x13952c: 0xc04d80c  jal         func_136030
label_139530:
    if (ctx->pc == 0x139530u) {
        ctx->pc = 0x139530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13952Cu;
        // 0x139530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139534u;
        goto label_139534;
    }
    ctx->pc = 0x13952Cu;
    SET_GPR_U32(ctx, 31, 0x139534u);
    ctx->pc = 0x139530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13952Cu;
    // 0x139530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x13952Cu, 0x139534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139534u;
label_139534:
    // 0x139534: 0xc04e77e  jal         func_139DF8
label_139538:
    if (ctx->pc == 0x139538u) {
        ctx->pc = 0x139538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139534u;
        // 0x139538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13953Cu;
        goto label_13953c;
    }
    ctx->pc = 0x139534u;
    SET_GPR_U32(ctx, 31, 0x13953Cu);
    ctx->pc = 0x139538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139534u;
    // 0x139538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139DF8u, 0x139534u, 0x13953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13953Cu;
label_13953c:
    // 0x13953c: 0xc04d832  jal         func_1360C8
label_139540:
    if (ctx->pc == 0x139540u) {
        ctx->pc = 0x139540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13953Cu;
        // 0x139540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139544u;
        goto label_139544;
    }
    ctx->pc = 0x13953Cu;
    SET_GPR_U32(ctx, 31, 0x139544u);
    ctx->pc = 0x139540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13953Cu;
    // 0x139540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1360C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1360C8u, 0x13953Cu, 0x139544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139544u;
label_139544:
    // 0x139544: 0xc04e7d6  jal         func_139F58
label_139548:
    if (ctx->pc == 0x139548u) {
        ctx->pc = 0x139548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139544u;
        // 0x139548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13954Cu;
        goto label_13954c;
    }
    ctx->pc = 0x139544u;
    SET_GPR_U32(ctx, 31, 0x13954Cu);
    ctx->pc = 0x139548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139544u;
    // 0x139548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139F58u, 0x139544u, 0x13954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13954Cu;
label_13954c:
    // 0x13954c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x13954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_139550:
    // 0x139550: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x139550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_139554:
    // 0x139554: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x139554u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_139558:
    // 0x139558: 0x52430008  beql        $s2, $v1, . + 4 + (0x8 << 2)
label_13955c:
    if (ctx->pc == 0x13955Cu) {
        ctx->pc = 0x13955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139558u;
        // 0x13955c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139560u;
        goto label_139560;
    }
    ctx->pc = 0x139558u;
    {
        const bool branch_taken_0x139558 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x139558) {
            ctx->pc = 0x13955Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139558u;
            // 0x13955c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13957Cu;
            goto label_13957c;
        }
    }
    ctx->pc = 0x139560u;
label_139560:
    // 0x139560: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x139560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_139564:
    // 0x139564: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_139568:
    // 0x139568: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x139568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13956c:
    // 0x13956c: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x13956cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_139570:
    // 0x139570: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
label_139574:
    if (ctx->pc == 0x139574u) {
        ctx->pc = 0x139574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139570u;
        // 0x139574: 0xa202046c  sb          $v0, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139578u;
        goto label_139578;
    }
    ctx->pc = 0x139570u;
    {
        const bool branch_taken_0x139570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x139574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139570u;
        // 0x139574: 0xa202046c  sb          $v0, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139570) {
            ctx->pc = 0x139478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139478;
        }
    }
    ctx->pc = 0x139578u;
label_139578:
    // 0x139578: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x139578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13957c:
    // 0x13957c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x13957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_139580:
    // 0x139580: 0x40f809  jalr        $v0
label_139584:
    if (ctx->pc == 0x139584u) {
        ctx->pc = 0x139584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139580u;
        // 0x139584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139588u;
        goto label_139588;
    }
    ctx->pc = 0x139580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139588u);
        ctx->pc = 0x139584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139580u;
        // 0x139584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139580u, 0x139588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139588u;
label_139588:
    // 0x139588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13958c:
    // 0x13958c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13958cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_139590:
    // 0x139590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_139594:
    // 0x139594: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x139594u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_139598:
    // 0x139598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13959c:
    // 0x13959c: 0x3e00008  jr          $ra
label_1395a0:
    if (ctx->pc == 0x1395A0u) {
        ctx->pc = 0x1395A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13959Cu;
        // 0x1395a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1395A4u;
        goto label_1395a4;
    }
    ctx->pc = 0x13959Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1395A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13959Cu;
        // 0x1395a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13959Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1395A4u;
label_1395a4:
    // 0x1395a4: 0x0  nop
    ctx->pc = 0x1395a4u;
    // NOP
    ctx->pc = 0x1395a8u;
}
