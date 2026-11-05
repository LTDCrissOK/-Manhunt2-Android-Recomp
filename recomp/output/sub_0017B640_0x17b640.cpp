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

// Function: sub_0017B640
// Address: 0x17b640 - 0x17b838
void sub_0017B640_0x17b640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B640_0x17b640");
#endif

    switch (ctx->pc) {
        case 0x17b6b0u: goto label_17b6b0;
        case 0x17b7f8u: goto label_17b7f8;
        default: break;
    }

    ctx->pc = 0x17b640u;

    // 0x17b640: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17b640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17b644: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x17b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17b648: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x17b648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17b64c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x17b64cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b650: 0x91430584  lbu         $v1, 0x584($t2)
    ctx->pc = 0x17b650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1412)));
    // 0x17b654: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x17b654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17b658: 0x24a50210  addiu       $a1, $a1, 0x210
    ctx->pc = 0x17b658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 528));
    // 0x17b65c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B65Cu;
    {
        const bool branch_taken_0x17b65c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B65Cu;
        // 0x17b660: 0x1454821  addu        $t1, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b65c) {
            ctx->pc = 0x17B674u;
            goto label_17b674;
        }
    }
    ctx->pc = 0x17B664u;
    // 0x17b664: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x17b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17b668: 0xad490534  sw          $t1, 0x534($t2)
    ctx->pc = 0x17b668u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1332), GPR_U32(ctx, 9));
    // 0x17b66c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B66Cu;
        // 0x17b670: 0xa1420584  sb          $v0, 0x584($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 1412), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B674u;
label_17b674:
    // 0x17b674: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x17b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17b678: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x17b678u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b67c: 0x8d2b0010  lw          $t3, 0x10($t1)
    ctx->pc = 0x17b67cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x17b680: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x17b680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17b684: 0x2c4c0001  sltiu       $t4, $v0, 0x1
    ctx->pc = 0x17b684u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17b688: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b68c: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x17B68Cu;
    {
        const bool branch_taken_0x17b68c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B68Cu;
        // 0x17b690: 0x254d0534  addiu       $t5, $t2, 0x534 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 1332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b68c) {
            ctx->pc = 0x17B7A8u;
            goto label_17b7a8;
        }
    }
    ctx->pc = 0x17B694u;
    // 0x17b694: 0x8d450534  lw          $a1, 0x534($t2)
    ctx->pc = 0x17b694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1332)));
    // 0x17b698: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x17b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17b69c: 0x6b102a  slt         $v0, $v1, $t3
    ctx->pc = 0x17b69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x17b6a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B6A0u;
    {
        const bool branch_taken_0x17b6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6A0u;
        // 0x17b6a4: 0x163102a  slt         $v0, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6a0) {
            ctx->pc = 0x17B6B0u;
            goto label_17b6b0;
        }
    }
    ctx->pc = 0x17B6A8u;
    // 0x17b6a8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x17B6A8u;
    {
        const bool branch_taken_0x17b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6A8u;
        // 0x17b6ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6a8) {
            ctx->pc = 0x17B7A8u;
            goto label_17b7a8;
        }
    }
    ctx->pc = 0x17B6B0u;
