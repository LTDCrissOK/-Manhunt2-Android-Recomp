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

// Function: sub_002E5000
// Address: 0x2e5000 - 0x2e5070
void sub_002E5000_0x2e5000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5000_0x2e5000");
#endif

    switch (ctx->pc) {
        case 0x2e501cu: goto label_2e501c;
        default: break;
    }

    ctx->pc = 0x2e5000u;

    // 0x2e5000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e5004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e5008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e5008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e500c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e500cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5010: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e5014: 0xc0b93fc  jal         func_2E4FF0
    ctx->pc = 0x2E5014u;
    SET_GPR_U32(ctx, 31, 0x2E501Cu);
    ctx->pc = 0x2E5018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5014u;
    // 0x2e5018: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF0u, 0x2E5014u, 0x2E501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E501Cu;
label_2e501c:
    // 0x2e501c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2E501Cu;
    {
        const bool branch_taken_0x2e501c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e501c) {
            ctx->pc = 0x2E5020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E501Cu;
            // 0x2e5020: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5054u;
            goto label_2e5054;
        }
    }
    ctx->pc = 0x2E5024u;
    // 0x2e5024: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2e5024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2e5028: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2e5028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e502c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2e502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2e5030: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5030u;
    {
        const bool branch_taken_0x2e5030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5030u;
        // 0x2e5034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5030) {
            ctx->pc = 0x2E5048u;
            goto label_2e5048;
        }
    }
    ctx->pc = 0x2E5038u;
    // 0x2e5038: 0x8c8400c0  lw          $a0, 0xC0($a0)
    ctx->pc = 0x2e5038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2e503c: 0x288206b8  slti        $v0, $a0, 0x6B8
    ctx->pc = 0x2e503cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1720) ? 1 : 0);
    // 0x2e5040: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5040u;
    {
        const bool branch_taken_0x2e5040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5040) {
            ctx->pc = 0x2E5044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5040u;
            // 0x2e5044: 0x2885078b  slti        $a1, $a0, 0x78B (Delay Slot)
            SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1931) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5048u;
            goto label_2e5048;
        }
    }
    ctx->pc = 0x2E5048u;
label_2e5048:
    // 0x2e5048: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5048u;
    {
        const bool branch_taken_0x2e5048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5048u;
        // 0x2e504c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5048) {
            ctx->pc = 0x2E5058u;
            goto label_2e5058;
        }
    }
    ctx->pc = 0x2E5050u;
    // 0x2e5050: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e5050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5054:
    // 0x2e5054: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e5054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5058:
    // 0x2e5058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e505c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e505cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e5060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5064: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5064u;
        // 0x2e5068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E506Cu;
    // 0x2e506c: 0x0  nop
    ctx->pc = 0x2e506cu;
    // NOP
    ctx->pc = 0x2e5070u;
}
