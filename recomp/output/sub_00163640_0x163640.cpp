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

// Function: sub_00163640
// Address: 0x163640 - 0x163768
void sub_00163640_0x163640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163640_0x163640");
#endif

    switch (ctx->pc) {
        case 0x163640u: goto label_163640;
        case 0x163644u: goto label_163644;
        case 0x163648u: goto label_163648;
        case 0x16364cu: goto label_16364c;
        case 0x163650u: goto label_163650;
        case 0x163654u: goto label_163654;
        case 0x163658u: goto label_163658;
        case 0x16365cu: goto label_16365c;
        case 0x163660u: goto label_163660;
        case 0x163664u: goto label_163664;
        case 0x163668u: goto label_163668;
        case 0x16366cu: goto label_16366c;
        case 0x163670u: goto label_163670;
        case 0x163674u: goto label_163674;
        case 0x163678u: goto label_163678;
        case 0x16367cu: goto label_16367c;
        case 0x163680u: goto label_163680;
        case 0x163684u: goto label_163684;
        case 0x163688u: goto label_163688;
        case 0x16368cu: goto label_16368c;
        case 0x163690u: goto label_163690;
        case 0x163694u: goto label_163694;
        case 0x163698u: goto label_163698;
        case 0x16369cu: goto label_16369c;
        case 0x1636a0u: goto label_1636a0;
        case 0x1636a4u: goto label_1636a4;
        case 0x1636a8u: goto label_1636a8;
        case 0x1636acu: goto label_1636ac;
        case 0x1636b0u: goto label_1636b0;
        case 0x1636b4u: goto label_1636b4;
        case 0x1636b8u: goto label_1636b8;
        case 0x1636bcu: goto label_1636bc;
        case 0x1636c0u: goto label_1636c0;
        case 0x1636c4u: goto label_1636c4;
        case 0x1636c8u: goto label_1636c8;
        case 0x1636ccu: goto label_1636cc;
        case 0x1636d0u: goto label_1636d0;
        case 0x1636d4u: goto label_1636d4;
        case 0x1636d8u: goto label_1636d8;
        case 0x1636dcu: goto label_1636dc;
        case 0x1636e0u: goto label_1636e0;
        case 0x1636e4u: goto label_1636e4;
        case 0x1636e8u: goto label_1636e8;
        case 0x1636ecu: goto label_1636ec;
        case 0x1636f0u: goto label_1636f0;
        case 0x1636f4u: goto label_1636f4;
        case 0x1636f8u: goto label_1636f8;
        case 0x1636fcu: goto label_1636fc;
        case 0x163700u: goto label_163700;
        case 0x163704u: goto label_163704;
        case 0x163708u: goto label_163708;
        case 0x16370cu: goto label_16370c;
        case 0x163710u: goto label_163710;
        case 0x163714u: goto label_163714;
        case 0x163718u: goto label_163718;
        case 0x16371cu: goto label_16371c;
        case 0x163720u: goto label_163720;
        case 0x163724u: goto label_163724;
        case 0x163728u: goto label_163728;
        case 0x16372cu: goto label_16372c;
        case 0x163730u: goto label_163730;
        case 0x163734u: goto label_163734;
        case 0x163738u: goto label_163738;
        case 0x16373cu: goto label_16373c;
        case 0x163740u: goto label_163740;
        case 0x163744u: goto label_163744;
        case 0x163748u: goto label_163748;
        case 0x16374cu: goto label_16374c;
        case 0x163750u: goto label_163750;
        case 0x163754u: goto label_163754;
        case 0x163758u: goto label_163758;
        case 0x16375cu: goto label_16375c;
        case 0x163760u: goto label_163760;
        case 0x163764u: goto label_163764;
        default: break;
    }

    ctx->pc = 0x163640u;

label_163640:
    // 0x163640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_163644:
    // 0x163644: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x163644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_163648:
    // 0x163648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x163648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16364c:
    // 0x16364c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16364cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163650:
    // 0x163650: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x163650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_163654:
    // 0x163654: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x163654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_163658:
    // 0x163658: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x163658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_16365c:
    // 0x16365c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16365cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_163660:
    // 0x163660: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x163660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_163664:
    // 0x163664: 0xc04f258  jal         func_13C960
