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

// Function: sub_002A4618
// Address: 0x2a4618 - 0x2a4a10
void sub_002A4618_0x2a4618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4618_0x2a4618");
#endif

    switch (ctx->pc) {
        case 0x2a4618u: goto label_2a4618;
        case 0x2a461cu: goto label_2a461c;
        case 0x2a4620u: goto label_2a4620;
        case 0x2a4624u: goto label_2a4624;
        case 0x2a4628u: goto label_2a4628;
        case 0x2a462cu: goto label_2a462c;
        case 0x2a4630u: goto label_2a4630;
        case 0x2a4634u: goto label_2a4634;
        case 0x2a4638u: goto label_2a4638;
        case 0x2a463cu: goto label_2a463c;
        case 0x2a4640u: goto label_2a4640;
        case 0x2a4644u: goto label_2a4644;
        case 0x2a4648u: goto label_2a4648;
        case 0x2a464cu: goto label_2a464c;
        case 0x2a4650u: goto label_2a4650;
        case 0x2a4654u: goto label_2a4654;
        case 0x2a4658u: goto label_2a4658;
        case 0x2a465cu: goto label_2a465c;
        case 0x2a4660u: goto label_2a4660;
        case 0x2a4664u: goto label_2a4664;
        case 0x2a4668u: goto label_2a4668;
        case 0x2a466cu: goto label_2a466c;
        case 0x2a4670u: goto label_2a4670;
        case 0x2a4674u: goto label_2a4674;
        case 0x2a4678u: goto label_2a4678;
        case 0x2a467cu: goto label_2a467c;
        case 0x2a4680u: goto label_2a4680;
        case 0x2a4684u: goto label_2a4684;
        case 0x2a4688u: goto label_2a4688;
        case 0x2a468cu: goto label_2a468c;
        case 0x2a4690u: goto label_2a4690;
        case 0x2a4694u: goto label_2a4694;
        case 0x2a4698u: goto label_2a4698;
        case 0x2a469cu: goto label_2a469c;
        case 0x2a46a0u: goto label_2a46a0;
        case 0x2a46a4u: goto label_2a46a4;
        case 0x2a46a8u: goto label_2a46a8;
        case 0x2a46acu: goto label_2a46ac;
        case 0x2a46b0u: goto label_2a46b0;
        case 0x2a46b4u: goto label_2a46b4;
        case 0x2a46b8u: goto label_2a46b8;
        case 0x2a46bcu: goto label_2a46bc;
        case 0x2a46c0u: goto label_2a46c0;
        case 0x2a46c4u: goto label_2a46c4;
        case 0x2a46c8u: goto label_2a46c8;
        case 0x2a46ccu: goto label_2a46cc;
        case 0x2a46d0u: goto label_2a46d0;
        case 0x2a46d4u: goto label_2a46d4;
        case 0x2a46d8u: goto label_2a46d8;
        case 0x2a46dcu: goto label_2a46dc;
        case 0x2a46e0u: goto label_2a46e0;
        case 0x2a46e4u: goto label_2a46e4;
        case 0x2a46e8u: goto label_2a46e8;
        case 0x2a46ecu: goto label_2a46ec;
        case 0x2a46f0u: goto label_2a46f0;
        case 0x2a46f4u: goto label_2a46f4;
        case 0x2a46f8u: goto label_2a46f8;
        case 0x2a46fcu: goto label_2a46fc;
        case 0x2a4700u: goto label_2a4700;
        case 0x2a4704u: goto label_2a4704;
        case 0x2a4708u: goto label_2a4708;
        case 0x2a470cu: goto label_2a470c;
        case 0x2a4710u: goto label_2a4710;
        case 0x2a4714u: goto label_2a4714;
        case 0x2a4718u: goto label_2a4718;
        case 0x2a471cu: goto label_2a471c;
        case 0x2a4720u: goto label_2a4720;
        case 0x2a4724u: goto label_2a4724;
        case 0x2a4728u: goto label_2a4728;
        case 0x2a472cu: goto label_2a472c;
        case 0x2a4730u: goto label_2a4730;
        case 0x2a4734u: goto label_2a4734;
        case 0x2a4738u: goto label_2a4738;
        case 0x2a473cu: goto label_2a473c;
        case 0x2a4740u: goto label_2a4740;
        case 0x2a4744u: goto label_2a4744;
        case 0x2a4748u: goto label_2a4748;
        case 0x2a474cu: goto label_2a474c;
        case 0x2a4750u: goto label_2a4750;
        case 0x2a4754u: goto label_2a4754;
        case 0x2a4758u: goto label_2a4758;
        case 0x2a475cu: goto label_2a475c;
        case 0x2a4760u: goto label_2a4760;
        case 0x2a4764u: goto label_2a4764;
        case 0x2a4768u: goto label_2a4768;
        case 0x2a476cu: goto label_2a476c;
        case 0x2a4770u: goto label_2a4770;
        case 0x2a4774u: goto label_2a4774;
        case 0x2a4778u: goto label_2a4778;
        case 0x2a477cu: goto label_2a477c;
        case 0x2a4780u: goto label_2a4780;
        case 0x2a4784u: goto label_2a4784;
        case 0x2a4788u: goto label_2a4788;
        case 0x2a478cu: goto label_2a478c;
        case 0x2a4790u: goto label_2a4790;
        case 0x2a4794u: goto label_2a4794;
        case 0x2a4798u: goto label_2a4798;
        case 0x2a479cu: goto label_2a479c;
        case 0x2a47a0u: goto label_2a47a0;
        case 0x2a47a4u: goto label_2a47a4;
        case 0x2a47a8u: goto label_2a47a8;
        case 0x2a47acu: goto label_2a47ac;
        case 0x2a47b0u: goto label_2a47b0;
        case 0x2a47b4u: goto label_2a47b4;
        case 0x2a47b8u: goto label_2a47b8;
        case 0x2a47bcu: goto label_2a47bc;
        case 0x2a47c0u: goto label_2a47c0;
        case 0x2a47c4u: goto label_2a47c4;
        case 0x2a47c8u: goto label_2a47c8;
        case 0x2a47ccu: goto label_2a47cc;
        case 0x2a47d0u: goto label_2a47d0;
        case 0x2a47d4u: goto label_2a47d4;
        case 0x2a47d8u: goto label_2a47d8;
        case 0x2a47dcu: goto label_2a47dc;
        case 0x2a47e0u: goto label_2a47e0;
        case 0x2a47e4u: goto label_2a47e4;
        case 0x2a47e8u: goto label_2a47e8;
        case 0x2a47ecu: goto label_2a47ec;
        case 0x2a47f0u: goto label_2a47f0;
        case 0x2a47f4u: goto label_2a47f4;
        case 0x2a47f8u: goto label_2a47f8;
        case 0x2a47fcu: goto label_2a47fc;
        case 0x2a4800u: goto label_2a4800;
        case 0x2a4804u: goto label_2a4804;
        case 0x2a4808u: goto label_2a4808;
        case 0x2a480cu: goto label_2a480c;
        case 0x2a4810u: goto label_2a4810;
        case 0x2a4814u: goto label_2a4814;
        case 0x2a4818u: goto label_2a4818;
        case 0x2a481cu: goto label_2a481c;
        case 0x2a4820u: goto label_2a4820;
        case 0x2a4824u: goto label_2a4824;
        case 0x2a4828u: goto label_2a4828;
        case 0x2a482cu: goto label_2a482c;
        case 0x2a4830u: goto label_2a4830;
        case 0x2a4834u: goto label_2a4834;
        case 0x2a4838u: goto label_2a4838;
        case 0x2a483cu: goto label_2a483c;
        case 0x2a4840u: goto label_2a4840;
        case 0x2a4844u: goto label_2a4844;
        case 0x2a4848u: goto label_2a4848;
        case 0x2a484cu: goto label_2a484c;
        case 0x2a4850u: goto label_2a4850;
        case 0x2a4854u: goto label_2a4854;
        case 0x2a4858u: goto label_2a4858;
        case 0x2a485cu: goto label_2a485c;
        case 0x2a4860u: goto label_2a4860;
        case 0x2a4864u: goto label_2a4864;
        case 0x2a4868u: goto label_2a4868;
        case 0x2a486cu: goto label_2a486c;
        case 0x2a4870u: goto label_2a4870;
        case 0x2a4874u: goto label_2a4874;
        case 0x2a4878u: goto label_2a4878;
        case 0x2a487cu: goto label_2a487c;
        case 0x2a4880u: goto label_2a4880;
        case 0x2a4884u: goto label_2a4884;
        case 0x2a4888u: goto label_2a4888;
        case 0x2a488cu: goto label_2a488c;
        case 0x2a4890u: goto label_2a4890;
        case 0x2a4894u: goto label_2a4894;
        case 0x2a4898u: goto label_2a4898;
        case 0x2a489cu: goto label_2a489c;
        case 0x2a48a0u: goto label_2a48a0;
        case 0x2a48a4u: goto label_2a48a4;
        case 0x2a48a8u: goto label_2a48a8;
        case 0x2a48acu: goto label_2a48ac;
        case 0x2a48b0u: goto label_2a48b0;
        case 0x2a48b4u: goto label_2a48b4;
        case 0x2a48b8u: goto label_2a48b8;
        case 0x2a48bcu: goto label_2a48bc;
        case 0x2a48c0u: goto label_2a48c0;
        case 0x2a48c4u: goto label_2a48c4;
        case 0x2a48c8u: goto label_2a48c8;
        case 0x2a48ccu: goto label_2a48cc;
        case 0x2a48d0u: goto label_2a48d0;
        case 0x2a48d4u: goto label_2a48d4;
        case 0x2a48d8u: goto label_2a48d8;
        case 0x2a48dcu: goto label_2a48dc;
        case 0x2a48e0u: goto label_2a48e0;
        case 0x2a48e4u: goto label_2a48e4;
        case 0x2a48e8u: goto label_2a48e8;
        case 0x2a48ecu: goto label_2a48ec;
        case 0x2a48f0u: goto label_2a48f0;
        case 0x2a48f4u: goto label_2a48f4;
        case 0x2a48f8u: goto label_2a48f8;
        case 0x2a48fcu: goto label_2a48fc;
        case 0x2a4900u: goto label_2a4900;
        case 0x2a4904u: goto label_2a4904;
        case 0x2a4908u: goto label_2a4908;
        case 0x2a490cu: goto label_2a490c;
        case 0x2a4910u: goto label_2a4910;
        case 0x2a4914u: goto label_2a4914;
        case 0x2a4918u: goto label_2a4918;
        case 0x2a491cu: goto label_2a491c;
        case 0x2a4920u: goto label_2a4920;
        case 0x2a4924u: goto label_2a4924;
        case 0x2a4928u: goto label_2a4928;
        case 0x2a492cu: goto label_2a492c;
        case 0x2a4930u: goto label_2a4930;
        case 0x2a4934u: goto label_2a4934;
        case 0x2a4938u: goto label_2a4938;
        case 0x2a493cu: goto label_2a493c;
        case 0x2a4940u: goto label_2a4940;
        case 0x2a4944u: goto label_2a4944;
        case 0x2a4948u: goto label_2a4948;
        case 0x2a494cu: goto label_2a494c;
        case 0x2a4950u: goto label_2a4950;
        case 0x2a4954u: goto label_2a4954;
        case 0x2a4958u: goto label_2a4958;
        case 0x2a495cu: goto label_2a495c;
        case 0x2a4960u: goto label_2a4960;
        case 0x2a4964u: goto label_2a4964;
        case 0x2a4968u: goto label_2a4968;
        case 0x2a496cu: goto label_2a496c;
        case 0x2a4970u: goto label_2a4970;
        case 0x2a4974u: goto label_2a4974;
        case 0x2a4978u: goto label_2a4978;
        case 0x2a497cu: goto label_2a497c;
        case 0x2a4980u: goto label_2a4980;
        case 0x2a4984u: goto label_2a4984;
        case 0x2a4988u: goto label_2a4988;
        case 0x2a498cu: goto label_2a498c;
        case 0x2a4990u: goto label_2a4990;
        case 0x2a4994u: goto label_2a4994;
        case 0x2a4998u: goto label_2a4998;
        case 0x2a499cu: goto label_2a499c;
        case 0x2a49a0u: goto label_2a49a0;
        case 0x2a49a4u: goto label_2a49a4;
        case 0x2a49a8u: goto label_2a49a8;
        case 0x2a49acu: goto label_2a49ac;
        case 0x2a49b0u: goto label_2a49b0;
        case 0x2a49b4u: goto label_2a49b4;
        case 0x2a49b8u: goto label_2a49b8;
        case 0x2a49bcu: goto label_2a49bc;
        case 0x2a49c0u: goto label_2a49c0;
        case 0x2a49c4u: goto label_2a49c4;
        case 0x2a49c8u: goto label_2a49c8;
        case 0x2a49ccu: goto label_2a49cc;
        case 0x2a49d0u: goto label_2a49d0;
        case 0x2a49d4u: goto label_2a49d4;
        case 0x2a49d8u: goto label_2a49d8;
        case 0x2a49dcu: goto label_2a49dc;
        case 0x2a49e0u: goto label_2a49e0;
        case 0x2a49e4u: goto label_2a49e4;
        case 0x2a49e8u: goto label_2a49e8;
        case 0x2a49ecu: goto label_2a49ec;
        case 0x2a49f0u: goto label_2a49f0;
        case 0x2a49f4u: goto label_2a49f4;
        case 0x2a49f8u: goto label_2a49f8;
        case 0x2a49fcu: goto label_2a49fc;
        case 0x2a4a00u: goto label_2a4a00;
        case 0x2a4a04u: goto label_2a4a04;
        case 0x2a4a08u: goto label_2a4a08;
        case 0x2a4a0cu: goto label_2a4a0c;
        default: break;
    }

    ctx->pc = 0x2a4618u;

