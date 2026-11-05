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

// Function: sub_0039D5F0
// Address: 0x39d5f0 - 0x39da08
void sub_0039D5F0_0x39d5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D5F0_0x39d5f0");
#endif

    switch (ctx->pc) {
        case 0x39d5f0u: goto label_39d5f0;
        case 0x39d5f4u: goto label_39d5f4;
        case 0x39d5f8u: goto label_39d5f8;
        case 0x39d5fcu: goto label_39d5fc;
        case 0x39d600u: goto label_39d600;
        case 0x39d604u: goto label_39d604;
        case 0x39d608u: goto label_39d608;
        case 0x39d60cu: goto label_39d60c;
        case 0x39d610u: goto label_39d610;
        case 0x39d614u: goto label_39d614;
        case 0x39d618u: goto label_39d618;
        case 0x39d61cu: goto label_39d61c;
        case 0x39d620u: goto label_39d620;
        case 0x39d624u: goto label_39d624;
        case 0x39d628u: goto label_39d628;
        case 0x39d62cu: goto label_39d62c;
        case 0x39d630u: goto label_39d630;
        case 0x39d634u: goto label_39d634;
        case 0x39d638u: goto label_39d638;
        case 0x39d63cu: goto label_39d63c;
        case 0x39d640u: goto label_39d640;
        case 0x39d644u: goto label_39d644;
        case 0x39d648u: goto label_39d648;
        case 0x39d64cu: goto label_39d64c;
        case 0x39d650u: goto label_39d650;
        case 0x39d654u: goto label_39d654;
        case 0x39d658u: goto label_39d658;
        case 0x39d65cu: goto label_39d65c;
        case 0x39d660u: goto label_39d660;
        case 0x39d664u: goto label_39d664;
        case 0x39d668u: goto label_39d668;
        case 0x39d66cu: goto label_39d66c;
        case 0x39d670u: goto label_39d670;
        case 0x39d674u: goto label_39d674;
        case 0x39d678u: goto label_39d678;
        case 0x39d67cu: goto label_39d67c;
        case 0x39d680u: goto label_39d680;
        case 0x39d684u: goto label_39d684;
        case 0x39d688u: goto label_39d688;
        case 0x39d68cu: goto label_39d68c;
        case 0x39d690u: goto label_39d690;
        case 0x39d694u: goto label_39d694;
        case 0x39d698u: goto label_39d698;
        case 0x39d69cu: goto label_39d69c;
        case 0x39d6a0u: goto label_39d6a0;
        case 0x39d6a4u: goto label_39d6a4;
        case 0x39d6a8u: goto label_39d6a8;
        case 0x39d6acu: goto label_39d6ac;
        case 0x39d6b0u: goto label_39d6b0;
        case 0x39d6b4u: goto label_39d6b4;
        case 0x39d6b8u: goto label_39d6b8;
        case 0x39d6bcu: goto label_39d6bc;
        case 0x39d6c0u: goto label_39d6c0;
        case 0x39d6c4u: goto label_39d6c4;
        case 0x39d6c8u: goto label_39d6c8;
        case 0x39d6ccu: goto label_39d6cc;
        case 0x39d6d0u: goto label_39d6d0;
        case 0x39d6d4u: goto label_39d6d4;
        case 0x39d6d8u: goto label_39d6d8;
        case 0x39d6dcu: goto label_39d6dc;
        case 0x39d6e0u: goto label_39d6e0;
        case 0x39d6e4u: goto label_39d6e4;
        case 0x39d6e8u: goto label_39d6e8;
        case 0x39d6ecu: goto label_39d6ec;
        case 0x39d6f0u: goto label_39d6f0;
        case 0x39d6f4u: goto label_39d6f4;
        case 0x39d6f8u: goto label_39d6f8;
        case 0x39d6fcu: goto label_39d6fc;
        case 0x39d700u: goto label_39d700;
        case 0x39d704u: goto label_39d704;
        case 0x39d708u: goto label_39d708;
        case 0x39d70cu: goto label_39d70c;
        case 0x39d710u: goto label_39d710;
        case 0x39d714u: goto label_39d714;
        case 0x39d718u: goto label_39d718;
        case 0x39d71cu: goto label_39d71c;
        case 0x39d720u: goto label_39d720;
        case 0x39d724u: goto label_39d724;
        case 0x39d728u: goto label_39d728;
        case 0x39d72cu: goto label_39d72c;
        case 0x39d730u: goto label_39d730;
        case 0x39d734u: goto label_39d734;
        case 0x39d738u: goto label_39d738;
        case 0x39d73cu: goto label_39d73c;
        case 0x39d740u: goto label_39d740;
        case 0x39d744u: goto label_39d744;
        case 0x39d748u: goto label_39d748;
        case 0x39d74cu: goto label_39d74c;
        case 0x39d750u: goto label_39d750;
        case 0x39d754u: goto label_39d754;
        case 0x39d758u: goto label_39d758;
        case 0x39d75cu: goto label_39d75c;
        case 0x39d760u: goto label_39d760;
        case 0x39d764u: goto label_39d764;
        case 0x39d768u: goto label_39d768;
        case 0x39d76cu: goto label_39d76c;
        case 0x39d770u: goto label_39d770;
        case 0x39d774u: goto label_39d774;
        case 0x39d778u: goto label_39d778;
        case 0x39d77cu: goto label_39d77c;
        case 0x39d780u: goto label_39d780;
        case 0x39d784u: goto label_39d784;
        case 0x39d788u: goto label_39d788;
        case 0x39d78cu: goto label_39d78c;
        case 0x39d790u: goto label_39d790;
        case 0x39d794u: goto label_39d794;
        case 0x39d798u: goto label_39d798;
        case 0x39d79cu: goto label_39d79c;
        case 0x39d7a0u: goto label_39d7a0;
        case 0x39d7a4u: goto label_39d7a4;
        case 0x39d7a8u: goto label_39d7a8;
        case 0x39d7acu: goto label_39d7ac;
        case 0x39d7b0u: goto label_39d7b0;
        case 0x39d7b4u: goto label_39d7b4;
        case 0x39d7b8u: goto label_39d7b8;
        case 0x39d7bcu: goto label_39d7bc;
        case 0x39d7c0u: goto label_39d7c0;
        case 0x39d7c4u: goto label_39d7c4;
        case 0x39d7c8u: goto label_39d7c8;
        case 0x39d7ccu: goto label_39d7cc;
        case 0x39d7d0u: goto label_39d7d0;
        case 0x39d7d4u: goto label_39d7d4;
        case 0x39d7d8u: goto label_39d7d8;
        case 0x39d7dcu: goto label_39d7dc;
        case 0x39d7e0u: goto label_39d7e0;
        case 0x39d7e4u: goto label_39d7e4;
        case 0x39d7e8u: goto label_39d7e8;
        case 0x39d7ecu: goto label_39d7ec;
        case 0x39d7f0u: goto label_39d7f0;
        case 0x39d7f4u: goto label_39d7f4;
        case 0x39d7f8u: goto label_39d7f8;
        case 0x39d7fcu: goto label_39d7fc;
        case 0x39d800u: goto label_39d800;
        case 0x39d804u: goto label_39d804;
        case 0x39d808u: goto label_39d808;
        case 0x39d80cu: goto label_39d80c;
        case 0x39d810u: goto label_39d810;
        case 0x39d814u: goto label_39d814;
        case 0x39d818u: goto label_39d818;
        case 0x39d81cu: goto label_39d81c;
        case 0x39d820u: goto label_39d820;
        case 0x39d824u: goto label_39d824;
        case 0x39d828u: goto label_39d828;
        case 0x39d82cu: goto label_39d82c;
        case 0x39d830u: goto label_39d830;
        case 0x39d834u: goto label_39d834;
        case 0x39d838u: goto label_39d838;
        case 0x39d83cu: goto label_39d83c;
        case 0x39d840u: goto label_39d840;
        case 0x39d844u: goto label_39d844;
        case 0x39d848u: goto label_39d848;
        case 0x39d84cu: goto label_39d84c;
        case 0x39d850u: goto label_39d850;
        case 0x39d854u: goto label_39d854;
        case 0x39d858u: goto label_39d858;
        case 0x39d85cu: goto label_39d85c;
        case 0x39d860u: goto label_39d860;
        case 0x39d864u: goto label_39d864;
        case 0x39d868u: goto label_39d868;
        case 0x39d86cu: goto label_39d86c;
        case 0x39d870u: goto label_39d870;
        case 0x39d874u: goto label_39d874;
        case 0x39d878u: goto label_39d878;
        case 0x39d87cu: goto label_39d87c;
        case 0x39d880u: goto label_39d880;
        case 0x39d884u: goto label_39d884;
        case 0x39d888u: goto label_39d888;
        case 0x39d88cu: goto label_39d88c;
        case 0x39d890u: goto label_39d890;
        case 0x39d894u: goto label_39d894;
        case 0x39d898u: goto label_39d898;
        case 0x39d89cu: goto label_39d89c;
        case 0x39d8a0u: goto label_39d8a0;
        case 0x39d8a4u: goto label_39d8a4;
        case 0x39d8a8u: goto label_39d8a8;
        case 0x39d8acu: goto label_39d8ac;
        case 0x39d8b0u: goto label_39d8b0;
        case 0x39d8b4u: goto label_39d8b4;
        case 0x39d8b8u: goto label_39d8b8;
        case 0x39d8bcu: goto label_39d8bc;
        case 0x39d8c0u: goto label_39d8c0;
        case 0x39d8c4u: goto label_39d8c4;
        case 0x39d8c8u: goto label_39d8c8;
        case 0x39d8ccu: goto label_39d8cc;
        case 0x39d8d0u: goto label_39d8d0;
        case 0x39d8d4u: goto label_39d8d4;
        case 0x39d8d8u: goto label_39d8d8;
        case 0x39d8dcu: goto label_39d8dc;
        case 0x39d8e0u: goto label_39d8e0;
        case 0x39d8e4u: goto label_39d8e4;
        case 0x39d8e8u: goto label_39d8e8;
        case 0x39d8ecu: goto label_39d8ec;
        case 0x39d8f0u: goto label_39d8f0;
        case 0x39d8f4u: goto label_39d8f4;
        case 0x39d8f8u: goto label_39d8f8;
        case 0x39d8fcu: goto label_39d8fc;
        case 0x39d900u: goto label_39d900;
        case 0x39d904u: goto label_39d904;
        case 0x39d908u: goto label_39d908;
        case 0x39d90cu: goto label_39d90c;
        case 0x39d910u: goto label_39d910;
        case 0x39d914u: goto label_39d914;
        case 0x39d918u: goto label_39d918;
        case 0x39d91cu: goto label_39d91c;
        case 0x39d920u: goto label_39d920;
        case 0x39d924u: goto label_39d924;
        case 0x39d928u: goto label_39d928;
        case 0x39d92cu: goto label_39d92c;
        case 0x39d930u: goto label_39d930;
        case 0x39d934u: goto label_39d934;
        case 0x39d938u: goto label_39d938;
        case 0x39d93cu: goto label_39d93c;
        case 0x39d940u: goto label_39d940;
        case 0x39d944u: goto label_39d944;
        case 0x39d948u: goto label_39d948;
        case 0x39d94cu: goto label_39d94c;
        case 0x39d950u: goto label_39d950;
        case 0x39d954u: goto label_39d954;
        case 0x39d958u: goto label_39d958;
        case 0x39d95cu: goto label_39d95c;
        case 0x39d960u: goto label_39d960;
        case 0x39d964u: goto label_39d964;
        case 0x39d968u: goto label_39d968;
        case 0x39d96cu: goto label_39d96c;
        case 0x39d970u: goto label_39d970;
        case 0x39d974u: goto label_39d974;
        case 0x39d978u: goto label_39d978;
        case 0x39d97cu: goto label_39d97c;
        case 0x39d980u: goto label_39d980;
        case 0x39d984u: goto label_39d984;
        case 0x39d988u: goto label_39d988;
        case 0x39d98cu: goto label_39d98c;
        case 0x39d990u: goto label_39d990;
        case 0x39d994u: goto label_39d994;
        case 0x39d998u: goto label_39d998;
        case 0x39d99cu: goto label_39d99c;
        case 0x39d9a0u: goto label_39d9a0;
        case 0x39d9a4u: goto label_39d9a4;
        case 0x39d9a8u: goto label_39d9a8;
        case 0x39d9acu: goto label_39d9ac;
        case 0x39d9b0u: goto label_39d9b0;
        case 0x39d9b4u: goto label_39d9b4;
        case 0x39d9b8u: goto label_39d9b8;
        case 0x39d9bcu: goto label_39d9bc;
        case 0x39d9c0u: goto label_39d9c0;
        case 0x39d9c4u: goto label_39d9c4;
        case 0x39d9c8u: goto label_39d9c8;
        case 0x39d9ccu: goto label_39d9cc;
        case 0x39d9d0u: goto label_39d9d0;
        case 0x39d9d4u: goto label_39d9d4;
        case 0x39d9d8u: goto label_39d9d8;
        case 0x39d9dcu: goto label_39d9dc;
        case 0x39d9e0u: goto label_39d9e0;
        case 0x39d9e4u: goto label_39d9e4;
        case 0x39d9e8u: goto label_39d9e8;
        case 0x39d9ecu: goto label_39d9ec;
        case 0x39d9f0u: goto label_39d9f0;
        case 0x39d9f4u: goto label_39d9f4;
        case 0x39d9f8u: goto label_39d9f8;
        case 0x39d9fcu: goto label_39d9fc;
        case 0x39da00u: goto label_39da00;
        case 0x39da04u: goto label_39da04;
        default: break;
    }

    ctx->pc = 0x39d5f0u;