label_163668:
    if (ctx->pc == 0x163668u) {
        ctx->pc = 0x163668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163664u;
        // 0x163668: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16366Cu;
        goto label_16366c;
    }
    ctx->pc = 0x163664u;
    SET_GPR_U32(ctx, 31, 0x16366Cu);
    ctx->pc = 0x163668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163664u;
    // 0x163668: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C960u, 0x163664u, 0x16366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16366Cu;
label_16366c:
    // 0x16366c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x16366cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163670:
    // 0x163670: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x163670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_163674:
    // 0x163674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163678:
    // 0x163678: 0xc04f33e  jal         func_13CCF8
label_16367c:
    if (ctx->pc == 0x16367Cu) {
        ctx->pc = 0x16367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163678u;
        // 0x16367c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163680u;
        goto label_163680;
    }
    ctx->pc = 0x163678u;
    SET_GPR_U32(ctx, 31, 0x163680u);
    ctx->pc = 0x16367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163678u;
    // 0x16367c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x163678u, 0x163680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163680u;
label_163680:
    // 0x163680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163684:
    // 0x163684: 0xc04f0b6  jal         func_13C2D8
label_163688:
    if (ctx->pc == 0x163688u) {
        ctx->pc = 0x163688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163684u;
        // 0x163688: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16368Cu;
        goto label_16368c;
    }
    ctx->pc = 0x163684u;
    SET_GPR_U32(ctx, 31, 0x16368Cu);
    ctx->pc = 0x163688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163684u;
    // 0x163688: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x163684u, 0x16368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16368Cu;
label_16368c:
    // 0x16368c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16368cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163690:
    // 0x163690: 0x8e4502e4  lw          $a1, 0x2E4($s2)
    ctx->pc = 0x163690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 740)));
label_163694:
    // 0x163694: 0xc045fea  jal         func_117FA8
label_163698:
    if (ctx->pc == 0x163698u) {
        ctx->pc = 0x163698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163694u;
        // 0x163698: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16369Cu;
        goto label_16369c;
    }
    ctx->pc = 0x163694u;
    SET_GPR_U32(ctx, 31, 0x16369Cu);
    ctx->pc = 0x163698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163694u;
    // 0x163698: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x163694u, 0x16369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16369Cu;
label_16369c:
    // 0x16369c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16369cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1636a0:
    // 0x1636a0: 0xc046104  jal         func_118410
label_1636a4:
    if (ctx->pc == 0x1636A4u) {
        ctx->pc = 0x1636A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636A0u;
        // 0x1636a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636A8u;
        goto label_1636a8;
    }
    ctx->pc = 0x1636A0u;
    SET_GPR_U32(ctx, 31, 0x1636A8u);
    ctx->pc = 0x1636A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636A0u;
    // 0x1636a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x1636A0u, 0x1636A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636A8u;
label_1636a8:
    // 0x1636a8: 0x8e45039c  lw          $a1, 0x39C($s2)
    ctx->pc = 0x1636a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 924)));
label_1636ac:
    // 0x1636ac: 0xc0462f4  jal         func_118BD0
label_1636b0:
    if (ctx->pc == 0x1636B0u) {
        ctx->pc = 0x1636B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636ACu;
        // 0x1636b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636B4u;
        goto label_1636b4;
    }
    ctx->pc = 0x1636ACu;
    SET_GPR_U32(ctx, 31, 0x1636B4u);
    ctx->pc = 0x1636B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636ACu;
    // 0x1636b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BD0u, 0x1636ACu, 0x1636B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636B4u;
label_1636b4:
    // 0x1636b4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1636b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1636b8:
    // 0x1636b8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1636b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1636bc:
    // 0x1636bc: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
label_1636c0:
    if (ctx->pc == 0x1636C0u) {
        ctx->pc = 0x1636C4u;
        goto label_1636c4;
    }
    ctx->pc = 0x1636BCu;
    {
        const bool branch_taken_0x1636bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1636bc) {
            ctx->pc = 0x163714u;
            goto label_163714;
        }
    }
    ctx->pc = 0x1636C4u;
label_1636c4:
    // 0x1636c4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1636c8:
    if (ctx->pc == 0x1636C8u) {
        ctx->pc = 0x1636C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636C4u;
        // 0x1636c8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636CCu;
        goto label_1636cc;
    }
    ctx->pc = 0x1636C4u;
    {
        const bool branch_taken_0x1636c4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1636C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636C4u;
        // 0x1636c8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636c4) {
            ctx->pc = 0x1636E0u;
            goto label_1636e0;
        }
    }
    ctx->pc = 0x1636CCu;
