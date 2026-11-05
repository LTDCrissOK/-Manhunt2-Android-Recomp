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

// Function: sub_002FF5F0
// Address: 0x2ff5f0 - 0x2ff818
void sub_002FF5F0_0x2ff5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF5F0_0x2ff5f0");
#endif

    switch (ctx->pc) {
        case 0x2ff5f0u: goto label_2ff5f0;
        case 0x2ff5f4u: goto label_2ff5f4;
        case 0x2ff5f8u: goto label_2ff5f8;
        case 0x2ff5fcu: goto label_2ff5fc;
        case 0x2ff600u: goto label_2ff600;
        case 0x2ff604u: goto label_2ff604;
        case 0x2ff608u: goto label_2ff608;
        case 0x2ff60cu: goto label_2ff60c;
        case 0x2ff610u: goto label_2ff610;
        case 0x2ff614u: goto label_2ff614;
        case 0x2ff618u: goto label_2ff618;
        case 0x2ff61cu: goto label_2ff61c;
        case 0x2ff620u: goto label_2ff620;
        case 0x2ff624u: goto label_2ff624;
        case 0x2ff628u: goto label_2ff628;
        case 0x2ff62cu: goto label_2ff62c;
        case 0x2ff630u: goto label_2ff630;
        case 0x2ff634u: goto label_2ff634;
        case 0x2ff638u: goto label_2ff638;
        case 0x2ff63cu: goto label_2ff63c;
        case 0x2ff640u: goto label_2ff640;
        case 0x2ff644u: goto label_2ff644;
        case 0x2ff648u: goto label_2ff648;
        case 0x2ff64cu: goto label_2ff64c;
        case 0x2ff650u: goto label_2ff650;
        case 0x2ff654u: goto label_2ff654;
        case 0x2ff658u: goto label_2ff658;
        case 0x2ff65cu: goto label_2ff65c;
        case 0x2ff660u: goto label_2ff660;
        case 0x2ff664u: goto label_2ff664;
        case 0x2ff668u: goto label_2ff668;
        case 0x2ff66cu: goto label_2ff66c;
        case 0x2ff670u: goto label_2ff670;
        case 0x2ff674u: goto label_2ff674;
        case 0x2ff678u: goto label_2ff678;
        case 0x2ff67cu: goto label_2ff67c;
        case 0x2ff680u: goto label_2ff680;
        case 0x2ff684u: goto label_2ff684;
        case 0x2ff688u: goto label_2ff688;
        case 0x2ff68cu: goto label_2ff68c;
        case 0x2ff690u: goto label_2ff690;
        case 0x2ff694u: goto label_2ff694;
        case 0x2ff698u: goto label_2ff698;
        case 0x2ff69cu: goto label_2ff69c;
        case 0x2ff6a0u: goto label_2ff6a0;
        case 0x2ff6a4u: goto label_2ff6a4;
        case 0x2ff6a8u: goto label_2ff6a8;
        case 0x2ff6acu: goto label_2ff6ac;
        case 0x2ff6b0u: goto label_2ff6b0;
        case 0x2ff6b4u: goto label_2ff6b4;
        case 0x2ff6b8u: goto label_2ff6b8;
        case 0x2ff6bcu: goto label_2ff6bc;
        case 0x2ff6c0u: goto label_2ff6c0;
        case 0x2ff6c4u: goto label_2ff6c4;
        case 0x2ff6c8u: goto label_2ff6c8;
        case 0x2ff6ccu: goto label_2ff6cc;
        case 0x2ff6d0u: goto label_2ff6d0;
        case 0x2ff6d4u: goto label_2ff6d4;
        case 0x2ff6d8u: goto label_2ff6d8;
        case 0x2ff6dcu: goto label_2ff6dc;
        case 0x2ff6e0u: goto label_2ff6e0;
        case 0x2ff6e4u: goto label_2ff6e4;
        case 0x2ff6e8u: goto label_2ff6e8;
        case 0x2ff6ecu: goto label_2ff6ec;
        case 0x2ff6f0u: goto label_2ff6f0;
        case 0x2ff6f4u: goto label_2ff6f4;
        case 0x2ff6f8u: goto label_2ff6f8;
        case 0x2ff6fcu: goto label_2ff6fc;
        case 0x2ff700u: goto label_2ff700;
        case 0x2ff704u: goto label_2ff704;
        case 0x2ff708u: goto label_2ff708;
        case 0x2ff70cu: goto label_2ff70c;
        case 0x2ff710u: goto label_2ff710;
        case 0x2ff714u: goto label_2ff714;
        case 0x2ff718u: goto label_2ff718;
        case 0x2ff71cu: goto label_2ff71c;
        case 0x2ff720u: goto label_2ff720;
        case 0x2ff724u: goto label_2ff724;
        case 0x2ff728u: goto label_2ff728;
        case 0x2ff72cu: goto label_2ff72c;
        case 0x2ff730u: goto label_2ff730;
        case 0x2ff734u: goto label_2ff734;
        case 0x2ff738u: goto label_2ff738;
        case 0x2ff73cu: goto label_2ff73c;
        case 0x2ff740u: goto label_2ff740;
        case 0x2ff744u: goto label_2ff744;
        case 0x2ff748u: goto label_2ff748;
        case 0x2ff74cu: goto label_2ff74c;
        case 0x2ff750u: goto label_2ff750;
        case 0x2ff754u: goto label_2ff754;
        case 0x2ff758u: goto label_2ff758;
        case 0x2ff75cu: goto label_2ff75c;
        case 0x2ff760u: goto label_2ff760;
        case 0x2ff764u: goto label_2ff764;
        case 0x2ff768u: goto label_2ff768;
        case 0x2ff76cu: goto label_2ff76c;
        case 0x2ff770u: goto label_2ff770;
        case 0x2ff774u: goto label_2ff774;
        case 0x2ff778u: goto label_2ff778;
        case 0x2ff77cu: goto label_2ff77c;
        case 0x2ff780u: goto label_2ff780;
        case 0x2ff784u: goto label_2ff784;
        case 0x2ff788u: goto label_2ff788;
        case 0x2ff78cu: goto label_2ff78c;
        case 0x2ff790u: goto label_2ff790;
        case 0x2ff794u: goto label_2ff794;
        case 0x2ff798u: goto label_2ff798;
        case 0x2ff79cu: goto label_2ff79c;
        case 0x2ff7a0u: goto label_2ff7a0;
        case 0x2ff7a4u: goto label_2ff7a4;
        case 0x2ff7a8u: goto label_2ff7a8;
        case 0x2ff7acu: goto label_2ff7ac;
        case 0x2ff7b0u: goto label_2ff7b0;
        case 0x2ff7b4u: goto label_2ff7b4;
        case 0x2ff7b8u: goto label_2ff7b8;
        case 0x2ff7bcu: goto label_2ff7bc;
        case 0x2ff7c0u: goto label_2ff7c0;
        case 0x2ff7c4u: goto label_2ff7c4;
        case 0x2ff7c8u: goto label_2ff7c8;
        case 0x2ff7ccu: goto label_2ff7cc;
        case 0x2ff7d0u: goto label_2ff7d0;
        case 0x2ff7d4u: goto label_2ff7d4;
        case 0x2ff7d8u: goto label_2ff7d8;
        case 0x2ff7dcu: goto label_2ff7dc;
        case 0x2ff7e0u: goto label_2ff7e0;
        case 0x2ff7e4u: goto label_2ff7e4;
        case 0x2ff7e8u: goto label_2ff7e8;
        case 0x2ff7ecu: goto label_2ff7ec;
        case 0x2ff7f0u: goto label_2ff7f0;
        case 0x2ff7f4u: goto label_2ff7f4;
        case 0x2ff7f8u: goto label_2ff7f8;
        case 0x2ff7fcu: goto label_2ff7fc;
        case 0x2ff800u: goto label_2ff800;
        case 0x2ff804u: goto label_2ff804;
        case 0x2ff808u: goto label_2ff808;
        case 0x2ff80cu: goto label_2ff80c;
        case 0x2ff810u: goto label_2ff810;
        case 0x2ff814u: goto label_2ff814;
        default: break;
    }

    ctx->pc = 0x2ff5f0u;

