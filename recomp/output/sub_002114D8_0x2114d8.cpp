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

// Function: sub_002114D8
// Address: 0x2114d8 - 0x2116a8
void sub_002114D8_0x2114d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002114D8_0x2114d8");
#endif

    switch (ctx->pc) {
        case 0x2114d8u: goto label_2114d8;
        case 0x2114dcu: goto label_2114dc;
        case 0x2114e0u: goto label_2114e0;
        case 0x2114e4u: goto label_2114e4;
        case 0x2114e8u: goto label_2114e8;
        case 0x2114ecu: goto label_2114ec;
        case 0x2114f0u: goto label_2114f0;
        case 0x2114f4u: goto label_2114f4;
        case 0x2114f8u: goto label_2114f8;
        case 0x2114fcu: goto label_2114fc;
        case 0x211500u: goto label_211500;
        case 0x211504u: goto label_211504;
        case 0x211508u: goto label_211508;
        case 0x21150cu: goto label_21150c;
        case 0x211510u: goto label_211510;
        case 0x211514u: goto label_211514;
        case 0x211518u: goto label_211518;
        case 0x21151cu: goto label_21151c;
        case 0x211520u: goto label_211520;
        case 0x211524u: goto label_211524;
        case 0x211528u: goto label_211528;
        case 0x21152cu: goto label_21152c;
        case 0x211530u: goto label_211530;
        case 0x211534u: goto label_211534;
        case 0x211538u: goto label_211538;
        case 0x21153cu: goto label_21153c;
        case 0x211540u: goto label_211540;
        case 0x211544u: goto label_211544;
        case 0x211548u: goto label_211548;
        case 0x21154cu: goto label_21154c;
        case 0x211550u: goto label_211550;
        case 0x211554u: goto label_211554;
        case 0x211558u: goto label_211558;
        case 0x21155cu: goto label_21155c;
        case 0x211560u: goto label_211560;
        case 0x211564u: goto label_211564;
        case 0x211568u: goto label_211568;
        case 0x21156cu: goto label_21156c;
        case 0x211570u: goto label_211570;
        case 0x211574u: goto label_211574;
        case 0x211578u: goto label_211578;
        case 0x21157cu: goto label_21157c;
        case 0x211580u: goto label_211580;
        case 0x211584u: goto label_211584;
        case 0x211588u: goto label_211588;
        case 0x21158cu: goto label_21158c;
        case 0x211590u: goto label_211590;
        case 0x211594u: goto label_211594;
        case 0x211598u: goto label_211598;
        case 0x21159cu: goto label_21159c;
        case 0x2115a0u: goto label_2115a0;
        case 0x2115a4u: goto label_2115a4;
        case 0x2115a8u: goto label_2115a8;
        case 0x2115acu: goto label_2115ac;
        case 0x2115b0u: goto label_2115b0;
        case 0x2115b4u: goto label_2115b4;
        case 0x2115b8u: goto label_2115b8;
        case 0x2115bcu: goto label_2115bc;
        case 0x2115c0u: goto label_2115c0;
        case 0x2115c4u: goto label_2115c4;
        case 0x2115c8u: goto label_2115c8;
        case 0x2115ccu: goto label_2115cc;
        case 0x2115d0u: goto label_2115d0;
        case 0x2115d4u: goto label_2115d4;
        case 0x2115d8u: goto label_2115d8;
        case 0x2115dcu: goto label_2115dc;
        case 0x2115e0u: goto label_2115e0;
        case 0x2115e4u: goto label_2115e4;
        case 0x2115e8u: goto label_2115e8;
        case 0x2115ecu: goto label_2115ec;
        case 0x2115f0u: goto label_2115f0;
        case 0x2115f4u: goto label_2115f4;
        case 0x2115f8u: goto label_2115f8;
        case 0x2115fcu: goto label_2115fc;
        case 0x211600u: goto label_211600;
        case 0x211604u: goto label_211604;
        case 0x211608u: goto label_211608;
        case 0x21160cu: goto label_21160c;
        case 0x211610u: goto label_211610;
        case 0x211614u: goto label_211614;
        case 0x211618u: goto label_211618;
        case 0x21161cu: goto label_21161c;
        case 0x211620u: goto label_211620;
        case 0x211624u: goto label_211624;
        case 0x211628u: goto label_211628;
        case 0x21162cu: goto label_21162c;
        case 0x211630u: goto label_211630;
        case 0x211634u: goto label_211634;
        case 0x211638u: goto label_211638;
        case 0x21163cu: goto label_21163c;
        case 0x211640u: goto label_211640;
        case 0x211644u: goto label_211644;
        case 0x211648u: goto label_211648;
        case 0x21164cu: goto label_21164c;
        case 0x211650u: goto label_211650;
        case 0x211654u: goto label_211654;
        case 0x211658u: goto label_211658;
        case 0x21165cu: goto label_21165c;
        case 0x211660u: goto label_211660;
        case 0x211664u: goto label_211664;
        case 0x211668u: goto label_211668;
        case 0x21166cu: goto label_21166c;
        case 0x211670u: goto label_211670;
        case 0x211674u: goto label_211674;
        case 0x211678u: goto label_211678;
        case 0x21167cu: goto label_21167c;
        case 0x211680u: goto label_211680;
        case 0x211684u: goto label_211684;
        case 0x211688u: goto label_211688;
        case 0x21168cu: goto label_21168c;
        case 0x211690u: goto label_211690;
        case 0x211694u: goto label_211694;
        case 0x211698u: goto label_211698;
        case 0x21169cu: goto label_21169c;
        case 0x2116a0u: goto label_2116a0;
        case 0x2116a4u: goto label_2116a4;
        default: break;
    }

    ctx->pc = 0x2114d8u;

