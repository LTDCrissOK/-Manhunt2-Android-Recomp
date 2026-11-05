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

// Function: sub_001EADC0
// Address: 0x1eadc0 - 0x1eae60
void sub_001EADC0_0x1eadc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EADC0_0x1eadc0");
#endif

    switch (ctx->pc) {
        case 0x1eae08u: goto label_1eae08;
        case 0x1eae24u: goto label_1eae24;
        default: break;
    }

    ctx->pc = 0x1eadc0u;

    // 0x1eadc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eadc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eadc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eadc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eadc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1eadc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1eadcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eadccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eadd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1eadd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1eadd4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1eadd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eadd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eadd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eaddc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eaddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1eade0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1eade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1eade4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1eade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eade8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EADE8u;
    {
        const bool branch_taken_0x1eade8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADE8u;
        // 0x1eadec: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eade8) {
            ctx->pc = 0x1EAE3Cu;
            goto label_1eae3c;
        }
    }
    ctx->pc = 0x1EADF0u;
    // 0x1eadf0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1eadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eadf4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1eadf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eadf8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EADF8u;
    {
        const bool branch_taken_0x1eadf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADF8u;
        // 0x1eadfc: 0xae13000c  sw          $s3, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eadf8) {
            ctx->pc = 0x1EAE34u;
            goto label_1eae34;
        }
    }
    ctx->pc = 0x1EAE00u;
    // 0x1eae00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eae00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae04: 0x0  nop
    ctx->pc = 0x1eae04u;
    // NOP
label_1eae08:
    // 0x1eae08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eae08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eae0c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1eae0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae10: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1eae10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1eae14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1eae14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1eae18: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1eae18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1eae1c: 0xc07aa7c  jal         func_1EA9F0
    ctx->pc = 0x1EAE1Cu;
    SET_GPR_U32(ctx, 31, 0x1EAE24u);
    ctx->pc = 0x1EAE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE1Cu;
    // 0x1eae20: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA9F0u, 0x1EAE1Cu, 0x1EAE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE24u;
label_1eae24:
    // 0x1eae24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1eae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eae28: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1eae28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1eae2c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EAE2Cu;
    {
        const bool branch_taken_0x1eae2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE2Cu;
        // 0x1eae30: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae2c) {
            ctx->pc = 0x1EAE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eae08;
        }
    }
    ctx->pc = 0x1EAE34u;
label_1eae34:
    // 0x1eae34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eae38: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1eae38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1eae3c:
    // 0x1eae3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eae3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eae40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eae40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eae44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eae44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eae48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eae48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eae4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1eae4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eae50: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1eae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eae54: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE54u;
        // 0x1eae58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAE5Cu;
    // 0x1eae5c: 0x0  nop
    ctx->pc = 0x1eae5cu;
    // NOP
    ctx->pc = 0x1eae60u;
}
