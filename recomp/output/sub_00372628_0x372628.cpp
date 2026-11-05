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

// Function: sub_00372628
// Address: 0x372628 - 0x372730
void sub_00372628_0x372628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372628_0x372628");
#endif

    switch (ctx->pc) {
        case 0x372724u: goto label_372724;
        default: break;
    }

    ctx->pc = 0x372628u;

    // 0x372628: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x372628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x37262c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37262cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372630: 0x8c43ccc0  lw          $v1, -0x3340($v0)
    ctx->pc = 0x372630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCCC0u));
    // 0x372634: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x372634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37263c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372640: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x372640u;
    {
        const bool branch_taken_0x372640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x372644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372640u;
        // 0x372644: 0x8c680064  lw          $t0, 0x64($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372640) {
            ctx->pc = 0x37268Cu;
            goto label_37268c;
        }
    }
    ctx->pc = 0x372648u;
    // 0x372648: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x372648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x37264c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37264Cu;
    {
        const bool branch_taken_0x37264c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37264Cu;
        // 0x372650: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37264c) {
            ctx->pc = 0x372664u;
            goto label_372664;
        }
    }
    ctx->pc = 0x372654u;
    // 0x372654: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x372654u;
    {
        const bool branch_taken_0x372654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x372658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372654u;
        // 0x372658: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372654) {
            ctx->pc = 0x372678u;
            goto label_372678;
        }
    }
    ctx->pc = 0x37265Cu;
    // 0x37265c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x37265Cu;
    {
        const bool branch_taken_0x37265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37265Cu;
        // 0x372660: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37265c) {
            ctx->pc = 0x372694u;
            goto label_372694;
        }
    }
    ctx->pc = 0x372664u;
label_372664:
    // 0x372664: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x372664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x372668: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x372668u;
    {
        const bool branch_taken_0x372668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x37266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372668u;
        // 0x37266c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372668) {
            ctx->pc = 0x372680u;
            goto label_372680;
        }
    }
    ctx->pc = 0x372670u;
    // 0x372670: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x372670u;
    {
        const bool branch_taken_0x372670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372670u;
        // 0x372674: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372670) {
            ctx->pc = 0x372694u;
            goto label_372694;
        }
    }
    ctx->pc = 0x372678u;
label_372678:
    // 0x372678: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x372678u;
    {
        const bool branch_taken_0x372678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372678u;
        // 0x37267c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372678) {
            ctx->pc = 0x372690u;
            goto label_372690;
        }
    }
    ctx->pc = 0x372680u;
label_372680:
    // 0x372680: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x372680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x372684: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x372684u;
    {
        const bool branch_taken_0x372684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372684u;
        // 0x372688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372684) {
            ctx->pc = 0x372690u;
            goto label_372690;
        }
    }
    ctx->pc = 0x37268Cu;
label_37268c:
    // 0x37268c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x37268cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_372690:
    // 0x372690: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x372690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_372694:
    // 0x372694: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x372694u;
    {
        const bool branch_taken_0x372694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x372698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372694u;
        // 0x372698: 0x8cc2ccc0  lw          $v0, -0x3340($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372694) {
            ctx->pc = 0x3726D8u;
            goto label_3726d8;
        }
    }
    ctx->pc = 0x37269Cu;
    // 0x37269c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37269Cu;
    {
        const bool branch_taken_0x37269c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3726A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37269Cu;
        // 0x3726a0: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37269c) {
            ctx->pc = 0x3726B8u;
            goto label_3726b8;
        }
    }
    ctx->pc = 0x3726A4u;
    // 0x3726a4: 0x8cc2ccc0  lw          $v0, -0x3340($a2)
    ctx->pc = 0x3726a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
    // 0x3726a8: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x3726a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x3726ac: 0x8cc3ccc0  lw          $v1, -0x3340($a2)
    ctx->pc = 0x3726acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
    // 0x3726b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3726B0u;
    {
        const bool branch_taken_0x3726b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3726B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3726B0u;
        // 0x3726b4: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3726b0) {
            ctx->pc = 0x3726CCu;
            goto label_3726cc;
        }
    }
    ctx->pc = 0x3726B8u;
label_3726b8:
    // 0x3726b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3726B8u;
    {
        const bool branch_taken_0x3726b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3726BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3726B8u;
        // 0x3726bc: 0x8cc2ccc0  lw          $v0, -0x3340($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3726b8) {
            ctx->pc = 0x3726ECu;
            goto label_3726ec;
        }
    }
    ctx->pc = 0x3726C0u;
    // 0x3726c0: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x3726c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x3726c4: 0x8cc3ccc0  lw          $v1, -0x3340($a2)
    ctx->pc = 0x3726c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
    // 0x3726c8: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x3726c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_3726cc:
    // 0x3726cc: 0x8cc2ccc0  lw          $v0, -0x3340($a2)
    ctx->pc = 0x3726ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
    // 0x3726d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3726D0u;
    {
        const bool branch_taken_0x3726d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3726D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3726D0u;
        // 0x3726d4: 0xac400070  sw          $zero, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3726d0) {
            ctx->pc = 0x3726ECu;
            goto label_3726ec;
        }
    }
    ctx->pc = 0x3726D8u;
label_3726d8:
    // 0x3726d8: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x3726d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
    // 0x3726dc: 0x8cc3ccc0  lw          $v1, -0x3340($a2)
    ctx->pc = 0x3726dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
    // 0x3726e0: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x3726e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x3726e4: 0x8cc2ccc0  lw          $v0, -0x3340($a2)
    ctx->pc = 0x3726e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
    // 0x3726e8: 0xac450070  sw          $a1, 0x70($v0)
    ctx->pc = 0x3726e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 5));
label_3726ec:
    // 0x3726ec: 0x8cc3ccc0  lw          $v1, -0x3340($a2)
    ctx->pc = 0x3726ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
    // 0x3726f0: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x3726f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x3726f4: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3726F4u;
    {
        const bool branch_taken_0x3726f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x3726f4) {
            ctx->pc = 0x3726F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3726F4u;
            // 0x3726f8: 0xac670068  sw          $a3, 0x68($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37270Cu;
            goto label_37270c;
        }
    }
    ctx->pc = 0x3726FCu;
    // 0x3726fc: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x3726fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x372700: 0x11020009  beq         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x372700u;
    {
        const bool branch_taken_0x372700 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x372704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372700u;
        // 0x372704: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372700) {
            ctx->pc = 0x372728u;
            goto label_372728;
        }
    }
    ctx->pc = 0x372708u;
    // 0x372708: 0xac670068  sw          $a3, 0x68($v1)
    ctx->pc = 0x372708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 7));
label_37270c:
    // 0x37270c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37270cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372710: 0x8cc2ccc0  lw          $v0, -0x3340($a2)
    ctx->pc = 0x372710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954176)));
    // 0x372714: 0x84470060  lh          $a3, 0x60($v0)
    ctx->pc = 0x372714u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x372718: 0x84450064  lh          $a1, 0x64($v0)
    ctx->pc = 0x372718u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x37271c: 0xc0ee940  jal         func_3BA500
    ctx->pc = 0x37271Cu;
    SET_GPR_U32(ctx, 31, 0x372724u);
    ctx->pc = 0x372720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37271Cu;
    // 0x372720: 0x84460068  lh          $a2, 0x68($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA500u, 0x37271Cu, 0x372724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372724u;
label_372724:
    // 0x372724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_372728:
    // 0x372728: 0x3e00008  jr          $ra
    ctx->pc = 0x372728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372728u;
        // 0x37272c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372730u;
}
