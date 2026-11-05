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

// Function: sub_001F99C0
// Address: 0x1f99c0 - 0x1f9aa8
void sub_001F99C0_0x1f99c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F99C0_0x1f99c0");
#endif

    switch (ctx->pc) {
        case 0x1f99e0u: goto label_1f99e0;
        case 0x1f9a18u: goto label_1f9a18;
        case 0x1f9a70u: goto label_1f9a70;
        default: break;
    }

    ctx->pc = 0x1f99c0u;

    // 0x1f99c0: 0x4a00037  bltz        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F99C0u;
    {
        const bool branch_taken_0x1f99c0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1F99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99C0u;
        // 0x1f99c4: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99c0) {
            ctx->pc = 0x1F9AA0u;
            goto label_1f9aa0;
        }
    }
    ctx->pc = 0x1F99C8u;
    // 0x1f99c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f99c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f99cc: 0x256d35ac  addiu       $t5, $t3, 0x35AC
    ctx->pc = 0x1f99ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 13740));
    // 0x1f99d0: 0x240f002e  addiu       $t7, $zero, 0x2E
    ctx->pc = 0x1f99d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1f99d4: 0x240e19e0  addiu       $t6, $zero, 0x19E0
    ctx->pc = 0x1f99d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6624));
    // 0x1f99d8: 0x1a91821  addu        $v1, $t5, $t1
    ctx->pc = 0x1f99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x1f99dc: 0x0  nop
    ctx->pc = 0x1f99dcu;
    // NOP
label_1f99e0:
    // 0x1f99e0: 0x906a0000  lbu         $t2, 0x0($v1)
    ctx->pc = 0x1f99e0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f99e4: 0x2d42002e  sltiu       $v0, $t2, 0x2E
    ctx->pc = 0x1f99e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x1f99e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F99E8u;
    {
        const bool branch_taken_0x1f99e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99E8u;
        // 0x1f99ec: 0x252c0001  addiu       $t4, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99e8) {
            ctx->pc = 0x1F9A50u;
            goto label_1f9a50;
        }
    }
    ctx->pc = 0x1F99F0u;
    // 0x1f99f0: 0x11400017  beqz        $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F99F0u;
    {
        const bool branch_taken_0x1f99f0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99F0u;
        // 0x1f99f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99f0) {
            ctx->pc = 0x1F9A50u;
            goto label_1f9a50;
        }
    }
    ctx->pc = 0x1F99F8u;
    // 0x1f99f8: 0x12e1018  mult        $v0, $t1, $t6
    ctx->pc = 0x1f99f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f99fc: 0x25643550  addiu       $a0, $t3, 0x3550
    ctx->pc = 0x1f99fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 13648));
    // 0x1f9a00: 0x12f4818  mult        $t1, $t1, $t7
    ctx->pc = 0x1f9a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1f9a04: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x1f9a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f9a08: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x1f9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1f9a0c: 0x1624021  addu        $t0, $t3, $v0
    ctx->pc = 0x1f9a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1f9a10: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x1f9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1f9a14: 0x0  nop
    ctx->pc = 0x1f9a14u;
    // NOP
label_1f9a18:
    // 0x1f9a18: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f9a1c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f9a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9a20: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x1f9a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f9a24: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x1f9a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1f9a28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9A28u;
    {
        const bool branch_taken_0x1f9a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A28u;
        // 0x1f9a2c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a28) {
            ctx->pc = 0x1F9A40u;
            goto label_1f9a40;
        }
    }
    ctx->pc = 0x1F9A30u;
    // 0x1f9a30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9a34: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9A34u;
    {
        const bool branch_taken_0x1f9a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f9a34) {
            ctx->pc = 0x1F9A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9A34u;
            // 0x1f9a38: 0xac600054  sw          $zero, 0x54($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9A3Cu;
            goto label_1f9a3c;
        }
    }
    ctx->pc = 0x1F9A3Cu;
label_1f9a3c:
    // 0x1f9a3c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1f9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f9a40:
    // 0x1f9a40: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1f9a40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9a44: 0xea182b  sltu        $v1, $a3, $t2
    ctx->pc = 0x1f9a44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1f9a48: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F9A48u;
    {
        const bool branch_taken_0x1f9a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A48u;
        // 0x1f9a4c: 0xe91021  addu        $v0, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a48) {
            ctx->pc = 0x1F9A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9a18;
        }
    }
    ctx->pc = 0x1F9A50u;
label_1f9a50:
    // 0x1f9a50: 0x318900ff  andi        $t1, $t4, 0xFF
    ctx->pc = 0x1f9a50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x1f9a54: 0x2d220002  sltiu       $v0, $t1, 0x2
    ctx->pc = 0x1f9a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f9a58: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1F9A58u;
    {
        const bool branch_taken_0x1f9a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A58u;
        // 0x1f9a5c: 0x1a91821  addu        $v1, $t5, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a58) {
            ctx->pc = 0x1F99E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f99e0;
        }
    }
    ctx->pc = 0x1F9A60u;
    // 0x1f9a60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f9a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9a64: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x1f9a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f9a68: 0x861018  mult        $v0, $a0, $a2
    ctx->pc = 0x1f9a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f9a6c: 0x0  nop
    ctx->pc = 0x1f9a6cu;
    // NOP
label_1f9a70:
    // 0x1f9a70: 0x244235b0  addiu       $v0, $v0, 0x35B0
    ctx->pc = 0x1f9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13744));
    // 0x1f9a74: 0x1621821  addu        $v1, $t3, $v0
    ctx->pc = 0x1f9a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1f9a78: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9A78u;
    {
        const bool branch_taken_0x1f9a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A78u;
        // 0x1f9a7c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a78) {
            ctx->pc = 0x1F9A90u;
            goto label_1f9a90;
        }
    }
    ctx->pc = 0x1F9A80u;
    // 0x1f9a80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9a84: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9A84u;
    {
        const bool branch_taken_0x1f9a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f9a84) {
            ctx->pc = 0x1F9A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9A84u;
            // 0x1f9a88: 0xac600054  sw          $zero, 0x54($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9A8Cu;
            goto label_1f9a8c;
        }
    }
    ctx->pc = 0x1F9A8Cu;
label_1f9a8c:
    // 0x1f9a8c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f9a90:
    // 0x1f9a90: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1f9a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9a94: 0x2c83002e  sltiu       $v1, $a0, 0x2E
    ctx->pc = 0x1f9a94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x1f9a98: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F9A98u;
    {
        const bool branch_taken_0x1f9a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A98u;
        // 0x1f9a9c: 0x861018  mult        $v0, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a98) {
            ctx->pc = 0x1F9A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9a70;
        }
    }
    ctx->pc = 0x1F9AA0u;
label_1f9aa0:
    // 0x1f9aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9AA8u;
}
