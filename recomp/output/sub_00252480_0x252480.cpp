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

// Function: sub_00252480
// Address: 0x252480 - 0x2528c8
void sub_00252480_0x252480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252480_0x252480");
#endif

    switch (ctx->pc) {
        case 0x252480u: goto label_252480;
        case 0x252484u: goto label_252484;
        case 0x252488u: goto label_252488;
        case 0x25248cu: goto label_25248c;
        case 0x252490u: goto label_252490;
        case 0x252494u: goto label_252494;
        case 0x252498u: goto label_252498;
        case 0x25249cu: goto label_25249c;
        case 0x2524a0u: goto label_2524a0;
        case 0x2524a4u: goto label_2524a4;
        case 0x2524a8u: goto label_2524a8;
        case 0x2524acu: goto label_2524ac;
        case 0x2524b0u: goto label_2524b0;
        case 0x2524b4u: goto label_2524b4;
        case 0x2524b8u: goto label_2524b8;
        case 0x2524bcu: goto label_2524bc;
        case 0x2524c0u: goto label_2524c0;
        case 0x2524c4u: goto label_2524c4;
        case 0x2524c8u: goto label_2524c8;
        case 0x2524ccu: goto label_2524cc;
        case 0x2524d0u: goto label_2524d0;
        case 0x2524d4u: goto label_2524d4;
        case 0x2524d8u: goto label_2524d8;
        case 0x2524dcu: goto label_2524dc;
        case 0x2524e0u: goto label_2524e0;
        case 0x2524e4u: goto label_2524e4;
        case 0x2524e8u: goto label_2524e8;
        case 0x2524ecu: goto label_2524ec;
        case 0x2524f0u: goto label_2524f0;
        case 0x2524f4u: goto label_2524f4;
        case 0x2524f8u: goto label_2524f8;
        case 0x2524fcu: goto label_2524fc;
        case 0x252500u: goto label_252500;
        case 0x252504u: goto label_252504;
        case 0x252508u: goto label_252508;
        case 0x25250cu: goto label_25250c;
        case 0x252510u: goto label_252510;
        case 0x252514u: goto label_252514;
        case 0x252518u: goto label_252518;
        case 0x25251cu: goto label_25251c;
        case 0x252520u: goto label_252520;
        case 0x252524u: goto label_252524;
        case 0x252528u: goto label_252528;
        case 0x25252cu: goto label_25252c;
        case 0x252530u: goto label_252530;
        case 0x252534u: goto label_252534;
        case 0x252538u: goto label_252538;
        case 0x25253cu: goto label_25253c;
        case 0x252540u: goto label_252540;
        case 0x252544u: goto label_252544;
        case 0x252548u: goto label_252548;
        case 0x25254cu: goto label_25254c;
        case 0x252550u: goto label_252550;
        case 0x252554u: goto label_252554;
        case 0x252558u: goto label_252558;
        case 0x25255cu: goto label_25255c;
        case 0x252560u: goto label_252560;
        case 0x252564u: goto label_252564;
        case 0x252568u: goto label_252568;
        case 0x25256cu: goto label_25256c;
        case 0x252570u: goto label_252570;
        case 0x252574u: goto label_252574;
        case 0x252578u: goto label_252578;
        case 0x25257cu: goto label_25257c;
        case 0x252580u: goto label_252580;
        case 0x252584u: goto label_252584;
        case 0x252588u: goto label_252588;
        case 0x25258cu: goto label_25258c;
        case 0x252590u: goto label_252590;
        case 0x252594u: goto label_252594;
        case 0x252598u: goto label_252598;
        case 0x25259cu: goto label_25259c;
        case 0x2525a0u: goto label_2525a0;
        case 0x2525a4u: goto label_2525a4;
        case 0x2525a8u: goto label_2525a8;
        case 0x2525acu: goto label_2525ac;
        case 0x2525b0u: goto label_2525b0;
        case 0x2525b4u: goto label_2525b4;
        case 0x2525b8u: goto label_2525b8;
        case 0x2525bcu: goto label_2525bc;
        case 0x2525c0u: goto label_2525c0;
        case 0x2525c4u: goto label_2525c4;
        case 0x2525c8u: goto label_2525c8;
        case 0x2525ccu: goto label_2525cc;
        case 0x2525d0u: goto label_2525d0;
        case 0x2525d4u: goto label_2525d4;
        case 0x2525d8u: goto label_2525d8;
        case 0x2525dcu: goto label_2525dc;
        case 0x2525e0u: goto label_2525e0;
        case 0x2525e4u: goto label_2525e4;
        case 0x2525e8u: goto label_2525e8;
        case 0x2525ecu: goto label_2525ec;
        case 0x2525f0u: goto label_2525f0;
        case 0x2525f4u: goto label_2525f4;
        case 0x2525f8u: goto label_2525f8;
        case 0x2525fcu: goto label_2525fc;
        case 0x252600u: goto label_252600;
        case 0x252604u: goto label_252604;
        case 0x252608u: goto label_252608;
        case 0x25260cu: goto label_25260c;
        case 0x252610u: goto label_252610;
        case 0x252614u: goto label_252614;
        case 0x252618u: goto label_252618;
        case 0x25261cu: goto label_25261c;
        case 0x252620u: goto label_252620;
        case 0x252624u: goto label_252624;
        case 0x252628u: goto label_252628;
        case 0x25262cu: goto label_25262c;
        case 0x252630u: goto label_252630;
        case 0x252634u: goto label_252634;
        case 0x252638u: goto label_252638;
        case 0x25263cu: goto label_25263c;
        case 0x252640u: goto label_252640;
        case 0x252644u: goto label_252644;
        case 0x252648u: goto label_252648;
        case 0x25264cu: goto label_25264c;
        case 0x252650u: goto label_252650;
        case 0x252654u: goto label_252654;
        case 0x252658u: goto label_252658;
        case 0x25265cu: goto label_25265c;
        case 0x252660u: goto label_252660;
        case 0x252664u: goto label_252664;
        case 0x252668u: goto label_252668;
        case 0x25266cu: goto label_25266c;
        case 0x252670u: goto label_252670;
        case 0x252674u: goto label_252674;
        case 0x252678u: goto label_252678;
        case 0x25267cu: goto label_25267c;
        case 0x252680u: goto label_252680;
        case 0x252684u: goto label_252684;
        case 0x252688u: goto label_252688;
        case 0x25268cu: goto label_25268c;
        case 0x252690u: goto label_252690;
        case 0x252694u: goto label_252694;
        case 0x252698u: goto label_252698;
        case 0x25269cu: goto label_25269c;
        case 0x2526a0u: goto label_2526a0;
        case 0x2526a4u: goto label_2526a4;
        case 0x2526a8u: goto label_2526a8;
        case 0x2526acu: goto label_2526ac;
        case 0x2526b0u: goto label_2526b0;
        case 0x2526b4u: goto label_2526b4;
        case 0x2526b8u: goto label_2526b8;
        case 0x2526bcu: goto label_2526bc;
        case 0x2526c0u: goto label_2526c0;
        case 0x2526c4u: goto label_2526c4;
        case 0x2526c8u: goto label_2526c8;
        case 0x2526ccu: goto label_2526cc;
        case 0x2526d0u: goto label_2526d0;
        case 0x2526d4u: goto label_2526d4;
        case 0x2526d8u: goto label_2526d8;
        case 0x2526dcu: goto label_2526dc;
        case 0x2526e0u: goto label_2526e0;
        case 0x2526e4u: goto label_2526e4;
        case 0x2526e8u: goto label_2526e8;
        case 0x2526ecu: goto label_2526ec;
        case 0x2526f0u: goto label_2526f0;
        case 0x2526f4u: goto label_2526f4;
        case 0x2526f8u: goto label_2526f8;
        case 0x2526fcu: goto label_2526fc;
        case 0x252700u: goto label_252700;
        case 0x252704u: goto label_252704;
        case 0x252708u: goto label_252708;
        case 0x25270cu: goto label_25270c;
        case 0x252710u: goto label_252710;
        case 0x252714u: goto label_252714;
        case 0x252718u: goto label_252718;
        case 0x25271cu: goto label_25271c;
        case 0x252720u: goto label_252720;
        case 0x252724u: goto label_252724;
        case 0x252728u: goto label_252728;
        case 0x25272cu: goto label_25272c;
        case 0x252730u: goto label_252730;
        case 0x252734u: goto label_252734;
        case 0x252738u: goto label_252738;
        case 0x25273cu: goto label_25273c;
        case 0x252740u: goto label_252740;
        case 0x252744u: goto label_252744;
        case 0x252748u: goto label_252748;
        case 0x25274cu: goto label_25274c;
        case 0x252750u: goto label_252750;
        case 0x252754u: goto label_252754;
        case 0x252758u: goto label_252758;
        case 0x25275cu: goto label_25275c;
        case 0x252760u: goto label_252760;
        case 0x252764u: goto label_252764;
        case 0x252768u: goto label_252768;
        case 0x25276cu: goto label_25276c;
        case 0x252770u: goto label_252770;
        case 0x252774u: goto label_252774;
        case 0x252778u: goto label_252778;
        case 0x25277cu: goto label_25277c;
        case 0x252780u: goto label_252780;
        case 0x252784u: goto label_252784;
        case 0x252788u: goto label_252788;
        case 0x25278cu: goto label_25278c;
        case 0x252790u: goto label_252790;
        case 0x252794u: goto label_252794;
        case 0x252798u: goto label_252798;
        case 0x25279cu: goto label_25279c;
        case 0x2527a0u: goto label_2527a0;
        case 0x2527a4u: goto label_2527a4;
        case 0x2527a8u: goto label_2527a8;
        case 0x2527acu: goto label_2527ac;
        case 0x2527b0u: goto label_2527b0;
        case 0x2527b4u: goto label_2527b4;
        case 0x2527b8u: goto label_2527b8;
        case 0x2527bcu: goto label_2527bc;
        case 0x2527c0u: goto label_2527c0;
        case 0x2527c4u: goto label_2527c4;
        case 0x2527c8u: goto label_2527c8;
        case 0x2527ccu: goto label_2527cc;
        case 0x2527d0u: goto label_2527d0;
        case 0x2527d4u: goto label_2527d4;
        case 0x2527d8u: goto label_2527d8;
        case 0x2527dcu: goto label_2527dc;
        case 0x2527e0u: goto label_2527e0;
        case 0x2527e4u: goto label_2527e4;
        case 0x2527e8u: goto label_2527e8;
        case 0x2527ecu: goto label_2527ec;
        case 0x2527f0u: goto label_2527f0;
        case 0x2527f4u: goto label_2527f4;
        case 0x2527f8u: goto label_2527f8;
        case 0x2527fcu: goto label_2527fc;
        case 0x252800u: goto label_252800;
        case 0x252804u: goto label_252804;
        case 0x252808u: goto label_252808;
        case 0x25280cu: goto label_25280c;
        case 0x252810u: goto label_252810;
        case 0x252814u: goto label_252814;
        case 0x252818u: goto label_252818;
        case 0x25281cu: goto label_25281c;
        case 0x252820u: goto label_252820;
        case 0x252824u: goto label_252824;
        case 0x252828u: goto label_252828;
        case 0x25282cu: goto label_25282c;
        case 0x252830u: goto label_252830;
        case 0x252834u: goto label_252834;
        case 0x252838u: goto label_252838;
        case 0x25283cu: goto label_25283c;
        case 0x252840u: goto label_252840;
        case 0x252844u: goto label_252844;
        case 0x252848u: goto label_252848;
        case 0x25284cu: goto label_25284c;
        case 0x252850u: goto label_252850;
        case 0x252854u: goto label_252854;
        case 0x252858u: goto label_252858;
        case 0x25285cu: goto label_25285c;
        case 0x252860u: goto label_252860;
        case 0x252864u: goto label_252864;
        case 0x252868u: goto label_252868;
        case 0x25286cu: goto label_25286c;
        case 0x252870u: goto label_252870;
        case 0x252874u: goto label_252874;
        case 0x252878u: goto label_252878;
        case 0x25287cu: goto label_25287c;
        case 0x252880u: goto label_252880;
        case 0x252884u: goto label_252884;
        case 0x252888u: goto label_252888;
        case 0x25288cu: goto label_25288c;
        case 0x252890u: goto label_252890;
        case 0x252894u: goto label_252894;
        case 0x252898u: goto label_252898;
        case 0x25289cu: goto label_25289c;
        case 0x2528a0u: goto label_2528a0;
        case 0x2528a4u: goto label_2528a4;
        case 0x2528a8u: goto label_2528a8;
        case 0x2528acu: goto label_2528ac;
        case 0x2528b0u: goto label_2528b0;
        case 0x2528b4u: goto label_2528b4;
        case 0x2528b8u: goto label_2528b8;
        case 0x2528bcu: goto label_2528bc;
        case 0x2528c0u: goto label_2528c0;
        case 0x2528c4u: goto label_2528c4;
        default: break;
    }

    ctx->pc = 0x252480u;

