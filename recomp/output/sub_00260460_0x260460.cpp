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

// Function: sub_00260460
// Address: 0x260460 - 0x2607b0
void sub_00260460_0x260460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260460_0x260460");
#endif

    switch (ctx->pc) {
        case 0x260460u: goto label_260460;
        case 0x260464u: goto label_260464;
        case 0x260468u: goto label_260468;
        case 0x26046cu: goto label_26046c;
        case 0x260470u: goto label_260470;
        case 0x260474u: goto label_260474;
        case 0x260478u: goto label_260478;
        case 0x26047cu: goto label_26047c;
        case 0x260480u: goto label_260480;
        case 0x260484u: goto label_260484;
        case 0x260488u: goto label_260488;
        case 0x26048cu: goto label_26048c;
        case 0x260490u: goto label_260490;
        case 0x260494u: goto label_260494;
        case 0x260498u: goto label_260498;
        case 0x26049cu: goto label_26049c;
        case 0x2604a0u: goto label_2604a0;
        case 0x2604a4u: goto label_2604a4;
        case 0x2604a8u: goto label_2604a8;
        case 0x2604acu: goto label_2604ac;
        case 0x2604b0u: goto label_2604b0;
        case 0x2604b4u: goto label_2604b4;
        case 0x2604b8u: goto label_2604b8;
        case 0x2604bcu: goto label_2604bc;
        case 0x2604c0u: goto label_2604c0;
        case 0x2604c4u: goto label_2604c4;
        case 0x2604c8u: goto label_2604c8;
        case 0x2604ccu: goto label_2604cc;
        case 0x2604d0u: goto label_2604d0;
        case 0x2604d4u: goto label_2604d4;
        case 0x2604d8u: goto label_2604d8;
        case 0x2604dcu: goto label_2604dc;
        case 0x2604e0u: goto label_2604e0;
        case 0x2604e4u: goto label_2604e4;
        case 0x2604e8u: goto label_2604e8;
        case 0x2604ecu: goto label_2604ec;
        case 0x2604f0u: goto label_2604f0;
        case 0x2604f4u: goto label_2604f4;
        case 0x2604f8u: goto label_2604f8;
        case 0x2604fcu: goto label_2604fc;
        case 0x260500u: goto label_260500;
        case 0x260504u: goto label_260504;
        case 0x260508u: goto label_260508;
        case 0x26050cu: goto label_26050c;
        case 0x260510u: goto label_260510;
        case 0x260514u: goto label_260514;
        case 0x260518u: goto label_260518;
        case 0x26051cu: goto label_26051c;
        case 0x260520u: goto label_260520;
        case 0x260524u: goto label_260524;
        case 0x260528u: goto label_260528;
        case 0x26052cu: goto label_26052c;
        case 0x260530u: goto label_260530;
        case 0x260534u: goto label_260534;
        case 0x260538u: goto label_260538;
        case 0x26053cu: goto label_26053c;
        case 0x260540u: goto label_260540;
        case 0x260544u: goto label_260544;
        case 0x260548u: goto label_260548;
        case 0x26054cu: goto label_26054c;
        case 0x260550u: goto label_260550;
        case 0x260554u: goto label_260554;
        case 0x260558u: goto label_260558;
        case 0x26055cu: goto label_26055c;
        case 0x260560u: goto label_260560;
        case 0x260564u: goto label_260564;
        case 0x260568u: goto label_260568;
        case 0x26056cu: goto label_26056c;
        case 0x260570u: goto label_260570;
        case 0x260574u: goto label_260574;
        case 0x260578u: goto label_260578;
        case 0x26057cu: goto label_26057c;
        case 0x260580u: goto label_260580;
        case 0x260584u: goto label_260584;
        case 0x260588u: goto label_260588;
        case 0x26058cu: goto label_26058c;
        case 0x260590u: goto label_260590;
        case 0x260594u: goto label_260594;
        case 0x260598u: goto label_260598;
        case 0x26059cu: goto label_26059c;
        case 0x2605a0u: goto label_2605a0;
        case 0x2605a4u: goto label_2605a4;
        case 0x2605a8u: goto label_2605a8;
        case 0x2605acu: goto label_2605ac;
        case 0x2605b0u: goto label_2605b0;
        case 0x2605b4u: goto label_2605b4;
        case 0x2605b8u: goto label_2605b8;
        case 0x2605bcu: goto label_2605bc;
        case 0x2605c0u: goto label_2605c0;
        case 0x2605c4u: goto label_2605c4;
        case 0x2605c8u: goto label_2605c8;
        case 0x2605ccu: goto label_2605cc;
        case 0x2605d0u: goto label_2605d0;
        case 0x2605d4u: goto label_2605d4;
        case 0x2605d8u: goto label_2605d8;
        case 0x2605dcu: goto label_2605dc;
        case 0x2605e0u: goto label_2605e0;
        case 0x2605e4u: goto label_2605e4;
        case 0x2605e8u: goto label_2605e8;
        case 0x2605ecu: goto label_2605ec;
        case 0x2605f0u: goto label_2605f0;
        case 0x2605f4u: goto label_2605f4;
        case 0x2605f8u: goto label_2605f8;
        case 0x2605fcu: goto label_2605fc;
        case 0x260600u: goto label_260600;
        case 0x260604u: goto label_260604;
        case 0x260608u: goto label_260608;
        case 0x26060cu: goto label_26060c;
        case 0x260610u: goto label_260610;
        case 0x260614u: goto label_260614;
        case 0x260618u: goto label_260618;
        case 0x26061cu: goto label_26061c;
        case 0x260620u: goto label_260620;
        case 0x260624u: goto label_260624;
        case 0x260628u: goto label_260628;
        case 0x26062cu: goto label_26062c;
        case 0x260630u: goto label_260630;
        case 0x260634u: goto label_260634;
        case 0x260638u: goto label_260638;
        case 0x26063cu: goto label_26063c;
        case 0x260640u: goto label_260640;
        case 0x260644u: goto label_260644;
        case 0x260648u: goto label_260648;
        case 0x26064cu: goto label_26064c;
        case 0x260650u: goto label_260650;
        case 0x260654u: goto label_260654;
        case 0x260658u: goto label_260658;
        case 0x26065cu: goto label_26065c;
        case 0x260660u: goto label_260660;
        case 0x260664u: goto label_260664;
        case 0x260668u: goto label_260668;
        case 0x26066cu: goto label_26066c;
        case 0x260670u: goto label_260670;
        case 0x260674u: goto label_260674;
        case 0x260678u: goto label_260678;
        case 0x26067cu: goto label_26067c;
        case 0x260680u: goto label_260680;
        case 0x260684u: goto label_260684;
        case 0x260688u: goto label_260688;
        case 0x26068cu: goto label_26068c;
        case 0x260690u: goto label_260690;
        case 0x260694u: goto label_260694;
        case 0x260698u: goto label_260698;
        case 0x26069cu: goto label_26069c;
        case 0x2606a0u: goto label_2606a0;
        case 0x2606a4u: goto label_2606a4;
        case 0x2606a8u: goto label_2606a8;
        case 0x2606acu: goto label_2606ac;
        case 0x2606b0u: goto label_2606b0;
        case 0x2606b4u: goto label_2606b4;
        case 0x2606b8u: goto label_2606b8;
        case 0x2606bcu: goto label_2606bc;
        case 0x2606c0u: goto label_2606c0;
        case 0x2606c4u: goto label_2606c4;
        case 0x2606c8u: goto label_2606c8;
        case 0x2606ccu: goto label_2606cc;
        case 0x2606d0u: goto label_2606d0;
        case 0x2606d4u: goto label_2606d4;
        case 0x2606d8u: goto label_2606d8;
        case 0x2606dcu: goto label_2606dc;
        case 0x2606e0u: goto label_2606e0;
        case 0x2606e4u: goto label_2606e4;
        case 0x2606e8u: goto label_2606e8;
        case 0x2606ecu: goto label_2606ec;
        case 0x2606f0u: goto label_2606f0;
        case 0x2606f4u: goto label_2606f4;
        case 0x2606f8u: goto label_2606f8;
        case 0x2606fcu: goto label_2606fc;
        case 0x260700u: goto label_260700;
        case 0x260704u: goto label_260704;
        case 0x260708u: goto label_260708;
        case 0x26070cu: goto label_26070c;
        case 0x260710u: goto label_260710;
        case 0x260714u: goto label_260714;
        case 0x260718u: goto label_260718;
        case 0x26071cu: goto label_26071c;
        case 0x260720u: goto label_260720;
        case 0x260724u: goto label_260724;
        case 0x260728u: goto label_260728;
        case 0x26072cu: goto label_26072c;
        case 0x260730u: goto label_260730;
        case 0x260734u: goto label_260734;
        case 0x260738u: goto label_260738;
        case 0x26073cu: goto label_26073c;
        case 0x260740u: goto label_260740;
        case 0x260744u: goto label_260744;
        case 0x260748u: goto label_260748;
        case 0x26074cu: goto label_26074c;
        case 0x260750u: goto label_260750;
        case 0x260754u: goto label_260754;
        case 0x260758u: goto label_260758;
        case 0x26075cu: goto label_26075c;
        case 0x260760u: goto label_260760;
        case 0x260764u: goto label_260764;
        case 0x260768u: goto label_260768;
        case 0x26076cu: goto label_26076c;
        case 0x260770u: goto label_260770;
        case 0x260774u: goto label_260774;
        case 0x260778u: goto label_260778;
        case 0x26077cu: goto label_26077c;
        case 0x260780u: goto label_260780;
        case 0x260784u: goto label_260784;
        case 0x260788u: goto label_260788;
        case 0x26078cu: goto label_26078c;
        case 0x260790u: goto label_260790;
        case 0x260794u: goto label_260794;
        case 0x260798u: goto label_260798;
        case 0x26079cu: goto label_26079c;
        case 0x2607a0u: goto label_2607a0;
        case 0x2607a4u: goto label_2607a4;
        case 0x2607a8u: goto label_2607a8;
        case 0x2607acu: goto label_2607ac;
        default: break;
    }

    ctx->pc = 0x260460u;

