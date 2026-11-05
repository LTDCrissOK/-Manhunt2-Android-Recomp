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

// Function: sub_00338008
// Address: 0x338008 - 0x338080
void sub_00338008_0x338008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338008_0x338008");
#endif

    switch (ctx->pc) {
        case 0x338038u: goto label_338038;
        case 0x338044u: goto label_338044;
        case 0x33805cu: goto label_33805c;
        default: break;
    }

    ctx->pc = 0x338008u;

    // 0x338008: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x338008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x33800c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x33800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x338010: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x338010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x338014: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x338014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338018: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x338018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x33801c: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x33801cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x338020: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x338020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x338024: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x338024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338028: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x338028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x33802c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x33802cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x338030: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x338030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x338034: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x338034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338038:
    // 0x338038: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x338038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x33803c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x33803Cu;
    SET_GPR_U32(ctx, 31, 0x338044u);
    ctx->pc = 0x338040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33803Cu;
    // 0x338040: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x33803Cu, 0x338044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338044u;
label_338044:
    // 0x338044: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x338044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x338048: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x338048u;
    {
        const bool branch_taken_0x338048 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x33804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338048u;
        // 0x33804c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338048) {
            ctx->pc = 0x338038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338038;
        }
    }
    ctx->pc = 0x338050u;
    // 0x338050: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x338050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338054: 0xc0fbb60  jal         func_3EED80
    ctx->pc = 0x338054u;
    SET_GPR_U32(ctx, 31, 0x33805Cu);
    ctx->pc = 0x338058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338054u;
    // 0x338058: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EED80u, 0x338054u, 0x33805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33805Cu;
label_33805c:
    // 0x33805c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x33805cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x338060: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x338060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x338064: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x338064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x338068: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x338068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33806c: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x33806cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x338070: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x338070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x338074: 0x3e00008  jr          $ra
    ctx->pc = 0x338074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338074u;
        // 0x338078: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33807Cu;
    // 0x33807c: 0x0  nop
    ctx->pc = 0x33807cu;
    // NOP
    ctx->pc = 0x338080u;
}