label_2114d8:
    // 0x2114d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2114d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2114dc:
    // 0x2114dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2114dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2114e0:
    // 0x2114e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2114e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2114e4:
    // 0x2114e4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2114e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_2114e8:
    // 0x2114e8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2114e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2114ec:
    // 0x2114ec: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2114ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2114f0:
    // 0x2114f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2114f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2114f4:
    // 0x2114f4: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2114f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_2114f8:
    // 0x2114f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2114f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2114fc:
    // 0x2114fc: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2114fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_211500:
    // 0x211500: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x211500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_211504:
    // 0x211504: 0x8c62961c  lw          $v0, -0x69E4($v1)
    ctx->pc = 0x211504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940188)));
label_211508:
    // 0x211508: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21150c:
    if (ctx->pc == 0x21150Cu) {
        ctx->pc = 0x21150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211508u;
        // 0x21150c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211510u;
        goto label_211510;
    }
    ctx->pc = 0x211508u;
    {
        const bool branch_taken_0x211508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211508u;
        // 0x21150c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211508) {
            ctx->pc = 0x211518u;
            goto label_211518;
        }
    }
    ctx->pc = 0x211510u;
label_211510:
    // 0x211510: 0x56000018  bnel        $s0, $zero, . + 4 + (0x18 << 2)
label_211514:
    if (ctx->pc == 0x211514u) {
        ctx->pc = 0x211514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211510u;
        // 0x211514: 0xc603000c  lwc1        $f3, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x211518u;
        goto label_211518;
    }
    ctx->pc = 0x211510u;
    {
        const bool branch_taken_0x211510 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x211510) {
            ctx->pc = 0x211514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211510u;
            // 0x211514: 0xc603000c  lwc1        $f3, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x211574u;
            goto label_211574;
        }
    }
    ctx->pc = 0x211518u;
label_211518:
    // 0x211518: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x211518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_21151c:
    // 0x21151c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21151cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_211520:
    // 0x211520: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x211520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_211524:
    // 0x211524: 0xc0b1612  jal         func_2C5848
label_211528:
    if (ctx->pc == 0x211528u) {
        ctx->pc = 0x211528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211524u;
        // 0x211528: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21152Cu;
        goto label_21152c;
    }
    ctx->pc = 0x211524u;
    SET_GPR_U32(ctx, 31, 0x21152Cu);
    ctx->pc = 0x211528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211524u;
    // 0x211528: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5848u, 0x211524u, 0x21152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21152Cu;
label_21152c:
    // 0x21152c: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_211530:
    if (ctx->pc == 0x211530u) {
        ctx->pc = 0x211530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21152Cu;
        // 0x211530: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211534u;
        goto label_211534;
    }
    ctx->pc = 0x21152Cu;
    {
        const bool branch_taken_0x21152c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x211530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21152Cu;
        // 0x211530: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21152c) {
            ctx->pc = 0x2115B8u;
            goto label_2115b8;
        }
    }
    ctx->pc = 0x211534u;