label_260460:
    // 0x260460: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x260460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_260464:
    // 0x260464: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x260464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_260468:
    // 0x260468: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x260468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26046c:
    // 0x26046c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x26046cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_260470:
    // 0x260470: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x260470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_260474:
    // 0x260474: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x260474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_260478:
    // 0x260478: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x260478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_26047c:
    // 0x26047c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x26047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_260480:
    // 0x260480: 0xc097f26  jal         func_25FC98
label_260484:
    if (ctx->pc == 0x260484u) {
        ctx->pc = 0x260484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260480u;
        // 0x260484: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x260488u;
        goto label_260488;
    }
    ctx->pc = 0x260480u;
    SET_GPR_U32(ctx, 31, 0x260488u);
    ctx->pc = 0x260484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260480u;
    // 0x260484: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x260480u, 0x260488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260488u;
label_260488:
    // 0x260488: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x260488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_26048c:
    // 0x26048c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_260490:
    if (ctx->pc == 0x260490u) {
        ctx->pc = 0x260490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26048Cu;
        // 0x260490: 0x8e430234  lw          $v1, 0x234($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260494u;
        goto label_260494;
    }
    ctx->pc = 0x26048Cu;
    {
        const bool branch_taken_0x26048c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26048c) {
            ctx->pc = 0x260490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26048Cu;
            // 0x260490: 0x8e430234  lw          $v1, 0x234($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26049Cu;
            goto label_26049c;
        }
    }
    ctx->pc = 0x260494u;
