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

// Function: sub_001BE5F8
// Address: 0x1be5f8 - 0x1be910
void sub_001BE5F8_0x1be5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE5F8_0x1be5f8");
#endif

    switch (ctx->pc) {
        case 0x1be5f8u: goto label_1be5f8;
        case 0x1be5fcu: goto label_1be5fc;
        case 0x1be600u: goto label_1be600;
        case 0x1be604u: goto label_1be604;
        case 0x1be608u: goto label_1be608;
        case 0x1be60cu: goto label_1be60c;
        case 0x1be610u: goto label_1be610;
        case 0x1be614u: goto label_1be614;
        case 0x1be618u: goto label_1be618;
        case 0x1be61cu: goto label_1be61c;
        case 0x1be620u: goto label_1be620;
        case 0x1be624u: goto label_1be624;
        case 0x1be628u: goto label_1be628;
        case 0x1be62cu: goto label_1be62c;
        case 0x1be630u: goto label_1be630;
        case 0x1be634u: goto label_1be634;
        case 0x1be638u: goto label_1be638;
        case 0x1be63cu: goto label_1be63c;
        case 0x1be640u: goto label_1be640;
        case 0x1be644u: goto label_1be644;
        case 0x1be648u: goto label_1be648;
        case 0x1be64cu: goto label_1be64c;
        case 0x1be650u: goto label_1be650;
        case 0x1be654u: goto label_1be654;
        case 0x1be658u: goto label_1be658;
        case 0x1be65cu: goto label_1be65c;
        case 0x1be660u: goto label_1be660;
        case 0x1be664u: goto label_1be664;
        case 0x1be668u: goto label_1be668;
        case 0x1be66cu: goto label_1be66c;
        case 0x1be670u: goto label_1be670;
        case 0x1be674u: goto label_1be674;
        case 0x1be678u: goto label_1be678;
        case 0x1be67cu: goto label_1be67c;
        case 0x1be680u: goto label_1be680;
        case 0x1be684u: goto label_1be684;
        case 0x1be688u: goto label_1be688;
        case 0x1be68cu: goto label_1be68c;
        case 0x1be690u: goto label_1be690;
        case 0x1be694u: goto label_1be694;
        case 0x1be698u: goto label_1be698;
        case 0x1be69cu: goto label_1be69c;
        case 0x1be6a0u: goto label_1be6a0;
        case 0x1be6a4u: goto label_1be6a4;
        case 0x1be6a8u: goto label_1be6a8;
        case 0x1be6acu: goto label_1be6ac;
        case 0x1be6b0u: goto label_1be6b0;
        case 0x1be6b4u: goto label_1be6b4;
        case 0x1be6b8u: goto label_1be6b8;
        case 0x1be6bcu: goto label_1be6bc;
        case 0x1be6c0u: goto label_1be6c0;
        case 0x1be6c4u: goto label_1be6c4;
        case 0x1be6c8u: goto label_1be6c8;
        case 0x1be6ccu: goto label_1be6cc;
        case 0x1be6d0u: goto label_1be6d0;
        case 0x1be6d4u: goto label_1be6d4;
        case 0x1be6d8u: goto label_1be6d8;
        case 0x1be6dcu: goto label_1be6dc;
        case 0x1be6e0u: goto label_1be6e0;
        case 0x1be6e4u: goto label_1be6e4;
        case 0x1be6e8u: goto label_1be6e8;
        case 0x1be6ecu: goto label_1be6ec;
        case 0x1be6f0u: goto label_1be6f0;
        case 0x1be6f4u: goto label_1be6f4;
        case 0x1be6f8u: goto label_1be6f8;
        case 0x1be6fcu: goto label_1be6fc;
        case 0x1be700u: goto label_1be700;
        case 0x1be704u: goto label_1be704;
        case 0x1be708u: goto label_1be708;
        case 0x1be70cu: goto label_1be70c;
        case 0x1be710u: goto label_1be710;
        case 0x1be714u: goto label_1be714;
        case 0x1be718u: goto label_1be718;
        case 0x1be71cu: goto label_1be71c;
        case 0x1be720u: goto label_1be720;
        case 0x1be724u: goto label_1be724;
        case 0x1be728u: goto label_1be728;
        case 0x1be72cu: goto label_1be72c;
        case 0x1be730u: goto label_1be730;
        case 0x1be734u: goto label_1be734;
        case 0x1be738u: goto label_1be738;
        case 0x1be73cu: goto label_1be73c;
        case 0x1be740u: goto label_1be740;
        case 0x1be744u: goto label_1be744;
        case 0x1be748u: goto label_1be748;
        case 0x1be74cu: goto label_1be74c;
        case 0x1be750u: goto label_1be750;
        case 0x1be754u: goto label_1be754;
        case 0x1be758u: goto label_1be758;
        case 0x1be75cu: goto label_1be75c;
        case 0x1be760u: goto label_1be760;
        case 0x1be764u: goto label_1be764;
        case 0x1be768u: goto label_1be768;
        case 0x1be76cu: goto label_1be76c;
        case 0x1be770u: goto label_1be770;
        case 0x1be774u: goto label_1be774;
        case 0x1be778u: goto label_1be778;
        case 0x1be77cu: goto label_1be77c;
        case 0x1be780u: goto label_1be780;
        case 0x1be784u: goto label_1be784;
        case 0x1be788u: goto label_1be788;
        case 0x1be78cu: goto label_1be78c;
        case 0x1be790u: goto label_1be790;
        case 0x1be794u: goto label_1be794;
        case 0x1be798u: goto label_1be798;
        case 0x1be79cu: goto label_1be79c;
        case 0x1be7a0u: goto label_1be7a0;
        case 0x1be7a4u: goto label_1be7a4;
        case 0x1be7a8u: goto label_1be7a8;
        case 0x1be7acu: goto label_1be7ac;
        case 0x1be7b0u: goto label_1be7b0;
        case 0x1be7b4u: goto label_1be7b4;
        case 0x1be7b8u: goto label_1be7b8;
        case 0x1be7bcu: goto label_1be7bc;
        case 0x1be7c0u: goto label_1be7c0;
        case 0x1be7c4u: goto label_1be7c4;
        case 0x1be7c8u: goto label_1be7c8;
        case 0x1be7ccu: goto label_1be7cc;
        case 0x1be7d0u: goto label_1be7d0;
        case 0x1be7d4u: goto label_1be7d4;
        case 0x1be7d8u: goto label_1be7d8;
        case 0x1be7dcu: goto label_1be7dc;
        case 0x1be7e0u: goto label_1be7e0;
        case 0x1be7e4u: goto label_1be7e4;
        case 0x1be7e8u: goto label_1be7e8;
        case 0x1be7ecu: goto label_1be7ec;
        case 0x1be7f0u: goto label_1be7f0;
        case 0x1be7f4u: goto label_1be7f4;
        case 0x1be7f8u: goto label_1be7f8;
        case 0x1be7fcu: goto label_1be7fc;
        case 0x1be800u: goto label_1be800;
        case 0x1be804u: goto label_1be804;
        case 0x1be808u: goto label_1be808;
        case 0x1be80cu: goto label_1be80c;
        case 0x1be810u: goto label_1be810;
        case 0x1be814u: goto label_1be814;
        case 0x1be818u: goto label_1be818;
        case 0x1be81cu: goto label_1be81c;
        case 0x1be820u: goto label_1be820;
        case 0x1be824u: goto label_1be824;
        case 0x1be828u: goto label_1be828;
        case 0x1be82cu: goto label_1be82c;
        case 0x1be830u: goto label_1be830;
        case 0x1be834u: goto label_1be834;
        case 0x1be838u: goto label_1be838;
        case 0x1be83cu: goto label_1be83c;
        case 0x1be840u: goto label_1be840;
        case 0x1be844u: goto label_1be844;
        case 0x1be848u: goto label_1be848;
        case 0x1be84cu: goto label_1be84c;
        case 0x1be850u: goto label_1be850;
        case 0x1be854u: goto label_1be854;
        case 0x1be858u: goto label_1be858;
        case 0x1be85cu: goto label_1be85c;
        case 0x1be860u: goto label_1be860;
        case 0x1be864u: goto label_1be864;
        case 0x1be868u: goto label_1be868;
        case 0x1be86cu: goto label_1be86c;
        case 0x1be870u: goto label_1be870;
        case 0x1be874u: goto label_1be874;
        case 0x1be878u: goto label_1be878;
        case 0x1be87cu: goto label_1be87c;
        case 0x1be880u: goto label_1be880;
        case 0x1be884u: goto label_1be884;
        case 0x1be888u: goto label_1be888;
        case 0x1be88cu: goto label_1be88c;
        case 0x1be890u: goto label_1be890;
        case 0x1be894u: goto label_1be894;
        case 0x1be898u: goto label_1be898;
        case 0x1be89cu: goto label_1be89c;
        case 0x1be8a0u: goto label_1be8a0;
        case 0x1be8a4u: goto label_1be8a4;
        case 0x1be8a8u: goto label_1be8a8;
        case 0x1be8acu: goto label_1be8ac;
        case 0x1be8b0u: goto label_1be8b0;
        case 0x1be8b4u: goto label_1be8b4;
        case 0x1be8b8u: goto label_1be8b8;
        case 0x1be8bcu: goto label_1be8bc;
        case 0x1be8c0u: goto label_1be8c0;
        case 0x1be8c4u: goto label_1be8c4;
        case 0x1be8c8u: goto label_1be8c8;
        case 0x1be8ccu: goto label_1be8cc;
        case 0x1be8d0u: goto label_1be8d0;
        case 0x1be8d4u: goto label_1be8d4;
        case 0x1be8d8u: goto label_1be8d8;
        case 0x1be8dcu: goto label_1be8dc;
        case 0x1be8e0u: goto label_1be8e0;
        case 0x1be8e4u: goto label_1be8e4;
        case 0x1be8e8u: goto label_1be8e8;
        case 0x1be8ecu: goto label_1be8ec;
        case 0x1be8f0u: goto label_1be8f0;
        case 0x1be8f4u: goto label_1be8f4;
        case 0x1be8f8u: goto label_1be8f8;
        case 0x1be8fcu: goto label_1be8fc;
        case 0x1be900u: goto label_1be900;
        case 0x1be904u: goto label_1be904;
        case 0x1be908u: goto label_1be908;
        case 0x1be90cu: goto label_1be90c;
        default: break;
    }

    ctx->pc = 0x1be5f8u;

