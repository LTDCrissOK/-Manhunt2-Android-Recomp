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

// Function: sub_003AA670
// Address: 0x3aa670 - 0x3aa710
void sub_003AA670_0x3aa670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA670_0x3aa670");
#endif

    switch (ctx->pc) {
        case 0x3aa670u: goto label_3aa670;
        case 0x3aa674u: goto label_3aa674;
        case 0x3aa678u: goto label_3aa678;
        case 0x3aa67cu: goto label_3aa67c;
        case 0x3aa680u: goto label_3aa680;
        case 0x3aa684u: goto label_3aa684;
        case 0x3aa688u: goto label_3aa688;
        case 0x3aa68cu: goto label_3aa68c;
        case 0x3aa690u: goto label_3aa690;
        case 0x3aa694u: goto label_3aa694;
        case 0x3aa698u: goto label_3aa698;
        case 0x3aa69cu: goto label_3aa69c;
        case 0x3aa6a0u: goto label_3aa6a0;
        case 0x3aa6a4u: goto label_3aa6a4;
        case 0x3aa6a8u: goto label_3aa6a8;
        case 0x3aa6acu: goto label_3aa6ac;
        case 0x3aa6b0u: goto label_3aa6b0;
        case 0x3aa6b4u: goto label_3aa6b4;
        case 0x3aa6b8u: goto label_3aa6b8;
        case 0x3aa6bcu: goto label_3aa6bc;
        case 0x3aa6c0u: goto label_3aa6c0;
        case 0x3aa6c4u: goto label_3aa6c4;
        case 0x3aa6c8u: goto label_3aa6c8;
        case 0x3aa6ccu: goto label_3aa6cc;
        case 0x3aa6d0u: goto label_3aa6d0;
        case 0x3aa6d4u: goto label_3aa6d4;
        case 0x3aa6d8u: goto label_3aa6d8;
        case 0x3aa6dcu: goto label_3aa6dc;
        case 0x3aa6e0u: goto label_3aa6e0;
        case 0x3aa6e4u: goto label_3aa6e4;
        case 0x3aa6e8u: goto label_3aa6e8;
        case 0x3aa6ecu: goto label_3aa6ec;
        case 0x3aa6f0u: goto label_3aa6f0;
        case 0x3aa6f4u: goto label_3aa6f4;
        case 0x3aa6f8u: goto label_3aa6f8;
        case 0x3aa6fcu: goto label_3aa6fc;
        case 0x3aa700u: goto label_3aa700;
        case 0x3aa704u: goto label_3aa704;
        case 0x3aa708u: goto label_3aa708;
        case 0x3aa70cu: goto label_3aa70c;
        default: break;
    }

    ctx->pc = 0x3aa670u;

label_3aa670:
    // 0x3aa670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3aa674:
    // 0x3aa674: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_3aa678:
    if (ctx->pc == 0x3AA678u) {
        ctx->pc = 0x3AA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA674u;
        // 0x3aa678: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA67Cu;
        goto label_3aa67c;
    }
    ctx->pc = 0x3AA674u;
    {
        const bool branch_taken_0x3aa674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA674u;
        // 0x3aa678: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa674) {
            ctx->pc = 0x3AA698u;
            goto label_3aa698;
        }
    }
    ctx->pc = 0x3AA67Cu;
label_3aa67c:
    // 0x3aa67c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3aa680:
    // 0x3aa680: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3aa684:
    // 0x3aa684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa688:
    // 0x3aa688: 0x2484ee60  addiu       $a0, $a0, -0x11A0
    ctx->pc = 0x3aa688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962784));
label_3aa68c:
    // 0x3aa68c: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x3aa68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
label_3aa690:
    // 0x3aa690: 0x80ea7ec  j           func_3A9FB0
label_3aa694:
    if (ctx->pc == 0x3AA694u) {
        ctx->pc = 0x3AA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA690u;
        // 0x3aa694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA698u;
        goto label_3aa698;
    }
    ctx->pc = 0x3AA690u;
    ctx->pc = 0x3AA694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA690u;
    // 0x3aa694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9FB0u;
    sub_003A9FB0_0x3a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA698u;
label_3aa698:
    // 0x3aa698: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3aa698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3aa69c:
    // 0x3aa69c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3aa6a0:
    if (ctx->pc == 0x3AA6A0u) {
        ctx->pc = 0x3AA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA69Cu;
        // 0x3aa6a0: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA6A4u;
        goto label_3aa6a4;
    }
    ctx->pc = 0x3AA69Cu;
    {
        const bool branch_taken_0x3aa69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa69c) {
            ctx->pc = 0x3AA6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA69Cu;
            // 0x3aa6a0: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA6C0u;
            goto label_3aa6c0;
        }
    }
    ctx->pc = 0x3AA6A4u;
