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

// Function: sub_002B5680
// Address: 0x2b5680 - 0x2b5748
void sub_002B5680_0x2b5680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5680_0x2b5680");
#endif

    switch (ctx->pc) {
        case 0x2b569cu: goto label_2b569c;
        default: break;
    }

    ctx->pc = 0x2b5680u;

    // 0x2b5680: 0x94860006  lhu         $a2, 0x6($a0)
    ctx->pc = 0x2b5680u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2b5684: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x2b5684u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2b5688: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2b5688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2b568c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B568Cu;
    {
        const bool branch_taken_0x2b568c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B568Cu;
        // 0x2b5690: 0xc3102b  sltu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b568c) {
            ctx->pc = 0x2B5708u;
            goto label_2b5708;
        }
    }
    ctx->pc = 0x2B5694u;
    // 0x2b5694: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5694u;
    {
        const bool branch_taken_0x2b5694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5694) {
            ctx->pc = 0x2B5698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5694u;
            // 0x2b5698: 0x90860005  lbu         $a2, 0x5($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B56A4u;
            goto label_2b56a4;
        }
    }
    ctx->pc = 0x2B569Cu;
label_2b569c:
    // 0x2b569c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B569Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B569Cu;
        // 0x2b56a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B569Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B56A4u;
label_2b56a4:
    // 0x2b56a4: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x2b56a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2b56a8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2b56a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2b56ac: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B56ACu;
    {
        const bool branch_taken_0x2b56ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B56B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56ACu;
        // 0x2b56b0: 0xc3102b  sltu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56ac) {
            ctx->pc = 0x2B5708u;
            goto label_2b5708;
        }
    }
    ctx->pc = 0x2B56B4u;
    // 0x2b56b4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B56B4u;
    {
        const bool branch_taken_0x2b56b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b56b4) {
            ctx->pc = 0x2B569Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b569c;
        }
    }
    ctx->pc = 0x2B56BCu;
    // 0x2b56bc: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x2b56bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b56c0: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x2b56c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b56c4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2b56c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2b56c8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B56C8u;
    {
        const bool branch_taken_0x2b56c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56C8u;
        // 0x2b56cc: 0xc3102b  sltu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56c8) {
            ctx->pc = 0x2B5708u;
            goto label_2b5708;
        }
    }
    ctx->pc = 0x2B56D0u;
    // 0x2b56d0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2B56D0u;
    {
        const bool branch_taken_0x2b56d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b56d0) {
            ctx->pc = 0x2B569Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b569c;
        }
    }
    ctx->pc = 0x2B56D8u;
    // 0x2b56d8: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x2b56d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2b56dc: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x2b56dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2b56e0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2b56e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2b56e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B56E4u;
    {
        const bool branch_taken_0x2b56e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56E4u;
        // 0x2b56e8: 0xc3102b  sltu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56e4) {
            ctx->pc = 0x2B5708u;
            goto label_2b5708;
        }
    }
    ctx->pc = 0x2B56ECu;
    // 0x2b56ec: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2B56ECu;
    {
        const bool branch_taken_0x2b56ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b56ec) {
            ctx->pc = 0x2B569Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b569c;
        }
    }
    ctx->pc = 0x2B56F4u;
    // 0x2b56f4: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x2b56f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2b56f8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2b56f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b56fc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2b56fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2b5700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5700u;
    {
        const bool branch_taken_0x2b5700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5700u;
        // 0x2b5704: 0xc3102b  sltu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5700) {
            ctx->pc = 0x2B5710u;
            goto label_2b5710;
        }
    }
    ctx->pc = 0x2B5708u;
label_2b5708:
    // 0x2b5708: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5708u;
        // 0x2b570c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5710u;
label_2b5710:
    // 0x2b5710: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2B5710u;
    {
        const bool branch_taken_0x2b5710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5710) {
            ctx->pc = 0x2B569Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b569c;
        }
    }
    ctx->pc = 0x2B5718u;
    // 0x2b5718: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2b5718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2b571c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x2b571cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2b5720: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2b5720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b5724: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5724u;
    {
        const bool branch_taken_0x2b5724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5724u;
        // 0x2b5728: 0x64202b  sltu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5724) {
            ctx->pc = 0x2B573Cu;
            goto label_2b573c;
        }
    }
    ctx->pc = 0x2B572Cu;
    // 0x2b572c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b5730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b5730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5734: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5734u;
        // 0x2b5738: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B573Cu;
label_2b573c:
    // 0x2b573c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B573Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B573Cu;
        // 0x2b5740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B573Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5744u;
    // 0x2b5744: 0x0  nop
    ctx->pc = 0x2b5744u;
    // NOP
    ctx->pc = 0x2b5748u;
}