label_1be5f8:
    // 0x1be5f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1be5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1be5fc:
    // 0x1be5fc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1be5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1be600:
    // 0x1be600: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1be600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1be604:
    // 0x1be604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1be608:
    // 0x1be608: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1be608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1be60c:
    // 0x1be60c: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x1be60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_1be610:
    // 0x1be610: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1be610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1be614:
    // 0x1be614: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1be614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1be618:
    // 0x1be618: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1be618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1be61c:
    // 0x1be61c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1be61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1be620:
    // 0x1be620: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1be620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1be624:
    // 0x1be624: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1be624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1be628:
    // 0x1be628: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1be628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1be62c:
    // 0x1be62c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1be62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1be630:
    // 0x1be630: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1be634:
    if (ctx->pc == 0x1BE634u) {
        ctx->pc = 0x1BE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE630u;
        // 0x1be634: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE638u;
        goto label_1be638;
    }
    ctx->pc = 0x1BE630u;
    {
        const bool branch_taken_0x1be630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE630u;
        // 0x1be634: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be630) {
            ctx->pc = 0x1BE648u;
            goto label_1be648;
        }
    }
    ctx->pc = 0x1BE638u;
label_1be638:
    // 0x1be638: 0xc06fb64  jal         func_1BED90
label_1be63c:
    if (ctx->pc == 0x1BE63Cu) {
        ctx->pc = 0x1BE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE638u;
        // 0x1be63c: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE640u;
        goto label_1be640;
    }
    ctx->pc = 0x1BE638u;
    SET_GPR_U32(ctx, 31, 0x1BE640u);
    ctx->pc = 0x1BE63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE638u;
    // 0x1be63c: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1BE638u, 0x1BE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE640u;