label_39d5f0:
    // 0x39d5f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39d5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_39d5f4:
    // 0x39d5f4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x39d5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_39d5f8:
    // 0x39d5f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39d5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d5fc:
    // 0x39d5fc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x39d5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_39d600:
    // 0x39d600: 0x24130800  addiu       $s3, $zero, 0x800
    ctx->pc = 0x39d600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_39d604:
    // 0x39d604: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x39d604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_39d608:
    // 0x39d608: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x39d608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_39d60c:
    // 0x39d60c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x39d60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_39d610:
    // 0x39d610: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x39d610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_39d614:
    // 0x39d614: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x39d614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_39d618:
    // 0x39d618: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x39d618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_39d61c:
    // 0x39d61c: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x39d61cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39d620:
    // 0x39d620: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x39d620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_39d624:
    // 0x39d624: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x39d624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_39d628:
    // 0x39d628: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x39d628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_39d62c:
    // 0x39d62c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_39d630:
    if (ctx->pc == 0x39D630u) {
        ctx->pc = 0x39D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D62Cu;
        // 0x39d630: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D634u;
        goto label_39d634;
    }
    ctx->pc = 0x39D62Cu;
    {
        const bool branch_taken_0x39d62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D62Cu;
        // 0x39d630: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d62c) {
            ctx->pc = 0x39D690u;
            goto label_39d690;
        }
    }
    ctx->pc = 0x39D634u;
