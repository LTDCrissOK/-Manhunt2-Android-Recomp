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

// Function: sub_002065F0
// Address: 0x2065f0 - 0x2067a0
void sub_002065F0_0x2065f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002065F0_0x2065f0");
#endif

    switch (ctx->pc) {
        case 0x2065f0u: goto label_2065f0;
        case 0x2065f4u: goto label_2065f4;
        case 0x2065f8u: goto label_2065f8;
        case 0x2065fcu: goto label_2065fc;
        case 0x206600u: goto label_206600;
        case 0x206604u: goto label_206604;
        case 0x206608u: goto label_206608;
        case 0x20660cu: goto label_20660c;
        case 0x206610u: goto label_206610;
        case 0x206614u: goto label_206614;
        case 0x206618u: goto label_206618;
        case 0x20661cu: goto label_20661c;
        case 0x206620u: goto label_206620;
        case 0x206624u: goto label_206624;
        case 0x206628u: goto label_206628;
        case 0x20662cu: goto label_20662c;
        case 0x206630u: goto label_206630;
        case 0x206634u: goto label_206634;
        case 0x206638u: goto label_206638;
        case 0x20663cu: goto label_20663c;
        case 0x206640u: goto label_206640;
        case 0x206644u: goto label_206644;
        case 0x206648u: goto label_206648;
        case 0x20664cu: goto label_20664c;
        case 0x206650u: goto label_206650;
        case 0x206654u: goto label_206654;
        case 0x206658u: goto label_206658;
        case 0x20665cu: goto label_20665c;
        case 0x206660u: goto label_206660;
        case 0x206664u: goto label_206664;
        case 0x206668u: goto label_206668;
        case 0x20666cu: goto label_20666c;
        case 0x206670u: goto label_206670;
        case 0x206674u: goto label_206674;
        case 0x206678u: goto label_206678;
        case 0x20667cu: goto label_20667c;
        case 0x206680u: goto label_206680;
        case 0x206684u: goto label_206684;
        case 0x206688u: goto label_206688;
        case 0x20668cu: goto label_20668c;
        case 0x206690u: goto label_206690;
        case 0x206694u: goto label_206694;
        case 0x206698u: goto label_206698;
        case 0x20669cu: goto label_20669c;
        case 0x2066a0u: goto label_2066a0;
        case 0x2066a4u: goto label_2066a4;
        case 0x2066a8u: goto label_2066a8;
        case 0x2066acu: goto label_2066ac;
        case 0x2066b0u: goto label_2066b0;
        case 0x2066b4u: goto label_2066b4;
        case 0x2066b8u: goto label_2066b8;
        case 0x2066bcu: goto label_2066bc;
        case 0x2066c0u: goto label_2066c0;
        case 0x2066c4u: goto label_2066c4;
        case 0x2066c8u: goto label_2066c8;
        case 0x2066ccu: goto label_2066cc;
        case 0x2066d0u: goto label_2066d0;
        case 0x2066d4u: goto label_2066d4;
        case 0x2066d8u: goto label_2066d8;
        case 0x2066dcu: goto label_2066dc;
        case 0x2066e0u: goto label_2066e0;
        case 0x2066e4u: goto label_2066e4;
        case 0x2066e8u: goto label_2066e8;
        case 0x2066ecu: goto label_2066ec;
        case 0x2066f0u: goto label_2066f0;
        case 0x2066f4u: goto label_2066f4;
        case 0x2066f8u: goto label_2066f8;
        case 0x2066fcu: goto label_2066fc;
        case 0x206700u: goto label_206700;
        case 0x206704u: goto label_206704;
        case 0x206708u: goto label_206708;
        case 0x20670cu: goto label_20670c;
        case 0x206710u: goto label_206710;
        case 0x206714u: goto label_206714;
        case 0x206718u: goto label_206718;
        case 0x20671cu: goto label_20671c;
        case 0x206720u: goto label_206720;
        case 0x206724u: goto label_206724;
        case 0x206728u: goto label_206728;
        case 0x20672cu: goto label_20672c;
        case 0x206730u: goto label_206730;
        case 0x206734u: goto label_206734;
        case 0x206738u: goto label_206738;
        case 0x20673cu: goto label_20673c;
        case 0x206740u: goto label_206740;
        case 0x206744u: goto label_206744;
        case 0x206748u: goto label_206748;
        case 0x20674cu: goto label_20674c;
        case 0x206750u: goto label_206750;
        case 0x206754u: goto label_206754;
        case 0x206758u: goto label_206758;
        case 0x20675cu: goto label_20675c;
        case 0x206760u: goto label_206760;
        case 0x206764u: goto label_206764;
        case 0x206768u: goto label_206768;
        case 0x20676cu: goto label_20676c;
        case 0x206770u: goto label_206770;
        case 0x206774u: goto label_206774;
        case 0x206778u: goto label_206778;
        case 0x20677cu: goto label_20677c;
        case 0x206780u: goto label_206780;
        case 0x206784u: goto label_206784;
        case 0x206788u: goto label_206788;
        case 0x20678cu: goto label_20678c;
        case 0x206790u: goto label_206790;
        case 0x206794u: goto label_206794;
        case 0x206798u: goto label_206798;
        case 0x20679cu: goto label_20679c;
        default: break;
    }

    ctx->pc = 0x2065f0u;