label_2ff5f0:
    // 0x2ff5f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ff5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2ff5f4:
    // 0x2ff5f4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2ff5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2ff5f8:
    // 0x2ff5f8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2ff5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2ff5fc:
    // 0x2ff5fc: 0x24a51c80  addiu       $a1, $a1, 0x1C80
    ctx->pc = 0x2ff5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7296));
label_2ff600:
    // 0x2ff600: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x2ff600u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2ff604:
    // 0x2ff604: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ff604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff608:
    // 0x2ff608: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ff608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ff60c:
    // 0x2ff60c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2ff60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_2ff610:
    // 0x2ff610: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2ff610u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_2ff614:
    // 0x2ff614: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2ff614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_2ff618:
    // 0x2ff618: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2ff618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_2ff61c:
    // 0x2ff61c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ff61cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2ff620:
    // 0x2ff620: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2ff620u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2ff624:
    // 0x2ff624: 0xc0d7424  jal         func_35D090
label_2ff628:
    if (ctx->pc == 0x2FF628u) {
        ctx->pc = 0x2FF628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF624u;
        // 0x2ff628: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF62Cu;
        goto label_2ff62c;
    }
    ctx->pc = 0x2FF624u;
    SET_GPR_U32(ctx, 31, 0x2FF62Cu);
    ctx->pc = 0x2FF628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF624u;
    // 0x2ff628: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2FF624u, 0x2FF62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF62Cu;
