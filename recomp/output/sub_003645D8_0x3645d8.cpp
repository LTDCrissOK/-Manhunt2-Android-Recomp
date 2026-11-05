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

// Function: sub_003645D8
// Address: 0x3645d8 - 0x364840
void sub_003645D8_0x3645d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003645D8_0x3645d8");
#endif

    switch (ctx->pc) {
        case 0x3645d8u: goto label_3645d8;
        case 0x3645dcu: goto label_3645dc;
        case 0x3645e0u: goto label_3645e0;
        case 0x3645e4u: goto label_3645e4;
        case 0x3645e8u: goto label_3645e8;
        case 0x3645ecu: goto label_3645ec;
        case 0x3645f0u: goto label_3645f0;
        case 0x3645f4u: goto label_3645f4;
        case 0x3645f8u: goto label_3645f8;
        case 0x3645fcu: goto label_3645fc;
        case 0x364600u: goto label_364600;
        case 0x364604u: goto label_364604;
        case 0x364608u: goto label_364608;
        case 0x36460cu: goto label_36460c;
        case 0x364610u: goto label_364610;
        case 0x364614u: goto label_364614;
        case 0x364618u: goto label_364618;
        case 0x36461cu: goto label_36461c;
        case 0x364620u: goto label_364620;
        case 0x364624u: goto label_364624;
        case 0x364628u: goto label_364628;
        case 0x36462cu: goto label_36462c;
        case 0x364630u: goto label_364630;
        case 0x364634u: goto label_364634;
        case 0x364638u: goto label_364638;
        case 0x36463cu: goto label_36463c;
        case 0x364640u: goto label_364640;
        case 0x364644u: goto label_364644;
        case 0x364648u: goto label_364648;
        case 0x36464cu: goto label_36464c;
        case 0x364650u: goto label_364650;
        case 0x364654u: goto label_364654;
        case 0x364658u: goto label_364658;
        case 0x36465cu: goto label_36465c;
        case 0x364660u: goto label_364660;
        case 0x364664u: goto label_364664;
        case 0x364668u: goto label_364668;
        case 0x36466cu: goto label_36466c;
        case 0x364670u: goto label_364670;
        case 0x364674u: goto label_364674;
        case 0x364678u: goto label_364678;
        case 0x36467cu: goto label_36467c;
        case 0x364680u: goto label_364680;
        case 0x364684u: goto label_364684;
        case 0x364688u: goto label_364688;
        case 0x36468cu: goto label_36468c;
        case 0x364690u: goto label_364690;
        case 0x364694u: goto label_364694;
        case 0x364698u: goto label_364698;
        case 0x36469cu: goto label_36469c;
        case 0x3646a0u: goto label_3646a0;
        case 0x3646a4u: goto label_3646a4;
        case 0x3646a8u: goto label_3646a8;
        case 0x3646acu: goto label_3646ac;
        case 0x3646b0u: goto label_3646b0;
        case 0x3646b4u: goto label_3646b4;
        case 0x3646b8u: goto label_3646b8;
        case 0x3646bcu: goto label_3646bc;
        case 0x3646c0u: goto label_3646c0;
        case 0x3646c4u: goto label_3646c4;
        case 0x3646c8u: goto label_3646c8;
        case 0x3646ccu: goto label_3646cc;
        case 0x3646d0u: goto label_3646d0;
        case 0x3646d4u: goto label_3646d4;
        case 0x3646d8u: goto label_3646d8;
        case 0x3646dcu: goto label_3646dc;
        case 0x3646e0u: goto label_3646e0;
        case 0x3646e4u: goto label_3646e4;
        case 0x3646e8u: goto label_3646e8;
        case 0x3646ecu: goto label_3646ec;
        case 0x3646f0u: goto label_3646f0;
        case 0x3646f4u: goto label_3646f4;
        case 0x3646f8u: goto label_3646f8;
        case 0x3646fcu: goto label_3646fc;
        case 0x364700u: goto label_364700;
        case 0x364704u: goto label_364704;
        case 0x364708u: goto label_364708;
        case 0x36470cu: goto label_36470c;
        case 0x364710u: goto label_364710;
        case 0x364714u: goto label_364714;
        case 0x364718u: goto label_364718;
        case 0x36471cu: goto label_36471c;
        case 0x364720u: goto label_364720;
        case 0x364724u: goto label_364724;
        case 0x364728u: goto label_364728;
        case 0x36472cu: goto label_36472c;
        case 0x364730u: goto label_364730;
        case 0x364734u: goto label_364734;
        case 0x364738u: goto label_364738;
        case 0x36473cu: goto label_36473c;
        case 0x364740u: goto label_364740;
        case 0x364744u: goto label_364744;
        case 0x364748u: goto label_364748;
        case 0x36474cu: goto label_36474c;
        case 0x364750u: goto label_364750;
        case 0x364754u: goto label_364754;
        case 0x364758u: goto label_364758;
        case 0x36475cu: goto label_36475c;
        case 0x364760u: goto label_364760;
        case 0x364764u: goto label_364764;
        case 0x364768u: goto label_364768;
        case 0x36476cu: goto label_36476c;
        case 0x364770u: goto label_364770;
        case 0x364774u: goto label_364774;
        case 0x364778u: goto label_364778;
        case 0x36477cu: goto label_36477c;
        case 0x364780u: goto label_364780;
        case 0x364784u: goto label_364784;
        case 0x364788u: goto label_364788;
        case 0x36478cu: goto label_36478c;
        case 0x364790u: goto label_364790;
        case 0x364794u: goto label_364794;
        case 0x364798u: goto label_364798;
        case 0x36479cu: goto label_36479c;
        case 0x3647a0u: goto label_3647a0;
        case 0x3647a4u: goto label_3647a4;
        case 0x3647a8u: goto label_3647a8;
        case 0x3647acu: goto label_3647ac;
        case 0x3647b0u: goto label_3647b0;
        case 0x3647b4u: goto label_3647b4;
        case 0x3647b8u: goto label_3647b8;
        case 0x3647bcu: goto label_3647bc;
        case 0x3647c0u: goto label_3647c0;
        case 0x3647c4u: goto label_3647c4;
        case 0x3647c8u: goto label_3647c8;
        case 0x3647ccu: goto label_3647cc;
        case 0x3647d0u: goto label_3647d0;
        case 0x3647d4u: goto label_3647d4;
        case 0x3647d8u: goto label_3647d8;
        case 0x3647dcu: goto label_3647dc;
        case 0x3647e0u: goto label_3647e0;
        case 0x3647e4u: goto label_3647e4;
        case 0x3647e8u: goto label_3647e8;
        case 0x3647ecu: goto label_3647ec;
        case 0x3647f0u: goto label_3647f0;
        case 0x3647f4u: goto label_3647f4;
        case 0x3647f8u: goto label_3647f8;
        case 0x3647fcu: goto label_3647fc;
        case 0x364800u: goto label_364800;
        case 0x364804u: goto label_364804;
        case 0x364808u: goto label_364808;
        case 0x36480cu: goto label_36480c;
        case 0x364810u: goto label_364810;
        case 0x364814u: goto label_364814;
        case 0x364818u: goto label_364818;
        case 0x36481cu: goto label_36481c;
        case 0x364820u: goto label_364820;
        case 0x364824u: goto label_364824;
        case 0x364828u: goto label_364828;
        case 0x36482cu: goto label_36482c;
        case 0x364830u: goto label_364830;
        case 0x364834u: goto label_364834;
        case 0x364838u: goto label_364838;
        case 0x36483cu: goto label_36483c;
        default: break;
    }

    ctx->pc = 0x3645d8u;

