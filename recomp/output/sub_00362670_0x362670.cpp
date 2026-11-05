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

// Function: sub_00362670
// Address: 0x362670 - 0x3626e8
void sub_00362670_0x362670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362670_0x362670");
#endif

    switch (ctx->pc) {
        case 0x362670u: goto label_362670;
        case 0x362674u: goto label_362674;
        case 0x362678u: goto label_362678;
        case 0x36267cu: goto label_36267c;
        case 0x362680u: goto label_362680;
        case 0x362684u: goto label_362684;
        case 0x362688u: goto label_362688;
        case 0x36268cu: goto label_36268c;
        case 0x362690u: goto label_362690;
        case 0x362694u: goto label_362694;
        case 0x362698u: goto label_362698;
        case 0x36269cu: goto label_36269c;
        case 0x3626a0u: goto label_3626a0;
        case 0x3626a4u: goto label_3626a4;
        case 0x3626a8u: goto label_3626a8;
        case 0x3626acu: goto label_3626ac;
        case 0x3626b0u: goto label_3626b0;
        case 0x3626b4u: goto label_3626b4;
        case 0x3626b8u: goto label_3626b8;
        case 0x3626bcu: goto label_3626bc;
        case 0x3626c0u: goto label_3626c0;
        case 0x3626c4u: goto label_3626c4;
        case 0x3626c8u: goto label_3626c8;
        case 0x3626ccu: goto label_3626cc;
        case 0x3626d0u: goto label_3626d0;
        case 0x3626d4u: goto label_3626d4;
        case 0x3626d8u: goto label_3626d8;
        case 0x3626dcu: goto label_3626dc;
        case 0x3626e0u: goto label_3626e0;
        case 0x3626e4u: goto label_3626e4;
        default: break;
    }

    ctx->pc = 0x362670u;

label_362670:
    // 0x362670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_362674:
    // 0x362674: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x362674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_362678:
    // 0x362678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x362678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_36267c:
    // 0x36267c: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x36267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_362680:
    // 0x362680: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x362680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_362684:
    // 0x362684: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_362688:
    if (ctx->pc == 0x362688u) {
        ctx->pc = 0x362688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362684u;
        // 0x362688: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36268Cu;
        goto label_36268c;
    }
    ctx->pc = 0x362684u;
    {
        const bool branch_taken_0x362684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362684u;
        // 0x362688: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362684) {
            ctx->pc = 0x3626DCu;
            goto label_3626dc;
        }
    }
    ctx->pc = 0x36268Cu;
label_36268c:
    // 0x36268c: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x36268cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_362690:
    // 0x362690: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x362690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_362694:
    // 0x362694: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x362694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_362698:
    // 0x362698: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x362698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_36269c:
    // 0x36269c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_3626a0:
    if (ctx->pc == 0x3626A0u) {
        ctx->pc = 0x3626A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36269Cu;
        // 0x3626a0: 0x30627001  andi        $v0, $v1, 0x7001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28673);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3626A4u;
        goto label_3626a4;
    }
    ctx->pc = 0x36269Cu;
    {
        const bool branch_taken_0x36269c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3626A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36269Cu;
        // 0x3626a0: 0x30627001  andi        $v0, $v1, 0x7001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28673);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36269c) {
            ctx->pc = 0x3626BCu;
            goto label_3626bc;
        }
    }
    ctx->pc = 0x3626A4u;
label_3626a4:
    // 0x3626a4: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x3626a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_3626a8:
    // 0x3626a8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x3626a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_3626ac:
    // 0x3626ac: 0x40f809  jalr        $v0
label_3626b0:
    if (ctx->pc == 0x3626B0u) {
        ctx->pc = 0x3626B4u;
        goto label_3626b4;
    }
    ctx->pc = 0x3626ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3626B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3626ACu, 0x3626B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3626B4u;
label_3626b4:
    // 0x3626b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_3626b8:
    if (ctx->pc == 0x3626B8u) {
        ctx->pc = 0x3626B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3626B4u;
        // 0x3626b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3626BCu;
        goto label_3626bc;
    }
    ctx->pc = 0x3626B4u;
    {
        const bool branch_taken_0x3626b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3626B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3626B4u;
        // 0x3626b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3626b4) {
            ctx->pc = 0x3626E0u;
            goto label_3626e0;
        }
    }
    ctx->pc = 0x3626BCu;
label_3626bc:
    // 0x3626bc: 0x38427001  xori        $v0, $v0, 0x7001
    ctx->pc = 0x3626bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)28673);
label_3626c0:
    // 0x3626c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3626c4:
    if (ctx->pc == 0x3626C4u) {
        ctx->pc = 0x3626C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3626C0u;
        // 0x3626c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3626C8u;
        goto label_3626c8;
    }
    ctx->pc = 0x3626C0u;
    {
        const bool branch_taken_0x3626c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3626C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3626C0u;
        // 0x3626c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3626c0) {
            ctx->pc = 0x3626E0u;
            goto label_3626e0;
        }
    }
    ctx->pc = 0x3626C8u;
label_3626c8:
    // 0x3626c8: 0x8c8402e4  lw          $a0, 0x2E4($a0)
    ctx->pc = 0x3626c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 740)));
label_3626cc:
    // 0x3626cc: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x3626ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_3626d0:
    // 0x3626d0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x3626d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_3626d4:
    // 0x3626d4: 0x40f809  jalr        $v0
label_3626d8:
    if (ctx->pc == 0x3626D8u) {
        ctx->pc = 0x3626DCu;
        goto label_3626dc;
    }
    ctx->pc = 0x3626D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3626DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3626D4u, 0x3626DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3626DCu;
label_3626dc:
    // 0x3626dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3626dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3626e0:
    // 0x3626e0: 0x3e00008  jr          $ra
label_3626e4:
    if (ctx->pc == 0x3626E4u) {
        ctx->pc = 0x3626E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3626E0u;
        // 0x3626e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3626E8u;
        goto label_fallthrough_0x3626e0;
    }
    ctx->pc = 0x3626E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3626E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3626E0u;
        // 0x3626e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3626E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3626e0:
    ctx->pc = 0x3626E8u;
}