label_2ff62c:
    // 0x2ff62c: 0x9205bae0  lbu         $a1, -0x4520($s0)
    ctx->pc = 0x2ff62cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294949600)));
label_2ff630:
    // 0x2ff630: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ff630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ff634:
    // 0x2ff634: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2ff634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_2ff638:
    // 0x2ff638: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2ff638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2ff63c:
    // 0x2ff63c: 0xc0d755e  jal         func_35D578
label_2ff640:
    if (ctx->pc == 0x2FF640u) {
        ctx->pc = 0x2FF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF63Cu;
        // 0x2ff640: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF644u;
        goto label_2ff644;
    }
    ctx->pc = 0x2FF63Cu;
    SET_GPR_U32(ctx, 31, 0x2FF644u);
    ctx->pc = 0x2FF640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF63Cu;
    // 0x2ff640: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x2FF63Cu, 0x2FF644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF644u;
label_2ff644:
    // 0x2ff644: 0x8e03bae0  lw          $v1, -0x4520($s0)
    ctx->pc = 0x2ff644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949600)));
label_2ff648:
    // 0x2ff648: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ff648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ff64c:
    // 0x2ff64c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2ff650:
    if (ctx->pc == 0x2FF650u) {
        ctx->pc = 0x2FF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF64Cu;
        // 0x2ff650: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF654u;
        goto label_2ff654;
    }
    ctx->pc = 0x2FF64Cu;
    {
        const bool branch_taken_0x2ff64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff64c) {
            ctx->pc = 0x2FF650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF64Cu;
            // 0x2ff650: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF654u;
            goto label_2ff654;
        }
    }
    ctx->pc = 0x2FF654u;
label_2ff654:
    // 0x2ff654: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ff654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ff658:
    // 0x2ff658: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ff658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff65c:
    // 0x2ff65c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2ff65cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2ff660:
    // 0x2ff660: 0x2810  mfhi        $a1
    ctx->pc = 0x2ff660u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2ff664:
    // 0x2ff664: 0xc085d4e  jal         func_217538