label_3645d8:
    // 0x3645d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3645d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3645dc:
    // 0x3645dc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3645dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3645e0:
    // 0x3645e0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3645e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3645e4:
    // 0x3645e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3645e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3645e8:
    // 0x3645e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3645e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3645ec:
    // 0x3645ec: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3645ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3645f0:
    // 0x3645f0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3645f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_3645f4:
    // 0x3645f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3645f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3645f8:
    // 0x3645f8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3645f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3645fc:
    // 0x3645fc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3645fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_364600:
    // 0x364600: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x364600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_364604:
    // 0x364604: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_364608:
    if (ctx->pc == 0x364608u) {
        ctx->pc = 0x364608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364604u;
        // 0x364608: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36460Cu;
        goto label_36460c;
    }
    ctx->pc = 0x364604u;
    {
        const bool branch_taken_0x364604 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x364608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364604u;
        // 0x364608: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364604) {
            ctx->pc = 0x364624u;
            goto label_364624;
        }
    }
    ctx->pc = 0x36460Cu;
label_36460c:
    // 0x36460c: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x36460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_364610:
    // 0x364610: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x364610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_364614:
    // 0x364614: 0x40f809  jalr        $v0
label_364618:
    if (ctx->pc == 0x364618u) {
        ctx->pc = 0x36461Cu;
        goto label_36461c;
    }
    ctx->pc = 0x364614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36461Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364614u, 0x36461Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36461Cu;
