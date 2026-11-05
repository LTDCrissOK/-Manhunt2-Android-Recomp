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

// Function: sub_00242630
// Address: 0x242630 - 0x2426b0
void sub_00242630_0x242630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242630_0x242630");
#endif

    switch (ctx->pc) {
        case 0x242630u: goto label_242630;
        case 0x242634u: goto label_242634;
        case 0x242638u: goto label_242638;
        case 0x24263cu: goto label_24263c;
        case 0x242640u: goto label_242640;
        case 0x242644u: goto label_242644;
        case 0x242648u: goto label_242648;
        case 0x24264cu: goto label_24264c;
        case 0x242650u: goto label_242650;
        case 0x242654u: goto label_242654;
        case 0x242658u: goto label_242658;
        case 0x24265cu: goto label_24265c;
        case 0x242660u: goto label_242660;
        case 0x242664u: goto label_242664;
        case 0x242668u: goto label_242668;
        case 0x24266cu: goto label_24266c;
        case 0x242670u: goto label_242670;
        case 0x242674u: goto label_242674;
        case 0x242678u: goto label_242678;
        case 0x24267cu: goto label_24267c;
        case 0x242680u: goto label_242680;
        case 0x242684u: goto label_242684;
        case 0x242688u: goto label_242688;
        case 0x24268cu: goto label_24268c;
        case 0x242690u: goto label_242690;
        case 0x242694u: goto label_242694;
        case 0x242698u: goto label_242698;
        case 0x24269cu: goto label_24269c;
        case 0x2426a0u: goto label_2426a0;
        case 0x2426a4u: goto label_2426a4;
        case 0x2426a8u: goto label_2426a8;
        case 0x2426acu: goto label_2426ac;
        default: break;
    }

    ctx->pc = 0x242630u;

label_242630:
    // 0x242630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_242634:
    // 0x242634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_242638:
    // 0x242638: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x242638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_24263c:
    // 0x24263c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24263cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242640:
    // 0x242640: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x242640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_242644:
    // 0x242644: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x242644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_242648:
    // 0x242648: 0x40f809  jalr        $v0
label_24264c:
    if (ctx->pc == 0x24264Cu) {
        ctx->pc = 0x242650u;
        goto label_242650;
    }
    ctx->pc = 0x242648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242650u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242648u, 0x242650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242650u;
label_242650:
    // 0x242650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242654:
    // 0x242654: 0xc08cc66  jal         func_233198
label_242658:
    if (ctx->pc == 0x242658u) {
        ctx->pc = 0x242658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242654u;
        // 0x242658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24265Cu;
        goto label_24265c;
    }
    ctx->pc = 0x242654u;
    SET_GPR_U32(ctx, 31, 0x24265Cu);
    ctx->pc = 0x242658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242654u;
    // 0x242658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233198u, 0x242654u, 0x24265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24265Cu;
label_24265c:
    // 0x24265c: 0xc6010500  lwc1        $f1, 0x500($s0)
    ctx->pc = 0x24265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242660:
    // 0x242660: 0x3c01bf66  lui         $at, 0xBF66
    ctx->pc = 0x242660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48998 << 16));
label_242664:
    // 0x242664: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x242664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_242668:
    // 0x242668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24266c:
    // 0x24266c: 0x0  nop
    ctx->pc = 0x24266cu;
    // NOP
label_242670:
    // 0x242670: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242674:
    // 0x242674: 0x0  nop
    ctx->pc = 0x242674u;
    // NOP
label_242678:
    // 0x242678: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_24267c:
    if (ctx->pc == 0x24267Cu) {
        ctx->pc = 0x24267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242678u;
        // 0x24267c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242680u;
        goto label_242680;
    }
    ctx->pc = 0x242678u;
    {
        const bool branch_taken_0x242678 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242678u;
        // 0x24267c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242678) {
            ctx->pc = 0x24268Cu;
            goto label_24268c;
        }
    }
    ctx->pc = 0x242680u;
label_242680:
    // 0x242680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242684:
    // 0x242684: 0xc08bf70  jal         func_22FDC0
label_242688:
    if (ctx->pc == 0x242688u) {
        ctx->pc = 0x242688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242684u;
        // 0x242688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24268Cu;
        goto label_24268c;
    }
    ctx->pc = 0x242684u;
    SET_GPR_U32(ctx, 31, 0x24268Cu);
    ctx->pc = 0x242688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242684u;
    // 0x242688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x242684u, 0x24268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24268Cu;
label_24268c:
    // 0x24268c: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x24268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242690:
    // 0x242690: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x242690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_242694:
    // 0x242694: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x242694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_242698:
    // 0x242698: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
label_24269c:
    if (ctx->pc == 0x24269Cu) {
        ctx->pc = 0x24269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242698u;
        // 0x24269c: 0xae000404  sw          $zero, 0x404($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2426A0u;
        goto label_2426a0;
    }
    ctx->pc = 0x242698u;
    {
        const bool branch_taken_0x242698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x242698) {
            ctx->pc = 0x24269Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242698u;
            // 0x24269c: 0xae000404  sw          $zero, 0x404($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2426A0u;
            goto label_2426a0;
        }
    }
    ctx->pc = 0x2426A0u;
label_2426a0:
    // 0x2426a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2426a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2426a4:
    // 0x2426a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2426a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2426a8:
    // 0x2426a8: 0x3e00008  jr          $ra
label_2426ac:
    if (ctx->pc == 0x2426ACu) {
        ctx->pc = 0x2426ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426A8u;
        // 0x2426ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2426B0u;
        goto label_fallthrough_0x2426a8;
    }
    ctx->pc = 0x2426A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2426ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426A8u;
        // 0x2426ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2426A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2426a8:
    ctx->pc = 0x2426B0u;
}