label_260494:
    // 0x260494: 0x100000bd  b           . + 4 + (0xBD << 2)
label_260498:
    if (ctx->pc == 0x260498u) {
        ctx->pc = 0x260498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260494u;
        // 0x260498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26049Cu;
        goto label_26049c;
    }
    ctx->pc = 0x260494u;
    {
        const bool branch_taken_0x260494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260494u;
        // 0x260498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260494) {
            ctx->pc = 0x26078Cu;
            goto label_26078c;
        }
    }
    ctx->pc = 0x26049Cu;
label_26049c:
    // 0x26049c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x26049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2604a0:
    // 0x2604a0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2604a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2604a4:
    // 0x2604a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2604a8:
    if (ctx->pc == 0x2604A8u) {
        ctx->pc = 0x2604A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604A4u;
        // 0x2604a8: 0x8e420230  lw          $v0, 0x230($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604ACu;
        goto label_2604ac;
    }
    ctx->pc = 0x2604A4u;
    {
        const bool branch_taken_0x2604a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2604A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604A4u;
        // 0x2604a8: 0x8e420230  lw          $v0, 0x230($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2604a4) {
            ctx->pc = 0x2604B8u;
            goto label_2604b8;
        }
    }
    ctx->pc = 0x2604ACu;
label_2604ac:
    // 0x2604ac: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2604acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_2604b0:
    // 0x2604b0: 0xae420230  sw          $v0, 0x230($s2)
    ctx->pc = 0x2604b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 2));
label_2604b4:
    // 0x2604b4: 0x8e420230  lw          $v0, 0x230($s2)
    ctx->pc = 0x2604b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
label_2604b8:
    // 0x2604b8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2604b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_2604bc:
    // 0x2604bc: 0x24853500  addiu       $a1, $a0, 0x3500
    ctx->pc = 0x2604bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 13568));
label_2604c0:
    // 0x2604c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2604c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2604c4:
    // 0x2604c4: 0xae420230  sw          $v0, 0x230($s2)
    ctx->pc = 0x2604c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 2));
label_2604c8:
    // 0x2604c8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2604c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2604cc:
    // 0x2604cc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2604ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_2604d0:
    // 0x2604d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2604d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2604d4:
    // 0x2604d4: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2604d8:
    if (ctx->pc == 0x2604D8u) {
        ctx->pc = 0x2604D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604D4u;
        // 0x2604d8: 0x3c140049  lui         $s4, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604DCu;
        goto label_2604dc;
    }
    ctx->pc = 0x2604D4u;
    {
        const bool branch_taken_0x2604d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2604D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604D4u;
        // 0x2604d8: 0x3c140049  lui         $s4, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2604d4) {
            ctx->pc = 0x260594u;
            goto label_260594;
        }
    }
    ctx->pc = 0x2604DCu;
label_2604dc:
    // 0x2604dc: 0x0  nop
    ctx->pc = 0x2604dcu;
    // NOP
label_2604e0:
    // 0x2604e0: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x2604e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
label_2604e4:
    // 0x2604e4: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x2604e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_2604e8:
    // 0x2604e8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_2604ec:
    if (ctx->pc == 0x2604ECu) {
        ctx->pc = 0x2604ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604E8u;
        // 0x2604ec: 0x26633500  addiu       $v1, $s3, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604F0u;
        goto label_2604f0;
    }
    ctx->pc = 0x2604E8u;
    {
        const bool branch_taken_0x2604e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2604ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604E8u;
        // 0x2604ec: 0x26633500  addiu       $v1, $s3, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2604e8) {
            ctx->pc = 0x260598u;
            goto label_260598;
        }
    }
    ctx->pc = 0x2604F0u;