label_2065f0:
    // 0x2065f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2065f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2065f4:
    // 0x2065f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2065f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2065f8:
    // 0x2065f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2065f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2065fc:
    // 0x2065fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2065fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_206600:
    // 0x206600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206604:
    // 0x206604: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x206604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
label_206608:
    // 0x206608: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20660c:
    if (ctx->pc == 0x20660Cu) {
        ctx->pc = 0x20660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206608u;
        // 0x20660c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206610u;
        goto label_206610;
    }
    ctx->pc = 0x206608u;
    {
        const bool branch_taken_0x206608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206608u;
        // 0x20660c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206608) {
            ctx->pc = 0x20661Cu;
            goto label_20661c;
        }
    }
    ctx->pc = 0x206610u;
label_206610:
    // 0x206610: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x206610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_206614:
    // 0x206614: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_206618:
    if (ctx->pc == 0x206618u) {
        ctx->pc = 0x206618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206614u;
        // 0x206618: 0xae280048  sw          $t0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20661Cu;
        goto label_20661c;
    }
    ctx->pc = 0x206614u;
    {
        const bool branch_taken_0x206614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206614) {
            ctx->pc = 0x206618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206614u;
            // 0x206618: 0xae280048  sw          $t0, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206624u;
            goto label_206624;
        }
    }
    ctx->pc = 0x20661Cu;
label_20661c:
    // 0x20661c: 0x1000005b  b           . + 4 + (0x5B << 2)
label_206620:
    if (ctx->pc == 0x206620u) {
        ctx->pc = 0x206620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20661Cu;
        // 0x206620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206624u;
        goto label_206624;
    }
    ctx->pc = 0x20661Cu;
    {
        const bool branch_taken_0x20661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20661Cu;
        // 0x206620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20661c) {
            ctx->pc = 0x20678Cu;
            goto label_20678c;
        }
    }
    ctx->pc = 0x206624u;
label_206624:
    // 0x206624: 0xae300044  sw          $s0, 0x44($s1)
    ctx->pc = 0x206624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 16));
label_206628:
    // 0x206628: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
label_20662c:
    if (ctx->pc == 0x20662Cu) {
        ctx->pc = 0x20662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206628u;
        // 0x20662c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206630u;
        goto label_206630;
    }
    ctx->pc = 0x206628u;
    {
        const bool branch_taken_0x206628 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206628u;
        // 0x20662c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206628) {
            ctx->pc = 0x206668u;
            goto label_206668;
        }
    }
    ctx->pc = 0x206630u;
label_206630:
    // 0x206630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206634:
    // 0x206634: 0xae26004c  sw          $a2, 0x4C($s1)
    ctx->pc = 0x206634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 6));
label_206638:
    // 0x206638: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x206638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
label_20663c:
    // 0x20663c: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x20663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