label_1be640:
    // 0x1be640: 0x10000007  b           . + 4 + (0x7 << 2)
label_1be644:
    if (ctx->pc == 0x1BE644u) {
        ctx->pc = 0x1BE644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE640u;
        // 0x1be644: 0x26330300  addiu       $s3, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE648u;
        goto label_1be648;
    }
    ctx->pc = 0x1BE640u;
    {
        const bool branch_taken_0x1be640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE640u;
        // 0x1be644: 0x26330300  addiu       $s3, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be640) {
            ctx->pc = 0x1BE660u;
            goto label_1be660;
        }
    }
    ctx->pc = 0x1BE648u;
label_1be648:
    // 0x1be648: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1be648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_1be64c:
    // 0x1be64c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1be650:
    if (ctx->pc == 0x1BE650u) {
        ctx->pc = 0x1BE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE64Cu;
        // 0x1be650: 0x26330300  addiu       $s3, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE654u;
        goto label_1be654;
    }
    ctx->pc = 0x1BE64Cu;
    {
        const bool branch_taken_0x1be64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE64Cu;
        // 0x1be650: 0x26330300  addiu       $s3, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be64c) {
            ctx->pc = 0x1BE660u;
            goto label_1be660;
        }
    }
    ctx->pc = 0x1BE654u;
label_1be654:
    // 0x1be654: 0xc06fb1e  jal         func_1BEC78