label_252480:
    // 0x252480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_252484:
    // 0x252484: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x252484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_252488:
    // 0x252488: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x252488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_25248c:
    // 0x25248c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25248cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_252490:
    // 0x252490: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x252490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_252494:
    // 0x252494: 0xc095512  jal         func_255448
label_252498:
    if (ctx->pc == 0x252498u) {
        ctx->pc = 0x252498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252494u;
        // 0x252498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25249Cu;
        goto label_25249c;
    }
    ctx->pc = 0x252494u;
    SET_GPR_U32(ctx, 31, 0x25249Cu);
    ctx->pc = 0x252498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252494u;
    // 0x252498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255448u, 0x252494u, 0x25249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25249Cu;
label_25249c:
    // 0x25249c: 0x54400105  bnel        $v0, $zero, . + 4 + (0x105 << 2)
label_2524a0:
    if (ctx->pc == 0x2524A0u) {
        ctx->pc = 0x2524A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25249Cu;
        // 0x2524a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2524A4u;
        goto label_2524a4;
    }
    ctx->pc = 0x25249Cu;
    {
        const bool branch_taken_0x25249c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25249c) {
            ctx->pc = 0x2524A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25249Cu;
            // 0x2524a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2528B4u;
            goto label_2528b4;
        }
    }
    ctx->pc = 0x2524A4u;
label_2524a4:
    // 0x2524a4: 0x8e040fec  lw          $a0, 0xFEC($s0)
    ctx->pc = 0x2524a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_2524a8:
    // 0x2524a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2524a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2524ac:
    // 0x2524ac: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x2524acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_2524b0:
    // 0x2524b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2524b4:
    if (ctx->pc == 0x2524B4u) {
        ctx->pc = 0x2524B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524B0u;
        // 0x2524b4: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2524B8u;
        goto label_2524b8;
    }
    ctx->pc = 0x2524B0u;
    {
        const bool branch_taken_0x2524b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2524B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524B0u;
        // 0x2524b4: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524b0) {
            ctx->pc = 0x2524C0u;
            goto label_2524c0;
        }
    }
    ctx->pc = 0x2524B8u;