label_2ff668:
    if (ctx->pc == 0x2FF668u) {
        ctx->pc = 0x2FF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF664u;
        // 0x2ff668: 0xae05bae0  sw          $a1, -0x4520($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294949600), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF66Cu;
        goto label_2ff66c;
    }
    ctx->pc = 0x2FF664u;
    SET_GPR_U32(ctx, 31, 0x2FF66Cu);
    ctx->pc = 0x2FF668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF664u;
    // 0x2ff668: 0xae05bae0  sw          $a1, -0x4520($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294949600), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x2FF664u, 0x2FF66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF66Cu;
label_2ff66c:
    // 0x2ff66c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ff670:
    if (ctx->pc == 0x2FF670u) {
        ctx->pc = 0x2FF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF66Cu;
        // 0x2ff670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF674u;
        goto label_2ff674;
    }
    ctx->pc = 0x2FF66Cu;
    {
        const bool branch_taken_0x2ff66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF66Cu;
        // 0x2ff670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff66c) {
            ctx->pc = 0x2FF684u;
            goto label_2ff684;
        }
    }
    ctx->pc = 0x2FF674u;
label_2ff674:
    // 0x2ff674: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x2ff674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_2ff678:
    // 0x2ff678: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ff678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2ff67c:
    // 0x2ff67c: 0x40f809  jalr        $v0
label_2ff680:
    if (ctx->pc == 0x2FF680u) {
        ctx->pc = 0x2FF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF67Cu;
        // 0x2ff680: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF684u;
        goto label_2ff684;
    }
    ctx->pc = 0x2FF67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF684u);
        ctx->pc = 0x2FF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF67Cu;
        // 0x2ff680: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF67Cu, 0x2FF684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF684u;
label_2ff684:
    // 0x2ff684: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x2ff684u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_2ff688:
    // 0x2ff688: 0x8e224d70  lw          $v0, 0x4D70($s1)
    ctx->pc = 0x2ff688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19824)));
label_2ff68c:
    // 0x2ff68c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2ff690:
    if (ctx->pc == 0x2FF690u) {
        ctx->pc = 0x2FF690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF68Cu;
        // 0x2ff690: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF694u;
        goto label_2ff694;
    }
    ctx->pc = 0x2FF68Cu;
    {
        const bool branch_taken_0x2ff68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF68Cu;
        // 0x2ff690: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff68c) {
            ctx->pc = 0x2FF6B8u;
            goto label_2ff6b8;
        }
    }
    ctx->pc = 0x2FF694u;
label_2ff694:
    // 0x2ff694: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2ff694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_2ff698:
    // 0x2ff698: 0x26044bd0  addiu       $a0, $s0, 0x4BD0
    ctx->pc = 0x2ff698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 19408));
label_2ff69c:
    // 0x2ff69c: 0xc087380  jal         func_21CE00
label_2ff6a0:
    if (ctx->pc == 0x2FF6A0u) {
        ctx->pc = 0x2FF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF69Cu;
        // 0x2ff6a0: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6A4u;
        goto label_2ff6a4;
    }
    ctx->pc = 0x2FF69Cu;
    SET_GPR_U32(ctx, 31, 0x2FF6A4u);
    ctx->pc = 0x2FF6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF69Cu;
    // 0x2ff6a0: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE00u, 0x2FF69Cu, 0x2FF6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6A4u;
label_2ff6a4:
    // 0x2ff6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff6a8:
    // 0x2ff6a8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ff6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_2ff6ac:
    // 0x2ff6ac: 0xae224d70  sw          $v0, 0x4D70($s1)
    ctx->pc = 0x2ff6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 19824), GPR_U32(ctx, 2));