label_1be658:
    if (ctx->pc == 0x1BE658u) {
        ctx->pc = 0x1BE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE654u;
        // 0x1be658: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE65Cu;
        goto label_1be65c;
    }
    ctx->pc = 0x1BE654u;
    SET_GPR_U32(ctx, 31, 0x1BE65Cu);
    ctx->pc = 0x1BE658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE654u;
    // 0x1be658: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x1BE654u, 0x1BE65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE65Cu;
label_1be65c:
    // 0x1be65c: 0x26330300  addiu       $s3, $s1, 0x300
    ctx->pc = 0x1be65cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_1be660:
    // 0x1be660: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
label_1be664:
    if (ctx->pc == 0x1BE664u) {
        ctx->pc = 0x1BE668u;
        goto label_1be668;
    }
    ctx->pc = 0x1BE660u;
    {
        const bool branch_taken_0x1be660 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be660) {
            ctx->pc = 0x1BE6F0u;
            goto label_1be6f0;
        }
    }
    ctx->pc = 0x1BE668u;
label_1be668:
    // 0x1be668: 0xc6200300  lwc1        $f0, 0x300($s1)
    ctx->pc = 0x1be668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be66c:
    // 0x1be66c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1be66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_1be670:
    // 0x1be670: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1be670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_1be674:
    // 0x1be674: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1be674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1be678:
    // 0x1be678: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1be678u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1be67c:
    // 0x1be67c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1be67cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1be680:
    // 0x1be680: 0x0  nop
    ctx->pc = 0x1be680u;
    // NOP
label_1be684:
    // 0x1be684: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1be688:
    if (ctx->pc == 0x1BE688u) {
        ctx->pc = 0x1BE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE684u;
        // 0x1be688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE68Cu;
        goto label_1be68c;
    }
    ctx->pc = 0x1BE684u;
    {
        const bool branch_taken_0x1be684 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE684u;
        // 0x1be688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be684) {
            ctx->pc = 0x1BE6BCu;
            goto label_1be6bc;
        }
    }
    ctx->pc = 0x1BE68Cu;
label_1be68c:
    // 0x1be68c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1be68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be690:
    // 0x1be690: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1be690u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1be694:
    // 0x1be694: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1be694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1be698:
    // 0x1be698: 0x0  nop
    ctx->pc = 0x1be698u;
    // NOP
label_1be69c:
    // 0x1be69c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1be6a0:
    if (ctx->pc == 0x1BE6A0u) {
        ctx->pc = 0x1BE6A4u;
        goto label_1be6a4;
    }
    ctx->pc = 0x1BE69Cu;
    {
        const bool branch_taken_0x1be69c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be69c) {
            ctx->pc = 0x1BE6BCu;
            goto label_1be6bc;
        }
    }
    ctx->pc = 0x1BE6A4u;
label_1be6a4:
    // 0x1be6a4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1be6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be6a8:
    // 0x1be6a8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1be6a8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1be6ac:
    // 0x1be6ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1be6acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1be6b0:
    // 0x1be6b0: 0x0  nop
    ctx->pc = 0x1be6b0u;
    // NOP
label_1be6b4:
    // 0x1be6b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1be6b8:
    if (ctx->pc == 0x1BE6B8u) {
        ctx->pc = 0x1BE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6B4u;
        // 0x1be6b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6BCu;
        goto label_1be6bc;
    }
    ctx->pc = 0x1BE6B4u;
    {
        const bool branch_taken_0x1be6b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be6b4) {
            ctx->pc = 0x1BE6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE6B4u;
            // 0x1be6b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE6BCu;
            goto label_1be6bc;
        }
    }
    ctx->pc = 0x1BE6BCu;
label_1be6bc:
    // 0x1be6bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1be6c0:
    if (ctx->pc == 0x1BE6C0u) {
        ctx->pc = 0x1BE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6BCu;
        // 0x1be6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6C4u;
        goto label_1be6c4;
    }
    ctx->pc = 0x1BE6BCu;
    {
        const bool branch_taken_0x1be6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6BCu;
        // 0x1be6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6bc) {
            ctx->pc = 0x1BE6E8u;
            goto label_1be6e8;
        }
    }
    ctx->pc = 0x1BE6C4u;
label_1be6c4:
    // 0x1be6c4: 0x8e2501f4  lw          $a1, 0x1F4($s1)
    ctx->pc = 0x1be6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_1be6c8:
    // 0x1be6c8: 0x8e220394  lw          $v0, 0x394($s1)
    ctx->pc = 0x1be6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1be6cc:
    // 0x1be6cc: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1be6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_1be6d0:
    // 0x1be6d0: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x1be6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1be6d4:
    // 0x1be6d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1be6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1be6d8:
    // 0x1be6d8: 0xc0f809  jalr        $a2