label_206640:
    // 0x206640: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x206640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_206644:
    // 0x206644: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x206644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_206648:
    // 0x206648: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_20664c:
    if (ctx->pc == 0x20664Cu) {
        ctx->pc = 0x20664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206648u;
        // 0x20664c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206650u;
        goto label_206650;
    }
    ctx->pc = 0x206648u;
    {
        const bool branch_taken_0x206648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206648) {
            ctx->pc = 0x20664Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206648u;
            // 0x20664c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206694u;
            goto label_206694;
        }
    }
    ctx->pc = 0x206650u;
label_206650:
    // 0x206650: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x206650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_206654:
    // 0x206654: 0x8cc500d4  lw          $a1, 0xD4($a2)
    ctx->pc = 0x206654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
label_206658:
    // 0x206658: 0xc07d686  jal         func_1F5A18
label_20665c:
    if (ctx->pc == 0x20665Cu) {
        ctx->pc = 0x20665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206658u;
        // 0x20665c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206660u;
        goto label_206660;
    }
    ctx->pc = 0x206658u;
    SET_GPR_U32(ctx, 31, 0x206660u);
    ctx->pc = 0x20665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206658u;
    // 0x20665c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5A18u, 0x206658u, 0x206660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206660u;
label_206660:
    // 0x206660: 0x1000000c  b           . + 4 + (0xC << 2)
label_206664:
    if (ctx->pc == 0x206664u) {
        ctx->pc = 0x206664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206660u;
        // 0x206664: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206668u;
        goto label_206668;
    }
    ctx->pc = 0x206660u;
    {
        const bool branch_taken_0x206660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206660u;
        // 0x206664: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206660) {
            ctx->pc = 0x206694u;
            goto label_206694;
        }
    }
    ctx->pc = 0x206668u;
label_206668:
    // 0x206668: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_20666c:
    if (ctx->pc == 0x20666Cu) {
        ctx->pc = 0x20666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206668u;
        // 0x20666c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206670u;
        goto label_206670;
    }
    ctx->pc = 0x206668u;
    {
        const bool branch_taken_0x206668 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x20666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206668u;
        // 0x20666c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206668) {
            ctx->pc = 0x206690u;
            goto label_206690;
        }
    }
    ctx->pc = 0x206670u;
label_206670:
    // 0x206670: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x206670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_206674:
    // 0x206674: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x206674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_206678:
    // 0x206678: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x206678u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_20667c:
    // 0x20667c: 0x10000005  b           . + 4 + (0x5 << 2)
label_206680:
    if (ctx->pc == 0x206680u) {
        ctx->pc = 0x206680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20667Cu;
        // 0x206680: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206684u;
        goto label_206684;
    }
    ctx->pc = 0x20667Cu;
    {
        const bool branch_taken_0x20667c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20667Cu;
        // 0x206680: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20667c) {
            ctx->pc = 0x206694u;
            goto label_206694;
        }
    }
    ctx->pc = 0x206684u;
label_206684:
    // 0x206684: 0x0  nop
    ctx->pc = 0x206684u;
    // NOP
label_206688:
    // 0x206688: 0xc082b70  jal         func_20ADC0
label_20668c:
    if (ctx->pc == 0x20668Cu) {
        ctx->pc = 0x206690u;
        goto label_206690;
    }
    ctx->pc = 0x206688u;
    SET_GPR_U32(ctx, 31, 0x206690u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x206688u, 0x206690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206690u;
label_206690:
    // 0x206690: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x206690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_206694:
    // 0x206694: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x206694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_206698:
    // 0x206698: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x206698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_20669c:
    // 0x20669c: 0x40f809  jalr        $v0
label_2066a0:
    if (ctx->pc == 0x2066A0u) {
        ctx->pc = 0x2066A4u;
        goto label_2066a4;
    }
    ctx->pc = 0x20669Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2066A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20669Cu, 0x2066A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2066A4u;
label_2066a4:
    // 0x2066a4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_2066a8:
    if (ctx->pc == 0x2066A8u) {
        ctx->pc = 0x2066ACu;
        goto label_2066ac;
    }
    ctx->pc = 0x2066A4u;
    {
        const bool branch_taken_0x2066a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066a4) {
            ctx->pc = 0x206688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206688;
        }
    }
    ctx->pc = 0x2066ACu;