label_2a4618:
    // 0x2a4618: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a4618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2a461c:
    // 0x2a461c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2a461cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_2a4620:
    // 0x2a4620: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2a4620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_2a4624:
    // 0x2a4624: 0x8c62f254  lw          $v0, -0xDAC($v1)
    ctx->pc = 0x2a4624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963796)));
label_2a4628:
    // 0x2a4628: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a4628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a462c:
    // 0x2a462c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2a462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2a4630:
    // 0x2a4630: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2a4630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_2a4634:
    // 0x2a4634: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2a4634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_2a4638:
    // 0x2a4638: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2a4638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_2a463c:
    // 0x2a463c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2a463cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
label_2a4640:
    // 0x2a4640: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2a4640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2a4644:
    // 0x2a4644: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2a4644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
label_2a4648:
    // 0x2a4648: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2a4648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2a464c:
    // 0x2a464c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2a464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_2a4650:
    // 0x2a4650: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x2a4650u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2a4654:
    // 0x2a4654: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x2a4654u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2a4658:
    // 0x2a4658: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2a4658u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2a465c:
    // 0x2a465c: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
label_2a4660:
    if (ctx->pc == 0x2A4660u) {
        ctx->pc = 0x2A4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A465Cu;
        // 0x2a4660: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4664u;
        goto label_2a4664;
    }
    ctx->pc = 0x2A465Cu;
    {
        const bool branch_taken_0x2a465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A465Cu;
        // 0x2a4660: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a465c) {
            ctx->pc = 0x2A49CCu;
            goto label_2a49cc;
        }
    }
    ctx->pc = 0x2A4664u;
