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

// Function: sub_001735A0
// Address: 0x1735a0 - 0x173680
void sub_001735A0_0x1735a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001735A0_0x1735a0");
#endif

    switch (ctx->pc) {
        case 0x1735a0u: goto label_1735a0;
        case 0x1735a4u: goto label_1735a4;
        case 0x1735a8u: goto label_1735a8;
        case 0x1735acu: goto label_1735ac;
        case 0x1735b0u: goto label_1735b0;
        case 0x1735b4u: goto label_1735b4;
        case 0x1735b8u: goto label_1735b8;
        case 0x1735bcu: goto label_1735bc;
        case 0x1735c0u: goto label_1735c0;
        case 0x1735c4u: goto label_1735c4;
        case 0x1735c8u: goto label_1735c8;
        case 0x1735ccu: goto label_1735cc;
        case 0x1735d0u: goto label_1735d0;
        case 0x1735d4u: goto label_1735d4;
        case 0x1735d8u: goto label_1735d8;
        case 0x1735dcu: goto label_1735dc;
        case 0x1735e0u: goto label_1735e0;
        case 0x1735e4u: goto label_1735e4;
        case 0x1735e8u: goto label_1735e8;
        case 0x1735ecu: goto label_1735ec;
        case 0x1735f0u: goto label_1735f0;
        case 0x1735f4u: goto label_1735f4;
        case 0x1735f8u: goto label_1735f8;
        case 0x1735fcu: goto label_1735fc;
        case 0x173600u: goto label_173600;
        case 0x173604u: goto label_173604;
        case 0x173608u: goto label_173608;
        case 0x17360cu: goto label_17360c;
        case 0x173610u: goto label_173610;
        case 0x173614u: goto label_173614;
        case 0x173618u: goto label_173618;
        case 0x17361cu: goto label_17361c;
        case 0x173620u: goto label_173620;
        case 0x173624u: goto label_173624;
        case 0x173628u: goto label_173628;
        case 0x17362cu: goto label_17362c;
        case 0x173630u: goto label_173630;
        case 0x173634u: goto label_173634;
        case 0x173638u: goto label_173638;
        case 0x17363cu: goto label_17363c;
        case 0x173640u: goto label_173640;
        case 0x173644u: goto label_173644;
        case 0x173648u: goto label_173648;
        case 0x17364cu: goto label_17364c;
        case 0x173650u: goto label_173650;
        case 0x173654u: goto label_173654;
        case 0x173658u: goto label_173658;
        case 0x17365cu: goto label_17365c;
        case 0x173660u: goto label_173660;
        case 0x173664u: goto label_173664;
        case 0x173668u: goto label_173668;
        case 0x17366cu: goto label_17366c;
        case 0x173670u: goto label_173670;
        case 0x173674u: goto label_173674;
        case 0x173678u: goto label_173678;
        case 0x17367cu: goto label_17367c;
        default: break;
    }

    ctx->pc = 0x1735a0u;

label_1735a0:
    // 0x1735a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1735a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1735a4:
    // 0x1735a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1735a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1735a8:
    // 0x1735a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1735a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1735ac:
    // 0x1735ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1735acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1735b0:
    // 0x1735b0: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x1735b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1735b4:
    // 0x1735b4: 0x5080002f  beql        $a0, $zero, . + 4 + (0x2F << 2)
label_1735b8:
    if (ctx->pc == 0x1735B8u) {
        ctx->pc = 0x1735B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735B4u;
        // 0x1735b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1735BCu;
        goto label_1735bc;
    }
    ctx->pc = 0x1735B4u;
    {
        const bool branch_taken_0x1735b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1735b4) {
            ctx->pc = 0x1735B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1735B4u;
            // 0x1735b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173674u;
            goto label_173674;
        }
    }
    ctx->pc = 0x1735BCu;
label_1735bc:
    // 0x1735bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1735bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1735c0:
    // 0x1735c0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1735c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1735c4:
    // 0x1735c4: 0x40f809  jalr        $v0
label_1735c8:
    if (ctx->pc == 0x1735C8u) {
        ctx->pc = 0x1735CCu;
        goto label_1735cc;
    }
    ctx->pc = 0x1735C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1735CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1735C4u, 0x1735CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1735CCu;
label_1735cc:
    // 0x1735cc: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x1735ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1735d0:
    // 0x1735d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1735d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1735d4:
    // 0x1735d4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1735d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1735d8:
    // 0x1735d8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1735dc:
    if (ctx->pc == 0x1735DCu) {
        ctx->pc = 0x1735DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735D8u;
        // 0x1735dc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1735E0u;
        goto label_1735e0;
    }
    ctx->pc = 0x1735D8u;
    {
        const bool branch_taken_0x1735d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1735DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735D8u;
        // 0x1735dc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735d8) {
            ctx->pc = 0x173668u;
            goto label_173668;
        }
    }
    ctx->pc = 0x1735E0u;
label_1735e0:
    // 0x1735e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1735e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1735e4:
    // 0x1735e4: 0x2442f2c0  addiu       $v0, $v0, -0xD40
    ctx->pc = 0x1735e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963904));
label_1735e8:
    // 0x1735e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1735e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1735ec:
    // 0x1735ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1735ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1735f0:
    // 0x1735f0: 0x800008  jr          $a0
label_1735f4:
    if (ctx->pc == 0x1735F4u) {
        ctx->pc = 0x1735F8u;
        goto label_1735f8;
    }
    ctx->pc = 0x1735F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1735F8u: goto label_1735f8;
            case 0x173610u: goto label_173610;
            case 0x173628u: goto label_173628;
            case 0x173640u: goto label_173640;
            case 0x173658u: goto label_173658;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1735F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1735F8u;