label_2604f0:
    // 0x2604f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2604f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2604f4:
    // 0x2604f4: 0x8e230190  lw          $v1, 0x190($s1)
    ctx->pc = 0x2604f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
label_2604f8:
    // 0x2604f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2604f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2604fc:
    // 0x2604fc: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_260500:
    if (ctx->pc == 0x260500u) {
        ctx->pc = 0x260500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604FCu;
        // 0x260500: 0x26633500  addiu       $v1, $s3, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260504u;
        goto label_260504;
    }
    ctx->pc = 0x2604FCu;
    {
        const bool branch_taken_0x2604fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x260500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604FCu;
        // 0x260500: 0x26633500  addiu       $v1, $s3, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2604fc) {
            ctx->pc = 0x260598u;
            goto label_260598;
        }
    }
    ctx->pc = 0x260504u;
label_260504:
    // 0x260504: 0xc097f26  jal         func_25FC98
label_260508:
    if (ctx->pc == 0x260508u) {
        ctx->pc = 0x260508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260504u;
        // 0x260508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26050Cu;
        goto label_26050c;
    }
    ctx->pc = 0x260504u;
    SET_GPR_U32(ctx, 31, 0x26050Cu);
    ctx->pc = 0x260508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260504u;
    // 0x260508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x260504u, 0x26050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26050Cu;
label_26050c:
    // 0x26050c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26050cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260510:
    // 0x260510: 0xc097f26  jal         func_25FC98
label_260514:
    if (ctx->pc == 0x260514u) {
        ctx->pc = 0x260514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260510u;
        // 0x260514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260518u;
        goto label_260518;
    }
    ctx->pc = 0x260510u;
    SET_GPR_U32(ctx, 31, 0x260518u);
    ctx->pc = 0x260514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260510u;
    // 0x260514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x260510u, 0x260518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260518u;
label_260518:
    // 0x260518: 0x1602001f  bne         $s0, $v0, . + 4 + (0x1F << 2)
label_26051c:
    if (ctx->pc == 0x26051Cu) {
        ctx->pc = 0x26051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260518u;
        // 0x26051c: 0x26633500  addiu       $v1, $s3, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260520u;
        goto label_260520;
    }
    ctx->pc = 0x260518u;
    {
        const bool branch_taken_0x260518 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260518u;
        // 0x26051c: 0x26633500  addiu       $v1, $s3, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260518) {
            ctx->pc = 0x260598u;
            goto label_260598;
        }
    }
    ctx->pc = 0x260520u;
label_260520:
    // 0x260520: 0xc6210244  lwc1        $f1, 0x244($s1)
    ctx->pc = 0x260520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260524:
    // 0x260524: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x260524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_260528:
    // 0x260528: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x260528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26052c:
    // 0x26052c: 0x0  nop
    ctx->pc = 0x26052cu;
    // NOP
label_260530:
    // 0x260530: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x260530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260534:
    // 0x260534: 0x0  nop
    ctx->pc = 0x260534u;
    // NOP
label_260538:
    // 0x260538: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_26053c:
    if (ctx->pc == 0x26053Cu) {
        ctx->pc = 0x26053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260538u;
        // 0x26053c: 0x8e230230  lw          $v1, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260540u;
        goto label_260540;
    }
    ctx->pc = 0x260538u;
    {
        const bool branch_taken_0x260538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260538) {
            ctx->pc = 0x26053Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260538u;
            // 0x26053c: 0x8e230230  lw          $v1, 0x230($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260560u;
            goto label_260560;
        }
    }
    ctx->pc = 0x260540u;
label_260540:
    // 0x260540: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x260540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_260544:
    // 0x260544: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_260548:
    // 0x260548: 0x0  nop
    ctx->pc = 0x260548u;
    // NOP
label_26054c:
    // 0x26054c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x26054cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260550:
    // 0x260550: 0x0  nop
    ctx->pc = 0x260550u;
    // NOP
label_260554:
    // 0x260554: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_260558:
    if (ctx->pc == 0x260558u) {
        ctx->pc = 0x260558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260554u;
        // 0x260558: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26055Cu;
        goto label_26055c;
    }
    ctx->pc = 0x260554u;
    {
        const bool branch_taken_0x260554 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x260554) {
            ctx->pc = 0x260558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260554u;
            // 0x260558: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26059Cu;
            goto label_26059c;
        }
    }
    ctx->pc = 0x26055Cu;
label_26055c:
    // 0x26055c: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x26055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_260560:
    // 0x260560: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x260560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_260564:
    // 0x260564: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_260568:
    if (ctx->pc == 0x260568u) {
        ctx->pc = 0x260568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260564u;
        // 0x260568: 0x26633500  addiu       $v1, $s3, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26056Cu;
        goto label_26056c;
    }
    ctx->pc = 0x260564u;
    {
        const bool branch_taken_0x260564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260564) {
            ctx->pc = 0x260568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260564u;
            // 0x260568: 0x26633500  addiu       $v1, $s3, 0x3500 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260598u;
            goto label_260598;
        }
    }
    ctx->pc = 0x26056Cu;