label_211534:
    // 0x211534: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x211534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_211538:
    // 0x211538: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x211538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21153c:
    // 0x21153c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x21153cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_211540:
    // 0x211540: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x211540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_211544:
    // 0x211544: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x211544u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_211548:
    // 0x211548: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x211548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21154c:
    // 0x21154c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x21154cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_211550:
    // 0x211550: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x211550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_211554:
    // 0x211554: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x211554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_211558:
    // 0x211558: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x211558u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_21155c:
    // 0x21155c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x21155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_211560:
    // 0x211560: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x211560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_211564:
    // 0x211564: 0xc0b1972  jal         func_2C65C8
label_211568:
    if (ctx->pc == 0x211568u) {
        ctx->pc = 0x211568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211564u;
        // 0x211568: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21156Cu;
        goto label_21156c;
    }
    ctx->pc = 0x211564u;
    SET_GPR_U32(ctx, 31, 0x21156Cu);
    ctx->pc = 0x211568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211564u;
    // 0x211568: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x211564u, 0x21156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21156Cu;
label_21156c:
    // 0x21156c: 0x10000013  b           . + 4 + (0x13 << 2)
label_211570:
    if (ctx->pc == 0x211570u) {
        ctx->pc = 0x211570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21156Cu;
        // 0x211570: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211574u;
        goto label_211574;
    }
    ctx->pc = 0x21156Cu;
    {
        const bool branch_taken_0x21156c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21156Cu;
        // 0x211570: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21156c) {
            ctx->pc = 0x2115BCu;
            goto label_2115bc;
        }
    }
    ctx->pc = 0x211574u;
label_211574:
    // 0x211574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x211574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_211578:
    // 0x211578: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x211578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21157c:
    // 0x21157c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x21157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_211580:
    // 0x211580: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x211580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_211584:
    // 0x211584: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x211584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_211588:
    // 0x211588: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x211588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_21158c:
    // 0x21158c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x21158cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_211590:
    // 0x211590: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x211590u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_211594:
    // 0x211594: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x211594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_211598:
    // 0x211598: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x211598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21159c:
    // 0x21159c: 0xc0b1972  jal         func_2C65C8
label_2115a0:
    if (ctx->pc == 0x2115A0u) {
        ctx->pc = 0x2115A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21159Cu;
        // 0x2115a0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2115A4u;
        goto label_2115a4;
    }
    ctx->pc = 0x21159Cu;
    SET_GPR_U32(ctx, 31, 0x2115A4u);
    ctx->pc = 0x2115A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21159Cu;
    // 0x2115a0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x21159Cu, 0x2115A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2115A4u;
label_2115a4:
    // 0x2115a4: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2115a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2115a8:
    // 0x2115a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2115a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2115ac:
    // 0x2115ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2115acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2115b0:
    // 0x2115b0: 0xc0b1620  jal         func_2C5880
label_2115b4:
    if (ctx->pc == 0x2115B4u) {
        ctx->pc = 0x2115B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115B0u;
        // 0x2115b4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2115B8u;
        goto label_2115b8;
    }
    ctx->pc = 0x2115B0u;
    SET_GPR_U32(ctx, 31, 0x2115B8u);
    ctx->pc = 0x2115B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2115B0u;
    // 0x2115b4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5880u, 0x2115B0u, 0x2115B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2115B8u;