label_39d634:
    // 0x39d634: 0x820300ac  lb          $v1, 0xAC($s0)
    ctx->pc = 0x39d634u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 172)));
label_39d638:
    // 0x39d638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39d638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d63c:
    // 0x39d63c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_39d640:
    if (ctx->pc == 0x39D640u) {
        ctx->pc = 0x39D644u;
        goto label_39d644;
    }
    ctx->pc = 0x39D63Cu;
    {
        const bool branch_taken_0x39d63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39d63c) {
            ctx->pc = 0x39D690u;
            goto label_39d690;
        }
    }
    ctx->pc = 0x39D644u;
label_39d644:
    // 0x39d644: 0xc0e66ac  jal         func_399AB0
label_39d648:
    if (ctx->pc == 0x39D648u) {
        ctx->pc = 0x39D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D644u;
        // 0x39d648: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D64Cu;
        goto label_39d64c;
    }
    ctx->pc = 0x39D644u;
    SET_GPR_U32(ctx, 31, 0x39D64Cu);
    ctx->pc = 0x39D648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D644u;
    // 0x39d648: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x39D644u, 0x39D64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D64Cu;
label_39d64c:
    // 0x39d64c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39d650:
    // 0x39d650: 0x504300e2  beql        $v0, $v1, . + 4 + (0xE2 << 2)
label_39d654:
    if (ctx->pc == 0x39D654u) {
        ctx->pc = 0x39D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D650u;
        // 0x39d654: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D658u;
        goto label_39d658;
    }
    ctx->pc = 0x39D650u;
    {
        const bool branch_taken_0x39d650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39d650) {
            ctx->pc = 0x39D654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D650u;
            // 0x39d654: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D9DCu;
            goto label_39d9dc;
        }
    }
    ctx->pc = 0x39D658u;
label_39d658:
    // 0x39d658: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x39d658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_39d65c:
    // 0x39d65c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39d660:
    if (ctx->pc == 0x39D660u) {
        ctx->pc = 0x39D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D65Cu;
        // 0x39d660: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D664u;
        goto label_39d664;
    }
    ctx->pc = 0x39D65Cu;
    {
        const bool branch_taken_0x39d65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d65c) {
            ctx->pc = 0x39D660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D65Cu;
            // 0x39d660: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D678u;
            goto label_39d678;
        }
    }
    ctx->pc = 0x39D664u;
label_39d664:
    // 0x39d664: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39d664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39d668:
    // 0x39d668: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39d66c:
    // 0x39d66c: 0x40f809  jalr        $v0
label_39d670:
    if (ctx->pc == 0x39D670u) {
        ctx->pc = 0x39D674u;
        goto label_39d674;
    }
    ctx->pc = 0x39D66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D674u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D66Cu, 0x39D674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D674u;
label_39d674:
    // 0x39d674: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x39d674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_39d678:
    // 0x39d678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d67c:
    // 0x39d67c: 0x8e0600b8  lw          $a2, 0xB8($s0)
    ctx->pc = 0x39d67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_39d680:
    // 0x39d680: 0x8e0700bc  lw          $a3, 0xBC($s0)
    ctx->pc = 0x39d680u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_39d684:
    // 0x39d684: 0xc0e6d6a  jal         func_39B5A8
label_39d688:
    if (ctx->pc == 0x39D688u) {
        ctx->pc = 0x39D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D684u;
        // 0x39d688: 0x8e0800c0  lw          $t0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D68Cu;
        goto label_39d68c;
    }
    ctx->pc = 0x39D684u;
    SET_GPR_U32(ctx, 31, 0x39D68Cu);
    ctx->pc = 0x39D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D684u;
    // 0x39d688: 0x8e0800c0  lw          $t0, 0xC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B5A8u, 0x39D684u, 0x39D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D68Cu;
label_39d68c:
    // 0x39d68c: 0xa20000ac  sb          $zero, 0xAC($s0)
    ctx->pc = 0x39d68cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
label_39d690:
    // 0x39d690: 0xc0e6032  jal         func_3980C8
label_39d694:
    if (ctx->pc == 0x39D694u) {
        ctx->pc = 0x39D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D690u;
        // 0x39d694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D698u;
        goto label_39d698;
    }
    ctx->pc = 0x39D690u;
    SET_GPR_U32(ctx, 31, 0x39D698u);
    ctx->pc = 0x39D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D690u;
    // 0x39d694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3980C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3980C8u, 0x39D690u, 0x39D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D698u;
label_39d698:
    // 0x39d698: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39d698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d69c:
    // 0x39d69c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39d6a0:
    // 0x39d6a0: 0x546200c9  bnel        $v1, $v0, . + 4 + (0xC9 << 2)
label_39d6a4:
    if (ctx->pc == 0x39D6A4u) {
        ctx->pc = 0x39D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6A0u;
        // 0x39d6a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6A8u;
        goto label_39d6a8;
    }
    ctx->pc = 0x39D6A0u;
    {
        const bool branch_taken_0x39d6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39d6a0) {
            ctx->pc = 0x39D6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D6A0u;
            // 0x39d6a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D9C8u;
            goto label_39d9c8;
        }
    }
    ctx->pc = 0x39D6A8u;
label_39d6a8:
    // 0x39d6a8: 0xc0e6458  jal         func_399160
label_39d6ac:
    if (ctx->pc == 0x39D6ACu) {
        ctx->pc = 0x39D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6A8u;
        // 0x39d6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6B0u;
        goto label_39d6b0;
    }
    ctx->pc = 0x39D6A8u;
    SET_GPR_U32(ctx, 31, 0x39D6B0u);
    ctx->pc = 0x39D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D6A8u;
    // 0x39d6ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399160u, 0x39D6A8u, 0x39D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D6B0u;
label_39d6b0:
    // 0x39d6b0: 0x82050003  lb          $a1, 0x3($s0)
    ctx->pc = 0x39d6b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_39d6b4:
    // 0x39d6b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x39d6b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d6b8:
    // 0x39d6b8: 0xb4102a  slt         $v0, $a1, $s4
    ctx->pc = 0x39d6b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_39d6bc:
    // 0x39d6bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_39d6c0:
    if (ctx->pc == 0x39D6C0u) {
        ctx->pc = 0x39D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6BCu;
        // 0x39d6c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6C4u;
        goto label_39d6c4;
    }
    ctx->pc = 0x39D6BCu;
    {
        const bool branch_taken_0x39d6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6BCu;
        // 0x39d6c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d6bc) {
            ctx->pc = 0x39D6F0u;
            goto label_39d6f0;
        }
    }
    ctx->pc = 0x39D6C4u;
label_39d6c4:
    // 0x39d6c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39d6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39d6c8:
    // 0x39d6c8: 0xc0ec184  jal         func_3B0610
label_39d6cc:
    if (ctx->pc == 0x39D6CCu) {
        ctx->pc = 0x39D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6C8u;
        // 0x39d6cc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6D0u;
        goto label_39d6d0;
    }
    ctx->pc = 0x39D6C8u;
    SET_GPR_U32(ctx, 31, 0x39D6D0u);
    ctx->pc = 0x39D6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D6C8u;
    // 0x39d6cc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0610u, 0x39D6C8u, 0x39D6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D6D0u;