label_2ff6b0:
    // 0x2ff6b0: 0xc0f0278  jal         func_3C09E0
label_2ff6b4:
    if (ctx->pc == 0x2FF6B4u) {
        ctx->pc = 0x2FF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6B0u;
        // 0x2ff6b4: 0x2484f5c8  addiu       $a0, $a0, -0xA38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6B8u;
        goto label_2ff6b8;
    }
    ctx->pc = 0x2FF6B0u;
    SET_GPR_U32(ctx, 31, 0x2FF6B8u);
    ctx->pc = 0x2FF6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6B0u;
    // 0x2ff6b4: 0x2484f5c8  addiu       $a0, $a0, -0xA38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x2FF6B0u, 0x2FF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6B8u;
label_2ff6b8:
    // 0x2ff6b8: 0x26104bd0  addiu       $s0, $s0, 0x4BD0
    ctx->pc = 0x2ff6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19408));
label_2ff6bc:
    // 0x2ff6bc: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x2ff6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_2ff6c0:
    // 0x2ff6c0: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2ff6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2ff6c4:
    // 0x2ff6c4: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x2ff6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
label_2ff6c8:
    // 0x2ff6c8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2ff6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_2ff6cc:
    // 0x2ff6cc: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x2ff6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
label_2ff6d0:
    // 0x2ff6d0: 0xc0f5240  jal         func_3D4900
label_2ff6d4:
    if (ctx->pc == 0x2FF6D4u) {
        ctx->pc = 0x2FF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6D0u;
        // 0x2ff6d4: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6D8u;
        goto label_2ff6d8;
    }
    ctx->pc = 0x2FF6D0u;
    SET_GPR_U32(ctx, 31, 0x2FF6D8u);
    ctx->pc = 0x2FF6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6D0u;
    // 0x2ff6d4: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2FF6D0u, 0x2FF6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6D8u;
label_2ff6d8:
    // 0x2ff6d8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2ff6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_2ff6dc:
    // 0x2ff6dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ff6dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2ff6e0:
    // 0x2ff6e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2ff6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2ff6e4:
    // 0x2ff6e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ff6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff6e8:
    // 0x2ff6e8: 0xc0bfc5a  jal         func_2FF168
label_2ff6ec:
    if (ctx->pc == 0x2FF6ECu) {
        ctx->pc = 0x2FF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6E8u;
        // 0x2ff6ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6F0u;
        goto label_2ff6f0;
    }
    ctx->pc = 0x2FF6E8u;
    SET_GPR_U32(ctx, 31, 0x2FF6F0u);
    ctx->pc = 0x2FF6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6E8u;
    // 0x2ff6ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF168u, 0x2FF6E8u, 0x2FF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6F0u;
label_2ff6f0:
    // 0x2ff6f0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2ff6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_2ff6f4:
    // 0x2ff6f4: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2ff6f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_2ff6f8:
    // 0x2ff6f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ff6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ff6fc:
    // 0x2ff6fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ff6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff700:
    // 0x2ff700: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x2ff700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2ff704:
    // 0x2ff704: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x2ff704u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_2ff708:
    // 0x2ff708: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2ff708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ff70c:
    // 0x2ff70c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2ff70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff710:
    // 0x2ff710: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2ff710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ff714:
    // 0x2ff714: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2ff714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2ff718:
    // 0x2ff718: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ff718u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ff71c:
    // 0x2ff71c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2ff71cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2ff720:
    // 0x2ff720: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x2ff720u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2ff724:
    // 0x2ff724: 0xc0e3f98  jal         func_38FE60
label_2ff728:
    if (ctx->pc == 0x2FF728u) {
        ctx->pc = 0x2FF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF724u;
        // 0x2ff728: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF72Cu;
        goto label_2ff72c;
    }
    ctx->pc = 0x2FF724u;
    SET_GPR_U32(ctx, 31, 0x2FF72Cu);
    ctx->pc = 0x2FF728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF724u;
    // 0x2ff728: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2FF724u, 0x2FF72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF72Cu;