label_1be6dc:
    if (ctx->pc == 0x1BE6DCu) {
        ctx->pc = 0x1BE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6D8u;
        // 0x1be6dc: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6E0u;
        goto label_1be6e0;
    }
    ctx->pc = 0x1BE6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BE6E0u);
        ctx->pc = 0x1BE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6D8u;
        // 0x1be6dc: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE6D8u, 0x1BE6E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE6E0u;
label_1be6e0:
    // 0x1be6e0: 0x10000080  b           . + 4 + (0x80 << 2)
label_1be6e4:
    if (ctx->pc == 0x1BE6E4u) {
        ctx->pc = 0x1BE6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6E0u;
        // 0x1be6e4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6E8u;
        goto label_1be6e8;
    }
    ctx->pc = 0x1BE6E0u;
    {
        const bool branch_taken_0x1be6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6E0u;
        // 0x1be6e4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6e0) {
            ctx->pc = 0x1BE8E4u;
            goto label_1be8e4;
        }
    }
    ctx->pc = 0x1BE6E8u;
label_1be6e8:
    // 0x1be6e8: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_1be6ec:
    if (ctx->pc == 0x1BE6ECu) {
        ctx->pc = 0x1BE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6E8u;
        // 0x1be6ec: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6F0u;
        goto label_1be6f0;
    }
    ctx->pc = 0x1BE6E8u;
    {
        const bool branch_taken_0x1be6e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be6e8) {
            ctx->pc = 0x1BE6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE6E8u;
            // 0x1be6ec: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE6FCu;
            goto label_1be6fc;
        }
    }
    ctx->pc = 0x1BE6F0u;
label_1be6f0:
    // 0x1be6f0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1be6f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1be6f4:
    // 0x1be6f4: 0xfa210300  sqc2        $vf1, 0x300($s1)
    ctx->pc = 0x1be6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 768), _mm_castps_si128(ctx->vu0_vf[1]));
label_1be6f8:
    // 0x1be6f8: 0x26300310  addiu       $s0, $s1, 0x310
    ctx->pc = 0x1be6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_1be6fc:
    // 0x1be6fc: 0x26230210  addiu       $v1, $s1, 0x210
    ctx->pc = 0x1be6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
label_1be700:
    // 0x1be700: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1be700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1be704:
    // 0x1be704: 0x263e01e0  addiu       $fp, $s1, 0x1E0
    ctx->pc = 0x1be704u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_1be708:
    // 0x1be708: 0x263600d0  addiu       $s6, $s1, 0xD0
    ctx->pc = 0x1be708u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_1be70c:
    // 0x1be70c: 0x26370150  addiu       $s7, $s1, 0x150
    ctx->pc = 0x1be70cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_1be710:
    // 0x1be710: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1be710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1be714:
    // 0x1be714: 0x26320130  addiu       $s2, $s1, 0x130
    ctx->pc = 0x1be714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_1be718:
    // 0x1be718: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1be718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1be71c:
    // 0x1be71c: 0x263400f0  addiu       $s4, $s1, 0xF0
    ctx->pc = 0x1be71cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_1be720:
    // 0x1be720: 0x262302b0  addiu       $v1, $s1, 0x2B0
    ctx->pc = 0x1be720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
label_1be724:
    // 0x1be724: 0x26350110  addiu       $s5, $s1, 0x110
    ctx->pc = 0x1be724u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1be728:
    // 0x1be728: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1be728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1be72c:
    // 0x1be72c: 0x26230260  addiu       $v1, $s1, 0x260
    ctx->pc = 0x1be72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_1be730:
    // 0x1be730: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1be734:
    if (ctx->pc == 0x1BE734u) {
        ctx->pc = 0x1BE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE730u;
        // 0x1be734: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE738u;
        goto label_1be738;
    }
    ctx->pc = 0x1BE730u;
    {
        const bool branch_taken_0x1be730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE730u;
        // 0x1be734: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be730) {
            ctx->pc = 0x1BE758u;
            goto label_1be758;
        }
    }
    ctx->pc = 0x1BE738u;
label_1be738:
    // 0x1be738: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1be738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1be73c:
    // 0x1be73c: 0x0  nop
    ctx->pc = 0x1be73cu;
    // NOP
label_1be740:
    // 0x1be740: 0xc0f61e8  jal         func_3D87A0
label_1be744:
    if (ctx->pc == 0x1BE744u) {
        ctx->pc = 0x1BE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE740u;
        // 0x1be744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE748u;
        goto label_1be748;
    }
    ctx->pc = 0x1BE740u;
    SET_GPR_U32(ctx, 31, 0x1BE748u);
    ctx->pc = 0x1BE744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE740u;
    // 0x1be744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1BE740u, 0x1BE748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE748u;