label_17b6b0:
    // 0x17b6b0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x17B6B0u;
    {
        const bool branch_taken_0x17b6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6B0u;
        // 0x17b6b4: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6b0) {
            ctx->pc = 0x17B778u;
            goto label_17b778;
        }
    }
    ctx->pc = 0x17B6B8u;
    // 0x17b6b8: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x17b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x17b6bc: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x17b6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17b6c0: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B6C0u;
    {
        const bool branch_taken_0x17b6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x17B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6C0u;
        // 0x17b6c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6c0) {
            ctx->pc = 0x17B6D0u;
            goto label_17b6d0;
        }
    }
    ctx->pc = 0x17B6C8u;
    // 0x17b6c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b6cc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x17b6ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17b6d0:
    // 0x17b6d0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x17b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x17b6d4: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B6D4u;
    {
        const bool branch_taken_0x17b6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x17B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6D4u;
        // 0x17b6d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6d4) {
            ctx->pc = 0x17B6E4u;
            goto label_17b6e4;
        }
    }
    ctx->pc = 0x17B6DCu;
    // 0x17b6dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b6e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17b6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17b6e4:
    // 0x17b6e4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x17b6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17b6e8: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x17B6E8u;
    {
        const bool branch_taken_0x17b6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6E8u;
        // 0x17b6ec: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6e8) {
            ctx->pc = 0x17B7A4u;
            goto label_17b7a4;
        }
    }
    ctx->pc = 0x17B6F0u;
    // 0x17b6f0: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x17B6F0u;
    {
        const bool branch_taken_0x17b6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b6f0) {
            ctx->pc = 0x17B6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B6F0u;
            // 0x17b6f4: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B778u;
            goto label_17b778;
        }
    }
    ctx->pc = 0x17B6F8u;
    // 0x17b6f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b6fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x17b6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17b700: 0x504c0005  beql        $v0, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B700u;
    {
        const bool branch_taken_0x17b700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x17b700) {
            ctx->pc = 0x17B704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B700u;
            // 0x17b704: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B718u;
            goto label_17b718;
        }
    }
    ctx->pc = 0x17B708u;
    // 0x17b708: 0x5180001b  beql        $t4, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x17B708u;
    {
        const bool branch_taken_0x17b708 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b708) {
            ctx->pc = 0x17B70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B708u;
            // 0x17b70c: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B778u;
            goto label_17b778;
        }
    }
    ctx->pc = 0x17B710u;
    // 0x17b710: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x17B710u;
    {
        const bool branch_taken_0x17b710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B710u;
        // 0x17b714: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b710) {
            ctx->pc = 0x17B7A8u;
            goto label_17b7a8;
        }
    }
    ctx->pc = 0x17B718u;
label_17b718:
    // 0x17b718: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x17b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x17b71c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B71Cu;
    {
        const bool branch_taken_0x17b71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B71Cu;
        // 0x17b720: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b71c) {
            ctx->pc = 0x17B734u;
            goto label_17b734;
        }
    }
    ctx->pc = 0x17B724u;
    // 0x17b724: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B724u;
    {
        const bool branch_taken_0x17b724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b724) {
            ctx->pc = 0x17B728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B724u;
            // 0x17b728: 0x9124001c  lbu         $a0, 0x1C($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B740u;
            goto label_17b740;
        }
    }
    ctx->pc = 0x17B72Cu;
    // 0x17b72c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17B72Cu;
    {
        const bool branch_taken_0x17b72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B72Cu;
        // 0x17b730: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b72c) {
            ctx->pc = 0x17B7A8u;
            goto label_17b7a8;
        }
    }
    ctx->pc = 0x17B734u;
label_17b734:
    // 0x17b734: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B734u;
    {
        const bool branch_taken_0x17b734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B734u;
        // 0x17b738: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b734) {
            ctx->pc = 0x17B778u;
            goto label_17b778;
        }
    }
    ctx->pc = 0x17B73Cu;
    // 0x17b73c: 0x9124001c  lbu         $a0, 0x1C($t1)
    ctx->pc = 0x17b73cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 28)));