label_2ff72c:
    // 0x2ff72c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2ff72cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2ff730:
    // 0x2ff730: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2ff730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff734:
    // 0x2ff734: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ff734u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ff738:
    // 0x2ff738: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ff738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ff73c:
    // 0x2ff73c: 0xc0e3f1c  jal         func_38FC70
label_2ff740:
    if (ctx->pc == 0x2FF740u) {
        ctx->pc = 0x2FF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF73Cu;
        // 0x2ff740: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF744u;
        goto label_2ff744;
    }
    ctx->pc = 0x2FF73Cu;
    SET_GPR_U32(ctx, 31, 0x2FF744u);
    ctx->pc = 0x2FF740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF73Cu;
    // 0x2ff740: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2FF73Cu, 0x2FF744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF744u;
label_2ff744:
    // 0x2ff744: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2ff744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2ff748:
    // 0x2ff748: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2ff748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff74c:
    // 0x2ff74c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2ff74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ff750:
    // 0x2ff750: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2ff750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ff754:
    // 0x2ff754: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ff754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2ff758:
    // 0x2ff758: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ff758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2ff75c:
    // 0x2ff75c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ff75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2ff760:
    // 0x2ff760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ff760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff764:
    // 0x2ff764: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ff764u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ff768:
    // 0x2ff768: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2ff768u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2ff76c:
    // 0x2ff76c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ff76cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff770:
    // 0x2ff770: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2ff770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2ff774:
    // 0x2ff774: 0xc0c31f4  jal         func_30C7D0
label_2ff778:
    if (ctx->pc == 0x2FF778u) {
        ctx->pc = 0x2FF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF774u;
        // 0x2ff778: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF77Cu;
        goto label_2ff77c;
    }
    ctx->pc = 0x2FF774u;
    SET_GPR_U32(ctx, 31, 0x2FF77Cu);
    ctx->pc = 0x2FF778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF774u;
    // 0x2ff778: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C7D0u, 0x2FF774u, 0x2FF77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF77Cu;
label_2ff77c:
    // 0x2ff77c: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2ff77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2ff780:
    // 0x2ff780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff784:
    // 0x2ff784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ff784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff788:
    // 0x2ff788: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2ff788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2ff78c:
    // 0x2ff78c: 0x40f809  jalr        $v0
label_2ff790:
    if (ctx->pc == 0x2FF790u) {
        ctx->pc = 0x2FF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF78Cu;
        // 0x2ff790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF794u;
        goto label_2ff794;
    }
    ctx->pc = 0x2FF78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF794u);
        ctx->pc = 0x2FF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF78Cu;
        // 0x2ff790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF78Cu, 0x2FF794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF794u;
label_2ff794:
    // 0x2ff794: 0xc0c3212  jal         func_30C848
label_2ff798:
    if (ctx->pc == 0x2FF798u) {
        ctx->pc = 0x2FF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF794u;
        // 0x2ff798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF79Cu;
        goto label_2ff79c;
    }
    ctx->pc = 0x2FF794u;
    SET_GPR_U32(ctx, 31, 0x2FF79Cu);
    ctx->pc = 0x2FF798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF794u;
    // 0x2ff798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x2FF794u, 0x2FF79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF79Cu;
label_2ff79c:
    // 0x2ff79c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2ff79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff7a0:
    // 0x2ff7a0: 0xc083942  jal         func_20E508
label_2ff7a4:
    if (ctx->pc == 0x2FF7A4u) {
        ctx->pc = 0x2FF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7A0u;
        // 0x2ff7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7A8u;
        goto label_2ff7a8;
    }
    ctx->pc = 0x2FF7A0u;
    SET_GPR_U32(ctx, 31, 0x2FF7A8u);
    ctx->pc = 0x2FF7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF7A0u;
    // 0x2ff7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x2FF7A0u, 0x2FF7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7A8u;