label_1be748:
    // 0x1be748: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1be748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1be74c:
    // 0x1be74c: 0x0  nop
    ctx->pc = 0x1be74cu;
    // NOP
label_1be750:
    // 0x1be750: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1be754:
    if (ctx->pc == 0x1BE754u) {
        ctx->pc = 0x1BE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE750u;
        // 0x1be754: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE758u;
        goto label_1be758;
    }
    ctx->pc = 0x1BE750u;
    {
        const bool branch_taken_0x1be750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be750) {
            ctx->pc = 0x1BE754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE750u;
            // 0x1be754: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be740;
        }
    }
    ctx->pc = 0x1BE758u;
label_1be758:
    // 0x1be758: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1be758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1be75c:
    // 0x1be75c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1be75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1be760:
    // 0x1be760: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1be760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1be764:
    // 0x1be764: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1be764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1be768:
    // 0x1be768: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1be768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1be76c:
    // 0x1be76c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1be76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1be770:
    // 0x1be770: 0xc06fb38  jal         func_1BECE0
label_1be774:
    if (ctx->pc == 0x1BE774u) {
        ctx->pc = 0x1BE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE770u;
        // 0x1be774: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE778u;
        goto label_1be778;
    }
    ctx->pc = 0x1BE770u;
    SET_GPR_U32(ctx, 31, 0x1BE778u);
    ctx->pc = 0x1BE774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE770u;
    // 0x1be774: 0x8e250030  lw          $a1, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1BE770u, 0x1BE778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE778u;
label_1be778:
    // 0x1be778: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1be778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1be77c:
    // 0x1be77c: 0xc06fb38  jal         func_1BECE0
label_1be780:
    if (ctx->pc == 0x1BE780u) {
        ctx->pc = 0x1BE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE77Cu;
        // 0x1be780: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE784u;
        goto label_1be784;
    }
    ctx->pc = 0x1BE77Cu;
    SET_GPR_U32(ctx, 31, 0x1BE784u);
    ctx->pc = 0x1BE780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE77Cu;
    // 0x1be780: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1BE77Cu, 0x1BE784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE784u;
label_1be784:
    // 0x1be784: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1be784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1be788:
    // 0x1be788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1be78c:
    // 0x1be78c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1be78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1be790:
    // 0x1be790: 0xc0f7218  jal         func_3DC860
label_1be794:
    if (ctx->pc == 0x1BE794u) {
        ctx->pc = 0x1BE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE790u;
        // 0x1be794: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE798u;
        goto label_1be798;
    }
    ctx->pc = 0x1BE790u;
    SET_GPR_U32(ctx, 31, 0x1BE798u);
    ctx->pc = 0x1BE794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE790u;
    // 0x1be794: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1BE790u, 0x1BE798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE798u;
label_1be798:
    // 0x1be798: 0xc6200300  lwc1        $f0, 0x300($s1)
    ctx->pc = 0x1be798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be79c:
    // 0x1be79c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be7a0:
    // 0x1be7a0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1be7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_1be7a4:
    // 0x1be7a4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1be7a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_1be7a8:
    // 0x1be7a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1be7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1be7ac:
    // 0x1be7ac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1be7acu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1be7b0:
    // 0x1be7b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1be7b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1be7b4:
    // 0x1be7b4: 0x0  nop
    ctx->pc = 0x1be7b4u;
    // NOP
label_1be7b8:
    // 0x1be7b8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1be7bc:
    if (ctx->pc == 0x1BE7BCu) {
        ctx->pc = 0x1BE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7B8u;
        // 0x1be7bc: 0xae200304  sw          $zero, 0x304($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7C0u;
        goto label_1be7c0;
    }
    ctx->pc = 0x1BE7B8u;
    {
        const bool branch_taken_0x1be7b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7B8u;
        // 0x1be7bc: 0xae200304  sw          $zero, 0x304($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7b8) {
            ctx->pc = 0x1BE7F0u;
            goto label_1be7f0;
        }
    }
    ctx->pc = 0x1BE7C0u;
label_1be7c0:
    // 0x1be7c0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1be7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be7c4:
    // 0x1be7c4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1be7c4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1be7c8:
    // 0x1be7c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1be7c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1be7cc:
    // 0x1be7cc: 0x0  nop
    ctx->pc = 0x1be7ccu;
    // NOP