label_2a4664:
    // 0x2a4664: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a4664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2a4668:
    // 0x2a4668: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a4668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a466c:
    // 0x2a466c: 0xc0a9284  jal         func_2A4A10
label_2a4670:
    if (ctx->pc == 0x2A4670u) {
        ctx->pc = 0x2A4670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A466Cu;
        // 0x2a4670: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4674u;
        goto label_2a4674;
    }
    ctx->pc = 0x2A466Cu;
    SET_GPR_U32(ctx, 31, 0x2A4674u);
    ctx->pc = 0x2A4670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A466Cu;
    // 0x2a4670: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4A10u, 0x2A466Cu, 0x2A4674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4674u;
label_2a4674:
    // 0x2a4674: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2a4674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_2a4678:
    // 0x2a4678: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2a4678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2a467c:
    // 0x2a467c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a467cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2a4680:
    // 0x2a4680: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2a4680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2a4684:
    // 0x2a4684: 0xc0a9154  jal         func_2A4550
label_2a4688:
    if (ctx->pc == 0x2A4688u) {
        ctx->pc = 0x2A4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4684u;
        // 0x2a4688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A468Cu;
        goto label_2a468c;
    }
    ctx->pc = 0x2A4684u;
    SET_GPR_U32(ctx, 31, 0x2A468Cu);
    ctx->pc = 0x2A4688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4684u;
    // 0x2a4688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4550u, 0x2A4684u, 0x2A468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A468Cu;
label_2a468c:
    // 0x2a468c: 0xc0dc10e  jal         func_370438
label_2a4690:
    if (ctx->pc == 0x2A4690u) {
        ctx->pc = 0x2A4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A468Cu;
        // 0x2a4690: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4694u;
        goto label_2a4694;
    }
    ctx->pc = 0x2A468Cu;
    SET_GPR_U32(ctx, 31, 0x2A4694u);
    ctx->pc = 0x2A4690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A468Cu;
    // 0x2a4690: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A468Cu, 0x2A4694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4694u;
