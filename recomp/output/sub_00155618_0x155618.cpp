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

// Function: sub_00155618
// Address: 0x155618 - 0x1556e8
void sub_00155618_0x155618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155618_0x155618");
#endif

    switch (ctx->pc) {
        case 0x155618u: goto label_155618;
        case 0x15561cu: goto label_15561c;
        case 0x155620u: goto label_155620;
        case 0x155624u: goto label_155624;
        case 0x155628u: goto label_155628;
        case 0x15562cu: goto label_15562c;
        case 0x155630u: goto label_155630;
        case 0x155634u: goto label_155634;
        case 0x155638u: goto label_155638;
        case 0x15563cu: goto label_15563c;
        case 0x155640u: goto label_155640;
        case 0x155644u: goto label_155644;
        case 0x155648u: goto label_155648;
        case 0x15564cu: goto label_15564c;
        case 0x155650u: goto label_155650;
        case 0x155654u: goto label_155654;
        case 0x155658u: goto label_155658;
        case 0x15565cu: goto label_15565c;
        case 0x155660u: goto label_155660;
        case 0x155664u: goto label_155664;
        case 0x155668u: goto label_155668;
        case 0x15566cu: goto label_15566c;
        case 0x155670u: goto label_155670;
        case 0x155674u: goto label_155674;
        case 0x155678u: goto label_155678;
        case 0x15567cu: goto label_15567c;
        case 0x155680u: goto label_155680;
        case 0x155684u: goto label_155684;
        case 0x155688u: goto label_155688;
        case 0x15568cu: goto label_15568c;
        case 0x155690u: goto label_155690;
        case 0x155694u: goto label_155694;
        case 0x155698u: goto label_155698;
        case 0x15569cu: goto label_15569c;
        case 0x1556a0u: goto label_1556a0;
        case 0x1556a4u: goto label_1556a4;
        case 0x1556a8u: goto label_1556a8;
        case 0x1556acu: goto label_1556ac;
        case 0x1556b0u: goto label_1556b0;
        case 0x1556b4u: goto label_1556b4;
        case 0x1556b8u: goto label_1556b8;
        case 0x1556bcu: goto label_1556bc;
        case 0x1556c0u: goto label_1556c0;
        case 0x1556c4u: goto label_1556c4;
        case 0x1556c8u: goto label_1556c8;
        case 0x1556ccu: goto label_1556cc;
        case 0x1556d0u: goto label_1556d0;
        case 0x1556d4u: goto label_1556d4;
        case 0x1556d8u: goto label_1556d8;
        case 0x1556dcu: goto label_1556dc;
        case 0x1556e0u: goto label_1556e0;
        case 0x1556e4u: goto label_1556e4;
        default: break;
    }

    ctx->pc = 0x155618u;

label_155618:
    // 0x155618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15561c:
    // 0x15561c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_155620:
    // 0x155620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_155624:
    // 0x155624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_155628:
    // 0x155628: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x155628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15562c:
    // 0x15562c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x15562cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_155630:
    // 0x155630: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x155630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_155634:
    // 0x155634: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x155634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_155638:
    // 0x155638: 0xc055280  jal         func_154A00
label_15563c:
    if (ctx->pc == 0x15563Cu) {
        ctx->pc = 0x15563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155638u;
        // 0x15563c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155640u;
        goto label_155640;
    }
    ctx->pc = 0x155638u;
    SET_GPR_U32(ctx, 31, 0x155640u);
    ctx->pc = 0x15563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155638u;
    // 0x15563c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A00u, 0x155638u, 0x155640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155640u;
label_155640:
    // 0x155640: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_155644:
    if (ctx->pc == 0x155644u) {
        ctx->pc = 0x155644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155640u;
        // 0x155644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155648u;
        goto label_155648;
    }
    ctx->pc = 0x155640u;
    {
        const bool branch_taken_0x155640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155640u;
        // 0x155644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155640) {
            ctx->pc = 0x155670u;
            goto label_155670;
        }
    }
    ctx->pc = 0x155648u;
label_155648:
    // 0x155648: 0xc0552a2  jal         func_154A88
label_15564c:
    if (ctx->pc == 0x15564Cu) {
        ctx->pc = 0x15564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155648u;
        // 0x15564c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155650u;
        goto label_155650;
    }
    ctx->pc = 0x155648u;
    SET_GPR_U32(ctx, 31, 0x155650u);
    ctx->pc = 0x15564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155648u;
    // 0x15564c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A88u, 0x155648u, 0x155650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155650u;
label_155650:
    // 0x155650: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_155654:
    if (ctx->pc == 0x155654u) {
        ctx->pc = 0x155654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155650u;
        // 0x155654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155658u;
        goto label_155658;
    }
    ctx->pc = 0x155650u;
    {
        const bool branch_taken_0x155650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155650u;
        // 0x155654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155650) {
            ctx->pc = 0x1556CCu;
            goto label_1556cc;
        }
    }
    ctx->pc = 0x155658u;
label_155658:
    // 0x155658: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x155658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15565c:
    // 0x15565c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x15565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_155660:
    // 0x155660: 0x40f809  jalr        $v0
label_155664:
    if (ctx->pc == 0x155664u) {
        ctx->pc = 0x155664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155660u;
        // 0x155664: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155668u;
        goto label_155668;
    }
    ctx->pc = 0x155660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155668u);
        ctx->pc = 0x155664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155660u;
        // 0x155664: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155660u, 0x155668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155668u;