label_2524b8:
    // 0x2524b8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2524b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2524bc:
    // 0x2524bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2524bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2524c0:
    // 0x2524c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2524c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2524c4:
    // 0x2524c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2524c8:
    if (ctx->pc == 0x2524C8u) {
        ctx->pc = 0x2524CCu;
        goto label_2524cc;
    }
    ctx->pc = 0x2524C4u;
    {
        const bool branch_taken_0x2524c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2524c4) {
            ctx->pc = 0x2524DCu;
            goto label_2524dc;
        }
    }
    ctx->pc = 0x2524CCu;
label_2524cc:
    // 0x2524cc: 0xc0954f0  jal         func_2553C0
label_2524d0:
    if (ctx->pc == 0x2524D0u) {
        ctx->pc = 0x2524D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524CCu;
        // 0x2524d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2524D4u;
        goto label_2524d4;
    }
    ctx->pc = 0x2524CCu;
    SET_GPR_U32(ctx, 31, 0x2524D4u);
    ctx->pc = 0x2524D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2524CCu;
    // 0x2524d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553C0u, 0x2524CCu, 0x2524D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2524D4u;
label_2524d4:
    // 0x2524d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2524d8:
    if (ctx->pc == 0x2524D8u) {
        ctx->pc = 0x2524D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524D4u;
        // 0x2524d8: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2524DCu;
        goto label_2524dc;
    }
    ctx->pc = 0x2524D4u;
    {
        const bool branch_taken_0x2524d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2524D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524D4u;
        // 0x2524d8: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524d4) {
            ctx->pc = 0x2524E8u;
            goto label_2524e8;
        }
    }
    ctx->pc = 0x2524DCu;
label_2524dc:
    // 0x2524dc: 0xc0954f4  jal         func_2553D0
label_2524e0:
    if (ctx->pc == 0x2524E0u) {
        ctx->pc = 0x2524E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524DCu;
        // 0x2524e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2524E4u;
        goto label_2524e4;
    }
    ctx->pc = 0x2524DCu;
    SET_GPR_U32(ctx, 31, 0x2524E4u);
    ctx->pc = 0x2524E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2524DCu;
    // 0x2524e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553D0u, 0x2524DCu, 0x2524E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2524E4u;
label_2524e4:
    // 0x2524e4: 0x8e020fec  lw          $v0, 0xFEC($s0)
    ctx->pc = 0x2524e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_2524e8:
    // 0x2524e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2524e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2524ec:
    // 0x2524ec: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2524ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2524f0:
    // 0x2524f0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2524f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2524f4:
    // 0x2524f4: 0x0  nop
    ctx->pc = 0x2524f4u;
    // NOP
label_2524f8:
    // 0x2524f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2524fc:
    if (ctx->pc == 0x2524FCu) {
        ctx->pc = 0x2524FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524F8u;
        // 0x2524fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252500u;
        goto label_252500;
    }
    ctx->pc = 0x2524F8u;
    {
        const bool branch_taken_0x2524f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2524FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524F8u;
        // 0x2524fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524f8) {
            ctx->pc = 0x252504u;
            goto label_252504;
        }
    }
    ctx->pc = 0x252500u;
label_252500:
    // 0x252500: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x252500u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252504:
    // 0x252504: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_252508:
    if (ctx->pc == 0x252508u) {
        ctx->pc = 0x25250Cu;
        goto label_25250c;
    }
    ctx->pc = 0x252504u;
    {
        const bool branch_taken_0x252504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x252504) {
            ctx->pc = 0x25252Cu;
            goto label_25252c;
        }
    }
    ctx->pc = 0x25250Cu;
label_25250c:
    // 0x25250c: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x25250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_252510:
    // 0x252510: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x252510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_252514:
    // 0x252514: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_252518:
    if (ctx->pc == 0x252518u) {
        ctx->pc = 0x25251Cu;
        goto label_25251c;
    }
    ctx->pc = 0x252514u;
    {
        const bool branch_taken_0x252514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x252514) {
            ctx->pc = 0x25252Cu;
            goto label_25252c;
        }
    }
    ctx->pc = 0x25251Cu;
label_25251c:
    // 0x25251c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x25251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_252520:
    // 0x252520: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x252520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_252524:
    // 0x252524: 0x50600076  beql        $v1, $zero, . + 4 + (0x76 << 2)
label_252528:
    if (ctx->pc == 0x252528u) {
        ctx->pc = 0x252528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252524u;
        // 0x252528: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25252Cu;
        goto label_25252c;
    }
    ctx->pc = 0x252524u;
    {
        const bool branch_taken_0x252524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252524) {
            ctx->pc = 0x252528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252524u;
            // 0x252528: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252700u;
            goto label_252700;
        }
    }
    ctx->pc = 0x25252Cu;
label_25252c:
    // 0x25252c: 0xc095280  jal         func_254A00
label_252530:
    if (ctx->pc == 0x252530u) {
        ctx->pc = 0x252530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25252Cu;
        // 0x252530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252534u;
        goto label_252534;
    }
    ctx->pc = 0x25252Cu;
    SET_GPR_U32(ctx, 31, 0x252534u);
    ctx->pc = 0x252530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25252Cu;
    // 0x252530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254A00u, 0x25252Cu, 0x252534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252534u;
label_252534:
    // 0x252534: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_252538:
    if (ctx->pc == 0x252538u) {
        ctx->pc = 0x252538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252534u;
        // 0x252538: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25253Cu;
        goto label_25253c;
    }
    ctx->pc = 0x252534u;
    {
        const bool branch_taken_0x252534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252534) {
            ctx->pc = 0x252538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252534u;
            // 0x252538: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2525ECu;
            goto label_2525ec;
        }
    }
    ctx->pc = 0x25253Cu;
label_25253c:
    // 0x25253c: 0x8e030fe0  lw          $v1, 0xFE0($s0)
    ctx->pc = 0x25253cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4064)));
label_252540:
    // 0x252540: 0x5060002a  beql        $v1, $zero, . + 4 + (0x2A << 2)
label_252544:
    if (ctx->pc == 0x252544u) {
        ctx->pc = 0x252544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252540u;
        // 0x252544: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252548u;
        goto label_252548;
    }
    ctx->pc = 0x252540u;
    {
        const bool branch_taken_0x252540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252540) {
            ctx->pc = 0x252544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252540u;
            // 0x252544: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2525ECu;
            goto label_2525ec;
        }
    }
    ctx->pc = 0x252548u;
label_252548:
    // 0x252548: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x252548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
label_25254c:
    // 0x25254c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_252550:
    if (ctx->pc == 0x252550u) {
        ctx->pc = 0x252550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25254Cu;
        // 0x252550: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252554u;
        goto label_252554;
    }
    ctx->pc = 0x25254Cu;
    {
        const bool branch_taken_0x25254c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25254c) {
            ctx->pc = 0x252550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25254Cu;
            // 0x252550: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2525ECu;
            goto label_2525ec;
        }
    }
    ctx->pc = 0x252554u;
label_252554:
    // 0x252554: 0x60f809  jalr        $v1
label_252558:
    if (ctx->pc == 0x252558u) {
        ctx->pc = 0x252558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252554u;
        // 0x252558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25255Cu;
        goto label_25255c;
    }
    ctx->pc = 0x252554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25255Cu);
        ctx->pc = 0x252558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252554u;
        // 0x252558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252554u, 0x25255Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25255Cu;
label_25255c:
    // 0x25255c: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x25255cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_252560:
    // 0x252560: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x252560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_252564:
    // 0x252564: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x252564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
