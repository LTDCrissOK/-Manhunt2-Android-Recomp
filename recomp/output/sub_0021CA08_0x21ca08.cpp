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

// Function: sub_0021CA08
// Address: 0x21ca08 - 0x21ca98
void sub_0021CA08_0x21ca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CA08_0x21ca08");
#endif

    switch (ctx->pc) {
        case 0x21ca30u: goto label_21ca30;
        case 0x21ca50u: goto label_21ca50;
        default: break;
    }

    ctx->pc = 0x21ca08u;

    // 0x21ca08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ca08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ca0c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x21ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x21ca10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ca10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ca14: 0x244434c0  addiu       $a0, $v0, 0x34C0
    ctx->pc = 0x21ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13504));
    // 0x21ca18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21ca1c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A34C4u));
    // 0x21ca20: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x21ca20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A34CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34CCu, _value); } while (0);
    // 0x21ca24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21CA24u;
    {
        const bool branch_taken_0x21ca24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA24u;
        // 0x21ca28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca24) {
            ctx->pc = 0x21CA50u;
            goto label_21ca50;
        }
    }
    ctx->pc = 0x21CA2Cu;
    // 0x21ca2c: 0x0  nop
    ctx->pc = 0x21ca2cu;
    // NOP
label_21ca30:
    // 0x21ca30: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CA30u;
    {
        const bool branch_taken_0x21ca30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x21ca30) {
            ctx->pc = 0x21CA48u;
            goto label_21ca48;
        }
    }
    ctx->pc = 0x21CA38u;
    // 0x21ca38: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CA38u;
    {
        const bool branch_taken_0x21ca38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x21CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA38u;
        // 0x21ca3c: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca38) {
            ctx->pc = 0x21CA48u;
            goto label_21ca48;
        }
    }
    ctx->pc = 0x21CA40u;
    // 0x21ca40: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CA40u;
    {
        const bool branch_taken_0x21ca40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA40u;
        // 0x21ca44: 0x260534c0  addiu       $a1, $s0, 0x34C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca40) {
            ctx->pc = 0x21CA54u;
            goto label_21ca54;
        }
    }
    ctx->pc = 0x21CA48u;
label_21ca48:
    // 0x21ca48: 0xc088078  jal         func_2201E0
    ctx->pc = 0x21CA48u;
    SET_GPR_U32(ctx, 31, 0x21CA50u);
    ctx->pc = 0x21CA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA48u;
    // 0x21ca4c: 0x8d0595d8  lw          $a1, -0x6A28($t0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294940120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2201E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2201E0u, 0x21CA48u, 0x21CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA50u;
label_21ca50:
    // 0x21ca50: 0x260534c0  addiu       $a1, $s0, 0x34C0
    ctx->pc = 0x21ca50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13504));
label_21ca54:
    // 0x21ca54: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x21ca54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x21ca58: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x21ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21ca5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21ca5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca60: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x21ca60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x21ca64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21CA64u;
    {
        const bool branch_taken_0x21ca64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA64u;
        // 0x21ca68: 0x2407020f  addiu       $a3, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca64) {
            ctx->pc = 0x21CA70u;
            goto label_21ca70;
        }
    }
    ctx->pc = 0x21CA6Cu;
    // 0x21ca6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ca70:
    // 0x21ca70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CA70u;
    {
        const bool branch_taken_0x21ca70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA70u;
        // 0x21ca74: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca70) {
            ctx->pc = 0x21CA80u;
            goto label_21ca80;
        }
    }
    ctx->pc = 0x21CA78u;
    // 0x21ca78: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21ca7c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x21ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_21ca80:
    // 0x21ca80: 0x5460ffeb  bnel        $v1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x21CA80u;
    {
        const bool branch_taken_0x21ca80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ca80) {
            ctx->pc = 0x21CA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CA80u;
            // 0x21ca84: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ca30;
        }
    }
    ctx->pc = 0x21CA88u;
    // 0x21ca88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ca88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ca8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21ca8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ca90: 0x3e00008  jr          $ra
    ctx->pc = 0x21CA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA90u;
        // 0x21ca94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CA98u;
}