label_155668:
    // 0x155668: 0x10000019  b           . + 4 + (0x19 << 2)
label_15566c:
    if (ctx->pc == 0x15566Cu) {
        ctx->pc = 0x15566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155668u;
        // 0x15566c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155670u;
        goto label_155670;
    }
    ctx->pc = 0x155668u;
    {
        const bool branch_taken_0x155668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155668u;
        // 0x15566c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155668) {
            ctx->pc = 0x1556D0u;
            goto label_1556d0;
        }
    }
    ctx->pc = 0x155670u;
label_155670:
    // 0x155670: 0xc60004d4  lwc1        $f0, 0x4D4($s0)
    ctx->pc = 0x155670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155674:
    // 0x155674: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x155674u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_155678:
    // 0x155678: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x155678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_15567c:
    // 0x15567c: 0xc055286  jal         func_154A18
label_155680:
    if (ctx->pc == 0x155680u) {
        ctx->pc = 0x155680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15567Cu;
        // 0x155680: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155684u;
        goto label_155684;
    }
    ctx->pc = 0x15567Cu;
    SET_GPR_U32(ctx, 31, 0x155684u);
    ctx->pc = 0x155680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15567Cu;
    // 0x155680: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A18u, 0x15567Cu, 0x155684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155684u;
label_155684:
    // 0x155684: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_155688:
    // 0x155688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15568c:
    // 0x15568c: 0xc05527a  jal         func_1549E8
label_155690:
    if (ctx->pc == 0x155690u) {
        ctx->pc = 0x155690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15568Cu;
        // 0x155690: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155694u;
        goto label_155694;
    }
    ctx->pc = 0x15568Cu;
    SET_GPR_U32(ctx, 31, 0x155694u);
    ctx->pc = 0x155690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15568Cu;
    // 0x155690: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1549E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1549E8u, 0x15568Cu, 0x155694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155694u;
label_155694:
    // 0x155694: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x155694u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_155698:
    // 0x155698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15569c:
    // 0x15569c: 0xc04d8d6  jal         func_136358
label_1556a0:
    if (ctx->pc == 0x1556A0u) {
        ctx->pc = 0x1556A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15569Cu;
        // 0x1556a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556A4u;
        goto label_1556a4;
    }
    ctx->pc = 0x15569Cu;
    SET_GPR_U32(ctx, 31, 0x1556A4u);
    ctx->pc = 0x1556A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15569Cu;
    // 0x1556a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x15569Cu, 0x1556A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556A4u;
label_1556a4:
    // 0x1556a4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1556a8:
    if (ctx->pc == 0x1556A8u) {
        ctx->pc = 0x1556A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556A4u;
        // 0x1556a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556ACu;
        goto label_1556ac;
    }
    ctx->pc = 0x1556A4u;
    {
        const bool branch_taken_0x1556a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556A4u;
        // 0x1556a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556a4) {
            ctx->pc = 0x1556C0u;
            goto label_1556c0;
        }
    }
    ctx->pc = 0x1556ACu;
label_1556ac:
    // 0x1556ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1556acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1556b0:
    // 0x1556b0: 0xc0551e4  jal         func_154790
label_1556b4:
    if (ctx->pc == 0x1556B4u) {
        ctx->pc = 0x1556B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556B0u;
        // 0x1556b4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556B8u;
        goto label_1556b8;
    }
    ctx->pc = 0x1556B0u;
    SET_GPR_U32(ctx, 31, 0x1556B8u);
    ctx->pc = 0x1556B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1556B0u;
    // 0x1556b4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154790u, 0x1556B0u, 0x1556B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556B8u;
label_1556b8:
    // 0x1556b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1556bc:
    if (ctx->pc == 0x1556BCu) {
        ctx->pc = 0x1556BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556B8u;
        // 0x1556bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556C0u;
        goto label_1556c0;
    }
    ctx->pc = 0x1556B8u;
    {
        const bool branch_taken_0x1556b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556B8u;
        // 0x1556bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556b8) {
            ctx->pc = 0x1556D0u;
            goto label_1556d0;
        }
    }
    ctx->pc = 0x1556C0u;
label_1556c0:
    // 0x1556c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1556c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1556c4:
    // 0x1556c4: 0xc0551e4  jal         func_154790
label_1556c8:
    if (ctx->pc == 0x1556C8u) {
        ctx->pc = 0x1556C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556C4u;
        // 0x1556c8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556CCu;
        goto label_1556cc;
    }
    ctx->pc = 0x1556C4u;
    SET_GPR_U32(ctx, 31, 0x1556CCu);
    ctx->pc = 0x1556C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1556C4u;
    // 0x1556c8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154790u, 0x1556C4u, 0x1556CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556CCu;
label_1556cc:
    // 0x1556cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1556ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1556d0:
    // 0x1556d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1556d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1556d4:
    // 0x1556d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1556d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1556d8:
    // 0x1556d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1556d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1556dc:
    // 0x1556dc: 0x3e00008  jr          $ra
label_1556e0:
    if (ctx->pc == 0x1556E0u) {
        ctx->pc = 0x1556E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556DCu;
        // 0x1556e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556E4u;
        goto label_1556e4;
    }
    ctx->pc = 0x1556DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1556E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556DCu;
        // 0x1556e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1556DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1556E4u;
label_1556e4:
    // 0x1556e4: 0x0  nop
    ctx->pc = 0x1556e4u;
    // NOP
    ctx->pc = 0x1556e8u;
}
