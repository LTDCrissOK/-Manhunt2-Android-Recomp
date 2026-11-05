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

// Function: sub_00245658
// Address: 0x245658 - 0x2456d8
void sub_00245658_0x245658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245658_0x245658");
#endif

    switch (ctx->pc) {
        case 0x245658u: goto label_245658;
        case 0x24565cu: goto label_24565c;
        case 0x245660u: goto label_245660;
        case 0x245664u: goto label_245664;
        case 0x245668u: goto label_245668;
        case 0x24566cu: goto label_24566c;
        case 0x245670u: goto label_245670;
        case 0x245674u: goto label_245674;
        case 0x245678u: goto label_245678;
        case 0x24567cu: goto label_24567c;
        case 0x245680u: goto label_245680;
        case 0x245684u: goto label_245684;
        case 0x245688u: goto label_245688;
        case 0x24568cu: goto label_24568c;
        case 0x245690u: goto label_245690;
        case 0x245694u: goto label_245694;
        case 0x245698u: goto label_245698;
        case 0x24569cu: goto label_24569c;
        case 0x2456a0u: goto label_2456a0;
        case 0x2456a4u: goto label_2456a4;
        case 0x2456a8u: goto label_2456a8;
        case 0x2456acu: goto label_2456ac;
        case 0x2456b0u: goto label_2456b0;
        case 0x2456b4u: goto label_2456b4;
        case 0x2456b8u: goto label_2456b8;
        case 0x2456bcu: goto label_2456bc;
        case 0x2456c0u: goto label_2456c0;
        case 0x2456c4u: goto label_2456c4;
        case 0x2456c8u: goto label_2456c8;
        case 0x2456ccu: goto label_2456cc;
        case 0x2456d0u: goto label_2456d0;
        case 0x2456d4u: goto label_2456d4;
        default: break;
    }

    ctx->pc = 0x245658u;

label_245658:
    // 0x245658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x245658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24565c:
    // 0x24565c: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x24565cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_245660:
    // 0x245660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_245664:
    // 0x245664: 0x24a56ba0  addiu       $a1, $a1, 0x6BA0
    ctx->pc = 0x245664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27552));
label_245668:
    // 0x245668: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x245668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_24566c:
    // 0x24566c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24566cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_245670:
    // 0x245670: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x245670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245674:
    // 0x245674: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x245674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_245678:
    // 0x245678: 0xc073fde  jal         func_1CFF78
label_24567c:
    if (ctx->pc == 0x24567Cu) {
        ctx->pc = 0x24567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245678u;
        // 0x24567c: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245680u;
        goto label_245680;
    }
    ctx->pc = 0x245678u;
    SET_GPR_U32(ctx, 31, 0x245680u);
    ctx->pc = 0x24567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245678u;
    // 0x24567c: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x245678u, 0x245680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245680u;
label_245680:
    // 0x245680: 0xc08dada  jal         func_236B68
label_245684:
    if (ctx->pc == 0x245684u) {
        ctx->pc = 0x245684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245680u;
        // 0x245684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245688u;
        goto label_245688;
    }
    ctx->pc = 0x245680u;
    SET_GPR_U32(ctx, 31, 0x245688u);
    ctx->pc = 0x245684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245680u;
    // 0x245684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x245680u, 0x245688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245688u;
label_245688:
    // 0x245688: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_24568c:
    if (ctx->pc == 0x24568Cu) {
        ctx->pc = 0x24568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245688u;
        // 0x24568c: 0x8e020370  lw          $v0, 0x370($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245690u;
        goto label_245690;
    }
    ctx->pc = 0x245688u;
    {
        const bool branch_taken_0x245688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245688) {
            ctx->pc = 0x24568Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245688u;
            // 0x24568c: 0x8e020370  lw          $v0, 0x370($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2456B0u;
            goto label_2456b0;
        }
    }
    ctx->pc = 0x245690u;
label_245690:
    // 0x245690: 0xc0899bc  jal         func_2266F0
label_245694:
    if (ctx->pc == 0x245694u) {
        ctx->pc = 0x245694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245690u;
        // 0x245694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245698u;
        goto label_245698;
    }
    ctx->pc = 0x245690u;
    SET_GPR_U32(ctx, 31, 0x245698u);
    ctx->pc = 0x245694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245690u;
    // 0x245694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x245690u, 0x245698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245698u;
label_245698:
    // 0x245698: 0x8c4402e4  lw          $a0, 0x2E4($v0)
    ctx->pc = 0x245698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
label_24569c:
    // 0x24569c: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x24569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_2456a0:
    // 0x2456a0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x2456a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_2456a4:
    // 0x2456a4: 0x40f809  jalr        $v0
label_2456a8:
    if (ctx->pc == 0x2456A8u) {
        ctx->pc = 0x2456ACu;
        goto label_2456ac;
    }
    ctx->pc = 0x2456A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2456ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2456A4u, 0x2456ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2456ACu;
label_2456ac:
    // 0x2456ac: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x2456acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_2456b0:
    // 0x2456b0: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x2456b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_2456b4:
    // 0x2456b4: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x2456b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_2456b8:
    // 0x2456b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2456b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2456bc:
    // 0x2456bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2456bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2456c0:
    // 0x2456c0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2456c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2456c4:
    // 0x2456c4: 0xae020370  sw          $v0, 0x370($s0)
    ctx->pc = 0x2456c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
label_2456c8:
    // 0x2456c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2456c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2456cc:
    // 0x2456cc: 0x3e00008  jr          $ra
label_2456d0:
    if (ctx->pc == 0x2456D0u) {
        ctx->pc = 0x2456D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456CCu;
        // 0x2456d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2456D4u;
        goto label_2456d4;
    }
    ctx->pc = 0x2456CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2456D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456CCu;
        // 0x2456d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2456CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2456D4u;
label_2456d4:
    // 0x2456d4: 0x0  nop
    ctx->pc = 0x2456d4u;
    // NOP
    ctx->pc = 0x2456d8u;
}
