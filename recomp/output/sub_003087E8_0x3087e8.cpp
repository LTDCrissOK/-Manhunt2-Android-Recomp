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

// Function: sub_003087E8
// Address: 0x3087e8 - 0x308870
void sub_003087E8_0x3087e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003087E8_0x3087e8");
#endif

    switch (ctx->pc) {
        case 0x3087e8u: goto label_3087e8;
        case 0x3087ecu: goto label_3087ec;
        case 0x3087f0u: goto label_3087f0;
        case 0x3087f4u: goto label_3087f4;
        case 0x3087f8u: goto label_3087f8;
        case 0x3087fcu: goto label_3087fc;
        case 0x308800u: goto label_308800;
        case 0x308804u: goto label_308804;
        case 0x308808u: goto label_308808;
        case 0x30880cu: goto label_30880c;
        case 0x308810u: goto label_308810;
        case 0x308814u: goto label_308814;
        case 0x308818u: goto label_308818;
        case 0x30881cu: goto label_30881c;
        case 0x308820u: goto label_308820;
        case 0x308824u: goto label_308824;
        case 0x308828u: goto label_308828;
        case 0x30882cu: goto label_30882c;
        case 0x308830u: goto label_308830;
        case 0x308834u: goto label_308834;
        case 0x308838u: goto label_308838;
        case 0x30883cu: goto label_30883c;
        case 0x308840u: goto label_308840;
        case 0x308844u: goto label_308844;
        case 0x308848u: goto label_308848;
        case 0x30884cu: goto label_30884c;
        case 0x308850u: goto label_308850;
        case 0x308854u: goto label_308854;
        case 0x308858u: goto label_308858;
        case 0x30885cu: goto label_30885c;
        case 0x308860u: goto label_308860;
        case 0x308864u: goto label_308864;
        case 0x308868u: goto label_308868;
        case 0x30886cu: goto label_30886c;
        default: break;
    }

    ctx->pc = 0x3087e8u;

label_3087e8:
    // 0x3087e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3087e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3087ec:
    // 0x3087ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3087ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3087f0:
    // 0x3087f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3087f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3087f4:
    // 0x3087f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3087f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3087f8:
    // 0x3087f8: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x3087f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_3087fc:
    // 0x3087fc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_308800:
    if (ctx->pc == 0x308800u) {
        ctx->pc = 0x308800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087FCu;
        // 0x308800: 0x8e030290  lw          $v1, 0x290($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308804u;
        goto label_308804;
    }
    ctx->pc = 0x3087FCu;
    {
        const bool branch_taken_0x3087fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3087fc) {
            ctx->pc = 0x308800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3087FCu;
            // 0x308800: 0x8e030290  lw          $v1, 0x290($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308804u;
            goto label_308804;
        }
    }
    ctx->pc = 0x308804u;
label_308804:
    // 0x308804: 0x8e0602e4  lw          $a2, 0x2E4($s0)
    ctx->pc = 0x308804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_308808:
    // 0x308808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30880c:
    // 0x30880c: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x30880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_308810:
    // 0x308810: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x308810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_308814:
    // 0x308814: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_308818:
    if (ctx->pc == 0x308818u) {
        ctx->pc = 0x308818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308814u;
        // 0x308818: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30881Cu;
        goto label_30881c;
    }
    ctx->pc = 0x308814u;
    {
        const bool branch_taken_0x308814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308814u;
        // 0x308818: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308814) {
            ctx->pc = 0x308820u;
            goto label_308820;
        }
    }
    ctx->pc = 0x30881Cu;
label_30881c:
    // 0x30881c: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x30881cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_308820:
    // 0x308820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308824:
    // 0x308824: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_308828:
    if (ctx->pc == 0x308828u) {
        ctx->pc = 0x308828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308824u;
        // 0x308828: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30882Cu;
        goto label_30882c;
    }
    ctx->pc = 0x308824u;
    {
        const bool branch_taken_0x308824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x308828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308824u;
        // 0x308828: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308824) {
            ctx->pc = 0x308844u;
            goto label_308844;
        }
    }
    ctx->pc = 0x30882Cu;
label_30882c:
    // 0x30882c: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x30882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_308830:
    // 0x308830: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x308830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_308834:
    // 0x308834: 0x40f809  jalr        $v0
label_308838:
    if (ctx->pc == 0x308838u) {
        ctx->pc = 0x30883Cu;
        goto label_30883c;
    }
    ctx->pc = 0x308834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30883Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308834u, 0x30883Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30883Cu;
label_30883c:
    // 0x30883c: 0x10000008  b           . + 4 + (0x8 << 2)
label_308840:
    if (ctx->pc == 0x308840u) {
        ctx->pc = 0x308840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30883Cu;
        // 0x308840: 0xae000290  sw          $zero, 0x290($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308844u;
        goto label_308844;
    }
    ctx->pc = 0x30883Cu;
    {
        const bool branch_taken_0x30883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30883Cu;
        // 0x308840: 0xae000290  sw          $zero, 0x290($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30883c) {
            ctx->pc = 0x308860u;
            goto label_308860;
        }
    }
    ctx->pc = 0x308844u;
label_308844:
    // 0x308844: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_308848:
    if (ctx->pc == 0x308848u) {
        ctx->pc = 0x308848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308844u;
        // 0x308848: 0xae000290  sw          $zero, 0x290($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30884Cu;
        goto label_30884c;
    }
    ctx->pc = 0x308844u;
    {
        const bool branch_taken_0x308844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x308844) {
            ctx->pc = 0x308848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308844u;
            // 0x308848: 0xae000290  sw          $zero, 0x290($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308860u;
            goto label_308860;
        }
    }
    ctx->pc = 0x30884Cu;
label_30884c:
    // 0x30884c: 0x8cc30068  lw          $v1, 0x68($a2)
    ctx->pc = 0x30884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
label_308850:
    // 0x308850: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x308850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_308854:
    // 0x308854: 0x40f809  jalr        $v0
label_308858:
    if (ctx->pc == 0x308858u) {
        ctx->pc = 0x308858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308854u;
        // 0x308858: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30885Cu;
        goto label_30885c;
    }
    ctx->pc = 0x308854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30885Cu);
        ctx->pc = 0x308858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308854u;
        // 0x308858: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308854u, 0x30885Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30885Cu;
label_30885c:
    // 0x30885c: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x30885cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
label_308860:
    // 0x308860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308864:
    // 0x308864: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x308864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_308868:
    // 0x308868: 0x3e00008  jr          $ra
label_30886c:
    if (ctx->pc == 0x30886Cu) {
        ctx->pc = 0x30886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308868u;
        // 0x30886c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308870u;
        goto label_fallthrough_0x308868;
    }
    ctx->pc = 0x308868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308868u;
        // 0x30886c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x308868:
    ctx->pc = 0x308870u;
}