label_2a4694:
    // 0x2a4694: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a4694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a4698:
    // 0x2a4698: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x2a4698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_2a469c:
    // 0x2a469c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2a469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2a46a0:
    // 0x2a46a0: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x2a46a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a46a4:
    // 0x2a46a4: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x2a46a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a46a8:
    // 0x2a46a8: 0xc0dc10e  jal         func_370438
label_2a46ac:
    if (ctx->pc == 0x2A46ACu) {
        ctx->pc = 0x2A46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A46A8u;
        // 0x2a46ac: 0x461405c0  add.s       $f23, $f0, $f20 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A46B0u;
        goto label_2a46b0;
    }
    ctx->pc = 0x2A46A8u;
    SET_GPR_U32(ctx, 31, 0x2A46B0u);
    ctx->pc = 0x2A46ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A46A8u;
    // 0x2a46ac: 0x461405c0  add.s       $f23, $f0, $f20 (Delay Slot)
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A46A8u, 0x2A46B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A46B0u;
label_2a46b0:
    // 0x2a46b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2a46b4:
    // 0x2a46b4: 0xc622018c  lwc1        $f2, 0x18C($s1)
    ctx->pc = 0x2a46b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a46b8:
    // 0x2a46b8: 0xc4432b30  lwc1        $f3, 0x2B30($v0)
    ctx->pc = 0x2a46b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a46bc:
    // 0x2a46bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a46bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a46c0:
    // 0x2a46c0: 0xc62401a0  lwc1        $f4, 0x1A0($s1)
    ctx->pc = 0x2a46c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a46c4:
    // 0x2a46c4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2a46c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a46c8:
    // 0x2a46c8: 0xc62101a8  lwc1        $f1, 0x1A8($s1)
    ctx->pc = 0x2a46c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a46cc:
    // 0x2a46cc: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2a46ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_2a46d0:
    // 0x2a46d0: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x2a46d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_2a46d4:
    // 0x2a46d4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a46d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_2a46d8:
    // 0x2a46d8: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x2a46d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2a46dc:
    // 0x2a46dc: 0xe622018c  swc1        $f2, 0x18C($s1)
    ctx->pc = 0x2a46dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 396), bits); }
label_2a46e0:
    // 0x2a46e0: 0xe62401a0  swc1        $f4, 0x1A0($s1)
    ctx->pc = 0x2a46e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
label_2a46e4:
    // 0x2a46e4: 0xe62101a8  swc1        $f1, 0x1A8($s1)
    ctx->pc = 0x2a46e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 424), bits); }
label_2a46e8:
    // 0x2a46e8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2a46e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2a46ec:
    // 0x2a46ec: 0x3d32023  subu        $a0, $fp, $s3
    ctx->pc = 0x2a46ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
label_2a46f0:
    // 0x2a46f0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2a46f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2a46f4:
    // 0x2a46f4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2a46f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_2a46f8:
    // 0x2a46f8: 0x2462d630  addiu       $v0, $v1, -0x29D0
    ctx->pc = 0x2a46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956592));
label_2a46fc:
    // 0x2a46fc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2a46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2a4700:
    // 0x2a4700: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x2a4700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_2a4704:
    // 0x2a4704: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x2a4704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2a4708:
    // 0x2a4708: 0x2248021  addu        $s0, $s1, $a0
    ctx->pc = 0x2a4708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2a470c:
    // 0x2a470c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x2a470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a4710:
    // 0x2a4710: 0xc6040040  lwc1        $f4, 0x40($s0)
    ctx->pc = 0x2a4710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a4714:
    // 0x2a4714: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2a4714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_2a4718:
    // 0x2a4718: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x2a4718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a471c:
    // 0x2a471c: 0x4604b842  mul.s       $f1, $f23, $f4
    ctx->pc = 0x2a471cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[4]);
label_2a4720:
    // 0x2a4720: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x2a4720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a4724:
    // 0x2a4724: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x2a4724u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_2a4728:
    // 0x2a4728: 0xc6070020  lwc1        $f7, 0x20($s0)
    ctx->pc = 0x2a4728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2a472c:
    // 0x2a472c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2a472cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_2a4730:
    // 0x2a4730: 0x46022a40  add.s       $f9, $f5, $f2
    ctx->pc = 0x2a4730u;
    ctx->f[9] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_2a4734:
    // 0x2a4734: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2a4734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_2a4738:
    // 0x2a4738: 0xc6060024  lwc1        $f6, 0x24($s0)
    ctx->pc = 0x2a4738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2a473c:
    // 0x2a473c: 0xc62001b8  lwc1        $f0, 0x1B8($s1)
    ctx->pc = 0x2a473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a4740:
    // 0x2a4740: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x2a4740u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_2a4744:
    // 0x2a4744: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a4744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a4748:
    // 0x2a4748: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x2a4748u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_2a474c:
    // 0x2a474c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2a474cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_2a4750:
    // 0x2a4750: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x2a4750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a4754:
    // 0x2a4754: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a4754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a4758:
    // 0x2a4758: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x2a4758u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_2a475c:
    // 0x2a475c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2a475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a4760:
    // 0x2a4760: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x2a4760u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_2a4764:
    // 0x2a4764: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a4764u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2a4768:
    // 0x2a4768: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2a4768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2a476c:
    // 0x2a476c: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x2a476cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_2a4770:
    // 0x2a4770: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x2a4770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a4774:
    // 0x2a4774: 0xe6070020  swc1        $f7, 0x20($s0)
    ctx->pc = 0x2a4774u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2a4778:
    // 0x2a4778: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2a4778u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2a477c:
    // 0x2a477c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2a4780:
    if (ctx->pc == 0x2A4780u) {
        ctx->pc = 0x2A4780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A477Cu;
        // 0x2a4780: 0xe6060024  swc1        $f6, 0x24($s0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4784u;
        goto label_2a4784;
    }
    ctx->pc = 0x2A477Cu;
    {
        const bool branch_taken_0x2a477c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A4780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A477Cu;
        // 0x2a4780: 0xe6060024  swc1        $f6, 0x24($s0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a477c) {
            ctx->pc = 0x2A478Cu;
            goto label_2a478c;
        }
    }
    ctx->pc = 0x2A4784u;
