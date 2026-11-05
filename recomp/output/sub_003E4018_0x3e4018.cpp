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

// Function: sub_003E4018
// Address: 0x3e4018 - 0x3e40c8
void sub_003E4018_0x3e4018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4018_0x3e4018");
#endif

    switch (ctx->pc) {
        case 0x3e4058u: goto label_3e4058;
        case 0x3e4078u: goto label_3e4078;
        default: break;
    }

    ctx->pc = 0x3e4018u;

    // 0x3e4018: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3e4018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e401c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E401Cu;
    {
        const bool branch_taken_0x3e401c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e401c) {
            ctx->pc = 0x3E4020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E401Cu;
            // 0x3e4020: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E403Cu;
            goto label_3e403c;
        }
    }
    ctx->pc = 0x3E4024u;
    // 0x3e4024: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3e4024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e4028: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3e4028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e402c: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E402Cu;
    {
        const bool branch_taken_0x3e402c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e402c) {
            ctx->pc = 0x3E4030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E402Cu;
            // 0x3e4030: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E403Cu;
            goto label_3e403c;
        }
    }
    ctx->pc = 0x3E4034u;
    // 0x3e4034: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3E4034u;
    {
        const bool branch_taken_0x3e4034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4034u;
        // 0x3e4038: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4034) {
            ctx->pc = 0x3E4090u;
            goto label_3e4090;
        }
    }
    ctx->pc = 0x3E403Cu;
label_3e403c:
    // 0x3e403c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E403Cu;
    {
        const bool branch_taken_0x3e403c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e403c) {
            ctx->pc = 0x3E4040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E403Cu;
            // 0x3e4040: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E407Cu;
            goto label_3e407c;
        }
    }
    ctx->pc = 0x3E4044u;
    // 0x3e4044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e4044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4048: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3e4048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3e404c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E404Cu;
    {
        const bool branch_taken_0x3e404c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E404Cu;
        // 0x3e4050: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e404c) {
            ctx->pc = 0x3E4094u;
            goto label_3e4094;
        }
    }
    ctx->pc = 0x3E4054u;
    // 0x3e4054: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3e4054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3e4058:
    // 0x3e4058: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3e4058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3e405c: 0x0  nop
    ctx->pc = 0x3e405cu;
    // NOP
    // 0x3e4060: 0x0  nop
    ctx->pc = 0x3e4060u;
    // NOP
    // 0x3e4064: 0x0  nop
    ctx->pc = 0x3e4064u;
    // NOP
    // 0x3e4068: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E4068u;
    {
        const bool branch_taken_0x3e4068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4068) {
            ctx->pc = 0x3E406Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4068u;
            // 0x3e406c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4058;
        }
    }
    ctx->pc = 0x3E4070u;
    // 0x3e4070: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4070u;
        // 0x3e4074: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4078u;
label_3e4078:
    // 0x3e4078: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3e4078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3e407c:
    // 0x3e407c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3e4080: 0x0  nop
    ctx->pc = 0x3e4080u;
    // NOP
    // 0x3e4084: 0x0  nop
    ctx->pc = 0x3e4084u;
    // NOP
    // 0x3e4088: 0x1082fffb  beq         $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E4088u;
    {
        const bool branch_taken_0x3e4088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4088u;
        // 0x3e408c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4088) {
            ctx->pc = 0x3E4078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4078;
        }
    }
    ctx->pc = 0x3E4090u;
label_3e4090:
    // 0x3e4090: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e4090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e4094:
    // 0x3e4094: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E409Cu;
    // 0x3e409c: 0x0  nop
    ctx->pc = 0x3e409cu;
    // NOP
    // 0x3e40a0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3e40a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e40a4: 0x0  nop
    ctx->pc = 0x3e40a4u;
    // NOP
    // 0x3e40a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3e40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e40ac: 0x0  nop
    ctx->pc = 0x3e40acu;
    // NOP
    // 0x3e40b0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3e40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3e40b4: 0x0  nop
    ctx->pc = 0x3e40b4u;
    // NOP
    // 0x3e40b8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x3e40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x3e40bc: 0x0  nop
    ctx->pc = 0x3e40bcu;
    // NOP
    // 0x3e40c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e40c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e40c4: 0x0  nop
    ctx->pc = 0x3e40c4u;
    // NOP
    ctx->pc = 0x3e40c8u;
}
