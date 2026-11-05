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

// Function: sub_0021BE80
// Address: 0x21be80 - 0x21bef0
void sub_0021BE80_0x21be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BE80_0x21be80");
#endif

    switch (ctx->pc) {
        case 0x21bea8u: goto label_21bea8;
        case 0x21beb0u: goto label_21beb0;
        default: break;
    }

    ctx->pc = 0x21be80u;

    // 0x21be80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21be84: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x21be84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x21be88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21be8c: 0x24443510  addiu       $a0, $v0, 0x3510
    ctx->pc = 0x21be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13584));
    // 0x21be90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21be94: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21be94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3514u));
    // 0x21be98: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x21be98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A351Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A351Cu, _value); } while (0);
    // 0x21be9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21BE9Cu;
    {
        const bool branch_taken_0x21be9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE9Cu;
        // 0x21bea0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be9c) {
            ctx->pc = 0x21BEB0u;
            goto label_21beb0;
        }
    }
    ctx->pc = 0x21BEA4u;
    // 0x21bea4: 0x0  nop
    ctx->pc = 0x21bea4u;
    // NOP
label_21bea8:
    // 0x21bea8: 0xc0843ea  jal         func_210FA8
    ctx->pc = 0x21BEA8u;
    SET_GPR_U32(ctx, 31, 0x21BEB0u);
    ctx->pc = 0x210FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FA8u, 0x21BEA8u, 0x21BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEB0u;
label_21beb0:
    // 0x21beb0: 0x26053510  addiu       $a1, $s0, 0x3510
    ctx->pc = 0x21beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13584));
    // 0x21beb4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x21beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21beb8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21BEB8u;
    {
        const bool branch_taken_0x21beb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEB8u;
        // 0x21bebc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21beb8) {
            ctx->pc = 0x21BEC4u;
            goto label_21bec4;
        }
    }
    ctx->pc = 0x21BEC0u;
    // 0x21bec0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21bec4:
    // 0x21bec4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BEC4u;
    {
        const bool branch_taken_0x21bec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEC4u;
        // 0x21bec8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bec4) {
            ctx->pc = 0x21BED4u;
            goto label_21bed4;
        }
    }
    ctx->pc = 0x21BECCu;
    // 0x21becc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21beccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21bed0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x21bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_21bed4:
    // 0x21bed4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x21BED4u;
    {
        const bool branch_taken_0x21bed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BED4u;
        // 0x21bed8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bed4) {
            ctx->pc = 0x21BEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bea8;
        }
    }
    ctx->pc = 0x21BEDCu;
    // 0x21bedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bee0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21bee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bee4: 0x3e00008  jr          $ra
    ctx->pc = 0x21BEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEE4u;
        // 0x21bee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BEECu;
    // 0x21beec: 0x0  nop
    ctx->pc = 0x21beecu;
    // NOP
    ctx->pc = 0x21bef0u;
}