label_36461c:
    // 0x36461c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_364620:
    if (ctx->pc == 0x364620u) {
        ctx->pc = 0x364620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36461Cu;
        // 0x364620: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364624u;
        goto label_364624;
    }
    ctx->pc = 0x36461Cu;
    {
        const bool branch_taken_0x36461c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36461Cu;
        // 0x364620: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36461c) {
            ctx->pc = 0x36480Cu;
            goto label_36480c;
        }
    }
    ctx->pc = 0x364624u;
label_364624:
    // 0x364624: 0xc0f6a96  jal         func_3DAA58
label_364628:
    if (ctx->pc == 0x364628u) {
        ctx->pc = 0x364628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364624u;
        // 0x364628: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36462Cu;
        goto label_36462c;
    }
    ctx->pc = 0x364624u;
    SET_GPR_U32(ctx, 31, 0x36462Cu);
    ctx->pc = 0x364628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364624u;
    // 0x364628: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x364624u, 0x36462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36462Cu;
label_36462c:
    // 0x36462c: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x36462cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_364630:
    // 0x364630: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x364630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_364634:
    // 0x364634: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
label_364638:
    if (ctx->pc == 0x364638u) {
        ctx->pc = 0x364638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364634u;
        // 0x364638: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36463Cu;
        goto label_36463c;
    }
    ctx->pc = 0x364634u;
    {
        const bool branch_taken_0x364634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364634) {
            ctx->pc = 0x364638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364634u;
            // 0x364638: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364738u;
            goto label_364738;
        }
    }
    ctx->pc = 0x36463Cu;
label_36463c:
    // 0x36463c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36463cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_364640:
    // 0x364640: 0xc0b1260  jal         func_2C4980
label_364644:
    if (ctx->pc == 0x364644u) {
        ctx->pc = 0x364644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364640u;
        // 0x364644: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364648u;
        goto label_364648;
    }
    ctx->pc = 0x364640u;
    SET_GPR_U32(ctx, 31, 0x364648u);
    ctx->pc = 0x364644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364640u;
    // 0x364644: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x364640u, 0x364648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364648u;
label_364648:
    // 0x364648: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x364648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36464c:
    // 0x36464c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36464cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_364650:
    // 0x364650: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x364650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_364654:
    // 0x364654: 0x18400062  blez        $v0, . + 4 + (0x62 << 2)
label_364658:
    if (ctx->pc == 0x364658u) {
        ctx->pc = 0x364658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364654u;
        // 0x364658: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36465Cu;
        goto label_36465c;
    }
    ctx->pc = 0x364654u;
    {
        const bool branch_taken_0x364654 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x364658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364654u;
        // 0x364658: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364654) {
            ctx->pc = 0x3647E0u;
            goto label_3647e0;
        }
    }
    ctx->pc = 0x36465Cu;
label_36465c:
    // 0x36465c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36465cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_364660:
    // 0x364660: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x364660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_364664:
    // 0x364664: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x364664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_364668:
    // 0x364668: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x364668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_36466c:
    // 0x36466c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x36466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_364670:
    // 0x364670: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x364670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_364674:
    // 0x364674: 0xc6740094  lwc1        $f20, 0x94($s3)
    ctx->pc = 0x364674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_364678:
    // 0x364678: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x364678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_36467c:
    // 0x36467c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_364680:
    // 0x364680: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_364684:
    if (ctx->pc == 0x364684u) {
        ctx->pc = 0x364684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364680u;
        // 0x364684: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364688u;
        goto label_364688;
    }
    ctx->pc = 0x364680u;
    {
        const bool branch_taken_0x364680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x364684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364680u;
        // 0x364684: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364680) {
            ctx->pc = 0x364698u;
            goto label_364698;
        }
    }
    ctx->pc = 0x364688u;
label_364688:
    // 0x364688: 0x92a2cb24  lbu         $v0, -0x34DC($s5)
    ctx->pc = 0x364688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294953764)));