label_26056c:
    // 0x26056c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x26056cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_260570:
    // 0x260570: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_260574:
    if (ctx->pc == 0x260574u) {
        ctx->pc = 0x260574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260570u;
        // 0x260574: 0x26633500  addiu       $v1, $s3, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260578u;
        goto label_260578;
    }
    ctx->pc = 0x260570u;
    {
        const bool branch_taken_0x260570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260570u;
        // 0x260574: 0x26633500  addiu       $v1, $s3, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260570) {
            ctx->pc = 0x260598u;
            goto label_260598;
        }
    }
    ctx->pc = 0x260578u;
label_260578:
    // 0x260578: 0xc097f26  jal         func_25FC98
label_26057c:
    if (ctx->pc == 0x26057Cu) {
        ctx->pc = 0x26057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260578u;
        // 0x26057c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260580u;
        goto label_260580;
    }
    ctx->pc = 0x260578u;
    SET_GPR_U32(ctx, 31, 0x260580u);
    ctx->pc = 0x26057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260578u;
    // 0x26057c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x260578u, 0x260580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260580u;
label_260580:
    // 0x260580: 0x24030067  addiu       $v1, $zero, 0x67
    ctx->pc = 0x260580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_260584:
    // 0x260584: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_260588:
    if (ctx->pc == 0x260588u) {
        ctx->pc = 0x260588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260584u;
        // 0x260588: 0xe6340244  swc1        $f20, 0x244($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26058Cu;
        goto label_26058c;
    }
    ctx->pc = 0x260584u;
    {
        const bool branch_taken_0x260584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x260584) {
            ctx->pc = 0x260588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260584u;
            // 0x260588: 0xe6340244  swc1        $f20, 0x244($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2605C0u;
            goto label_2605c0;
        }
    }
    ctx->pc = 0x26058Cu;
label_26058c:
    // 0x26058c: 0x1000000c  b           . + 4 + (0xC << 2)
label_260590:
    if (ctx->pc == 0x260590u) {
        ctx->pc = 0x260594u;
        goto label_260594;
    }
    ctx->pc = 0x26058Cu;
    {
        const bool branch_taken_0x26058c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26058c) {
            ctx->pc = 0x2605C0u;
            goto label_2605c0;
        }
    }
    ctx->pc = 0x260594u;
label_260594:
    // 0x260594: 0x26633500  addiu       $v1, $s3, 0x3500
    ctx->pc = 0x260594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
label_260598:
    // 0x260598: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x260598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_26059c:
    // 0x26059c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2605a0:
    if (ctx->pc == 0x2605A0u) {
        ctx->pc = 0x2605A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26059Cu;
        // 0x2605a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2605A4u;
        goto label_2605a4;
    }
    ctx->pc = 0x26059Cu;
    {
        const bool branch_taken_0x26059c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2605A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26059Cu;
        // 0x2605a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26059c) {
            ctx->pc = 0x2605A8u;
            goto label_2605a8;
        }
    }
    ctx->pc = 0x2605A4u;
label_2605a4:
    // 0x2605a4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2605a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2605a8:
    // 0x2605a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2605ac:
    if (ctx->pc == 0x2605ACu) {
        ctx->pc = 0x2605B0u;
        goto label_2605b0;
    }
    ctx->pc = 0x2605A8u;
    {
        const bool branch_taken_0x2605a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2605a8) {
            ctx->pc = 0x2605B8u;
            goto label_2605b8;
        }
    }
    ctx->pc = 0x2605B0u;
label_2605b0:
    // 0x2605b0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2605b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2605b4:
    // 0x2605b4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2605b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2605b8:
    // 0x2605b8: 0x5620ffc9  bnel        $s1, $zero, . + 4 + (-0x37 << 2)
label_2605bc:
    if (ctx->pc == 0x2605BCu) {
        ctx->pc = 0x2605BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605B8u;
        // 0x2605bc: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2605C0u;
        goto label_2605c0;
    }
    ctx->pc = 0x2605B8u;
    {
        const bool branch_taken_0x2605b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2605b8) {
            ctx->pc = 0x2605BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2605B8u;
            // 0x2605bc: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2604E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2604e0;
        }
    }
    ctx->pc = 0x2605C0u;
label_2605c0:
    // 0x2605c0: 0xc098554  jal         func_261550
label_2605c4:
    if (ctx->pc == 0x2605C4u) {
        ctx->pc = 0x2605C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605C0u;
        // 0x2605c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2605C8u;
        goto label_2605c8;
    }
    ctx->pc = 0x2605C0u;
    SET_GPR_U32(ctx, 31, 0x2605C8u);
    ctx->pc = 0x2605C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2605C0u;
    // 0x2605c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261550u, 0x2605C0u, 0x2605C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605C8u;