label_1636cc:
    // 0x1636cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1636ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1636d0:
    // 0x1636d0: 0x0  nop
    ctx->pc = 0x1636d0u;
    // NOP
label_1636d4:
    // 0x1636d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1636d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1636d8:
    // 0x1636d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1636dc:
    if (ctx->pc == 0x1636DCu) {
        ctx->pc = 0x1636E0u;
        goto label_1636e0;
    }
    ctx->pc = 0x1636D8u;
    {
        const bool branch_taken_0x1636d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1636d8) {
            ctx->pc = 0x1636F8u;
            goto label_1636f8;
        }
    }
    ctx->pc = 0x1636E0u;
label_1636e0:
    // 0x1636e0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1636e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1636e4:
    // 0x1636e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1636e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1636e8:
    // 0x1636e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1636e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1636ec:
    // 0x1636ec: 0x0  nop
    ctx->pc = 0x1636ecu;
    // NOP
label_1636f0:
    // 0x1636f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1636f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1636f4:
    // 0x1636f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1636f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1636f8:
    // 0x1636f8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1636f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1636fc:
    // 0x1636fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1636fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_163700:
    // 0x163700: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x163700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_163704:
    // 0x163704: 0xc046290  jal         func_118A40
label_163708:
    if (ctx->pc == 0x163708u) {
        ctx->pc = 0x163708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163704u;
        // 0x163708: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16370Cu;
        goto label_16370c;
    }
    ctx->pc = 0x163704u;
    SET_GPR_U32(ctx, 31, 0x16370Cu);
    ctx->pc = 0x163708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163704u;
    // 0x163708: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x163704u, 0x16370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16370Cu;
label_16370c:
    // 0x16370c: 0x10000005  b           . + 4 + (0x5 << 2)
label_163710:
    if (ctx->pc == 0x163710u) {
        ctx->pc = 0x163710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16370Cu;
        // 0x163710: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163714u;
        goto label_163714;
    }
    ctx->pc = 0x16370Cu;
    {
        const bool branch_taken_0x16370c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16370Cu;
        // 0x163710: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16370c) {
            ctx->pc = 0x163724u;
            goto label_163724;
        }
    }
    ctx->pc = 0x163714u;
label_163714:
    // 0x163714: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x163714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_163718:
    // 0x163718: 0xc046290  jal         func_118A40
label_16371c:
    if (ctx->pc == 0x16371Cu) {
        ctx->pc = 0x16371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163718u;
        // 0x16371c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163720u;
        goto label_163720;
    }
    ctx->pc = 0x163718u;
    SET_GPR_U32(ctx, 31, 0x163720u);
    ctx->pc = 0x16371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163718u;
    // 0x16371c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x163718u, 0x163720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163720u;
label_163720:
    // 0x163720: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x163720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_163724:
    // 0x163724: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x163724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_163728:
    // 0x163728: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16372c:
    // 0x16372c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x16372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_163730:
    // 0x163730: 0x60f809  jalr        $v1
label_163734:
    if (ctx->pc == 0x163734u) {
        ctx->pc = 0x163734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163730u;
        // 0x163734: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163738u;
        goto label_163738;
    }
    ctx->pc = 0x163730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163738u);
        ctx->pc = 0x163734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163730u;
        // 0x163734: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163730u, 0x163738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163738u;
label_163738:
    // 0x163738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16373c:
    // 0x16373c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16373cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163740:
    // 0x163740: 0xae820680  sw          $v0, 0x680($s4)
    ctx->pc = 0x163740u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 2));
label_163744:
    // 0x163744: 0xae420300  sw          $v0, 0x300($s2)
    ctx->pc = 0x163744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 768), GPR_U32(ctx, 2));
label_163748:
    // 0x163748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x163748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16374c:
    // 0x16374c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16374cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163750:
    // 0x163750: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x163750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_163754:
    // 0x163754: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x163754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_163758:
    // 0x163758: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x163758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16375c:
    // 0x16375c: 0x3e00008  jr          $ra
label_163760:
    if (ctx->pc == 0x163760u) {
        ctx->pc = 0x163760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16375Cu;
        // 0x163760: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163764u;
        goto label_163764;
    }
    ctx->pc = 0x16375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16375Cu;
        // 0x163760: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16375Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163764u;
label_163764:
    // 0x163764: 0x0  nop
    ctx->pc = 0x163764u;
    // NOP
    ctx->pc = 0x163768u;
}