label_36468c:
    // 0x36468c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_364690:
    if (ctx->pc == 0x364690u) {
        ctx->pc = 0x364690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36468Cu;
        // 0x364690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364694u;
        goto label_364694;
    }
    ctx->pc = 0x36468Cu;
    {
        const bool branch_taken_0x36468c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36468Cu;
        // 0x364690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36468c) {
            ctx->pc = 0x36469Cu;
            goto label_36469c;
        }
    }
    ctx->pc = 0x364694u;
label_364694:
    // 0x364694: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x364694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_364698:
    // 0x364698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x364698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36469c:
    // 0x36469c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36469cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3646a0:
    // 0x3646a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3646a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3646a4:
    // 0x3646a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3646a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3646a8:
    // 0x3646a8: 0xc0d92c8  jal         func_364B20
label_3646ac:
    if (ctx->pc == 0x3646ACu) {
        ctx->pc = 0x3646ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3646A8u;
        // 0x3646ac: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3646B0u;
        goto label_3646b0;
    }
    ctx->pc = 0x3646A8u;
    SET_GPR_U32(ctx, 31, 0x3646B0u);
    ctx->pc = 0x3646ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3646A8u;
    // 0x3646ac: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B20u, 0x3646A8u, 0x3646B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3646B0u;
label_3646b0:
    // 0x3646b0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x3646b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3646b4:
    // 0x3646b4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3646b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3646b8:
    // 0x3646b8: 0x4615a302  mul.s       $f12, $f20, $f21
    ctx->pc = 0x3646b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_3646bc:
    // 0x3646bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3646bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3646c0:
    // 0x3646c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3646c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3646c4:
    // 0x3646c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3646c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3646c8:
    // 0x3646c8: 0xc0d92c8  jal         func_364B20
label_3646cc:
    if (ctx->pc == 0x3646CCu) {
        ctx->pc = 0x3646CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3646C8u;
        // 0x3646cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3646D0u;
        goto label_3646d0;
    }
    ctx->pc = 0x3646C8u;
    SET_GPR_U32(ctx, 31, 0x3646D0u);
    ctx->pc = 0x3646CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3646C8u;
    // 0x3646cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B20u, 0x3646C8u, 0x3646D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3646D0u;
label_3646d0:
    // 0x3646d0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x3646d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3646d4:
    // 0x3646d4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3646d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3646d8:
    // 0x3646d8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x3646d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3646dc:
    // 0x3646dc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3646dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3646e0:
    // 0x3646e0: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x3646e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_3646e4:
    // 0x3646e4: 0x52140008  beql        $s0, $s4, . + 4 + (0x8 << 2)
label_3646e8:
    if (ctx->pc == 0x3646E8u) {
        ctx->pc = 0x3646E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3646E4u;
        // 0x3646e8: 0x8e220078  lw          $v0, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3646ECu;
        goto label_3646ec;
    }
    ctx->pc = 0x3646E4u;
    {
        const bool branch_taken_0x3646e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x3646e4) {
            ctx->pc = 0x3646E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3646E4u;
            // 0x3646e8: 0x8e220078  lw          $v0, 0x78($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364708u;
            goto label_364708;
        }
    }
    ctx->pc = 0x3646ECu;
label_3646ec:
    // 0x3646ec: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x3646ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3646f0:
    // 0x3646f0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x3646f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3646f4:
    // 0x3646f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3646f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3646f8:
    // 0x3646f8: 0x40f809  jalr        $v0
label_3646fc:
    if (ctx->pc == 0x3646FCu) {
        ctx->pc = 0x3646FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3646F8u;
        // 0x3646fc: 0x2e050001  sltiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x364700u;
        goto label_364700;
    }
    ctx->pc = 0x3646F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x364700u);
        ctx->pc = 0x3646FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3646F8u;
        // 0x3646fc: 0x2e050001  sltiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3646F8u, 0x364700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x364700u;
label_364700:
    // 0x364700: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x364700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_364704:
    // 0x364704: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x364704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_364708:
    // 0x364708: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x364708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_36470c:
    // 0x36470c: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x36470cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_364710:
    // 0x364710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x364710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_364714:
    // 0x364714: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x364714u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_364718:
    // 0x364718: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_36471c:
    if (ctx->pc == 0x36471Cu) {
        ctx->pc = 0x36471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364718u;
        // 0x36471c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x364720u;
        goto label_364720;
    }
    ctx->pc = 0x364718u;
    {
        const bool branch_taken_0x364718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364718) {
            ctx->pc = 0x36471Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364718u;
            // 0x36471c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x364720u;
            goto label_364720;
        }
    }
    ctx->pc = 0x364720u;