label_1be7d0:
    // 0x1be7d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1be7d4:
    if (ctx->pc == 0x1BE7D4u) {
        ctx->pc = 0x1BE7D8u;
        goto label_1be7d8;
    }
    ctx->pc = 0x1BE7D0u;
    {
        const bool branch_taken_0x1be7d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be7d0) {
            ctx->pc = 0x1BE7F0u;
            goto label_1be7f0;
        }
    }
    ctx->pc = 0x1BE7D8u;
label_1be7d8:
    // 0x1be7d8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1be7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be7dc:
    // 0x1be7dc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1be7dcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1be7e0:
    // 0x1be7e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1be7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1be7e4:
    // 0x1be7e4: 0x0  nop
    ctx->pc = 0x1be7e4u;
    // NOP
label_1be7e8:
    // 0x1be7e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1be7ec:
    if (ctx->pc == 0x1BE7ECu) {
        ctx->pc = 0x1BE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7E8u;
        // 0x1be7ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7F0u;
        goto label_1be7f0;
    }
    ctx->pc = 0x1BE7E8u;
    {
        const bool branch_taken_0x1be7e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be7e8) {
            ctx->pc = 0x1BE7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE7E8u;
            // 0x1be7ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE7F0u;
            goto label_1be7f0;
        }
    }
    ctx->pc = 0x1BE7F0u;
label_1be7f0:
    // 0x1be7f0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_1be7f4:
    if (ctx->pc == 0x1BE7F4u) {
        ctx->pc = 0x1BE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7F0u;
        // 0x1be7f4: 0xc6210130  lwc1        $f1, 0x130($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7F8u;
        goto label_1be7f8;
    }
    ctx->pc = 0x1BE7F0u;
    {
        const bool branch_taken_0x1be7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be7f0) {
            ctx->pc = 0x1BE7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE7F0u;
            // 0x1be7f4: 0xc6210130  lwc1        $f1, 0x130($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE86Cu;
            goto label_1be86c;
        }
    }
    ctx->pc = 0x1BE7F8u;
label_1be7f8:
    // 0x1be7f8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1be7f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1be7fc:
    // 0x1be7fc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1be7fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1be800:
    // 0x1be800: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1be800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1be804:
    // 0x1be804: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1be804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1be808:
    // 0x1be808: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1be808u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1be80c:
    // 0x1be80c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1be80cu;
    // VWAITQ (Q already resolved in this runtime)
label_1be810:
    // 0x1be810: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1be810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1be814:
    // 0x1be814: 0xfa210300  sqc2        $vf1, 0x300($s1)
    ctx->pc = 0x1be814u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 768), _mm_castps_si128(ctx->vu0_vf[1]));
label_1be818:
    // 0x1be818: 0xc664000c  lwc1        $f4, 0xC($s3)
    ctx->pc = 0x1be818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1be81c:
    // 0x1be81c: 0xc6220300  lwc1        $f2, 0x300($s1)
    ctx->pc = 0x1be81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1be820:
    // 0x1be820: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x1be820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1be824:
    // 0x1be824: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1be824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be828:
    // 0x1be828: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1be828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1be82c:
    // 0x1be82c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1be82cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1be830:
    // 0x1be830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1be830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be834:
    // 0x1be834: 0x0  nop
    ctx->pc = 0x1be834u;
    // NOP
label_1be838:
    // 0x1be838: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1be838u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1be83c:
    // 0x1be83c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1be83cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1be840:
    // 0x1be840: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1be840u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1be844:
    // 0x1be844: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1be844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1be848:
    // 0x1be848: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1be848u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1be84c:
    // 0x1be84c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1be84cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1be850:
    // 0x1be850: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1be850u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1be854:
    // 0x1be854: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1be854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1be858:
    // 0x1be858: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1be858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1be85c:
    // 0x1be85c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1be85cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1be860:
    // 0x1be860: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1be860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1be864:
    // 0x1be864: 0xfa210130  sqc2        $vf1, 0x130($s1)
    ctx->pc = 0x1be864u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_1be868:
    // 0x1be868: 0xc6210130  lwc1        $f1, 0x130($s1)
    ctx->pc = 0x1be868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be86c:
    // 0x1be86c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1be86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1be870:
    // 0x1be870: 0xe62100f0  swc1        $f1, 0xF0($s1)
    ctx->pc = 0x1be870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_1be874:
    // 0x1be874: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1be874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be878:
    // 0x1be878: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1be878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_1be87c:
    // 0x1be87c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1be87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be880:
    // 0x1be880: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x1be880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_1be884:
    // 0x1be884: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1be884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1be888:
    // 0x1be888: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x1be888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_1be88c:
    // 0x1be88c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1be88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1be890:
    // 0x1be890: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x1be890u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
