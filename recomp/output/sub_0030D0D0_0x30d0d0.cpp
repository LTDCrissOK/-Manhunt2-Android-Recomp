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

// Function: sub_0030D0D0
// Address: 0x30d0d0 - 0x30d190
void sub_0030D0D0_0x30d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D0D0_0x30d0d0");
#endif

    switch (ctx->pc) {
        case 0x30d0f0u: goto label_30d0f0;
        case 0x30d108u: goto label_30d108;
        case 0x30d160u: goto label_30d160;
        default: break;
    }

    ctx->pc = 0x30d0d0u;

    // 0x30d0d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x30d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x30d0d4: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x30d0d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d0d8: 0x244b0c11  addiu       $t3, $v0, 0xC11
    ctx->pc = 0x30d0d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 3089));
    // 0x30d0dc: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x30d0dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d0e0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x30d0e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d0e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30d0e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d0e8: 0x240e0016  addiu       $t6, $zero, 0x16
    ctx->pc = 0x30d0e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x30d0ec: 0x0  nop
    ctx->pc = 0x30d0ecu;
    // NOP
label_30d0f0:
    // 0x30d0f0: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x30d0f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x30d0f4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30D0F4u;
    {
        const bool branch_taken_0x30d0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0F4u;
        // 0x30d0f8: 0x1aa1821  addu        $v1, $t5, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d0f4) {
            ctx->pc = 0x30D120u;
            goto label_30d120;
        }
    }
    ctx->pc = 0x30D0FCu;
    // 0x30d0fc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x30d0fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d100: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D100u;
    {
        const bool branch_taken_0x30d100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d100) {
            ctx->pc = 0x30D110u;
            goto label_30d110;
        }
    }
    ctx->pc = 0x30D108u;
label_30d108:
    // 0x30d108: 0x3e00008  jr          $ra
    ctx->pc = 0x30D108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D108u;
        // 0x30d10c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D110u;
label_30d110:
    // 0x30d110: 0x0  nop
    ctx->pc = 0x30d110u;
    // NOP
    // 0x30d114: 0x0  nop
    ctx->pc = 0x30d114u;
    // NOP
    // 0x30d118: 0x114efffb  beq         $t2, $t6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30D118u;
    {
        const bool branch_taken_0x30d118 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 14));
        if (branch_taken_0x30d118) {
            ctx->pc = 0x30D108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d108;
        }
    }
    ctx->pc = 0x30D120u;
label_30d120:
    // 0x30d120: 0x51800011  beql        $t4, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x30D120u;
    {
        const bool branch_taken_0x30d120 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d120) {
            ctx->pc = 0x30D124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D120u;
            // 0x30d124: 0x80630000  lb          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D168u;
            goto label_30d168;
        }
    }
    ctx->pc = 0x30D128u;
    // 0x30d128: 0x80670000  lb          $a3, 0x0($v1)
    ctx->pc = 0x30d128u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d12c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x30d12cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x30d130: 0xeb2021  addu        $a0, $a3, $t3
    ctx->pc = 0x30d130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x30d134: 0x24e60020  addiu       $a2, $a3, 0x20
    ctx->pc = 0x30d134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x30d138: 0x10b2821  addu        $a1, $t0, $t3
    ctx->pc = 0x30d138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x30d13c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x30d13cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d140: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x30d140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30d144: 0x25040020  addiu       $a0, $t0, 0x20
    ctx->pc = 0x30d144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x30d148: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30d148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30d14c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30d14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30d150: 0xe2300a  movz        $a2, $a3, $v0
    ctx->pc = 0x30d150u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x30d154: 0x103200a  movz        $a0, $t0, $v1
    ctx->pc = 0x30d154u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
    // 0x30d158: 0x10c40007  beq         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D158u;
    {
        const bool branch_taken_0x30d158 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x30D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D158u;
        // 0x30d15c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d158) {
            ctx->pc = 0x30D178u;
            goto label_30d178;
        }
    }
    ctx->pc = 0x30D160u;
label_30d160:
    // 0x30d160: 0x3e00008  jr          $ra
    ctx->pc = 0x30D160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D160u;
        // 0x30d164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D168u;
label_30d168:
    // 0x30d168: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x30d168u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x30d16c: 0x0  nop
    ctx->pc = 0x30d16cu;
    // NOP
    // 0x30d170: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30D170u;
    {
        const bool branch_taken_0x30d170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D170u;
        // 0x30d174: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d170) {
            ctx->pc = 0x30D160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d160;
        }
    }
    ctx->pc = 0x30D178u;
label_30d178:
    // 0x30d178: 0x2d420017  sltiu       $v0, $t2, 0x17
    ctx->pc = 0x30d178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x30d17c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x30D17Cu;
    {
        const bool branch_taken_0x30d17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D17Cu;
        // 0x30d180: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d17c) {
            ctx->pc = 0x30D0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d0f0;
        }
    }
    ctx->pc = 0x30D184u;
    // 0x30d184: 0x3e00008  jr          $ra
    ctx->pc = 0x30D184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D184u;
        // 0x30d188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D18Cu;
    // 0x30d18c: 0x0  nop
    ctx->pc = 0x30d18cu;
    // NOP
    ctx->pc = 0x30d190u;
}