label_2115b8:
    // 0x2115b8: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2115b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2115bc:
    // 0x2115bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2115bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2115c0:
    // 0x2115c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2115c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2115c4:
    // 0x2115c4: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2115c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2115c8:
    // 0x2115c8: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x2115c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2115cc:
    // 0x2115cc: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x2115ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2115d0:
    // 0x2115d0: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x2115d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2115d4:
    // 0x2115d4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2115d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2115d8:
    // 0x2115d8: 0x24480070  addiu       $t0, $v0, 0x70
    ctx->pc = 0x2115d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2115dc:
    // 0x2115dc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2115dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2115e0:
    // 0x2115e0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2115e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2115e4:
    // 0x2115e4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2115e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2115e8:
    // 0x2115e8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2115e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2115ec:
    // 0x2115ec: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2115ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2115f0:
    // 0x2115f0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2115f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2115f4:
    // 0x2115f4: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x2115f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2115f8:
    // 0x2115f8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2115f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2115fc:
    // 0x2115fc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2115fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211600:
    // 0x211600: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x211600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_211604:
    // 0x211604: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x211604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_211608:
    // 0x211608: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x211608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_21160c:
    // 0x21160c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x21160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211610:
    // 0x211610: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x211610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_211614:
    // 0x211614: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x211614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_211618:
    // 0x211618: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x211618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_21161c:
    // 0x21161c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x21161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211620:
    // 0x211620: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x211620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_211624:
    // 0x211624: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x211624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_211628:
    // 0x211628: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x211628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_21162c:
    // 0x21162c: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x21162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211630:
    // 0x211630: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x211630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_211634:
    // 0x211634: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x211634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_211638:
    // 0x211638: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x211638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_21163c:
    // 0x21163c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x21163cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211640:
    // 0x211640: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x211640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_211644:
    // 0x211644: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x211644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_211648:
    // 0x211648: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x211648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_21164c:
    // 0x21164c: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x21164cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211650:
    // 0x211650: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x211650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_211654:
    // 0x211654: 0x8e220218  lw          $v0, 0x218($s1)
    ctx->pc = 0x211654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_211658:
    // 0x211658: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x211658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_21165c:
    // 0x21165c: 0x60f809  jalr        $v1
label_211660:
    if (ctx->pc == 0x211660u) {
        ctx->pc = 0x211660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21165Cu;
        // 0x211660: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211664u;
        goto label_211664;
    }
    ctx->pc = 0x21165Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x211664u);
        ctx->pc = 0x211660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21165Cu;
        // 0x211660: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21165Cu, 0x211664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211664u;
label_211664:
    // 0x211664: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x211664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_211668:
    // 0x211668: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x211668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_21166c:
    // 0x21166c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21166cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_211670:
    // 0x211670: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_211674:
    if (ctx->pc == 0x211674u) {
        ctx->pc = 0x211674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211670u;
        // 0x211674: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211678u;
        goto label_211678;
    }
    ctx->pc = 0x211670u;
    {
        const bool branch_taken_0x211670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211670u;
        // 0x211674: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211670) {
            ctx->pc = 0x211690u;
            goto label_211690;
        }
    }
    ctx->pc = 0x211678u;
label_211678:
    // 0x211678: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x211678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_21167c:
    // 0x21167c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_211680:
    if (ctx->pc == 0x211680u) {
        ctx->pc = 0x211680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21167Cu;
        // 0x211680: 0xdfb10058  ld          $s1, 0x58($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211684u;
        goto label_211684;
    }
    ctx->pc = 0x21167Cu;
    {
        const bool branch_taken_0x21167c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21167c) {
            ctx->pc = 0x211680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21167Cu;
            // 0x211680: 0xdfb10058  ld          $s1, 0x58($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211694u;
            goto label_211694;
        }
    }
    ctx->pc = 0x211684u;
label_211684:
    // 0x211684: 0xc083ba8  jal         func_20EEA0
label_211688:
    if (ctx->pc == 0x211688u) {
        ctx->pc = 0x211688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211684u;
        // 0x211688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21168Cu;
        goto label_21168c;
    }
    ctx->pc = 0x211684u;
    SET_GPR_U32(ctx, 31, 0x21168Cu);
    ctx->pc = 0x211688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211684u;
    // 0x211688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x211684u, 0x21168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21168Cu;
label_21168c:
    // 0x21168c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x21168cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_211690:
    // 0x211690: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x211690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_211694:
    // 0x211694: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x211694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_211698:
    // 0x211698: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x211698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_21169c:
    // 0x21169c: 0x3e00008  jr          $ra
label_2116a0:
    if (ctx->pc == 0x2116A0u) {
        ctx->pc = 0x2116A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21169Cu;
        // 0x2116a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2116A4u;
        goto label_2116a4;
    }
    ctx->pc = 0x21169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2116A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21169Cu;
        // 0x2116a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21169Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2116A4u;
label_2116a4:
    // 0x2116a4: 0x0  nop
    ctx->pc = 0x2116a4u;
    // NOP
    ctx->pc = 0x2116a8u;
}