label_2a4784:
    // 0x2a4784: 0x10000005  b           . + 4 + (0x5 << 2)
label_2a4788:
    if (ctx->pc == 0x2A4788u) {
        ctx->pc = 0x2A4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4784u;
        // 0x2a4788: 0xe6050020  swc1        $f5, 0x20($s0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A478Cu;
        goto label_2a478c;
    }
    ctx->pc = 0x2A4784u;
    {
        const bool branch_taken_0x2a4784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4784u;
        // 0x2a4788: 0xe6050020  swc1        $f5, 0x20($s0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4784) {
            ctx->pc = 0x2A479Cu;
            goto label_2a479c;
        }
    }
    ctx->pc = 0x2A478Cu;
label_2a478c:
    // 0x2a478c: 0x46074834  c.lt.s      $f9, $f7
    ctx->pc = 0x2a478cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a4790:
    // 0x2a4790: 0x0  nop
    ctx->pc = 0x2a4790u;
    // NOP
label_2a4794:
    // 0x2a4794: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2a4798:
    if (ctx->pc == 0x2A4798u) {
        ctx->pc = 0x2A4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4794u;
        // 0x2a4798: 0xe6090020  swc1        $f9, 0x20($s0) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A479Cu;
        goto label_2a479c;
    }
    ctx->pc = 0x2A4794u;
    {
        const bool branch_taken_0x2a4794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4794) {
            ctx->pc = 0x2A4798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4794u;
            // 0x2a4798: 0xe6090020  swc1        $f9, 0x20($s0) (Delay Slot)
            { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A479Cu;
            goto label_2a479c;
        }
    }
    ctx->pc = 0x2A479Cu;
label_2a479c:
    // 0x2a479c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2a479cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a47a0:
    // 0x2a47a0: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2a47a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a47a4:
    // 0x2a47a4: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x2a47a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a47a8:
    // 0x2a47a8: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x2a47a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a47ac:
    // 0x2a47ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a47acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a47b0:
    // 0x2a47b0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2a47b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a47b4:
    // 0x2a47b4: 0x0  nop
    ctx->pc = 0x2a47b4u;
    // NOP
label_2a47b8:
    // 0x2a47b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2a47bc:
    if (ctx->pc == 0x2A47BCu) {
        ctx->pc = 0x2A47C0u;
        goto label_2a47c0;
    }
    ctx->pc = 0x2A47B8u;
    {
        const bool branch_taken_0x2a47b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a47b8) {
            ctx->pc = 0x2A47C8u;
            goto label_2a47c8;
        }
    }
    ctx->pc = 0x2A47C0u;
label_2a47c0:
    // 0x2a47c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2a47c4:
    if (ctx->pc == 0x2A47C4u) {
        ctx->pc = 0x2A47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47C0u;
        // 0x2a47c4: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A47C8u;
        goto label_2a47c8;
    }
    ctx->pc = 0x2A47C0u;
    {
        const bool branch_taken_0x2a47c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47C0u;
        // 0x2a47c4: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a47c0) {
            ctx->pc = 0x2A47D8u;
            goto label_2a47d8;
        }
    }
    ctx->pc = 0x2A47C8u;
label_2a47c8:
    // 0x2a47c8: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2a47c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a47cc:
    // 0x2a47cc: 0x0  nop
    ctx->pc = 0x2a47ccu;
    // NOP
label_2a47d0:
    // 0x2a47d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2a47d4:
    if (ctx->pc == 0x2A47D4u) {
        ctx->pc = 0x2A47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47D0u;
        // 0x2a47d4: 0xe6030024  swc1        $f3, 0x24($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A47D8u;
        goto label_2a47d8;
    }
    ctx->pc = 0x2A47D0u;
    {
        const bool branch_taken_0x2a47d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a47d0) {
            ctx->pc = 0x2A47D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A47D0u;
            // 0x2a47d4: 0xe6030024  swc1        $f3, 0x24($s0) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A47D8u;
            goto label_2a47d8;
        }
    }
    ctx->pc = 0x2A47D8u;
label_2a47d8:
    // 0x2a47d8: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2a47d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a47dc:
    // 0x2a47dc: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x2a47dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a47e0:
    // 0x2a47e0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2a47e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a47e4:
    // 0x2a47e4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2a47e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a47e8:
    // 0x2a47e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a47e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a47ec:
    // 0x2a47ec: 0xc6040028  lwc1        $f4, 0x28($s0)
    ctx->pc = 0x2a47ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a47f0:
    // 0x2a47f0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2a47f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2a47f4:
    // 0x2a47f4: 0x8ec2a300  lw          $v0, -0x5D00($s6)
    ctx->pc = 0x2a47f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943488)));
label_2a47f8:
    // 0x2a47f8: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2a47f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2a47fc:
    // 0x2a47fc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a47fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2a4800:
    // 0x2a4800: 0x245500e0  addiu       $s5, $v0, 0xE0
    ctx->pc = 0x2a4800u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_2a4804:
    // 0x2a4804: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2a4804u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2a4808:
    // 0x2a4808: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x2a4808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a480c:
    // 0x2a480c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2a480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a4810:
    // 0x2a4810: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a4810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a4814:
    // 0x2a4814: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x2a4814u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a4818:
    // 0x2a4818: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x2a4818u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_2a481c:
    // 0x2a481c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x2a481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a4820:
    // 0x2a4820: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a4820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a4824:
    // 0x2a4824: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a4824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2a4828:
    // 0x2a4828: 0x167e0003  bne         $s3, $fp, . + 4 + (0x3 << 2)