label_39d6d0:
    // 0x39d6d0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39d6d4:
    // 0x39d6d4: 0x2484bbe0  addiu       $a0, $a0, -0x4420
    ctx->pc = 0x39d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949856));
label_39d6d8:
    // 0x39d6d8: 0xc0ec11c  jal         func_3B0470
label_39d6dc:
    if (ctx->pc == 0x39D6DCu) {
        ctx->pc = 0x39D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6D8u;
        // 0x39d6dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6E0u;
        goto label_39d6e0;
    }
    ctx->pc = 0x39D6D8u;
    SET_GPR_U32(ctx, 31, 0x39D6E0u);
    ctx->pc = 0x39D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D6D8u;
    // 0x39d6dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0470u, 0x39D6D8u, 0x39D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D6E0u;
label_39d6e0:
    // 0x39d6e0: 0xc0e6e04  jal         func_39B810
label_39d6e4:
    if (ctx->pc == 0x39D6E4u) {
        ctx->pc = 0x39D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6E0u;
        // 0x39d6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6E8u;
        goto label_39d6e8;
    }
    ctx->pc = 0x39D6E0u;
    SET_GPR_U32(ctx, 31, 0x39D6E8u);
    ctx->pc = 0x39D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D6E0u;
    // 0x39d6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B810u, 0x39D6E0u, 0x39D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D6E8u;
label_39d6e8:
    // 0x39d6e8: 0x100000bc  b           . + 4 + (0xBC << 2)
label_39d6ec:
    if (ctx->pc == 0x39D6ECu) {
        ctx->pc = 0x39D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6E8u;
        // 0x39d6ec: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6F0u;
        goto label_39d6f0;
    }
    ctx->pc = 0x39D6E8u;
    {
        const bool branch_taken_0x39d6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6E8u;
        // 0x39d6ec: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d6e8) {
            ctx->pc = 0x39D9DCu;
            goto label_39d9dc;
        }
    }
    ctx->pc = 0x39D6F0u;
label_39d6f0:
    // 0x39d6f0: 0xc0e6452  jal         func_399148
label_39d6f4:
    if (ctx->pc == 0x39D6F4u) {
        ctx->pc = 0x39D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6F0u;
        // 0x39d6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6F8u;
        goto label_39d6f8;
    }
    ctx->pc = 0x39D6F0u;
    SET_GPR_U32(ctx, 31, 0x39D6F8u);
    ctx->pc = 0x39D6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D6F0u;
    // 0x39d6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399148u, 0x39D6F0u, 0x39D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D6F8u;
label_39d6f8:
    // 0x39d6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d6fc:
    // 0x39d6fc: 0xc0e6470  jal         func_3991C0
label_39d700:
    if (ctx->pc == 0x39D700u) {
        ctx->pc = 0x39D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D6FCu;
        // 0x39d700: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D704u;
        goto label_39d704;
    }
    ctx->pc = 0x39D6FCu;
    SET_GPR_U32(ctx, 31, 0x39D704u);
    ctx->pc = 0x39D700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D6FCu;
    // 0x39d700: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991C0u, 0x39D6FCu, 0x39D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D704u;
label_39d704:
    // 0x39d704: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x39d704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d708:
    // 0x39d708: 0x5a80000b  blezl       $s4, . + 4 + (0xB << 2)
label_39d70c:
    if (ctx->pc == 0x39D70Cu) {
        ctx->pc = 0x39D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D708u;
        // 0x39d70c: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D710u;
        goto label_39d710;
    }
    ctx->pc = 0x39D708u;
    {
        const bool branch_taken_0x39d708 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x39d708) {
            ctx->pc = 0x39D70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D708u;
            // 0x39d70c: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D738u;
            goto label_39d738;
        }
    }
    ctx->pc = 0x39D710u;
label_39d710:
    // 0x39d710: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x39d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_39d714:
    // 0x39d714: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x39d714u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_39d718:
    // 0x39d718: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_39d71c:
    if (ctx->pc == 0x39D71Cu) {
        ctx->pc = 0x39D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D718u;
        // 0x39d71c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D720u;
        goto label_39d720;
    }
    ctx->pc = 0x39D718u;
    {
        const bool branch_taken_0x39d718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d718) {
            ctx->pc = 0x39D71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D718u;
            // 0x39d71c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D720u;
            goto label_39d720;
        }
    }
    ctx->pc = 0x39D720u;
label_39d720:
    // 0x39d720: 0x2012  mflo        $a0
    ctx->pc = 0x39d720u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_39d724:
    // 0x39d724: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x39d724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_39d728:
    // 0x39d728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39d728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_39d72c:
    // 0x39d72c: 0x1000000c  b           . + 4 + (0xC << 2)
label_39d730:
    if (ctx->pc == 0x39D730u) {
        ctx->pc = 0x39D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D72Cu;
        // 0x39d730: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D734u;
        goto label_39d734;
    }
    ctx->pc = 0x39D72Cu;
    {
        const bool branch_taken_0x39d72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D72Cu;
        // 0x39d730: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d72c) {
            ctx->pc = 0x39D760u;
            goto label_39d760;
        }
    }
    ctx->pc = 0x39D734u;
label_39d734:
    // 0x39d734: 0x0  nop
    ctx->pc = 0x39d734u;
    // NOP
label_39d738:
    // 0x39d738: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x39d738u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_39d73c:
    // 0x39d73c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_39d740:
    if (ctx->pc == 0x39D740u) {
        ctx->pc = 0x39D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D73Cu;
        // 0x39d740: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D744u;
        goto label_39d744;
    }
    ctx->pc = 0x39D73Cu;
    {
        const bool branch_taken_0x39d73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d73c) {
            ctx->pc = 0x39D740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D73Cu;
            // 0x39d740: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D744u;
            goto label_39d744;
        }
    }
    ctx->pc = 0x39D744u;
label_39d744:
    // 0x39d744: 0x2012  mflo        $a0
    ctx->pc = 0x39d744u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_39d748:
    // 0x39d748: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x39d748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_39d74c:
    // 0x39d74c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_39d750:
    // 0x39d750: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x39d750u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_39d754:
    // 0x39d754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39d758:
    // 0x39d758: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39d758u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_39d75c:
    // 0x39d75c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x39d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_39d760:
    // 0x39d760: 0xc0e6464  jal         func_399190
label_39d764:
    if (ctx->pc == 0x39D764u) {
        ctx->pc = 0x39D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D760u;
        // 0x39d764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D768u;
        goto label_39d768;
    }
    ctx->pc = 0x39D760u;
    SET_GPR_U32(ctx, 31, 0x39D768u);
    ctx->pc = 0x39D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D760u;
    // 0x39d764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399190u, 0x39D760u, 0x39D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D768u;
label_39d768:
    // 0x39d768: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x39d768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_39d76c:
    // 0x39d76c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x39d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_39d770:
    // 0x39d770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d774:
    // 0x39d774: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x39d774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_39d778:
    // 0x39d778: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_39d77c:
    if (ctx->pc == 0x39D77Cu) {
        ctx->pc = 0x39D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D778u;
        // 0x39d77c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D780u;
        goto label_39d780;
    }
    ctx->pc = 0x39D778u;
    {
        const bool branch_taken_0x39d778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d778) {
            ctx->pc = 0x39D77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D778u;
            // 0x39d77c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D780u;
            goto label_39d780;
        }
    }
    ctx->pc = 0x39D780u;