label_1735f8:
    // 0x1735f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1735f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1735fc:
    // 0x1735fc: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x1735fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_173600:
    // 0x173600: 0xc042034  jal         func_1080D0
label_173604:
    if (ctx->pc == 0x173604u) {
        ctx->pc = 0x173604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173600u;
        // 0x173604: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173608u;
        goto label_173608;
    }
    ctx->pc = 0x173600u;
    SET_GPR_U32(ctx, 31, 0x173608u);
    ctx->pc = 0x173604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173600u;
    // 0x173604: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1080D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1080D0u, 0x173600u, 0x173608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173608u;
label_173608:
    // 0x173608: 0x10000017  b           . + 4 + (0x17 << 2)
label_17360c:
    if (ctx->pc == 0x17360Cu) {
        ctx->pc = 0x173610u;
        goto label_173610;
    }
    ctx->pc = 0x173608u;
    {
        const bool branch_taken_0x173608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173608) {
            ctx->pc = 0x173668u;
            goto label_173668;
        }
    }
    ctx->pc = 0x173610u;
label_173610:
    // 0x173610: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x173610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_173614:
    // 0x173614: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x173614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_173618:
    // 0x173618: 0xc042028  jal         func_1080A0
label_17361c:
    if (ctx->pc == 0x17361Cu) {
        ctx->pc = 0x17361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173618u;
        // 0x17361c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173620u;
        goto label_173620;
    }
    ctx->pc = 0x173618u;
    SET_GPR_U32(ctx, 31, 0x173620u);
    ctx->pc = 0x17361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173618u;
    // 0x17361c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1080A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1080A0u, 0x173618u, 0x173620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173620u;
label_173620:
    // 0x173620: 0x10000011  b           . + 4 + (0x11 << 2)
label_173624:
    if (ctx->pc == 0x173624u) {
        ctx->pc = 0x173628u;
        goto label_173628;
    }
    ctx->pc = 0x173620u;
    {
        const bool branch_taken_0x173620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173620) {
            ctx->pc = 0x173668u;
            goto label_173668;
        }
    }
    ctx->pc = 0x173628u;
label_173628:
    // 0x173628: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x173628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_17362c:
    // 0x17362c: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x17362cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_173630:
    // 0x173630: 0xc04201c  jal         func_108070
label_173634:
    if (ctx->pc == 0x173634u) {
        ctx->pc = 0x173634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173630u;
        // 0x173634: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173638u;
        goto label_173638;
    }
    ctx->pc = 0x173630u;
    SET_GPR_U32(ctx, 31, 0x173638u);
    ctx->pc = 0x173634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173630u;
    // 0x173634: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108070u, 0x173630u, 0x173638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173638u;
label_173638:
    // 0x173638: 0x1000000b  b           . + 4 + (0xB << 2)
label_17363c:
    if (ctx->pc == 0x17363Cu) {
        ctx->pc = 0x173640u;
        goto label_173640;
    }
    ctx->pc = 0x173638u;
    {
        const bool branch_taken_0x173638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173638) {
            ctx->pc = 0x173668u;
            goto label_173668;
        }
    }
    ctx->pc = 0x173640u;
label_173640:
    // 0x173640: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x173640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_173644:
    // 0x173644: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x173644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_173648:
    // 0x173648: 0xc041fe0  jal         func_107F80
label_17364c:
    if (ctx->pc == 0x17364Cu) {
        ctx->pc = 0x17364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173648u;
        // 0x17364c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173650u;
        goto label_173650;
    }
    ctx->pc = 0x173648u;
    SET_GPR_U32(ctx, 31, 0x173650u);
    ctx->pc = 0x17364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173648u;
    // 0x17364c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107F80u, 0x173648u, 0x173650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173650u;
label_173650:
    // 0x173650: 0x10000005  b           . + 4 + (0x5 << 2)
label_173654:
    if (ctx->pc == 0x173654u) {
        ctx->pc = 0x173658u;
        goto label_173658;
    }
    ctx->pc = 0x173650u;
    {
        const bool branch_taken_0x173650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173650) {
            ctx->pc = 0x173668u;
            goto label_173668;
        }
    }
    ctx->pc = 0x173658u;
label_173658:
    // 0x173658: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x173658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_17365c:
    // 0x17365c: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x17365cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_173660:
    // 0x173660: 0xc041fec  jal         func_107FB0
label_173664:
    if (ctx->pc == 0x173664u) {
        ctx->pc = 0x173664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173660u;
        // 0x173664: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173668u;
        goto label_173668;
    }
    ctx->pc = 0x173660u;
    SET_GPR_U32(ctx, 31, 0x173668u);
    ctx->pc = 0x173664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173660u;
    // 0x173664: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107FB0u, 0x173660u, 0x173668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173668u;
label_173668:
    // 0x173668: 0xc05cd64  jal         func_173590
label_17366c:
    if (ctx->pc == 0x17366Cu) {
        ctx->pc = 0x17366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173668u;
        // 0x17366c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173670u;
        goto label_173670;
    }
    ctx->pc = 0x173668u;
    SET_GPR_U32(ctx, 31, 0x173670u);
    ctx->pc = 0x17366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173668u;
    // 0x17366c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173590u, 0x173668u, 0x173670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173670u;
label_173670:
    // 0x173670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173674:
    // 0x173674: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_173678:
    // 0x173678: 0x3e00008  jr          $ra
label_17367c:
    if (ctx->pc == 0x17367Cu) {
        ctx->pc = 0x17367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173678u;
        // 0x17367c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173680u;
        goto label_fallthrough_0x173678;
    }
    ctx->pc = 0x173678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173678u;
        // 0x17367c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x173678:
    ctx->pc = 0x173680u;
}