label_2a482c:
    if (ctx->pc == 0x2A482Cu) {
        ctx->pc = 0x2A482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4828u;
        // 0x2a482c: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4830u;
        goto label_2a4830;
    }
    ctx->pc = 0x2A4828u;
    {
        const bool branch_taken_0x2a4828 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 30));
        ctx->pc = 0x2A482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4828u;
        // 0x2a482c: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4828) {
            ctx->pc = 0x2A4838u;
            goto label_2a4838;
        }
    }
    ctx->pc = 0x2A4830u;
label_2a4830:
    // 0x2a4830: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a4834:
    if (ctx->pc == 0x2A4834u) {
        ctx->pc = 0x2A4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4830u;
        // 0x2a4834: 0xc6220174  lwc1        $f2, 0x174($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4838u;
        goto label_2a4838;
    }
    ctx->pc = 0x2A4830u;
    {
        const bool branch_taken_0x2a4830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4830u;
        // 0x2a4834: 0xc6220174  lwc1        $f2, 0x174($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4830) {
            ctx->pc = 0x2A483Cu;
            goto label_2a483c;
        }
    }
    ctx->pc = 0x2A4838u;
label_2a4838:
    // 0x2a4838: 0xc6220170  lwc1        $f2, 0x170($s1)
    ctx->pc = 0x2a4838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a483c:
    // 0x2a483c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2a483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2a4840:
    // 0x2a4840: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a4840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4844:
    // 0x2a4844: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x2a4844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2a4848:
    // 0x2a4848: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x2a4848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_2a484c:
    // 0x2a484c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2a484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a4850:
    // 0x2a4850: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a4850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2a4854:
    // 0x2a4854: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a4854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a4858:
    // 0x2a4858: 0x8e0a0048  lw          $t2, 0x48($s0)
    ctx->pc = 0x2a4858u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2a485c:
    // 0x2a485c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a485cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a4860:
    // 0x2a4860: 0x8ecba300  lw          $t3, -0x5D00($s6)
    ctx->pc = 0x2a4860u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943488)));
label_2a4864:
    // 0x2a4864: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a4864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a4868:
    // 0x2a4868: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a486c:
    // 0x2a486c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2a486cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4870:
    // 0x2a4870: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2a4870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4874:
    // 0x2a4874: 0xc0daeec  jal         func_36BBB0
label_2a4878:
    if (ctx->pc == 0x2A4878u) {
        ctx->pc = 0x2A4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4874u;
        // 0x2a4878: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A487Cu;
        goto label_2a487c;
    }
    ctx->pc = 0x2A4874u;
    SET_GPR_U32(ctx, 31, 0x2A487Cu);
    ctx->pc = 0x2A4878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4874u;
    // 0x2a4878: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BBB0u, 0x2A4874u, 0x2A487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A487Cu;
label_2a487c:
    // 0x2a487c: 0x5660003a  bnel        $s3, $zero, . + 4 + (0x3A << 2)
label_2a4880:
    if (ctx->pc == 0x2A4880u) {
        ctx->pc = 0x2A4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A487Cu;
        // 0x2a4880: 0x8e2201ac  lw          $v0, 0x1AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4884u;
        goto label_2a4884;
    }
    ctx->pc = 0x2A487Cu;
    {
        const bool branch_taken_0x2a487c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a487c) {
            ctx->pc = 0x2A4880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A487Cu;
            // 0x2a4880: 0x8e2201ac  lw          $v0, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4968u;
            goto label_2a4968;
        }
    }
    ctx->pc = 0x2A4884u;
label_2a4884:
    // 0x2a4884: 0x92220188  lbu         $v0, 0x188($s1)
    ctx->pc = 0x2a4884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 392)));
label_2a4888:
    // 0x2a4888: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2a488c:
    if (ctx->pc == 0x2A488Cu) {
        ctx->pc = 0x2A488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4888u;
        // 0x2a488c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4890u;
        goto label_2a4890;
    }
    ctx->pc = 0x2A4888u;
    {
        const bool branch_taken_0x2a4888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4888u;
        // 0x2a488c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4888) {
            ctx->pc = 0x2A48B0u;
            goto label_2a48b0;
        }
    }
    ctx->pc = 0x2A4890u;
label_2a4890:
    // 0x2a4890: 0x8e2a0184  lw          $t2, 0x184($s1)
    ctx->pc = 0x2a4890u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_2a4894:
    // 0x2a4894: 0x8ecba300  lw          $t3, -0x5D00($s6)
    ctx->pc = 0x2a4894u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943488)));
label_2a4898:
    // 0x2a4898: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a4898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a489c:
    // 0x2a489c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a489cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a48a0:
    // 0x2a48a0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2a48a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a48a4:
    // 0x2a48a4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2a48a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a48a8:
    // 0x2a48a8: 0xc0daeec  jal         func_36BBB0
label_2a48ac:
    if (ctx->pc == 0x2A48ACu) {
        ctx->pc = 0x2A48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48A8u;
        // 0x2a48ac: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A48B0u;
        goto label_2a48b0;
    }
    ctx->pc = 0x2A48A8u;
    SET_GPR_U32(ctx, 31, 0x2A48B0u);
    ctx->pc = 0x2A48ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A48A8u;
    // 0x2a48ac: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BBB0u, 0x2A48A8u, 0x2A48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A48B0u;
label_2a48b0:
    // 0x2a48b0: 0xc62001a0  lwc1        $f0, 0x1A0($s1)
    ctx->pc = 0x2a48b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a48b4:
    // 0x2a48b4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2a48b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a48b8:
    // 0x2a48b8: 0x0  nop
    ctx->pc = 0x2a48b8u;
    // NOP
label_2a48bc:
    // 0x2a48bc: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_2a48c0:
    if (ctx->pc == 0x2A48C0u) {
        ctx->pc = 0x2A48C4u;
        goto label_2a48c4;
    }
    ctx->pc = 0x2A48BCu;
    {
        const bool branch_taken_0x2a48bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a48bc) {
            ctx->pc = 0x2A4928u;
            goto label_2a4928;
        }
    }
    ctx->pc = 0x2A48C4u;