label_39d780:
    // 0x39d780: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x39d780u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_39d784:
    // 0x39d784: 0x2812  mflo        $a1
    ctx->pc = 0x39d784u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_39d788:
    // 0x39d788: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x39d788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_39d78c:
    // 0x39d78c: 0xc0e6044  jal         func_398110
label_39d790:
    if (ctx->pc == 0x39D790u) {
        ctx->pc = 0x39D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D78Cu;
        // 0x39d790: 0xae050048  sw          $a1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D794u;
        goto label_39d794;
    }
    ctx->pc = 0x39D78Cu;
    SET_GPR_U32(ctx, 31, 0x39D794u);
    ctx->pc = 0x39D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D78Cu;
    // 0x39d790: 0xae050048  sw          $a1, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398110u, 0x39D78Cu, 0x39D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D794u;
label_39d794:
    // 0x39d794: 0x5a800034  blezl       $s4, . + 4 + (0x34 << 2)
label_39d798:
    if (ctx->pc == 0x39D798u) {
        ctx->pc = 0x39D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D794u;
        // 0x39d798: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D79Cu;
        goto label_39d79c;
    }
    ctx->pc = 0x39D794u;
    {
        const bool branch_taken_0x39d794 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x39d794) {
            ctx->pc = 0x39D798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D794u;
            // 0x39d798: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D868u;
            goto label_39d868;
        }
    }
    ctx->pc = 0x39D79Cu;
label_39d79c:
    // 0x39d79c: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x39d79cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_39d7a0:
    // 0x39d7a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39d7a4:
    // 0x39d7a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_39d7a8:
    if (ctx->pc == 0x39D7A8u) {
        ctx->pc = 0x39D7ACu;
        goto label_39d7ac;
    }
    ctx->pc = 0x39D7A4u;
    {
        const bool branch_taken_0x39d7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39d7a4) {
            ctx->pc = 0x39D7B8u;
            goto label_39d7b8;
        }
    }
    ctx->pc = 0x39D7ACu;
label_39d7ac:
    // 0x39d7ac: 0x10000019  b           . + 4 + (0x19 << 2)
label_39d7b0:
    if (ctx->pc == 0x39D7B0u) {
        ctx->pc = 0x39D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7ACu;
        // 0x39d7b0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D7B4u;
        goto label_39d7b4;
    }
    ctx->pc = 0x39D7ACu;
    {
        const bool branch_taken_0x39d7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7ACu;
        // 0x39d7b0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d7ac) {
            ctx->pc = 0x39D814u;
            goto label_39d814;
        }
    }
    ctx->pc = 0x39D7B4u;
label_39d7b4:
    // 0x39d7b4: 0x0  nop
    ctx->pc = 0x39d7b4u;
    // NOP
label_39d7b8:
    // 0x39d7b8: 0xc0e648e  jal         func_399238
label_39d7bc:
    if (ctx->pc == 0x39D7BCu) {
        ctx->pc = 0x39D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7B8u;
        // 0x39d7bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D7C0u;
        goto label_39d7c0;
    }
    ctx->pc = 0x39D7B8u;
    SET_GPR_U32(ctx, 31, 0x39D7C0u);
    ctx->pc = 0x39D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D7B8u;
    // 0x39d7bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399238u, 0x39D7B8u, 0x39D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D7C0u;
label_39d7c0:
    // 0x39d7c0: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_39d7c4:
    if (ctx->pc == 0x39D7C4u) {
        ctx->pc = 0x39D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7C0u;
        // 0x39d7c4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D7C8u;
        goto label_39d7c8;
    }
    ctx->pc = 0x39D7C0u;
    {
        const bool branch_taken_0x39d7c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d7c0) {
            ctx->pc = 0x39D7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D7C0u;
            // 0x39d7c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D7C8u;
            goto label_39d7c8;
        }
    }
    ctx->pc = 0x39D7C8u;
label_39d7c8:
    // 0x39d7c8: 0x53001a  div         $zero, $v0, $s3
    ctx->pc = 0x39d7c8u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_39d7cc:
    // 0x39d7cc: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x39d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_39d7d0:
    // 0x39d7d0: 0x1810  mfhi        $v1
    ctx->pc = 0x39d7d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_39d7d4:
    // 0x39d7d4: 0x53001a  div         $zero, $v0, $s3
    ctx->pc = 0x39d7d4u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_39d7d8:
    // 0x39d7d8: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x39d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_39d7dc:
    // 0x39d7dc: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x39d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_39d7e0:
    // 0x39d7e0: 0x1012  mflo        $v0
    ctx->pc = 0x39d7e0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_39d7e4:
    // 0x39d7e4: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x39d7e4u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_39d7e8:
    // 0x39d7e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39d7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d7ec:
    // 0x39d7ec: 0x2010  mfhi        $a0
    ctx->pc = 0x39d7ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_39d7f0:
    // 0x39d7f0: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x39d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
label_39d7f4:
    // 0x39d7f4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39d7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39d7f8:
    // 0x39d7f8: 0xc0e6798  jal         func_399E60
label_39d7fc:
    if (ctx->pc == 0x39D7FCu) {
        ctx->pc = 0x39D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7F8u;
        // 0x39d7fc: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D800u;
        goto label_39d800;
    }
    ctx->pc = 0x39D7F8u;
    SET_GPR_U32(ctx, 31, 0x39D800u);
    ctx->pc = 0x39D7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D7F8u;
    // 0x39d7fc: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E60u, 0x39D7F8u, 0x39D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D800u;
label_39d800:
    // 0x39d800: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39d800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_39d804:
    // 0x39d804: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39d804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39d808:
    // 0x39d808: 0x24a5d1b0  addiu       $a1, $a1, -0x2E50
    ctx->pc = 0x39d808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955440));
label_39d80c:
    // 0x39d80c: 0xc0e6780  jal         func_399E00
label_39d810:
    if (ctx->pc == 0x39D810u) {
        ctx->pc = 0x39D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D80Cu;
        // 0x39d810: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D814u;
        goto label_39d814;
    }
    ctx->pc = 0x39D80Cu;
    SET_GPR_U32(ctx, 31, 0x39D814u);
    ctx->pc = 0x39D810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D80Cu;
    // 0x39d810: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E00u, 0x39D80Cu, 0x39D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D814u;
label_39d814:
    // 0x39d814: 0xc0e6488  jal         func_399220
label_39d818:
    if (ctx->pc == 0x39D818u) {
        ctx->pc = 0x39D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D814u;
        // 0x39d818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D81Cu;
        goto label_39d81c;
    }
    ctx->pc = 0x39D814u;
    SET_GPR_U32(ctx, 31, 0x39D81Cu);
    ctx->pc = 0x39D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D814u;
    // 0x39d818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399220u, 0x39D814u, 0x39D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D81Cu;
label_39d81c:
    // 0x39d81c: 0xc0e6476  jal         func_3991D8
label_39d820:
    if (ctx->pc == 0x39D820u) {
        ctx->pc = 0x39D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D81Cu;
        // 0x39d820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D824u;
        goto label_39d824;
    }
    ctx->pc = 0x39D81Cu;
    SET_GPR_U32(ctx, 31, 0x39D824u);
    ctx->pc = 0x39D820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D81Cu;
    // 0x39d820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991D8u, 0x39D81Cu, 0x39D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D824u;
label_39d824:
    // 0x39d824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d828:
    // 0x39d828: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x39d828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_39d82c:
    // 0x39d82c: 0xc0e6446  jal         func_399118