label_17b740:
    // 0x17b740: 0x90a3001c  lbu         $v1, 0x1C($a1)
    ctx->pc = 0x17b740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x17b744: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x17b744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17b748: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17B748u;
    {
        const bool branch_taken_0x17b748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B748u;
        // 0x17b74c: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b748) {
            ctx->pc = 0x17B7A4u;
            goto label_17b7a4;
        }
    }
    ctx->pc = 0x17B750u;
    // 0x17b750: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B750u;
    {
        const bool branch_taken_0x17b750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B750u;
        // 0x17b754: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b750) {
            ctx->pc = 0x17B778u;
            goto label_17b778;
        }
    }
    ctx->pc = 0x17B758u;
    // 0x17b758: 0x90a4001e  lbu         $a0, 0x1E($a1)
    ctx->pc = 0x17b758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x17b75c: 0x9123001e  lbu         $v1, 0x1E($t1)
    ctx->pc = 0x17b75cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 30)));
    // 0x17b760: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x17b760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17b764: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17B764u;
    {
        const bool branch_taken_0x17b764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B764u;
        // 0x17b768: 0x64102b  sltu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b764) {
            ctx->pc = 0x17B7A4u;
            goto label_17b7a4;
        }
    }
    ctx->pc = 0x17B76Cu;
    // 0x17b76c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x17B76Cu;
    {
        const bool branch_taken_0x17b76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b76c) {
            ctx->pc = 0x17B770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B76Cu;
            // 0x17b770: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B7A8u;
            goto label_17b7a8;
        }
    }
    ctx->pc = 0x17B774u;
    // 0x17b774: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x17b774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_17b778:
    // 0x17b778: 0x31c200ff  andi        $v0, $t6, 0xFF
    ctx->pc = 0x17b778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x17b77c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x17b77cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17b780: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x17b780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17b784: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B784u;
    {
        const bool branch_taken_0x17b784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B784u;
        // 0x17b788: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b784) {
            ctx->pc = 0x17B7A8u;
            goto label_17b7a8;
        }
    }
    ctx->pc = 0x17B78Cu;
    // 0x17b78c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x17b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x17b790: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17b790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b794: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x17b794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17b798: 0x6b102a  slt         $v0, $v1, $t3
    ctx->pc = 0x17b798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x17b79c: 0x1040ffc4  beqz        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x17B79Cu;
    {
        const bool branch_taken_0x17b79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B79Cu;
        // 0x17b7a0: 0x163102a  slt         $v0, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b79c) {
            ctx->pc = 0x17B6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b6b0;
        }
    }
    ctx->pc = 0x17B7A4u;
label_17b7a4:
    // 0x17b7a4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x17b7a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17b7a8:
    // 0x17b7a8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x17b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17b7ac: 0x51020001  beql        $t0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x17B7ACu;
    {
        const bool branch_taken_0x17b7ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b7ac) {
            ctx->pc = 0x17B7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B7ACu;
            // 0x17b7b0: 0x91480584  lbu         $t0, 0x584($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B7B4u;
            goto label_17b7b4;
        }
    }
    ctx->pc = 0x17B7B4u;
label_17b7b4:
    // 0x17b7b4: 0xe1600  sll         $v0, $t6, 24
    ctx->pc = 0x17b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x17b7b8: 0x86080  sll         $t4, $t0, 2
    ctx->pc = 0x17b7b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x17b7bc: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x17b7bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
    // 0x17b7c0: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x17b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x17b7c4: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x17b7c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x17b7c8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x17b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x17b7cc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17B7CCu;
    {
        const bool branch_taken_0x17b7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7CCu;
        // 0x17b7d0: 0x31e03  sra         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7cc) {
            ctx->pc = 0x17B81Cu;
            goto label_17b81c;
        }
    }
    ctx->pc = 0x17B7D4u;
    // 0x17b7d4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x17b7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17b7d8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x17b7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17b7dc: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x17b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x17b7e0: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x17b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x17b7e4: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x17b7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17b7e8: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x17b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x17b7ec: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x17b7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x17b7f0: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x17b7f0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x17b7f4: 0x0  nop
    ctx->pc = 0x17b7f4u;
    // NOP
label_17b7f8:
    // 0x17b7f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b7fc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x17b7fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b800: 0x33603  sra         $a2, $v1, 24
    ctx->pc = 0x17b800u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 24));
    // 0x17b804: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x17b804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x17b808: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x17b808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x17b80c: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x17b80cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x17b810: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x17b810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x17b814: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B814u;
    {
        const bool branch_taken_0x17b814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B814u;
        // 0x17b818: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b814) {
            ctx->pc = 0x17B7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b7f8;
        }
    }
    ctx->pc = 0x17B81Cu;
label_17b81c:
    // 0x17b81c: 0x1ac1821  addu        $v1, $t5, $t4
    ctx->pc = 0x17b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x17b820: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x17b820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x17b824: 0x91420584  lbu         $v0, 0x584($t2)
    ctx->pc = 0x17b824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1412)));
    // 0x17b828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b82c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B82Cu;
        // 0x17b830: 0xa1420584  sb          $v0, 0x584($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 1412), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B834u;
    // 0x17b834: 0x0  nop
    ctx->pc = 0x17b834u;
    // NOP
    ctx->pc = 0x17b838u;
}