label_252568:
    // 0x252568: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x252568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_25256c:
    // 0x25256c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_252570:
    if (ctx->pc == 0x252570u) {
        ctx->pc = 0x252570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25256Cu;
        // 0x252570: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252574u;
        goto label_252574;
    }
    ctx->pc = 0x25256Cu;
    {
        const bool branch_taken_0x25256c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25256c) {
            ctx->pc = 0x252570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25256Cu;
            // 0x252570: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252590u;
            goto label_252590;
        }
    }
    ctx->pc = 0x252574u;
label_252574:
    // 0x252574: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x252574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_252578:
    // 0x252578: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x252578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_25257c:
    // 0x25257c: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x25257cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
label_252580:
    // 0x252580: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x252580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
label_252584:
    // 0x252584: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x252584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_252588:
    // 0x252588: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x252588u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
label_25258c:
    // 0x25258c: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x25258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_252590:
    // 0x252590: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x252590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_252594:
    // 0x252594: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x252594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_252598:
    // 0x252598: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_25259c:
    if (ctx->pc == 0x25259Cu) {
        ctx->pc = 0x25259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252598u;
        // 0x25259c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2525A0u;
        goto label_2525a0;
    }
    ctx->pc = 0x252598u;
    {
        const bool branch_taken_0x252598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252598u;
        // 0x25259c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252598) {
            ctx->pc = 0x2525CCu;
            goto label_2525cc;
        }
    }
    ctx->pc = 0x2525A0u;
label_2525a0:
    // 0x2525a0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2525a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2525a4:
    // 0x2525a4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2525a8:
    if (ctx->pc == 0x2525A8u) {
        ctx->pc = 0x2525A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525A4u;
        // 0x2525a8: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2525ACu;
        goto label_2525ac;
    }
    ctx->pc = 0x2525A4u;
    {
        const bool branch_taken_0x2525a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2525A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525A4u;
        // 0x2525a8: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525a4) {
            ctx->pc = 0x2525CCu;
            goto label_2525cc;
        }
    }
    ctx->pc = 0x2525ACu;
label_2525ac:
    // 0x2525ac: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2525b0:
    if (ctx->pc == 0x2525B0u) {
        ctx->pc = 0x2525B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525ACu;
        // 0x2525b0: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2525B4u;
        goto label_2525b4;
    }
    ctx->pc = 0x2525ACu;
    {
        const bool branch_taken_0x2525ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2525B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525ACu;
        // 0x2525b0: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525ac) {
            ctx->pc = 0x2525CCu;
            goto label_2525cc;
        }
    }
    ctx->pc = 0x2525B4u;
label_2525b4:
    // 0x2525b4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2525b8:
    if (ctx->pc == 0x2525B8u) {
        ctx->pc = 0x2525B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525B4u;
        // 0x2525b8: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2525BCu;
        goto label_2525bc;
    }
    ctx->pc = 0x2525B4u;
    {
        const bool branch_taken_0x2525b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2525B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525B4u;
        // 0x2525b8: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525b4) {
            ctx->pc = 0x2525CCu;
            goto label_2525cc;
        }
    }
    ctx->pc = 0x2525BCu;
label_2525bc:
    // 0x2525bc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2525c0:
    if (ctx->pc == 0x2525C0u) {
        ctx->pc = 0x2525C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525BCu;
        // 0x2525c0: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2525C4u;
        goto label_2525c4;
    }
    ctx->pc = 0x2525BCu;
    {
        const bool branch_taken_0x2525bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2525C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525BCu;
        // 0x2525c0: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525bc) {
            ctx->pc = 0x2525CCu;
            goto label_2525cc;
        }
    }
    ctx->pc = 0x2525C4u;
label_2525c4:
    // 0x2525c4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2525c8:
    if (ctx->pc == 0x2525C8u) {
        ctx->pc = 0x2525CCu;
        goto label_2525cc;
    }
    ctx->pc = 0x2525C4u;
    {
        const bool branch_taken_0x2525c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2525c4) {
            ctx->pc = 0x2525D0u;
            goto label_2525d0;
        }
    }
    ctx->pc = 0x2525CCu;
label_2525cc:
    // 0x2525cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2525ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2525d0:
    // 0x2525d0: 0x548000b8  bnel        $a0, $zero, . + 4 + (0xB8 << 2)
label_2525d4:
    if (ctx->pc == 0x2525D4u) {
        ctx->pc = 0x2525D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525D0u;
        // 0x2525d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2525D8u;
        goto label_2525d8;
    }
    ctx->pc = 0x2525D0u;
    {
        const bool branch_taken_0x2525d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2525d0) {
            ctx->pc = 0x2525D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2525D0u;
            // 0x2525d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2528B4u;
            goto label_2528b4;
        }
    }
    ctx->pc = 0x2525D8u;
label_2525d8:
    // 0x2525d8: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2525d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2525dc:
    // 0x2525dc: 0xc06b85c  jal         func_1AE170
label_2525e0:
    if (ctx->pc == 0x2525E0u) {
        ctx->pc = 0x2525E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525DCu;
        // 0x2525e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2525E4u;
        goto label_2525e4;
    }
    ctx->pc = 0x2525DCu;
    SET_GPR_U32(ctx, 31, 0x2525E4u);
    ctx->pc = 0x2525E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2525DCu;
    // 0x2525e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x2525DCu, 0x2525E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2525E4u;
label_2525e4:
    // 0x2525e4: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2525e8:
    if (ctx->pc == 0x2525E8u) {
        ctx->pc = 0x2525E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525E4u;
        // 0x2525e8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2525ECu;
        goto label_2525ec;
    }
    ctx->pc = 0x2525E4u;
    {
        const bool branch_taken_0x2525e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525E4u;
        // 0x2525e8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525e4) {
            ctx->pc = 0x2528B4u;
            goto label_2528b4;
        }
    }
    ctx->pc = 0x2525ECu;
label_2525ec:
    // 0x2525ec: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2525ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2525f0:
    // 0x2525f0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2525f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2525f4:
    // 0x2525f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2525f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2525f8:
    // 0x2525f8: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x2525f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_2525fc:
    // 0x2525fc: 0xe6000500  swc1        $f0, 0x500($s0)
    ctx->pc = 0x2525fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
label_252600:
    // 0x252600: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x252600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_252604:
    // 0x252604: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
label_252608:
    if (ctx->pc == 0x252608u) {
        ctx->pc = 0x252608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252604u;
        // 0x252608: 0xe60004fc  swc1        $f0, 0x4FC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25260Cu;
        goto label_25260c;
    }
    ctx->pc = 0x252604u;
    {
        const bool branch_taken_0x252604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252604u;
        // 0x252608: 0xe60004fc  swc1        $f0, 0x4FC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252604) {
            ctx->pc = 0x2528B0u;
            goto label_2528b0;
        }
    }
    ctx->pc = 0x25260Cu;
label_25260c:
    // 0x25260c: 0x8e02041c  lw          $v0, 0x41C($s0)
    ctx->pc = 0x25260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_252610:
    // 0x252610: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x252610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
label_252614:
    // 0x252614: 0x8e040ff0  lw          $a0, 0xFF0($s0)
    ctx->pc = 0x252614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_252618:
    // 0x252618: 0xc06e0fa  jal         func_1B83E8
label_25261c:
    if (ctx->pc == 0x25261Cu) {
        ctx->pc = 0x25261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252618u;
        // 0x25261c: 0xae020420  sw          $v0, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252620u;
        goto label_252620;
    }
    ctx->pc = 0x252618u;
    SET_GPR_U32(ctx, 31, 0x252620u);
    ctx->pc = 0x25261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252618u;
    // 0x25261c: 0xae020420  sw          $v0, 0x420($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x252618u, 0x252620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252620u;