label_39d830:
    if (ctx->pc == 0x39D830u) {
        ctx->pc = 0x39D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D82Cu;
        // 0x39d830: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D834u;
        goto label_39d834;
    }
    ctx->pc = 0x39D82Cu;
    SET_GPR_U32(ctx, 31, 0x39D834u);
    ctx->pc = 0x39D830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D82Cu;
    // 0x39d830: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399118u, 0x39D82Cu, 0x39D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D834u;
label_39d834:
    // 0x39d834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d838:
    // 0x39d838: 0xc0e644a  jal         func_399128
label_39d83c:
    if (ctx->pc == 0x39D83Cu) {
        ctx->pc = 0x39D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D838u;
        // 0x39d83c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D840u;
        goto label_39d840;
    }
    ctx->pc = 0x39D838u;
    SET_GPR_U32(ctx, 31, 0x39D840u);
    ctx->pc = 0x39D83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D838u;
    // 0x39d83c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399128u, 0x39D838u, 0x39D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D840u;
label_39d840:
    // 0x39d840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d844:
    // 0x39d844: 0xc0e6448  jal         func_399120
label_39d848:
    if (ctx->pc == 0x39D848u) {
        ctx->pc = 0x39D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D844u;
        // 0x39d848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D84Cu;
        goto label_39d84c;
    }
    ctx->pc = 0x39D844u;
    SET_GPR_U32(ctx, 31, 0x39D84Cu);
    ctx->pc = 0x39D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D844u;
    // 0x39d848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399120u, 0x39D844u, 0x39D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D84Cu;
label_39d84c:
    // 0x39d84c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39d84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_39d850:
    // 0x39d850: 0x24a5cf60  addiu       $a1, $a1, -0x30A0
    ctx->pc = 0x39d850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954848));
label_39d854:
    // 0x39d854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d858:
    // 0x39d858: 0xc0e6442  jal         func_399108
label_39d85c:
    if (ctx->pc == 0x39D85Cu) {
        ctx->pc = 0x39D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D858u;
        // 0x39d85c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D860u;
        goto label_39d860;
    }
    ctx->pc = 0x39D858u;
    SET_GPR_U32(ctx, 31, 0x39D860u);
    ctx->pc = 0x39D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D858u;
    // 0x39d85c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399108u, 0x39D858u, 0x39D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D860u;
label_39d860:
    // 0x39d860: 0x10000016  b           . + 4 + (0x16 << 2)
label_39d864:
    if (ctx->pc == 0x39D864u) {
        ctx->pc = 0x39D868u;
        goto label_39d868;
    }
    ctx->pc = 0x39D860u;
    {
        const bool branch_taken_0x39d860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d860) {
            ctx->pc = 0x39D8BCu;
            goto label_39d8bc;
        }
    }
    ctx->pc = 0x39D868u;
label_39d868:
    // 0x39d868: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_39d86c:
    if (ctx->pc == 0x39D86Cu) {
        ctx->pc = 0x39D870u;
        goto label_39d870;
    }
    ctx->pc = 0x39D868u;
    {
        const bool branch_taken_0x39d868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d868) {
            ctx->pc = 0x39D87Cu;
            goto label_39d87c;
        }
    }
    ctx->pc = 0x39D870u;
label_39d870:
    // 0x39d870: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x39d870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_39d874:
    // 0x39d874: 0xc0e6798  jal         func_399E60
label_39d878:
    if (ctx->pc == 0x39D878u) {
        ctx->pc = 0x39D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D874u;
        // 0x39d878: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D87Cu;
        goto label_39d87c;
    }
    ctx->pc = 0x39D874u;
    SET_GPR_U32(ctx, 31, 0x39D87Cu);
    ctx->pc = 0x39D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D874u;
    // 0x39d878: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E60u, 0x39D874u, 0x39D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D87Cu;
label_39d87c:
    // 0x39d87c: 0xc0e646a  jal         func_3991A8
label_39d880:
    if (ctx->pc == 0x39D880u) {
        ctx->pc = 0x39D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D87Cu;
        // 0x39d880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D884u;
        goto label_39d884;
    }
    ctx->pc = 0x39D87Cu;
    SET_GPR_U32(ctx, 31, 0x39D884u);
    ctx->pc = 0x39D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D87Cu;
    // 0x39d880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991A8u, 0x39D87Cu, 0x39D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D884u;
label_39d884:
    // 0x39d884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d888:
    // 0x39d888: 0xc0e6446  jal         func_399118
label_39d88c:
    if (ctx->pc == 0x39D88Cu) {
        ctx->pc = 0x39D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D888u;
        // 0x39d88c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D890u;
        goto label_39d890;
    }
    ctx->pc = 0x39D888u;
    SET_GPR_U32(ctx, 31, 0x39D890u);
    ctx->pc = 0x39D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D888u;
    // 0x39d88c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399118u, 0x39D888u, 0x39D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D890u;
label_39d890:
    // 0x39d890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d894:
    // 0x39d894: 0xc0e644a  jal         func_399128
label_39d898:
    if (ctx->pc == 0x39D898u) {
        ctx->pc = 0x39D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D894u;
        // 0x39d898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D89Cu;
        goto label_39d89c;
    }
    ctx->pc = 0x39D894u;
    SET_GPR_U32(ctx, 31, 0x39D89Cu);
    ctx->pc = 0x39D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D894u;
    // 0x39d898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399128u, 0x39D894u, 0x39D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D89Cu;
label_39d89c:
    // 0x39d89c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d8a0:
    // 0x39d8a0: 0xc0e6448  jal         func_399120
label_39d8a4:
    if (ctx->pc == 0x39D8A4u) {
        ctx->pc = 0x39D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8A0u;
        // 0x39d8a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8A8u;
        goto label_39d8a8;
    }
    ctx->pc = 0x39D8A0u;
    SET_GPR_U32(ctx, 31, 0x39D8A8u);
    ctx->pc = 0x39D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D8A0u;
    // 0x39d8a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399120u, 0x39D8A0u, 0x39D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D8A8u;
label_39d8a8:
    // 0x39d8a8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39d8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_39d8ac:
    // 0x39d8ac: 0x24a5d2e0  addiu       $a1, $a1, -0x2D20
    ctx->pc = 0x39d8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955744));
label_39d8b0:
    // 0x39d8b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d8b4:
    // 0x39d8b4: 0xc0e6442  jal         func_399108
label_39d8b8:
    if (ctx->pc == 0x39D8B8u) {
        ctx->pc = 0x39D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8B4u;
        // 0x39d8b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8BCu;
        goto label_39d8bc;
    }
    ctx->pc = 0x39D8B4u;
    SET_GPR_U32(ctx, 31, 0x39D8BCu);
    ctx->pc = 0x39D8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D8B4u;
    // 0x39d8b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399108u, 0x39D8B4u, 0x39D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D8BCu;
label_39d8bc:
    // 0x39d8bc: 0xc0e6452  jal         func_399148
label_39d8c0:
    if (ctx->pc == 0x39D8C0u) {
        ctx->pc = 0x39D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8BCu;
        // 0x39d8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8C4u;
        goto label_39d8c4;
    }
    ctx->pc = 0x39D8BCu;
    SET_GPR_U32(ctx, 31, 0x39D8C4u);
    ctx->pc = 0x39D8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D8BCu;
    // 0x39d8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399148u, 0x39D8BCu, 0x39D8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D8C4u;
label_39d8c4:
    // 0x39d8c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d8c8:
    // 0x39d8c8: 0xc0e6458  jal         func_399160