label_364720:
    // 0x364720: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x364720u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_364724:
    // 0x364724: 0x2010  mfhi        $a0
    ctx->pc = 0x364724u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_364728:
    // 0x364728: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
label_36472c:
    if (ctx->pc == 0x36472Cu) {
        ctx->pc = 0x36472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364728u;
        // 0x36472c: 0xae240078  sw          $a0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364730u;
        goto label_364730;
    }
    ctx->pc = 0x364728u;
    {
        const bool branch_taken_0x364728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364728u;
        // 0x36472c: 0xae240078  sw          $a0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364728) {
            ctx->pc = 0x364668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364668;
        }
    }
    ctx->pc = 0x364730u;
label_364730:
    // 0x364730: 0x1000002c  b           . + 4 + (0x2C << 2)
label_364734:
    if (ctx->pc == 0x364734u) {
        ctx->pc = 0x364734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364730u;
        // 0x364734: 0x8e2200a4  lw          $v0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364738u;
        goto label_364738;
    }
    ctx->pc = 0x364730u;
    {
        const bool branch_taken_0x364730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364730u;
        // 0x364734: 0x8e2200a4  lw          $v0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364730) {
            ctx->pc = 0x3647E4u;
            goto label_3647e4;
        }
    }
    ctx->pc = 0x364738u;
label_364738:
    // 0x364738: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_36473c:
    if (ctx->pc == 0x36473Cu) {
        ctx->pc = 0x36473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364738u;
        // 0x36473c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364740u;
        goto label_364740;
    }
    ctx->pc = 0x364738u;
    {
        const bool branch_taken_0x364738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364738u;
        // 0x36473c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364738) {
            ctx->pc = 0x364770u;
            goto label_364770;
        }
    }
    ctx->pc = 0x364740u;
label_364740:
    // 0x364740: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x364740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_364744:
    // 0x364744: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x364744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_364748:
    // 0x364748: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x364748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_36474c:
    // 0x36474c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_364750:
    if (ctx->pc == 0x364750u) {
        ctx->pc = 0x364750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36474Cu;
        // 0x364750: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364754u;
        goto label_364754;
    }
    ctx->pc = 0x36474Cu;
    {
        const bool branch_taken_0x36474c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36474Cu;
        // 0x364750: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36474c) {
            ctx->pc = 0x364770u;
            goto label_364770;
        }
    }
    ctx->pc = 0x364754u;
label_364754:
    // 0x364754: 0xc4601260  lwc1        $f0, 0x1260($v1)
    ctx->pc = 0x364754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_364758:
    // 0x364758: 0xc44cb7dc  lwc1        $f12, -0x4824($v0)
    ctx->pc = 0x364758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36475c:
    // 0x36475c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x36475cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_364760:
    // 0x364760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_364764:
    // 0x364764: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x364764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_364768:
    // 0x364768: 0x10000004  b           . + 4 + (0x4 << 2)
label_36476c:
    if (ctx->pc == 0x36476Cu) {
        ctx->pc = 0x36476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364768u;
        // 0x36476c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x364770u;
        goto label_364770;
    }
    ctx->pc = 0x364768u;
    {
        const bool branch_taken_0x364768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364768u;
        // 0x36476c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x364768) {
            ctx->pc = 0x36477Cu;
            goto label_36477c;
        }
    }
    ctx->pc = 0x364770u;
label_364770:
    // 0x364770: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x364770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_364774:
    // 0x364774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_364778:
    // 0x364778: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x364778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36477c:
    // 0x36477c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36477cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364780:
    // 0x364780: 0xc0d92c8  jal         func_364B20
label_364784:
    if (ctx->pc == 0x364784u) {
        ctx->pc = 0x364784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364780u;
        // 0x364784: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364788u;
        goto label_364788;
    }
    ctx->pc = 0x364780u;
    SET_GPR_U32(ctx, 31, 0x364788u);
    ctx->pc = 0x364784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364780u;
    // 0x364784: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B20u, 0x364780u, 0x364788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364788u;
label_364788:
    // 0x364788: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x364788u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_36478c:
    // 0x36478c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_364790:
    // 0x364790: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x364790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_364794:
    // 0x364794: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x364794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_364798:
    // 0x364798: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x364798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