label_252620:
    // 0x252620: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_252624:
    if (ctx->pc == 0x252624u) {
        ctx->pc = 0x252628u;
        goto label_252628;
    }
    ctx->pc = 0x252620u;
    {
        const bool branch_taken_0x252620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252620) {
            ctx->pc = 0x25264Cu;
            goto label_25264c;
        }
    }
    ctx->pc = 0x252628u;
label_252628:
    // 0x252628: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x252628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_25262c:
    // 0x25262c: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x25262cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_252630:
    // 0x252630: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x252630u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_252634:
    // 0x252634: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_252638:
    if (ctx->pc == 0x252638u) {
        ctx->pc = 0x252638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252634u;
        // 0x252638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25263Cu;
        goto label_25263c;
    }
    ctx->pc = 0x252634u;
    {
        const bool branch_taken_0x252634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252634u;
        // 0x252638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252634) {
            ctx->pc = 0x25264Cu;
            goto label_25264c;
        }
    }
    ctx->pc = 0x25263Cu;
label_25263c:
    // 0x25263c: 0xc08bd96  jal         func_22F658
label_252640:
    if (ctx->pc == 0x252640u) {
        ctx->pc = 0x252640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25263Cu;
        // 0x252640: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252644u;
        goto label_252644;
    }
    ctx->pc = 0x25263Cu;
    SET_GPR_U32(ctx, 31, 0x252644u);
    ctx->pc = 0x252640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25263Cu;
    // 0x252640: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x25263Cu, 0x252644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252644u;
label_252644:
    // 0x252644: 0x10000029  b           . + 4 + (0x29 << 2)
label_252648:
    if (ctx->pc == 0x252648u) {
        ctx->pc = 0x252648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252644u;
        // 0x252648: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25264Cu;
        goto label_25264c;
    }
    ctx->pc = 0x252644u;
    {
        const bool branch_taken_0x252644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252644u;
        // 0x252648: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252644) {
            ctx->pc = 0x2526ECu;
            goto label_2526ec;
        }
    }
    ctx->pc = 0x25264Cu;
label_25264c:
    // 0x25264c: 0xc0954f6  jal         func_2553D8
label_252650:
    if (ctx->pc == 0x252650u) {
        ctx->pc = 0x252650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25264Cu;
        // 0x252650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252654u;
        goto label_252654;
    }
    ctx->pc = 0x25264Cu;
    SET_GPR_U32(ctx, 31, 0x252654u);
    ctx->pc = 0x252650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25264Cu;
    // 0x252650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553D8u, 0x25264Cu, 0x252654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252654u;
label_252654:
    // 0x252654: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_252658:
    if (ctx->pc == 0x252658u) {
        ctx->pc = 0x252658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252654u;
        // 0x252658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25265Cu;
        goto label_25265c;
    }
    ctx->pc = 0x252654u;
    {
        const bool branch_taken_0x252654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252654u;
        // 0x252658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252654) {
            ctx->pc = 0x25266Cu;
            goto label_25266c;
        }
    }
    ctx->pc = 0x25265Cu;
label_25265c:
    // 0x25265c: 0xc08bd96  jal         func_22F658
label_252660:
    if (ctx->pc == 0x252660u) {
        ctx->pc = 0x252660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25265Cu;
        // 0x252660: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252664u;
        goto label_252664;
    }
    ctx->pc = 0x25265Cu;
    SET_GPR_U32(ctx, 31, 0x252664u);
    ctx->pc = 0x252660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25265Cu;
    // 0x252660: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x25265Cu, 0x252664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252664u;
label_252664:
    // 0x252664: 0x10000021  b           . + 4 + (0x21 << 2)
label_252668:
    if (ctx->pc == 0x252668u) {
        ctx->pc = 0x252668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252664u;
        // 0x252668: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25266Cu;
        goto label_25266c;
    }
    ctx->pc = 0x252664u;
    {
        const bool branch_taken_0x252664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252664u;
        // 0x252668: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252664) {
            ctx->pc = 0x2526ECu;
            goto label_2526ec;
        }
    }
    ctx->pc = 0x25266Cu;
label_25266c:
    // 0x25266c: 0x8e030fec  lw          $v1, 0xFEC($s0)
    ctx->pc = 0x25266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_252670:
    // 0x252670: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x252670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_252674:
    // 0x252674: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_252678:
    if (ctx->pc == 0x252678u) {
        ctx->pc = 0x25267Cu;
        goto label_25267c;
    }
    ctx->pc = 0x252674u;
    {
        const bool branch_taken_0x252674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252674) {
            ctx->pc = 0x2526E0u;
            goto label_2526e0;
        }
    }
    ctx->pc = 0x25267Cu;
label_25267c:
    // 0x25267c: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x25267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_252680:
    // 0x252680: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_252684:
    if (ctx->pc == 0x252684u) {
        ctx->pc = 0x252688u;
        goto label_252688;
    }
    ctx->pc = 0x252680u;
    {
        const bool branch_taken_0x252680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252680) {
            ctx->pc = 0x2526D0u;
            goto label_2526d0;
        }
    }
    ctx->pc = 0x252688u;
label_252688:
    // 0x252688: 0xc0619d2  jal         func_186748
label_25268c:
    if (ctx->pc == 0x25268Cu) {
        ctx->pc = 0x25268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252688u;
        // 0x25268c: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252690u;
        goto label_252690;
    }
    ctx->pc = 0x252688u;
    SET_GPR_U32(ctx, 31, 0x252690u);
    ctx->pc = 0x25268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252688u;
    // 0x25268c: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x252688u, 0x252690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252690u;
label_252690:
    // 0x252690: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_252694:
    if (ctx->pc == 0x252694u) {
        ctx->pc = 0x252694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252690u;
        // 0x252694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252698u;
        goto label_252698;
    }
    ctx->pc = 0x252690u;
    {
        const bool branch_taken_0x252690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252690u;
        // 0x252694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252690) {
            ctx->pc = 0x2526D0u;
            goto label_2526d0;
        }
    }
    ctx->pc = 0x252698u;
label_252698:
    // 0x252698: 0x8e110ff0  lw          $s1, 0xFF0($s0)
    ctx->pc = 0x252698u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_25269c:
    // 0x25269c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25269cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2526a0:
    // 0x2526a0: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2526a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2526a4:
    // 0x2526a4: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x2526a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
label_2526a8:
    // 0x2526a8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2526ac:
    if (ctx->pc == 0x2526ACu) {
        ctx->pc = 0x2526ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526A8u;
        // 0x2526ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2526B0u;
        goto label_2526b0;
    }
    ctx->pc = 0x2526A8u;
    {
        const bool branch_taken_0x2526a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2526ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526A8u;
        // 0x2526ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526a8) {
            ctx->pc = 0x2526D0u;
            goto label_2526d0;
        }
    }
    ctx->pc = 0x2526B0u;
label_2526b0:
    // 0x2526b0: 0xc06e0f0  jal         func_1B83C0
label_2526b4:
    if (ctx->pc == 0x2526B4u) {
        ctx->pc = 0x2526B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526B0u;
        // 0x2526b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2526B8u;
        goto label_2526b8;
    }
    ctx->pc = 0x2526B0u;
    SET_GPR_U32(ctx, 31, 0x2526B8u);
    ctx->pc = 0x2526B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2526B0u;
    // 0x2526b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x2526B0u, 0x2526B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2526B8u;