label_2066ac:
    // 0x2066ac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2066acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2066b0:
    // 0x2066b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2066b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2066b4:
    // 0x2066b4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2066b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2066b8:
    // 0x2066b8: 0x40f809  jalr        $v0
label_2066bc:
    if (ctx->pc == 0x2066BCu) {
        ctx->pc = 0x2066C0u;
        goto label_2066c0;
    }
    ctx->pc = 0x2066B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2066C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2066B8u, 0x2066C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2066C0u;
label_2066c0:
    // 0x2066c0: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2066c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2066c4:
    // 0x2066c4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_2066c8:
    if (ctx->pc == 0x2066C8u) {
        ctx->pc = 0x2066CCu;
        goto label_2066cc;
    }
    ctx->pc = 0x2066C4u;
    {
        const bool branch_taken_0x2066c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2066c4) {
            ctx->pc = 0x206750u;
            goto label_206750;
        }
    }
    ctx->pc = 0x2066CCu;
label_2066cc:
    // 0x2066cc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2066ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_2066d0:
    // 0x2066d0: 0xc080616  jal         func_201858
label_2066d4:
    if (ctx->pc == 0x2066D4u) {
        ctx->pc = 0x2066D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066D0u;
        // 0x2066d4: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2066D8u;
        goto label_2066d8;
    }
    ctx->pc = 0x2066D0u;
    SET_GPR_U32(ctx, 31, 0x2066D8u);
    ctx->pc = 0x2066D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2066D0u;
    // 0x2066d4: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201858u, 0x2066D0u, 0x2066D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2066D8u;
label_2066d8:
    // 0x2066d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2066d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2066dc:
    // 0x2066dc: 0x0  nop
    ctx->pc = 0x2066dcu;
    // NOP
label_2066e0:
    // 0x2066e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2066e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2066e4:
    // 0x2066e4: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x2066e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
label_2066e8:
    // 0x2066e8: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x2066e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
label_2066ec:
    // 0x2066ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2066ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2066f0:
    // 0x2066f0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2066f0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2066f4:
    // 0x2066f4: 0x0  nop
    ctx->pc = 0x2066f4u;
    // NOP
label_2066f8:
    // 0x2066f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2066f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2066fc:
    // 0x2066fc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2066fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_206700:
    // 0x206700: 0xc0e3f5e  jal         func_38FD78
label_206704:
    if (ctx->pc == 0x206704u) {
        ctx->pc = 0x206704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206700u;
        // 0x206704: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206708u;
        goto label_206708;
    }
    ctx->pc = 0x206700u;
    SET_GPR_U32(ctx, 31, 0x206708u);
    ctx->pc = 0x206704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206700u;
    // 0x206704: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x206700u, 0x206708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206708u;
label_206708:
    // 0x206708: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206708u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_20670c:
    // 0x20670c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x20670cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_206710:
    // 0x206710: 0xc081710  jal         func_205C40