label_3aa6a4:
    // 0x3aa6a4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3aa6a8:
    // 0x3aa6a8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3aa6ac:
    // 0x3aa6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa6b0:
    // 0x3aa6b0: 0x2484ee70  addiu       $a0, $a0, -0x1190
    ctx->pc = 0x3aa6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962800));
label_3aa6b4:
    // 0x3aa6b4: 0x24a5edc0  addiu       $a1, $a1, -0x1240
    ctx->pc = 0x3aa6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
label_3aa6b8:
    // 0x3aa6b8: 0x80ea7ec  j           func_3A9FB0
label_3aa6bc:
    if (ctx->pc == 0x3AA6BCu) {
        ctx->pc = 0x3AA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6B8u;
        // 0x3aa6bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA6C0u;
        goto label_3aa6c0;
    }
    ctx->pc = 0x3AA6B8u;
    ctx->pc = 0x3AA6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA6B8u;
    // 0x3aa6bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9FB0u;
    sub_003A9FB0_0x3a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA6C0u;
label_3aa6c0:
    // 0x3aa6c0: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_3aa6c4:
    if (ctx->pc == 0x3AA6C4u) {
        ctx->pc = 0x3AA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6C0u;
        // 0x3aa6c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA6C8u;
        goto label_3aa6c8;
    }
    ctx->pc = 0x3AA6C0u;
    {
        const bool branch_taken_0x3aa6c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3AA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6C0u;
        // 0x3aa6c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6c0) {
            ctx->pc = 0x3AA704u;
            goto label_3aa704;
        }
    }
    ctx->pc = 0x3AA6C8u;
label_3aa6c8:
    // 0x3aa6c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3aa6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3aa6cc:
    // 0x3aa6cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3aa6d0:
    if (ctx->pc == 0x3AA6D0u) {
        ctx->pc = 0x3AA6D4u;
        goto label_3aa6d4;
    }
    ctx->pc = 0x3AA6CCu;
    {
        const bool branch_taken_0x3aa6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa6cc) {
            ctx->pc = 0x3AA704u;
            goto label_3aa704;
        }
    }
    ctx->pc = 0x3AA6D4u;
label_3aa6d4:
    // 0x3aa6d4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_3aa6d8:
    if (ctx->pc == 0x3AA6D8u) {
        ctx->pc = 0x3AA6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6D4u;
        // 0x3aa6d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA6DCu;
        goto label_3aa6dc;
    }
    ctx->pc = 0x3AA6D4u;
    {
        const bool branch_taken_0x3aa6d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6D4u;
        // 0x3aa6d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6d4) {
            ctx->pc = 0x3AA704u;
            goto label_3aa704;
        }
    }
    ctx->pc = 0x3AA6DCu;
label_3aa6dc:
    // 0x3aa6dc: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_3aa6e0:
    if (ctx->pc == 0x3AA6E0u) {
        ctx->pc = 0x3AA6E4u;
        goto label_3aa6e4;
    }
    ctx->pc = 0x3AA6DCu;
    {
        const bool branch_taken_0x3aa6dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3aa6dc) {
            ctx->pc = 0x3AA704u;
            goto label_3aa704;
        }
    }
    ctx->pc = 0x3AA6E4u;
label_3aa6e4:
    // 0x3aa6e4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x3aa6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3aa6e8:
    // 0x3aa6e8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x3aa6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_3aa6ec:
    // 0x3aa6ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3aa6f0:
    if (ctx->pc == 0x3AA6F0u) {
        ctx->pc = 0x3AA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6ECu;
        // 0x3aa6f0: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA6F4u;
        goto label_3aa6f4;
    }
    ctx->pc = 0x3AA6ECu;
    {
        const bool branch_taken_0x3aa6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6ECu;
        // 0x3aa6f0: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6ec) {
            ctx->pc = 0x3AA704u;
            goto label_3aa704;
        }
    }
    ctx->pc = 0x3AA6F4u;
label_3aa6f4:
    // 0x3aa6f4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x3aa6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3aa6f8:
    // 0x3aa6f8: 0x40f809  jalr        $v0
label_3aa6fc:
    if (ctx->pc == 0x3AA6FCu) {
        ctx->pc = 0x3AA6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6F8u;
        // 0x3aa6fc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA700u;
        goto label_3aa700;
    }
    ctx->pc = 0x3AA6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA700u);
        ctx->pc = 0x3AA6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6F8u;
        // 0x3aa6fc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA6F8u, 0x3AA700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA700u;
label_3aa700:
    // 0x3aa700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa704:
    // 0x3aa704: 0x3e00008  jr          $ra
label_3aa708:
    if (ctx->pc == 0x3AA708u) {
        ctx->pc = 0x3AA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA704u;
        // 0x3aa708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA70Cu;
        goto label_3aa70c;
    }
    ctx->pc = 0x3AA704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA704u;
        // 0x3aa708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA70Cu;
label_3aa70c:
    // 0x3aa70c: 0x0  nop
    ctx->pc = 0x3aa70cu;
    // NOP
    ctx->pc = 0x3aa710u;
}