label_2526b8:
    // 0x2526b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2526bc:
    if (ctx->pc == 0x2526BCu) {
        ctx->pc = 0x2526C0u;
        goto label_2526c0;
    }
    ctx->pc = 0x2526B8u;
    {
        const bool branch_taken_0x2526b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2526b8) {
            ctx->pc = 0x2526C8u;
            goto label_2526c8;
        }
    }
    ctx->pc = 0x2526C0u;
label_2526c0:
    // 0x2526c0: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x2526c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_2526c4:
    // 0x2526c4: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x2526c4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2526c8:
    // 0x2526c8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2526cc:
    if (ctx->pc == 0x2526CCu) {
        ctx->pc = 0x2526CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526C8u;
        // 0x2526cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2526D0u;
        goto label_2526d0;
    }
    ctx->pc = 0x2526C8u;
    {
        const bool branch_taken_0x2526c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2526CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526C8u;
        // 0x2526cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526c8) {
            ctx->pc = 0x2526E0u;
            goto label_2526e0;
        }
    }
    ctx->pc = 0x2526D0u;
label_2526d0:
    // 0x2526d0: 0xc08bd96  jal         func_22F658
label_2526d4:
    if (ctx->pc == 0x2526D4u) {
        ctx->pc = 0x2526D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526D0u;
        // 0x2526d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2526D8u;
        goto label_2526d8;
    }
    ctx->pc = 0x2526D0u;
    SET_GPR_U32(ctx, 31, 0x2526D8u);
    ctx->pc = 0x2526D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2526D0u;
    // 0x2526d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2526D0u, 0x2526D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2526D8u;
label_2526d8:
    // 0x2526d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2526dc:
    if (ctx->pc == 0x2526DCu) {
        ctx->pc = 0x2526DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526D8u;
        // 0x2526dc: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2526E0u;
        goto label_2526e0;
    }
    ctx->pc = 0x2526D8u;
    {
        const bool branch_taken_0x2526d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2526DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526D8u;
        // 0x2526dc: 0x8e020fec  lw          $v0, 0xFEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526d8) {
            ctx->pc = 0x2526ECu;
            goto label_2526ec;
        }
    }
    ctx->pc = 0x2526E0u;
label_2526e0:
    // 0x2526e0: 0xc08bd96  jal         func_22F658
label_2526e4:
    if (ctx->pc == 0x2526E4u) {
        ctx->pc = 0x2526E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526E0u;
        // 0x2526e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2526E8u;
        goto label_2526e8;
    }
    ctx->pc = 0x2526E0u;
    SET_GPR_U32(ctx, 31, 0x2526E8u);
    ctx->pc = 0x2526E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2526E0u;
    // 0x2526e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2526E0u, 0x2526E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2526E8u;
label_2526e8:
    // 0x2526e8: 0x8e020fec  lw          $v0, 0xFEC($s0)
    ctx->pc = 0x2526e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_2526ec:
    // 0x2526ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2526ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2526f0:
    // 0x2526f0: 0xc094ce6  jal         func_253398
label_2526f4:
    if (ctx->pc == 0x2526F4u) {
        ctx->pc = 0x2526F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526F0u;
        // 0x2526f4: 0xc44c00a0  lwc1        $f12, 0xA0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2526F8u;
        goto label_2526f8;
    }
    ctx->pc = 0x2526F0u;
    SET_GPR_U32(ctx, 31, 0x2526F8u);
    ctx->pc = 0x2526F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2526F0u;
    // 0x2526f4: 0xc44c00a0  lwc1        $f12, 0xA0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x253398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253398u, 0x2526F0u, 0x2526F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2526F8u;
label_2526f8:
    // 0x2526f8: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2526fc:
    if (ctx->pc == 0x2526FCu) {
        ctx->pc = 0x2526FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526F8u;
        // 0x2526fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252700u;
        goto label_252700;
    }
    ctx->pc = 0x2526F8u;
    {
        const bool branch_taken_0x2526f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2526FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526F8u;
        // 0x2526fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526f8) {
            ctx->pc = 0x2528B4u;
            goto label_2528b4;
        }
    }
    ctx->pc = 0x252700u;
label_252700:
    // 0x252700: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x252700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_252704:
    // 0x252704: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x252704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_252708:
    // 0x252708: 0x40f809  jalr        $v0
label_25270c:
    if (ctx->pc == 0x25270Cu) {
        ctx->pc = 0x252710u;
        goto label_252710;
    }
    ctx->pc = 0x252708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x252710u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252708u, 0x252710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252710u;
label_252710:
    // 0x252710: 0x8e040fec  lw          $a0, 0xFEC($s0)
    ctx->pc = 0x252710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_252714:
    // 0x252714: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x252714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_252718:
    // 0x252718: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x252718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
label_25271c:
    // 0x25271c: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x25271cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_252720:
    // 0x252720: 0xc4810074  lwc1        $f1, 0x74($a0)
    ctx->pc = 0x252720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_252724:
    // 0x252724: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x252724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_252728:
    // 0x252728: 0xe60104fc  swc1        $f1, 0x4FC($s0)
    ctx->pc = 0x252728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
label_25272c:
    // 0x25272c: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x25272cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252730:
    // 0x252730: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_252734:
    if (ctx->pc == 0x252734u) {
        ctx->pc = 0x252734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252730u;
        // 0x252734: 0xe6000500  swc1        $f0, 0x500($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252738u;
        goto label_252738;
    }
    ctx->pc = 0x252730u;
    {
        const bool branch_taken_0x252730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252730u;
        // 0x252734: 0xe6000500  swc1        $f0, 0x500($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252730) {
            ctx->pc = 0x252764u;
            goto label_252764;
        }
    }
    ctx->pc = 0x252738u;
label_252738:
    // 0x252738: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x252738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25273c:
    // 0x25273c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x25273cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_252740:
    // 0x252740: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_252744:
    // 0x252744: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x252744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252748:
    // 0x252748: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x252748u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25274c:
    // 0x25274c: 0x0  nop
    ctx->pc = 0x25274cu;
    // NOP
label_252750:
    // 0x252750: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_252754:
    if (ctx->pc == 0x252754u) {
        ctx->pc = 0x252754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252750u;
        // 0x252754: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252758u;
        goto label_252758;
    }
    ctx->pc = 0x252750u;
    {
        const bool branch_taken_0x252750 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x252754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252750u;
        // 0x252754: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252750) {
            ctx->pc = 0x25275Cu;
            goto label_25275c;
        }
    }
    ctx->pc = 0x252758u;
label_252758:
    // 0x252758: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x252758u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25275c:
    // 0x25275c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_252760:
    if (ctx->pc == 0x252760u) {
        ctx->pc = 0x252760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25275Cu;
        // 0x252760: 0x8e03041c  lw          $v1, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252764u;
        goto label_252764;
    }
    ctx->pc = 0x25275Cu;
    {
        const bool branch_taken_0x25275c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25275c) {
            ctx->pc = 0x252760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25275Cu;
            // 0x252760: 0x8e03041c  lw          $v1, 0x41C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252770u;
            goto label_252770;
        }
    }
    ctx->pc = 0x252764u;
label_252764:
    // 0x252764: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x252764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_252768:
    // 0x252768: 0x10000002  b           . + 4 + (0x2 << 2)
label_25276c:
    if (ctx->pc == 0x25276Cu) {
        ctx->pc = 0x25276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252768u;
        // 0x25276c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252770u;
        goto label_252770;
    }
    ctx->pc = 0x252768u;
    {
        const bool branch_taken_0x252768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252768u;
        // 0x25276c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252768) {
            ctx->pc = 0x252774u;
            goto label_252774;
        }
    }
    ctx->pc = 0x252770u;
label_252770:
    // 0x252770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252774:
    // 0x252774: 0xae02041c  sw          $v0, 0x41C($s0)
    ctx->pc = 0x252774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 2));