label_2a48c4:
    // 0x2a48c4: 0x9222019c  lbu         $v0, 0x19C($s1)
    ctx->pc = 0x2a48c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 412)));
label_2a48c8:
    // 0x2a48c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2a48cc:
    if (ctx->pc == 0x2A48CCu) {
        ctx->pc = 0x2A48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48C8u;
        // 0x2a48cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A48D0u;
        goto label_2a48d0;
    }
    ctx->pc = 0x2A48C8u;
    {
        const bool branch_taken_0x2a48c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48C8u;
        // 0x2a48cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a48c8) {
            ctx->pc = 0x2A48F0u;
            goto label_2a48f0;
        }
    }
    ctx->pc = 0x2A48D0u;
label_2a48d0:
    // 0x2a48d0: 0x8e2a0198  lw          $t2, 0x198($s1)
    ctx->pc = 0x2a48d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_2a48d4:
    // 0x2a48d4: 0x8ecba300  lw          $t3, -0x5D00($s6)
    ctx->pc = 0x2a48d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943488)));
label_2a48d8:
    // 0x2a48d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a48d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a48dc:
    // 0x2a48dc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a48dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a48e0:
    // 0x2a48e0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2a48e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a48e4:
    // 0x2a48e4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2a48e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a48e8:
    // 0x2a48e8: 0xc0daeec  jal         func_36BBB0
label_2a48ec:
    if (ctx->pc == 0x2A48ECu) {
        ctx->pc = 0x2A48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48E8u;
        // 0x2a48ec: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A48F0u;
        goto label_2a48f0;
    }
    ctx->pc = 0x2A48E8u;
    SET_GPR_U32(ctx, 31, 0x2A48F0u);
    ctx->pc = 0x2A48ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A48E8u;
    // 0x2a48ec: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BBB0u, 0x2A48E8u, 0x2A48F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A48F0u;
label_2a48f0:
    // 0x2a48f0: 0xc0dc10e  jal         func_370438
label_2a48f4:
    if (ctx->pc == 0x2A48F4u) {
        ctx->pc = 0x2A48F8u;
        goto label_2a48f8;
    }
    ctx->pc = 0x2A48F0u;
    SET_GPR_U32(ctx, 31, 0x2A48F8u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A48F0u, 0x2A48F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A48F8u;
label_2a48f8:
    // 0x2a48f8: 0xc0dc10e  jal         func_370438
label_2a48fc:
    if (ctx->pc == 0x2A48FCu) {
        ctx->pc = 0x2A48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48F8u;
        // 0x2a48fc: 0xe62001a0  swc1        $f0, 0x1A0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4900u;
        goto label_2a4900;
    }
    ctx->pc = 0x2A48F8u;
    SET_GPR_U32(ctx, 31, 0x2A4900u);
    ctx->pc = 0x2A48FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A48F8u;
    // 0x2a48fc: 0xe62001a0  swc1        $f0, 0x1A0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A48F8u, 0x2A4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4900u;
label_2a4900:
    // 0x2a4900: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a4900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a4904:
    // 0x2a4904: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a4904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a4908:
    // 0x2a4908: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a4908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a490c:
    // 0x2a490c: 0x0  nop
    ctx->pc = 0x2a490cu;
    // NOP
label_2a4910:
    // 0x2a4910: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a4910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a4914:
    // 0x2a4914: 0x0  nop
    ctx->pc = 0x2a4914u;
    // NOP
label_2a4918:
    // 0x2a4918: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2a491c:
    if (ctx->pc == 0x2A491Cu) {
        ctx->pc = 0x2A491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4918u;
        // 0x2a491c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4920u;
        goto label_2a4920;
    }
    ctx->pc = 0x2A4918u;
    {
        const bool branch_taken_0x2a4918 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4918u;
        // 0x2a491c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4918) {
            ctx->pc = 0x2A4924u;
            goto label_2a4924;
        }
    }
    ctx->pc = 0x2A4920u;
label_2a4920:
    // 0x2a4920: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a4920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4924:
    // 0x2a4924: 0xa222019c  sb          $v0, 0x19C($s1)
    ctx->pc = 0x2a4924u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 412), (uint8_t)GPR_U32(ctx, 2));
label_2a4928:
    // 0x2a4928: 0x5660000f  bnel        $s3, $zero, . + 4 + (0xF << 2)
label_2a492c:
    if (ctx->pc == 0x2A492Cu) {
        ctx->pc = 0x2A492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4928u;
        // 0x2a492c: 0x8e2201ac  lw          $v0, 0x1AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4930u;
        goto label_2a4930;
    }
    ctx->pc = 0x2A4928u;
    {
        const bool branch_taken_0x2a4928 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4928) {
            ctx->pc = 0x2A492Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4928u;
            // 0x2a492c: 0x8e2201ac  lw          $v0, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4968u;
            goto label_2a4968;
        }
    }
    ctx->pc = 0x2A4930u;
label_2a4930:
    // 0x2a4930: 0xc62001a8  lwc1        $f0, 0x1A8($s1)
    ctx->pc = 0x2a4930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a4934:
    // 0x2a4934: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2a4934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a4938:
    // 0x2a4938: 0x0  nop
    ctx->pc = 0x2a4938u;
    // NOP
label_2a493c:
    // 0x2a493c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2a4940:
    if (ctx->pc == 0x2A4940u) {
        ctx->pc = 0x2A4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A493Cu;
        // 0x2a4940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4944u;
        goto label_2a4944;
    }
    ctx->pc = 0x2A493Cu;
    {
        const bool branch_taken_0x2a493c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A493Cu;
        // 0x2a4940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a493c) {
            ctx->pc = 0x2A4964u;
            goto label_2a4964;
        }
    }
    ctx->pc = 0x2A4944u;
label_2a4944:
    // 0x2a4944: 0x8e2a01a4  lw          $t2, 0x1A4($s1)
    ctx->pc = 0x2a4944u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
label_2a4948:
    // 0x2a4948: 0x8ecba300  lw          $t3, -0x5D00($s6)
    ctx->pc = 0x2a4948u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943488)));