label_2605c8:
    // 0x2605c8: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x2605c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2605cc:
    // 0x2605cc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2605ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_2605d0:
    // 0x2605d0: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x2605d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2605d4:
    // 0x2605d4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2605d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2605d8:
    // 0x2605d8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2605d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2605dc:
    // 0x2605dc: 0x40f809  jalr        $v0
label_2605e0:
    if (ctx->pc == 0x2605E0u) {
        ctx->pc = 0x2605E4u;
        goto label_2605e4;
    }
    ctx->pc = 0x2605DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2605E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2605DCu, 0x2605E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2605E4u;
label_2605e4:
    // 0x2605e4: 0xc0b1488  jal         func_2C5220
label_2605e8:
    if (ctx->pc == 0x2605E8u) {
        ctx->pc = 0x2605E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605E4u;
        // 0x2605e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2605ECu;
        goto label_2605ec;
    }
    ctx->pc = 0x2605E4u;
    SET_GPR_U32(ctx, 31, 0x2605ECu);
    ctx->pc = 0x2605E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2605E4u;
    // 0x2605e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2605E4u, 0x2605ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605ECu;
label_2605ec:
    // 0x2605ec: 0xc0899bc  jal         func_2266F0
label_2605f0:
    if (ctx->pc == 0x2605F0u) {
        ctx->pc = 0x2605F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605ECu;
        // 0x2605f0: 0x8e440234  lw          $a0, 0x234($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2605F4u;
        goto label_2605f4;
    }
    ctx->pc = 0x2605ECu;
    SET_GPR_U32(ctx, 31, 0x2605F4u);
    ctx->pc = 0x2605F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2605ECu;
    // 0x2605f0: 0x8e440234  lw          $a0, 0x234($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2605ECu, 0x2605F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605F4u;
label_2605f4:
    // 0x2605f4: 0x50520005  beql        $v0, $s2, . + 4 + (0x5 << 2)
label_2605f8:
    if (ctx->pc == 0x2605F8u) {
        ctx->pc = 0x2605F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605F4u;
        // 0x2605f8: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2605FCu;
        goto label_2605fc;
    }
    ctx->pc = 0x2605F4u;
    {
        const bool branch_taken_0x2605f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2605f4) {
            ctx->pc = 0x2605F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2605F4u;
            // 0x2605f8: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26060Cu;
            goto label_26060c;
        }
    }
    ctx->pc = 0x2605FCu;
label_2605fc:
    // 0x2605fc: 0x8e420238  lw          $v0, 0x238($s2)
    ctx->pc = 0x2605fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
label_260600:
    // 0x260600: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_260604:
    if (ctx->pc == 0x260604u) {
        ctx->pc = 0x260604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260600u;
        // 0x260604: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260608u;
        goto label_260608;
    }
    ctx->pc = 0x260600u;
    {
        const bool branch_taken_0x260600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260600) {
            ctx->pc = 0x260604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260600u;
            // 0x260604: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260610u;
            goto label_260610;
        }
    }
    ctx->pc = 0x260608u;
label_260608:
    // 0x260608: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x260608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26060c:
    // 0x26060c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26060cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260610:
    // 0x260610: 0xc0f70ce  jal         func_3DC338
label_260614:
    if (ctx->pc == 0x260614u) {
        ctx->pc = 0x260614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260610u;
        // 0x260614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260618u;
        goto label_260618;
    }
    ctx->pc = 0x260610u;
    SET_GPR_U32(ctx, 31, 0x260618u);
    ctx->pc = 0x260614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260610u;
    // 0x260614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x260610u, 0x260618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260618u;
label_260618:
    // 0x260618: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26061c:
    if (ctx->pc == 0x26061Cu) {
        ctx->pc = 0x26061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260618u;
        // 0x26061c: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260620u;
        goto label_260620;
    }
    ctx->pc = 0x260618u;
    {
        const bool branch_taken_0x260618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260618u;
        // 0x26061c: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260618) {
            ctx->pc = 0x26062Cu;
            goto label_26062c;
        }
    }
    ctx->pc = 0x260620u;
label_260620:
    // 0x260620: 0xc0c4900  jal         func_312400
label_260624:
    if (ctx->pc == 0x260624u) {
        ctx->pc = 0x260624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260620u;
        // 0x260624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260628u;
        goto label_260628;
    }
    ctx->pc = 0x260620u;
    SET_GPR_U32(ctx, 31, 0x260628u);
    ctx->pc = 0x260624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260620u;
    // 0x260624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x260620u, 0x260628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260628u;
label_260628:
    // 0x260628: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x260628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_26062c:
    // 0x26062c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26062cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_260630:
    // 0x260630: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x260630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_260634:
    // 0x260634: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x260634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_260638:
    // 0x260638: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x260638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26063c:
    // 0x26063c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_260640:
    // 0x260640: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x260640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_260644:
    // 0x260644: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x260644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_260648:
    // 0x260648: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x260648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_26064c:
    // 0x26064c: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x26064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_260650:
    // 0x260650: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x260650u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_260654:
    // 0x260654: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x260654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_260658:
    // 0x260658: 0xc097f26  jal         func_25FC98