label_2ff7a8:
    // 0x2ff7a8: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2ff7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2ff7ac:
    // 0x2ff7ac: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2ff7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2ff7b0:
    // 0x2ff7b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ff7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ff7b4:
    // 0x2ff7b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ff7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ff7b8:
    // 0x2ff7b8: 0xc0b1488  jal         func_2C5220
label_2ff7bc:
    if (ctx->pc == 0x2FF7BCu) {
        ctx->pc = 0x2FF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7B8u;
        // 0x2ff7bc: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7C0u;
        goto label_2ff7c0;
    }
    ctx->pc = 0x2FF7B8u;
    SET_GPR_U32(ctx, 31, 0x2FF7C0u);
    ctx->pc = 0x2FF7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF7B8u;
    // 0x2ff7bc: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2FF7B8u, 0x2FF7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7C0u;
label_2ff7c0:
    // 0x2ff7c0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2ff7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ff7c4:
    // 0x2ff7c4: 0xc0b1488  jal         func_2C5220
label_2ff7c8:
    if (ctx->pc == 0x2FF7C8u) {
        ctx->pc = 0x2FF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7C4u;
        // 0x2ff7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7CCu;
        goto label_2ff7cc;
    }
    ctx->pc = 0x2FF7C4u;
    SET_GPR_U32(ctx, 31, 0x2FF7CCu);
    ctx->pc = 0x2FF7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF7C4u;
    // 0x2ff7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2FF7C4u, 0x2FF7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7CCu;
label_2ff7cc:
    // 0x2ff7cc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2ff7ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2ff7d0:
    // 0x2ff7d0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2ff7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2ff7d4:
    // 0x2ff7d4: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2ff7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2ff7d8:
    // 0x2ff7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff7dc:
    // 0x2ff7dc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2ff7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2ff7e0:
    // 0x2ff7e0: 0x40f809  jalr        $v0
label_2ff7e4:
    if (ctx->pc == 0x2FF7E4u) {
        ctx->pc = 0x2FF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7E0u;
        // 0x2ff7e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7E8u;
        goto label_2ff7e8;
    }
    ctx->pc = 0x2FF7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF7E8u);
        ctx->pc = 0x2FF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7E0u;
        // 0x2ff7e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF7E0u, 0x2FF7E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF7E8u;
label_2ff7e8:
    // 0x2ff7e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ff7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ff7ec:
    // 0x2ff7ec: 0xc0d7412  jal         func_35D048
label_2ff7f0:
    if (ctx->pc == 0x2FF7F0u) {
        ctx->pc = 0x2FF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7ECu;
        // 0x2ff7f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF7F4u;
        goto label_2ff7f4;
    }
    ctx->pc = 0x2FF7ECu;
    SET_GPR_U32(ctx, 31, 0x2FF7F4u);
    ctx->pc = 0x2FF7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF7ECu;
    // 0x2ff7f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2FF7ECu, 0x2FF7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7F4u;
label_2ff7f4:
    // 0x2ff7f4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2ff7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ff7f8:
    // 0x2ff7f8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2ff7f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2ff7fc:
    // 0x2ff7fc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2ff7fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ff800:
    // 0x2ff800: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2ff800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2ff804:
    // 0x2ff804: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x2ff804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2ff808:
    // 0x2ff808: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2ff808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ff80c:
    // 0x2ff80c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2ff80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ff810:
    // 0x2ff810: 0x3e00008  jr          $ra
label_2ff814:
    if (ctx->pc == 0x2FF814u) {
        ctx->pc = 0x2FF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF810u;
        // 0x2ff814: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF818u;
        goto label_fallthrough_0x2ff810;
    }
    ctx->pc = 0x2FF810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF810u;
        // 0x2ff814: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ff810:
    ctx->pc = 0x2FF818u;
}