label_252778:
    // 0x252778: 0xae030420  sw          $v1, 0x420($s0)
    ctx->pc = 0x252778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 3));
label_25277c:
    // 0x25277c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x25277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_252780:
    // 0x252780: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x252780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_252784:
    // 0x252784: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x252784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_252788:
    // 0x252788: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
label_25278c:
    if (ctx->pc == 0x25278Cu) {
        ctx->pc = 0x25278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252788u;
        // 0x25278c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252790u;
        goto label_252790;
    }
    ctx->pc = 0x252788u;
    {
        const bool branch_taken_0x252788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252788) {
            ctx->pc = 0x25278Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252788u;
            // 0x25278c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2528B4u;
            goto label_2528b4;
        }
    }
    ctx->pc = 0x252790u;
label_252790:
    // 0x252790: 0x8e021060  lw          $v0, 0x1060($s0)
    ctx->pc = 0x252790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
label_252794:
    // 0x252794: 0x38420014  xori        $v0, $v0, 0x14
    ctx->pc = 0x252794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)20);
label_252798:
    // 0x252798: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_25279c:
    if (ctx->pc == 0x25279Cu) {
        ctx->pc = 0x25279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252798u;
        // 0x25279c: 0x8e110ff0  lw          $s1, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2527A0u;
        goto label_2527a0;
    }
    ctx->pc = 0x252798u;
    {
        const bool branch_taken_0x252798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252798) {
            ctx->pc = 0x25279Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252798u;
            // 0x25279c: 0x8e110ff0  lw          $s1, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2527D0u;
            goto label_2527d0;
        }
    }
    ctx->pc = 0x2527A0u;
label_2527a0:
    // 0x2527a0: 0x8e020fec  lw          $v0, 0xFEC($s0)
    ctx->pc = 0x2527a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_2527a4:
    // 0x2527a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2527a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2527a8:
    // 0x2527a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2527a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2527ac:
    // 0x2527ac: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2527acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2527b0:
    // 0x2527b0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2527b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2527b4:
    // 0x2527b4: 0x0  nop
    ctx->pc = 0x2527b4u;
    // NOP
label_2527b8:
    // 0x2527b8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2527bc:
    if (ctx->pc == 0x2527BCu) {
        ctx->pc = 0x2527BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527B8u;
        // 0x2527bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2527C0u;
        goto label_2527c0;
    }
    ctx->pc = 0x2527B8u;
    {
        const bool branch_taken_0x2527b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2527BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527B8u;
        // 0x2527bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527b8) {
            ctx->pc = 0x2527C4u;
            goto label_2527c4;
        }
    }
    ctx->pc = 0x2527C0u;
label_2527c0:
    // 0x2527c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2527c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2527c4:
    // 0x2527c4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2527c8:
    if (ctx->pc == 0x2527C8u) {
        ctx->pc = 0x2527CCu;
        goto label_2527cc;
    }
    ctx->pc = 0x2527C4u;
    {
        const bool branch_taken_0x2527c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2527c4) {
            ctx->pc = 0x252814u;
            goto label_252814;
        }
    }
    ctx->pc = 0x2527CCu;
label_2527cc:
    // 0x2527cc: 0x8e110ff0  lw          $s1, 0xFF0($s0)
    ctx->pc = 0x2527ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_2527d0:
    // 0x2527d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2527d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2527d4:
    // 0x2527d4: 0xc06e0f0  jal         func_1B83C0
label_2527d8:
    if (ctx->pc == 0x2527D8u) {
        ctx->pc = 0x2527D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527D4u;
        // 0x2527d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2527DCu;
        goto label_2527dc;
    }
    ctx->pc = 0x2527D4u;
    SET_GPR_U32(ctx, 31, 0x2527DCu);
    ctx->pc = 0x2527D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2527D4u;
    // 0x2527d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x2527D4u, 0x2527DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2527DCu;
label_2527dc:
    // 0x2527dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2527e0:
    if (ctx->pc == 0x2527E0u) {
        ctx->pc = 0x2527E4u;
        goto label_2527e4;
    }
    ctx->pc = 0x2527DCu;
    {
        const bool branch_taken_0x2527dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2527dc) {
            ctx->pc = 0x2527ECu;
            goto label_2527ec;
        }
    }
    ctx->pc = 0x2527E4u;
label_2527e4:
    // 0x2527e4: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x2527e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_2527e8:
    // 0x2527e8: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x2527e8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2527ec:
    // 0x2527ec: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2527f0:
    if (ctx->pc == 0x2527F0u) {
        ctx->pc = 0x2527F4u;
        goto label_2527f4;
    }
    ctx->pc = 0x2527ECu;
    {
        const bool branch_taken_0x2527ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2527ec) {
            ctx->pc = 0x252814u;
            goto label_252814;
        }
    }
    ctx->pc = 0x2527F4u;
label_2527f4:
    // 0x2527f4: 0xc06e0fa  jal         func_1B83E8
label_2527f8:
    if (ctx->pc == 0x2527F8u) {
        ctx->pc = 0x2527F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527F4u;
        // 0x2527f8: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2527FCu;
        goto label_2527fc;
    }
    ctx->pc = 0x2527F4u;
    SET_GPR_U32(ctx, 31, 0x2527FCu);
    ctx->pc = 0x2527F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2527F4u;
    // 0x2527f8: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x2527F4u, 0x2527FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2527FCu;
label_2527fc:
    // 0x2527fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_252800:
    if (ctx->pc == 0x252800u) {
        ctx->pc = 0x252800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527FCu;
        // 0x252800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252804u;
        goto label_252804;
    }
    ctx->pc = 0x2527FCu;
    {
        const bool branch_taken_0x2527fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527FCu;
        // 0x252800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527fc) {
            ctx->pc = 0x252814u;
            goto label_252814;
        }
    }
    ctx->pc = 0x252804u;
label_252804:
    // 0x252804: 0xc08bd96  jal         func_22F658
label_252808:
    if (ctx->pc == 0x252808u) {
        ctx->pc = 0x252808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252804u;
        // 0x252808: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25280Cu;
        goto label_25280c;
    }
    ctx->pc = 0x252804u;
    SET_GPR_U32(ctx, 31, 0x25280Cu);
    ctx->pc = 0x252808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252804u;
    // 0x252808: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x252804u, 0x25280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25280Cu;
label_25280c:
    // 0x25280c: 0x10000029  b           . + 4 + (0x29 << 2)
label_252810:
    if (ctx->pc == 0x252810u) {
        ctx->pc = 0x252810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25280Cu;
        // 0x252810: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252814u;
        goto label_252814;
    }
    ctx->pc = 0x25280Cu;
    {
        const bool branch_taken_0x25280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25280Cu;
        // 0x252810: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25280c) {
            ctx->pc = 0x2528B4u;
            goto label_2528b4;
        }
    }
    ctx->pc = 0x252814u;
label_252814:
    // 0x252814: 0xc0954f6  jal         func_2553D8
label_252818:
    if (ctx->pc == 0x252818u) {
        ctx->pc = 0x252818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252814u;
        // 0x252818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25281Cu;
        goto label_25281c;
    }
    ctx->pc = 0x252814u;
    SET_GPR_U32(ctx, 31, 0x25281Cu);
    ctx->pc = 0x252818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252814u;
    // 0x252818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2553D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2553D8u, 0x252814u, 0x25281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25281Cu;