label_36479c:
    // 0x36479c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36479cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3647a0:
    // 0x3647a0: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x3647a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_3647a4:
    // 0x3647a4: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x3647a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3647a8:
    // 0x3647a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3647a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3647ac:
    // 0x3647ac: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x3647acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3647b0:
    // 0x3647b0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3647b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3647b4:
    // 0x3647b4: 0x40f809  jalr        $v0
label_3647b8:
    if (ctx->pc == 0x3647B8u) {
        ctx->pc = 0x3647B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3647B4u;
        // 0x3647b8: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3647BCu;
        goto label_3647bc;
    }
    ctx->pc = 0x3647B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3647BCu);
        ctx->pc = 0x3647B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3647B4u;
        // 0x3647b8: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3647B4u, 0x3647BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3647BCu;
label_3647bc:
    // 0x3647bc: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x3647bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_3647c0:
    // 0x3647c0: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x3647c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_3647c4:
    // 0x3647c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3647c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3647c8:
    // 0x3647c8: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x3647c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_3647cc:
    // 0x3647cc: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x3647ccu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_3647d0:
    // 0x3647d0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_3647d4:
    if (ctx->pc == 0x3647D4u) {
        ctx->pc = 0x3647D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3647D0u;
        // 0x3647d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3647D8u;
        goto label_3647d8;
    }
    ctx->pc = 0x3647D0u;
    {
        const bool branch_taken_0x3647d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3647d0) {
            ctx->pc = 0x3647D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3647D0u;
            // 0x3647d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3647D8u;
            goto label_3647d8;
        }
    }
    ctx->pc = 0x3647D8u;
label_3647d8:
    // 0x3647d8: 0x1010  mfhi        $v0
    ctx->pc = 0x3647d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3647dc:
    // 0x3647dc: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x3647dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_3647e0:
    // 0x3647e0: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x3647e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_3647e4:
    // 0x3647e4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3647e8:
    if (ctx->pc == 0x3647E8u) {
        ctx->pc = 0x3647E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3647E4u;
        // 0x3647e8: 0xc6600074  lwc1        $f0, 0x74($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3647ECu;
        goto label_3647ec;
    }
    ctx->pc = 0x3647E4u;
    {
        const bool branch_taken_0x3647e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3647e4) {
            ctx->pc = 0x3647E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3647E4u;
            // 0x3647e8: 0xc6600074  lwc1        $f0, 0x74($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3647FCu;
            goto label_3647fc;
        }
    }
    ctx->pc = 0x3647ECu;
label_3647ec:
    // 0x3647ec: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x3647ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_3647f0:
    // 0x3647f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3647f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3647f4:
    // 0x3647f4: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x3647f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_3647f8:
    // 0x3647f8: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x3647f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3647fc:
    // 0x3647fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3647fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_364800:
    // 0x364800: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x364800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_364804:
    // 0x364804: 0x10000003  b           . + 4 + (0x3 << 2)
label_364808:
    if (ctx->pc == 0x364808u) {
        ctx->pc = 0x364808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364804u;
        // 0x364808: 0xa2a0cb24  sb          $zero, -0x34DC($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4294953764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36480Cu;
        goto label_36480c;
    }
    ctx->pc = 0x364804u;
    {
        const bool branch_taken_0x364804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364804u;
        // 0x364808: 0xa2a0cb24  sb          $zero, -0x34DC($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4294953764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364804) {
            ctx->pc = 0x364814u;
            goto label_364814;
        }
    }
    ctx->pc = 0x36480Cu;
label_36480c:
    // 0x36480c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36480cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364810:
    // 0x364810: 0xa060cb24  sb          $zero, -0x34DC($v1)
    ctx->pc = 0x364810u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294953764), (uint8_t)GPR_U32(ctx, 0));
label_364814:
    // 0x364814: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x364814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_364818:
    // 0x364818: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x364818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_36481c:
    // 0x36481c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x36481cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_364820:
    // 0x364820: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x364820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_364824:
    // 0x364824: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x364824u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_364828:
    // 0x364828: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x364828u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_36482c:
    // 0x36482c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x36482cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_364830:
    // 0x364830: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x364830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_364834:
    // 0x364834: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x364834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_364838:
    // 0x364838: 0x3e00008  jr          $ra
label_36483c:
    if (ctx->pc == 0x36483Cu) {
        ctx->pc = 0x36483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364838u;
        // 0x36483c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364840u;
        goto label_fallthrough_0x364838;
    }
    ctx->pc = 0x364838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364838u;
        // 0x36483c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x364838:
    ctx->pc = 0x364840u;
}