label_1be894:
    // 0x1be894: 0xc6200130  lwc1        $f0, 0x130($s1)
    ctx->pc = 0x1be894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be898:
    // 0x1be898: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x1be898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
label_1be89c:
    // 0x1be89c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1be89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1be8a0:
    // 0x1be8a0: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x1be8a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1be8a4:
    // 0x1be8a4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1be8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1be8a8:
    // 0x1be8a8: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1be8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1be8ac:
    // 0x1be8ac: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1be8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1be8b0:
    // 0x1be8b0: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x1be8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_1be8b4:
    // 0x1be8b4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1be8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1be8b8:
    // 0x1be8b8: 0xc06fc34  jal         func_1BF0D0
label_1be8bc:
    if (ctx->pc == 0x1BE8BCu) {
        ctx->pc = 0x1BE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8B8u;
        // 0x1be8bc: 0xaea30014  sw          $v1, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8C0u;
        goto label_1be8c0;
    }
    ctx->pc = 0x1BE8B8u;
    SET_GPR_U32(ctx, 31, 0x1BE8C0u);
    ctx->pc = 0x1BE8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8B8u;
    // 0x1be8bc: 0xaea30014  sw          $v1, 0x14($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BE8B8u, 0x1BE8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8C0u;
label_1be8c0:
    // 0x1be8c0: 0xc06fc34  jal         func_1BF0D0
label_1be8c4:
    if (ctx->pc == 0x1BE8C4u) {
        ctx->pc = 0x1BE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8C0u;
        // 0x1be8c4: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8C8u;
        goto label_1be8c8;
    }
    ctx->pc = 0x1BE8C0u;
    SET_GPR_U32(ctx, 31, 0x1BE8C8u);
    ctx->pc = 0x1BE8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8C0u;
    // 0x1be8c4: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BE8C0u, 0x1BE8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8C8u;
label_1be8c8:
    // 0x1be8c8: 0xc06fc34  jal         func_1BF0D0
label_1be8cc:
    if (ctx->pc == 0x1BE8CCu) {
        ctx->pc = 0x1BE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8C8u;
        // 0x1be8cc: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8D0u;
        goto label_1be8d0;
    }
    ctx->pc = 0x1BE8C8u;
    SET_GPR_U32(ctx, 31, 0x1BE8D0u);
    ctx->pc = 0x1BE8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8C8u;
    // 0x1be8cc: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BE8C8u, 0x1BE8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8D0u;
label_1be8d0:
    // 0x1be8d0: 0xc06fa44  jal         func_1BE910
label_1be8d4:
    if (ctx->pc == 0x1BE8D4u) {
        ctx->pc = 0x1BE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8D0u;
        // 0x1be8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8D8u;
        goto label_1be8d8;
    }
    ctx->pc = 0x1BE8D0u;
    SET_GPR_U32(ctx, 31, 0x1BE8D8u);
    ctx->pc = 0x1BE8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8D0u;
    // 0x1be8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE910u, 0x1BE8D0u, 0x1BE8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8D8u;
label_1be8d8:
    // 0x1be8d8: 0xc06f894  jal         func_1BE250
label_1be8dc:
    if (ctx->pc == 0x1BE8DCu) {
        ctx->pc = 0x1BE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8D8u;
        // 0x1be8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8E0u;
        goto label_1be8e0;
    }
    ctx->pc = 0x1BE8D8u;
    SET_GPR_U32(ctx, 31, 0x1BE8E0u);
    ctx->pc = 0x1BE8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8D8u;
    // 0x1be8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE250u, 0x1BE8D8u, 0x1BE8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8E0u;
label_1be8e0:
    // 0x1be8e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1be8e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1be8e4:
    // 0x1be8e4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1be8e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1be8e8:
    // 0x1be8e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1be8e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1be8ec:
    // 0x1be8ec: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1be8ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1be8f0:
    // 0x1be8f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1be8f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1be8f4:
    // 0x1be8f4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1be8f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1be8f8:
    // 0x1be8f8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1be8f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1be8fc:
    // 0x1be8fc: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1be8fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1be900:
    // 0x1be900: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1be900u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1be904:
    // 0x1be904: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1be904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1be908:
    // 0x1be908: 0x3e00008  jr          $ra
label_1be90c:
    if (ctx->pc == 0x1BE90Cu) {
        ctx->pc = 0x1BE90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE908u;
        // 0x1be90c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE910u;
        goto label_fallthrough_0x1be908;
    }
    ctx->pc = 0x1BE908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE908u;
        // 0x1be90c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1be908:
    ctx->pc = 0x1BE910u;
}