label_26065c:
    if (ctx->pc == 0x26065Cu) {
        ctx->pc = 0x26065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260658u;
        // 0x26065c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260660u;
        goto label_260660;
    }
    ctx->pc = 0x260658u;
    SET_GPR_U32(ctx, 31, 0x260660u);
    ctx->pc = 0x26065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260658u;
    // 0x26065c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x260658u, 0x260660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260660u;
label_260660:
    // 0x260660: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x260660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_260664:
    // 0x260664: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_260668:
    if (ctx->pc == 0x260668u) {
        ctx->pc = 0x260668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260664u;
        // 0x260668: 0x8e500234  lw          $s0, 0x234($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26066Cu;
        goto label_26066c;
    }
    ctx->pc = 0x260664u;
    {
        const bool branch_taken_0x260664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x260664) {
            ctx->pc = 0x260668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260664u;
            // 0x260668: 0x8e500234  lw          $s0, 0x234($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2606B4u;
            goto label_2606b4;
        }
    }
    ctx->pc = 0x26066Cu;
label_26066c:
    // 0x26066c: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x26066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
label_260670:
    // 0x260670: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_260674:
    if (ctx->pc == 0x260674u) {
        ctx->pc = 0x260674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260670u;
        // 0x260674: 0x8e500234  lw          $s0, 0x234($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260678u;
        goto label_260678;
    }
    ctx->pc = 0x260670u;
    {
        const bool branch_taken_0x260670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260670) {
            ctx->pc = 0x260674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260670u;
            // 0x260674: 0x8e500234  lw          $s0, 0x234($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2606B4u;
            goto label_2606b4;
        }
    }
    ctx->pc = 0x260678u;
label_260678:
    // 0x260678: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x260678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_26067c:
    // 0x26067c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26067cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260680:
    // 0x260680: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x260680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_260684:
    // 0x260684: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x260684u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_260688:
    // 0x260688: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x260688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_26068c:
    // 0x26068c: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x26068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_260690:
    // 0x260690: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x260690u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_260694:
    // 0x260694: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x260694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_260698:
    // 0x260698: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x260698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_26069c:
    // 0x26069c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26069cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2606a0:
    // 0x2606a0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2606a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2606a4:
    // 0x2606a4: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2606a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2606a8:
    // 0x2606a8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2606a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2606ac:
    // 0x2606ac: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2606acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2606b0:
    // 0x2606b0: 0x8e500234  lw          $s0, 0x234($s2)
    ctx->pc = 0x2606b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
label_2606b4:
    // 0x2606b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2606b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2606b8:
    // 0x2606b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2606b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2606bc:
    // 0x2606bc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2606bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2606c0:
    // 0x2606c0: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2606c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2606c4:
    // 0x2606c4: 0x40f809  jalr        $v0
label_2606c8:
    if (ctx->pc == 0x2606C8u) {
        ctx->pc = 0x2606C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606C4u;
        // 0x2606c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2606CCu;
        goto label_2606cc;
    }
    ctx->pc = 0x2606C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2606CCu);
        ctx->pc = 0x2606C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606C4u;
        // 0x2606c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2606C4u, 0x2606CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2606CCu;
label_2606cc:
    // 0x2606cc: 0x2684a080  addiu       $a0, $s4, -0x5F80
    ctx->pc = 0x2606ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942848));
label_2606d0:
    // 0x2606d0: 0xc049554  jal         func_125550
label_2606d4:
    if (ctx->pc == 0x2606D4u) {
        ctx->pc = 0x2606D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606D0u;
        // 0x2606d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2606D8u;
        goto label_2606d8;
    }
    ctx->pc = 0x2606D0u;
    SET_GPR_U32(ctx, 31, 0x2606D8u);
    ctx->pc = 0x2606D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2606D0u;
    // 0x2606d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125550u, 0x2606D0u, 0x2606D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606D8u;
label_2606d8:
    // 0x2606d8: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2606d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2606dc:
    // 0x2606dc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2606dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2606e0:
    // 0x2606e0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_2606e4:
    if (ctx->pc == 0x2606E4u) {
        ctx->pc = 0x2606E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606E0u;
        // 0x2606e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2606E8u;
        goto label_2606e8;
    }
    ctx->pc = 0x2606E0u;
    {
        const bool branch_taken_0x2606e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2606E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606E0u;
        // 0x2606e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2606e0) {
            ctx->pc = 0x260728u;
            goto label_260728;
        }
    }
    ctx->pc = 0x2606E8u;
label_2606e8:
    // 0x2606e8: 0x8e440254  lw          $a0, 0x254($s2)
    ctx->pc = 0x2606e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_2606ec:
    // 0x2606ec: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2606f0:
    if (ctx->pc == 0x2606F0u) {
        ctx->pc = 0x2606F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606ECu;
        // 0x2606f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2606F4u;
        goto label_2606f4;
    }
    ctx->pc = 0x2606ECu;
    {
        const bool branch_taken_0x2606ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2606F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606ECu;
        // 0x2606f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2606ec) {
            ctx->pc = 0x26072Cu;
            goto label_26072c;
        }
    }
    ctx->pc = 0x2606F4u;