label_39d8cc:
    if (ctx->pc == 0x39D8CCu) {
        ctx->pc = 0x39D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8C8u;
        // 0x39d8cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8D0u;
        goto label_39d8d0;
    }
    ctx->pc = 0x39D8C8u;
    SET_GPR_U32(ctx, 31, 0x39D8D0u);
    ctx->pc = 0x39D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D8C8u;
    // 0x39d8cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399160u, 0x39D8C8u, 0x39D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D8D0u;
label_39d8d0:
    // 0x39d8d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d8d4:
    // 0x39d8d4: 0xc0e646a  jal         func_3991A8
label_39d8d8:
    if (ctx->pc == 0x39D8D8u) {
        ctx->pc = 0x39D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8D4u;
        // 0x39d8d8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8DCu;
        goto label_39d8dc;
    }
    ctx->pc = 0x39D8D4u;
    SET_GPR_U32(ctx, 31, 0x39D8DCu);
    ctx->pc = 0x39D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D8D4u;
    // 0x39d8d8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991A8u, 0x39D8D4u, 0x39D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D8DCu;
label_39d8dc:
    // 0x39d8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d8e0:
    // 0x39d8e0: 0xc0e645e  jal         func_399178
label_39d8e4:
    if (ctx->pc == 0x39D8E4u) {
        ctx->pc = 0x39D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8E0u;
        // 0x39d8e4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8E8u;
        goto label_39d8e8;
    }
    ctx->pc = 0x39D8E0u;
    SET_GPR_U32(ctx, 31, 0x39D8E8u);
    ctx->pc = 0x39D8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D8E0u;
    // 0x39d8e4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399178u, 0x39D8E0u, 0x39D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D8E8u;
label_39d8e8:
    // 0x39d8e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39d8ec:
    // 0x39d8ec: 0xc0e5f62  jal         func_397D88
label_39d8f0:
    if (ctx->pc == 0x39D8F0u) {
        ctx->pc = 0x39D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8ECu;
        // 0x39d8f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D8F4u;
        goto label_39d8f4;
    }
    ctx->pc = 0x39D8ECu;
    SET_GPR_U32(ctx, 31, 0x39D8F4u);
    ctx->pc = 0x39D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D8ECu;
    // 0x39d8f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397D88u, 0x39D8ECu, 0x39D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D8F4u;
label_39d8f4:
    // 0x39d8f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39d8f8:
    // 0x39d8f8: 0xc0e5f4a  jal         func_397D28
label_39d8fc:
    if (ctx->pc == 0x39D8FCu) {
        ctx->pc = 0x39D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D8F8u;
        // 0x39d8fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D900u;
        goto label_39d900;
    }
    ctx->pc = 0x39D8F8u;
    SET_GPR_U32(ctx, 31, 0x39D900u);
    ctx->pc = 0x39D8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D8F8u;
    // 0x39d8fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397D28u, 0x39D8F8u, 0x39D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D900u;
label_39d900:
    // 0x39d900: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39d900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39d904:
    // 0x39d904: 0xc0e5f44  jal         func_397D10
label_39d908:
    if (ctx->pc == 0x39D908u) {
        ctx->pc = 0x39D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D904u;
        // 0x39d908: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D90Cu;
        goto label_39d90c;
    }
    ctx->pc = 0x39D904u;
    SET_GPR_U32(ctx, 31, 0x39D90Cu);
    ctx->pc = 0x39D908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D904u;
    // 0x39d908: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397D10u, 0x39D904u, 0x39D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D90Cu;
label_39d90c:
    // 0x39d90c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39d90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39d910:
    // 0x39d910: 0xc0e5f78  jal         func_397DE0
label_39d914:
    if (ctx->pc == 0x39D914u) {
        ctx->pc = 0x39D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D910u;
        // 0x39d914: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D918u;
        goto label_39d918;
    }
    ctx->pc = 0x39D910u;
    SET_GPR_U32(ctx, 31, 0x39D918u);
    ctx->pc = 0x39D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D910u;
    // 0x39d914: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397DE0u, 0x39D910u, 0x39D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D918u;
label_39d918:
    // 0x39d918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d91c:
    // 0x39d91c: 0xc0e7058  jal         func_39C160
label_39d920:
    if (ctx->pc == 0x39D920u) {
        ctx->pc = 0x39D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D91Cu;
        // 0x39d920: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D924u;
        goto label_39d924;
    }
    ctx->pc = 0x39D91Cu;
    SET_GPR_U32(ctx, 31, 0x39D924u);
    ctx->pc = 0x39D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D91Cu;
    // 0x39d920: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C160u, 0x39D91Cu, 0x39D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D924u;
label_39d924:
    // 0x39d924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d928:
    // 0x39d928: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x39d928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39d92c:
    // 0x39d92c: 0xc0e7256  jal         func_39C958
label_39d930:
    if (ctx->pc == 0x39D930u) {
        ctx->pc = 0x39D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D92Cu;
        // 0x39d930: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D934u;
        goto label_39d934;
    }
    ctx->pc = 0x39D92Cu;
    SET_GPR_U32(ctx, 31, 0x39D934u);
    ctx->pc = 0x39D930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D92Cu;
    // 0x39d930: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C958u, 0x39D92Cu, 0x39D934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D934u;
label_39d934:
    // 0x39d934: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x39d934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39d938:
    // 0x39d938: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_39d93c:
    if (ctx->pc == 0x39D93Cu) {
        ctx->pc = 0x39D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D938u;
        // 0x39d93c: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D940u;
        goto label_39d940;
    }
    ctx->pc = 0x39D938u;
    {
        const bool branch_taken_0x39d938 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D938u;
        // 0x39d93c: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d938) {
            ctx->pc = 0x39D948u;
            goto label_39d948;
        }
    }
    ctx->pc = 0x39D940u;
label_39d940:
    // 0x39d940: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_39d944:
    if (ctx->pc == 0x39D944u) {
        ctx->pc = 0x39D948u;
        goto label_39d948;
    }
    ctx->pc = 0x39D940u;
    {
        const bool branch_taken_0x39d940 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d940) {
            ctx->pc = 0x39D950u;
            goto label_39d950;
        }
    }
    ctx->pc = 0x39D948u;
label_39d948:
    // 0x39d948: 0xc0e7242  jal         func_39C908
label_39d94c:
    if (ctx->pc == 0x39D94Cu) {
        ctx->pc = 0x39D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D948u;
        // 0x39d94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D950u;
        goto label_39d950;
    }
    ctx->pc = 0x39D948u;
    SET_GPR_U32(ctx, 31, 0x39D950u);
    ctx->pc = 0x39D94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D948u;
    // 0x39d94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C908u, 0x39D948u, 0x39D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D950u;
label_39d950:
    // 0x39d950: 0xc0e749e  jal         func_39D278
label_39d954:
    if (ctx->pc == 0x39D954u) {
        ctx->pc = 0x39D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D950u;
        // 0x39d954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D958u;
        goto label_39d958;
    }
    ctx->pc = 0x39D950u;
    SET_GPR_U32(ctx, 31, 0x39D958u);
    ctx->pc = 0x39D954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D950u;
    // 0x39d954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D278u, 0x39D950u, 0x39D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D958u;
