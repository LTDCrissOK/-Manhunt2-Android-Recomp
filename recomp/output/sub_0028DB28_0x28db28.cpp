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

// Function: sub_0028DB28
// Address: 0x28db28 - 0x28db98
void sub_0028DB28_0x28db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DB28_0x28db28");
#endif

    switch (ctx->pc) {
        case 0x28db40u: goto label_28db40;
        default: break;
    }

    ctx->pc = 0x28db28u;

    // 0x28db28: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28db28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28db2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28db2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db30: 0x244aa540  addiu       $t2, $v0, -0x5AC0
    ctx->pc = 0x28db30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944064));
    // 0x28db34: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x28db34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x28db38: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x28db38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28db3c: 0x0  nop
    ctx->pc = 0x28db3cu;
    // NOP
label_28db40:
    // 0x28db40: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x28db40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x28db44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28db44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28db48: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x28db48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28db4c: 0x6a3021  addu        $a2, $v1, $t2
    ctx->pc = 0x28db4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x28db50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28db50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28db54: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x28DB54u;
    {
        const bool branch_taken_0x28db54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x28DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB54u;
        // 0x28db58: 0x64e70001  daddiu      $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db54) {
            ctx->pc = 0x28DB80u;
            goto label_28db80;
        }
    }
    ctx->pc = 0x28DB5Cu;
    // 0x28db5c: 0x90c30008  lbu         $v1, 0x8($a2)
    ctx->pc = 0x28db5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x28db60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28db60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28db64: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x28db64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28db68: 0x90c4000c  lbu         $a0, 0xC($a2)
    ctx->pc = 0x28db68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x28db6c: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x28db6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x28db70: 0x90c30010  lbu         $v1, 0x10($a2)
    ctx->pc = 0x28db70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x28db74: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x28db74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x28db78: 0x3e00008  jr          $ra
    ctx->pc = 0x28DB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB78u;
        // 0x28db7c: 0xa0a30002  sb          $v1, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DB80u;
label_28db80:
    // 0x28db80: 0x28e2001e  slti        $v0, $a3, 0x1E
    ctx->pc = 0x28db80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x28db84: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x28DB84u;
    {
        const bool branch_taken_0x28db84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB84u;
        // 0x28db88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db84) {
            ctx->pc = 0x28DB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28db40;
        }
    }
    ctx->pc = 0x28DB8Cu;
    // 0x28db8c: 0x3e00008  jr          $ra
    ctx->pc = 0x28DB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DB94u;
    // 0x28db94: 0x0  nop
    ctx->pc = 0x28db94u;
    // NOP
    ctx->pc = 0x28db98u;
}