label_25281c:
    // 0x25281c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_252820:
    if (ctx->pc == 0x252820u) {
        ctx->pc = 0x252820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25281Cu;
        // 0x252820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252824u;
        goto label_252824;
    }
    ctx->pc = 0x25281Cu;
    {
        const bool branch_taken_0x25281c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25281Cu;
        // 0x252820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25281c) {
            ctx->pc = 0x252834u;
            goto label_252834;
        }
    }
    ctx->pc = 0x252824u;
label_252824:
    // 0x252824: 0xc08bd96  jal         func_22F658
label_252828:
    if (ctx->pc == 0x252828u) {
        ctx->pc = 0x252828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252824u;
        // 0x252828: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25282Cu;
        goto label_25282c;
    }
    ctx->pc = 0x252824u;
    SET_GPR_U32(ctx, 31, 0x25282Cu);
    ctx->pc = 0x252828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252824u;
    // 0x252828: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x252824u, 0x25282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25282Cu;
label_25282c:
    // 0x25282c: 0x10000021  b           . + 4 + (0x21 << 2)
label_252830:
    if (ctx->pc == 0x252830u) {
        ctx->pc = 0x252830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25282Cu;
        // 0x252830: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252834u;
        goto label_252834;
    }
    ctx->pc = 0x25282Cu;
    {
        const bool branch_taken_0x25282c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25282Cu;
        // 0x252830: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25282c) {
            ctx->pc = 0x2528B4u;
            goto label_2528b4;
        }
    }
    ctx->pc = 0x252834u;
label_252834:
    // 0x252834: 0x8e030fec  lw          $v1, 0xFEC($s0)
    ctx->pc = 0x252834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
label_252838:
    // 0x252838: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x252838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_25283c:
    // 0x25283c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_252840:
    if (ctx->pc == 0x252840u) {
        ctx->pc = 0x252844u;
        goto label_252844;
    }
    ctx->pc = 0x25283Cu;
    {
        const bool branch_taken_0x25283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25283c) {
            ctx->pc = 0x2528A8u;
            goto label_2528a8;
        }
    }
    ctx->pc = 0x252844u;
label_252844:
    // 0x252844: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x252844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_252848:
    // 0x252848: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_25284c:
    if (ctx->pc == 0x25284Cu) {
        ctx->pc = 0x252850u;
        goto label_252850;
    }
    ctx->pc = 0x252848u;
    {
        const bool branch_taken_0x252848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252848) {
            ctx->pc = 0x252898u;
            goto label_252898;
        }
    }
    ctx->pc = 0x252850u;
label_252850:
    // 0x252850: 0xc0619d2  jal         func_186748
label_252854:
    if (ctx->pc == 0x252854u) {
        ctx->pc = 0x252854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252850u;
        // 0x252854: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252858u;
        goto label_252858;
    }
    ctx->pc = 0x252850u;
    SET_GPR_U32(ctx, 31, 0x252858u);
    ctx->pc = 0x252854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252850u;
    // 0x252854: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x252850u, 0x252858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252858u;
label_252858:
    // 0x252858: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_25285c:
    if (ctx->pc == 0x25285Cu) {
        ctx->pc = 0x25285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252858u;
        // 0x25285c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252860u;
        goto label_252860;
    }
    ctx->pc = 0x252858u;
    {
        const bool branch_taken_0x252858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252858u;
        // 0x25285c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252858) {
            ctx->pc = 0x252898u;
            goto label_252898;
        }
    }
    ctx->pc = 0x252860u;
label_252860:
    // 0x252860: 0x8e110ff0  lw          $s1, 0xFF0($s0)
    ctx->pc = 0x252860u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_252864:
    // 0x252864: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x252864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252868:
    // 0x252868: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x252868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_25286c:
    // 0x25286c: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x25286cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
label_252870:
    // 0x252870: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_252874:
    if (ctx->pc == 0x252874u) {
        ctx->pc = 0x252874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252870u;
        // 0x252874: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252878u;
        goto label_252878;
    }
    ctx->pc = 0x252870u;
    {
        const bool branch_taken_0x252870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252870u;
        // 0x252874: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252870) {
            ctx->pc = 0x252898u;
            goto label_252898;
        }
    }
    ctx->pc = 0x252878u;
label_252878:
    // 0x252878: 0xc06e0f0  jal         func_1B83C0
label_25287c:
    if (ctx->pc == 0x25287Cu) {
        ctx->pc = 0x25287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252878u;
        // 0x25287c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252880u;
        goto label_252880;
    }
    ctx->pc = 0x252878u;
    SET_GPR_U32(ctx, 31, 0x252880u);
    ctx->pc = 0x25287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252878u;
    // 0x25287c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x252878u, 0x252880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252880u;
label_252880:
    // 0x252880: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_252884:
    if (ctx->pc == 0x252884u) {
        ctx->pc = 0x252888u;
        goto label_252888;
    }
    ctx->pc = 0x252880u;
    {
        const bool branch_taken_0x252880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252880) {
            ctx->pc = 0x252890u;
            goto label_252890;
        }
    }
    ctx->pc = 0x252888u;
label_252888:
    // 0x252888: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x252888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_25288c:
    // 0x25288c: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x25288cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_252890:
    // 0x252890: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_252894:
    if (ctx->pc == 0x252894u) {
        ctx->pc = 0x252894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252890u;
        // 0x252894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252898u;
        goto label_252898;
    }
    ctx->pc = 0x252890u;
    {
        const bool branch_taken_0x252890 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x252894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252890u;
        // 0x252894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252890) {
            ctx->pc = 0x2528A8u;
            goto label_2528a8;
        }
    }
    ctx->pc = 0x252898u;
label_252898:
    // 0x252898: 0xc08bd96  jal         func_22F658
label_25289c:
    if (ctx->pc == 0x25289Cu) {
        ctx->pc = 0x25289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252898u;
        // 0x25289c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2528A0u;
        goto label_2528a0;
    }
    ctx->pc = 0x252898u;
    SET_GPR_U32(ctx, 31, 0x2528A0u);
    ctx->pc = 0x25289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252898u;
    // 0x25289c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x252898u, 0x2528A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2528A0u;
label_2528a0:
    // 0x2528a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2528a4:
    if (ctx->pc == 0x2528A4u) {
        ctx->pc = 0x2528A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528A0u;
        // 0x2528a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2528A8u;
        goto label_2528a8;
    }
    ctx->pc = 0x2528A0u;
    {
        const bool branch_taken_0x2528a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2528A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528A0u;
        // 0x2528a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2528a0) {
            ctx->pc = 0x2528B4u;
            goto label_2528b4;
        }
    }
    ctx->pc = 0x2528A8u;
label_2528a8:
    // 0x2528a8: 0xc08bd96  jal         func_22F658
label_2528ac:
    if (ctx->pc == 0x2528ACu) {
        ctx->pc = 0x2528ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528A8u;
        // 0x2528ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2528B0u;
        goto label_2528b0;
    }
    ctx->pc = 0x2528A8u;
    SET_GPR_U32(ctx, 31, 0x2528B0u);
    ctx->pc = 0x2528ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528A8u;
    // 0x2528ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2528A8u, 0x2528B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2528B0u;
label_2528b0:
    // 0x2528b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2528b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2528b4:
    // 0x2528b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2528b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2528b8:
    // 0x2528b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2528b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2528bc:
    // 0x2528bc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2528bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2528c0:
    // 0x2528c0: 0x3e00008  jr          $ra
label_2528c4:
    if (ctx->pc == 0x2528C4u) {
        ctx->pc = 0x2528C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528C0u;
        // 0x2528c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2528C8u;
        goto label_fallthrough_0x2528c0;
    }
    ctx->pc = 0x2528C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2528C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528C0u;
        // 0x2528c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2528C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2528c0:
    ctx->pc = 0x2528C8u;
}