label_2606f4:
    // 0x2606f4: 0x8e420258  lw          $v0, 0x258($s2)
    ctx->pc = 0x2606f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
label_2606f8:
    // 0x2606f8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2606f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2606fc:
    // 0x2606fc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2606fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_260700:
    // 0x260700: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x260700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_260704:
    // 0x260704: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x260704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260708:
    // 0x260708: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x260708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_26070c:
    // 0x26070c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x26070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260710:
    // 0x260710: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x260710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_260714:
    // 0x260714: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x260714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260718:
    // 0x260718: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x260718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_26071c:
    // 0x26071c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26071cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_260720:
    // 0x260720: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x260720u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_260724:
    // 0x260724: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x260724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_260728:
    // 0x260728: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x260728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26072c:
    // 0x26072c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26072cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260730:
    // 0x260730: 0xc084cba  jal         func_2132E8
label_260734:
    if (ctx->pc == 0x260734u) {
        ctx->pc = 0x260734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260730u;
        // 0x260734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260738u;
        goto label_260738;
    }
    ctx->pc = 0x260730u;
    SET_GPR_U32(ctx, 31, 0x260738u);
    ctx->pc = 0x260734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260730u;
    // 0x260734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132E8u, 0x260730u, 0x260738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260738u;
label_260738:
    // 0x260738: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x260738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26073c:
    // 0x26073c: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x26073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_260740:
    // 0x260740: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x260740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260744:
    // 0x260744: 0xc0763f2  jal         func_1D8FC8
label_260748:
    if (ctx->pc == 0x260748u) {
        ctx->pc = 0x260748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260744u;
        // 0x260748: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26074Cu;
        goto label_26074c;
    }
    ctx->pc = 0x260744u;
    SET_GPR_U32(ctx, 31, 0x26074Cu);
    ctx->pc = 0x260748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260744u;
    // 0x260748: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x260744u, 0x26074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26074Cu;
label_26074c:
    // 0x26074c: 0xc0767f2  jal         func_1D9FC8
label_260750:
    if (ctx->pc == 0x260750u) {
        ctx->pc = 0x260750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26074Cu;
        // 0x260750: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260754u;
        goto label_260754;
    }
    ctx->pc = 0x26074Cu;
    SET_GPR_U32(ctx, 31, 0x260754u);
    ctx->pc = 0x260750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26074Cu;
    // 0x260750: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x26074Cu, 0x260754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260754u;
label_260754:
    // 0x260754: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x260754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_260758:
    // 0x260758: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26075c:
    // 0x26075c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x26075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_260760:
    // 0x260760: 0x40f809  jalr        $v0
label_260764:
    if (ctx->pc == 0x260764u) {
        ctx->pc = 0x260764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260760u;
        // 0x260764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260768u;
        goto label_260768;
    }
    ctx->pc = 0x260760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260768u);
        ctx->pc = 0x260764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260760u;
        // 0x260764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260760u, 0x260768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260768u;
label_260768:
    // 0x260768: 0xc083bc0  jal         func_20EF00
label_26076c:
    if (ctx->pc == 0x26076Cu) {
        ctx->pc = 0x26076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260768u;
        // 0x26076c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260770u;
        goto label_260770;
    }
    ctx->pc = 0x260768u;
    SET_GPR_U32(ctx, 31, 0x260770u);
    ctx->pc = 0x26076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260768u;
    // 0x26076c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x260768u, 0x260770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260770u;
label_260770:
    // 0x260770: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x260770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_260774:
    // 0x260774: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x260774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_260778:
    // 0x260778: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x260778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_26077c:
    // 0x26077c: 0x40f809  jalr        $v0
label_260780:
    if (ctx->pc == 0x260780u) {
        ctx->pc = 0x260784u;
        goto label_260784;
    }
    ctx->pc = 0x26077Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260784u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26077Cu, 0x260784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260784u;
label_260784:
    // 0x260784: 0xae400240  sw          $zero, 0x240($s2)
    ctx->pc = 0x260784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 576), GPR_U32(ctx, 0));
label_260788:
    // 0x260788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26078c:
    // 0x26078c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x26078cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_260790:
    // 0x260790: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x260790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_260794:
    // 0x260794: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x260794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_260798:
    // 0x260798: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x260798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_26079c:
    // 0x26079c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x26079cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2607a0:
    // 0x2607a0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2607a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2607a4:
    // 0x2607a4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2607a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2607a8:
    // 0x2607a8: 0x3e00008  jr          $ra
label_2607ac:
    if (ctx->pc == 0x2607ACu) {
        ctx->pc = 0x2607ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607A8u;
        // 0x2607ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2607B0u;
        goto label_fallthrough_0x2607a8;
    }
    ctx->pc = 0x2607A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2607ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607A8u;
        // 0x2607ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2607A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2607a8:
    ctx->pc = 0x2607B0u;
}