label_206714:
    if (ctx->pc == 0x206714u) {
        ctx->pc = 0x206718u;
        goto label_206718;
    }
    ctx->pc = 0x206710u;
    SET_GPR_U32(ctx, 31, 0x206718u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x206710u, 0x206718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206718u;
label_206718:
    // 0x206718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20671c:
    // 0x20671c: 0xc0817d4  jal         func_205F50
label_206720:
    if (ctx->pc == 0x206720u) {
        ctx->pc = 0x206720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20671Cu;
        // 0x206720: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206724u;
        goto label_206724;
    }
    ctx->pc = 0x20671Cu;
    SET_GPR_U32(ctx, 31, 0x206724u);
    ctx->pc = 0x206720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20671Cu;
    // 0x206720: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x20671Cu, 0x206724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206724u;
label_206724:
    // 0x206724: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x206724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_206728:
    // 0x206728: 0xc081560  jal         func_205580
label_20672c:
    if (ctx->pc == 0x20672Cu) {
        ctx->pc = 0x20672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206728u;
        // 0x20672c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206730u;
        goto label_206730;
    }
    ctx->pc = 0x206728u;
    SET_GPR_U32(ctx, 31, 0x206730u);
    ctx->pc = 0x20672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206728u;
    // 0x20672c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x206728u, 0x206730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206730u;
label_206730:
    // 0x206730: 0xc081710  jal         func_205C40
label_206734:
    if (ctx->pc == 0x206734u) {
        ctx->pc = 0x206738u;
        goto label_206738;
    }
    ctx->pc = 0x206730u;
    SET_GPR_U32(ctx, 31, 0x206738u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x206730u, 0x206738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206738u;
label_206738:
    // 0x206738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20673c:
    // 0x20673c: 0xc0817fa  jal         func_205FE8
label_206740:
    if (ctx->pc == 0x206740u) {
        ctx->pc = 0x206740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20673Cu;
        // 0x206740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206744u;
        goto label_206744;
    }
    ctx->pc = 0x20673Cu;
    SET_GPR_U32(ctx, 31, 0x206744u);
    ctx->pc = 0x206740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20673Cu;
    // 0x206740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205FE8u, 0x20673Cu, 0x206744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206744u;
label_206744:
    // 0x206744: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x206744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_206748:
    // 0x206748: 0xc08156c  jal         func_2055B0
label_20674c:
    if (ctx->pc == 0x20674Cu) {
        ctx->pc = 0x20674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206748u;
        // 0x20674c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206750u;
        goto label_206750;
    }
    ctx->pc = 0x206748u;
    SET_GPR_U32(ctx, 31, 0x206750u);
    ctx->pc = 0x20674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206748u;
    // 0x20674c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2055B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2055B0u, 0x206748u, 0x206750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206750u;
label_206750:
    // 0x206750: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x206750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_206754:
    // 0x206754: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x206754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206758:
    // 0x206758: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x206758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_20675c:
    // 0x20675c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20675cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_206760:
    // 0x206760: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x206760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_206764:
    // 0x206764: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x206764u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_206768:
    // 0x206768: 0xa2300031  sb          $s0, 0x31($s1)
    ctx->pc = 0x206768u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 16));
label_20676c:
    // 0x20676c: 0xc08246e  jal         func_2091B8
label_206770:
    if (ctx->pc == 0x206770u) {
        ctx->pc = 0x206770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20676Cu;
        // 0x206770: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206774u;
        goto label_206774;
    }
    ctx->pc = 0x20676Cu;
    SET_GPR_U32(ctx, 31, 0x206774u);
    ctx->pc = 0x206770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20676Cu;
    // 0x206770: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x20676Cu, 0x206774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206774u;
label_206774:
    // 0x206774: 0xa2300068  sb          $s0, 0x68($s1)
    ctx->pc = 0x206774u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 16));
label_206778:
    // 0x206778: 0xc081a88  jal         func_206A20
label_20677c:
    if (ctx->pc == 0x20677Cu) {
        ctx->pc = 0x20677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206778u;
        // 0x20677c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206780u;
        goto label_206780;
    }
    ctx->pc = 0x206778u;
    SET_GPR_U32(ctx, 31, 0x206780u);
    ctx->pc = 0x20677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206778u;
    // 0x20677c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A20u, 0x206778u, 0x206780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206780u;
label_206780:
    // 0x206780: 0xa230000c  sb          $s0, 0xC($s1)
    ctx->pc = 0x206780u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 16));
label_206784:
    // 0x206784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206788:
    // 0x206788: 0xa220000d  sb          $zero, 0xD($s1)
    ctx->pc = 0x206788u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 0));
label_20678c:
    // 0x20678c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20678cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206790:
    // 0x206790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_206794:
    // 0x206794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_206798:
    // 0x206798: 0x3e00008  jr          $ra
label_20679c:
    if (ctx->pc == 0x20679Cu) {
        ctx->pc = 0x20679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206798u;
        // 0x20679c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2067A0u;
        goto label_fallthrough_0x206798;
    }
    ctx->pc = 0x206798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206798u;
        // 0x20679c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x206798:
    ctx->pc = 0x2067A0u;
}