label_39d958:
    // 0x39d958: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x39d958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_39d95c:
    // 0x39d95c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_39d960:
    if (ctx->pc == 0x39D960u) {
        ctx->pc = 0x39D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D95Cu;
        // 0x39d960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D964u;
        goto label_39d964;
    }
    ctx->pc = 0x39D95Cu;
    {
        const bool branch_taken_0x39d95c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d95c) {
            ctx->pc = 0x39D960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D95Cu;
            // 0x39d960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D970u;
            goto label_39d970;
        }
    }
    ctx->pc = 0x39D964u;
label_39d964:
    // 0x39d964: 0xc0eb548  jal         func_3AD520
label_39d968:
    if (ctx->pc == 0x39D968u) {
        ctx->pc = 0x39D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D964u;
        // 0x39d968: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D96Cu;
        goto label_39d96c;
    }
    ctx->pc = 0x39D964u;
    SET_GPR_U32(ctx, 31, 0x39D96Cu);
    ctx->pc = 0x39D968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D964u;
    // 0x39d968: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD520u, 0x39D964u, 0x39D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D96Cu;
label_39d96c:
    // 0x39d96c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d970:
    // 0x39d970: 0xc0e644c  jal         func_399130
label_39d974:
    if (ctx->pc == 0x39D974u) {
        ctx->pc = 0x39D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D970u;
        // 0x39d974: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D978u;
        goto label_39d978;
    }
    ctx->pc = 0x39D970u;
    SET_GPR_U32(ctx, 31, 0x39D978u);
    ctx->pc = 0x39D974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D970u;
    // 0x39d974: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399130u, 0x39D970u, 0x39D978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D978u;
label_39d978:
    // 0x39d978: 0x54530007  bnel        $v0, $s3, . + 4 + (0x7 << 2)
label_39d97c:
    if (ctx->pc == 0x39D97Cu) {
        ctx->pc = 0x39D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D978u;
        // 0x39d97c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D980u;
        goto label_39d980;
    }
    ctx->pc = 0x39D978u;
    {
        const bool branch_taken_0x39d978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x39d978) {
            ctx->pc = 0x39D97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D978u;
            // 0x39d97c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D998u;
            goto label_39d998;
        }
    }
    ctx->pc = 0x39D980u;
label_39d980:
    // 0x39d980: 0xc0e64c4  jal         func_399310
label_39d984:
    if (ctx->pc == 0x39D984u) {
        ctx->pc = 0x39D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D980u;
        // 0x39d984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D988u;
        goto label_39d988;
    }
    ctx->pc = 0x39D980u;
    SET_GPR_U32(ctx, 31, 0x39D988u);
    ctx->pc = 0x39D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D980u;
    // 0x39d984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399310u, 0x39D980u, 0x39D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D988u;
label_39d988:
    // 0x39d988: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39d988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39d98c:
    // 0x39d98c: 0xc0e5f7a  jal         func_397DE8
label_39d990:
    if (ctx->pc == 0x39D990u) {
        ctx->pc = 0x39D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D98Cu;
        // 0x39d990: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D994u;
        goto label_39d994;
    }
    ctx->pc = 0x39D98Cu;
    SET_GPR_U32(ctx, 31, 0x39D994u);
    ctx->pc = 0x39D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D98Cu;
    // 0x39d990: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397DE8u, 0x39D98Cu, 0x39D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D994u;
label_39d994:
    // 0x39d994: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39d994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39d998:
    // 0x39d998: 0xc0e5f20  jal         func_397C80
label_39d99c:
    if (ctx->pc == 0x39D99Cu) {
        ctx->pc = 0x39D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D998u;
        // 0x39d99c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9A0u;
        goto label_39d9a0;
    }
    ctx->pc = 0x39D998u;
    SET_GPR_U32(ctx, 31, 0x39D9A0u);
    ctx->pc = 0x39D99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D998u;
    // 0x39d99c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C80u, 0x39D998u, 0x39D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D9A0u;
label_39d9a0:
    // 0x39d9a0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_39d9a4:
    // 0x39d9a4: 0x8c42addc  lw          $v0, -0x5224($v0)
    ctx->pc = 0x39d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946268)));
label_39d9a8:
    // 0x39d9a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39d9ac:
    if (ctx->pc == 0x39D9ACu) {
        ctx->pc = 0x39D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9A8u;
        // 0x39d9ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9B0u;
        goto label_39d9b0;
    }
    ctx->pc = 0x39D9A8u;
    {
        const bool branch_taken_0x39d9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9A8u;
        // 0x39d9ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d9a8) {
            ctx->pc = 0x39D9C0u;
            goto label_39d9c0;
        }
    }
    ctx->pc = 0x39D9B0u;
label_39d9b0:
    // 0x39d9b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x39d9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39d9b4:
    // 0x39d9b4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x39d9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39d9b8:
    // 0x39d9b8: 0x40f809  jalr        $v0
label_39d9bc:
    if (ctx->pc == 0x39D9BCu) {
        ctx->pc = 0x39D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9B8u;
        // 0x39d9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9C0u;
        goto label_39d9c0;
    }
    ctx->pc = 0x39D9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D9C0u);
        ctx->pc = 0x39D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9B8u;
        // 0x39d9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D9B8u, 0x39D9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D9C0u;
label_39d9c0:
    // 0x39d9c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_39d9c4:
    if (ctx->pc == 0x39D9C4u) {
        ctx->pc = 0x39D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9C0u;
        // 0x39d9c4: 0xa2130001  sb          $s3, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9C8u;
        goto label_39d9c8;
    }
    ctx->pc = 0x39D9C0u;
    {
        const bool branch_taken_0x39d9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9C0u;
        // 0x39d9c4: 0xa2130001  sb          $s3, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d9c0) {
            ctx->pc = 0x39D9D8u;
            goto label_39d9d8;
        }
    }
    ctx->pc = 0x39D9C8u;
label_39d9c8:
    // 0x39d9c8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_39d9cc:
    if (ctx->pc == 0x39D9CCu) {
        ctx->pc = 0x39D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9C8u;
        // 0x39d9cc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9D0u;
        goto label_39d9d0;
    }
    ctx->pc = 0x39D9C8u;
    {
        const bool branch_taken_0x39d9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39d9c8) {
            ctx->pc = 0x39D9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D9C8u;
            // 0x39d9cc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D9DCu;
            goto label_39d9dc;
        }
    }
    ctx->pc = 0x39D9D0u;
label_39d9d0:
    // 0x39d9d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x39d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39d9d4:
    // 0x39d9d4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x39d9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_39d9d8:
    // 0x39d9d8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x39d9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39d9dc:
    // 0x39d9dc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x39d9dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_39d9e0:
    // 0x39d9e0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x39d9e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39d9e4:
    // 0x39d9e4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x39d9e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_39d9e8:
    // 0x39d9e8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x39d9e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39d9ec:
    // 0x39d9ec: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x39d9ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_39d9f0:
    // 0x39d9f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x39d9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_39d9f4:
    // 0x39d9f4: 0x3e00008  jr          $ra
label_39d9f8:
    if (ctx->pc == 0x39D9F8u) {
        ctx->pc = 0x39D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9F4u;
        // 0x39d9f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D9FCu;
        goto label_39d9fc;
    }
    ctx->pc = 0x39D9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9F4u;
        // 0x39d9f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39D9FCu;
label_39d9fc:
    // 0x39d9fc: 0x0  nop
    ctx->pc = 0x39d9fcu;
    // NOP
label_39da00:
    // 0x39da00: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x39da00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_39da04:
    // 0x39da04: 0x0  nop
    ctx->pc = 0x39da04u;
    // NOP
    ctx->pc = 0x39da08u;
}