label_2a494c:
    // 0x2a494c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a494cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a4950:
    // 0x2a4950: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4954:
    // 0x2a4954: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2a4954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4958:
    // 0x2a4958: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2a4958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a495c:
    // 0x2a495c: 0xc0daeec  jal         func_36BBB0
label_2a4960:
    if (ctx->pc == 0x2A4960u) {
        ctx->pc = 0x2A4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A495Cu;
        // 0x2a4960: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4964u;
        goto label_2a4964;
    }
    ctx->pc = 0x2A495Cu;
    SET_GPR_U32(ctx, 31, 0x2A4964u);
    ctx->pc = 0x2A4960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A495Cu;
    // 0x2a4960: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BBB0u, 0x2A495Cu, 0x2A4964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4964u;
label_2a4964:
    // 0x2a4964: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x2a4964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_2a4968:
    // 0x2a4968: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_2a496c:
    if (ctx->pc == 0x2A496Cu) {
        ctx->pc = 0x2A496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4968u;
        // 0x2a496c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4970u;
        goto label_2a4970;
    }
    ctx->pc = 0x2A4968u;
    {
        const bool branch_taken_0x2a4968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4968) {
            ctx->pc = 0x2A496Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4968u;
            // 0x2a496c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A49C0u;
            goto label_2a49c0;
        }
    }
    ctx->pc = 0x2A4970u;
label_2a4970:
    // 0x2a4970: 0x567e0002  bnel        $s3, $fp, . + 4 + (0x2 << 2)
label_2a4974:
    if (ctx->pc == 0x2A4974u) {
        ctx->pc = 0x2A4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4970u;
        // 0x2a4974: 0xc62c0170  lwc1        $f12, 0x170($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4978u;
        goto label_2a4978;
    }
    ctx->pc = 0x2A4970u;
    {
        const bool branch_taken_0x2a4970 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 30));
        if (branch_taken_0x2a4970) {
            ctx->pc = 0x2A4974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4970u;
            // 0x2a4974: 0xc62c0170  lwc1        $f12, 0x170($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A497Cu;
            goto label_2a497c;
        }
    }
    ctx->pc = 0x2A4978u;
label_2a4978:
    // 0x2a4978: 0xc62c0174  lwc1        $f12, 0x174($s1)
    ctx->pc = 0x2a4978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a497c:
    // 0x2a497c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2a497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a4980:
    // 0x2a4980: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2a4980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a4984:
    // 0x2a4984: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2a4984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a4988:
    // 0x2a4988: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2a4988u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a498c:
    // 0x2a498c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2a498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a4990:
    // 0x2a4990: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a4990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a4994:
    // 0x2a4994: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2a4994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a4998:
    // 0x2a4998: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2a4998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2a499c:
    // 0x2a499c: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2a499cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2a49a0:
    // 0x2a49a0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2a49a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2a49a4:
    // 0x2a49a4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a49a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2a49a8:
    // 0x2a49a8: 0x8e2401ac  lw          $a0, 0x1AC($s1)
    ctx->pc = 0x2a49a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_2a49ac:
    // 0x2a49ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a49acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a49b0:
    // 0x2a49b0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2a49b4:
    // 0x2a49b4: 0x40f809  jalr        $v0
label_2a49b8:
    if (ctx->pc == 0x2A49B8u) {
        ctx->pc = 0x2A49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49B4u;
        // 0x2a49b8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A49BCu;
        goto label_2a49bc;
    }
    ctx->pc = 0x2A49B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A49BCu);
        ctx->pc = 0x2A49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49B4u;
        // 0x2a49b8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A49B4u, 0x2A49BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A49BCu;
label_2a49bc:
    // 0x2a49bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a49bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2a49c0:
    // 0x2a49c0: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x2a49c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2a49c4:
    // 0x2a49c4: 0x1440ff48  bnez        $v0, . + 4 + (-0xB8 << 2)
label_2a49c8:
    if (ctx->pc == 0x2A49C8u) {
        ctx->pc = 0x2A49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49C4u;
        // 0x2a49c8: 0x26f7fffc  addiu       $s7, $s7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A49CCu;
        goto label_2a49cc;
    }
    ctx->pc = 0x2A49C4u;
    {
        const bool branch_taken_0x2a49c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49C4u;
        // 0x2a49c8: 0x26f7fffc  addiu       $s7, $s7, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a49c4) {
            ctx->pc = 0x2A46E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a46e8;
        }
    }
    ctx->pc = 0x2A49CCu;
label_2a49cc:
    // 0x2a49cc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2a49ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a49d0:
    // 0x2a49d0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2a49d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2a49d4:
    // 0x2a49d4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2a49d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a49d8:
    // 0x2a49d8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2a49d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2a49dc:
    // 0x2a49dc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2a49dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a49e0:
    // 0x2a49e0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2a49e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2a49e4:
    // 0x2a49e4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2a49e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a49e8:
    // 0x2a49e8: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2a49e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2a49ec:
    // 0x2a49ec: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2a49ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a49f0:
    // 0x2a49f0: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2a49f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2a49f4:
    // 0x2a49f4: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x2a49f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2a49f8:
    // 0x2a49f8: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x2a49f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2a49fc:
    // 0x2a49fc: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2a49fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a4a00:
    // 0x2a4a00: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2a4a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a4a04:
    // 0x2a4a04: 0x3e00008  jr          $ra
label_2a4a08:
    if (ctx->pc == 0x2A4A08u) {
        ctx->pc = 0x2A4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A04u;
        // 0x2a4a08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4A0Cu;
        goto label_2a4a0c;
    }
    ctx->pc = 0x2A4A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A04u;
        // 0x2a4a08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4A0Cu;
label_2a4a0c:
    // 0x2a4a0c: 0x0  nop
    ctx->pc = 0x2a4a0cu;
    // NOP
    ctx->pc = 0x2a4a10u;
}
