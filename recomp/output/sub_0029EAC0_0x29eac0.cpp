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

// Function: sub_0029EAC0
// Address: 0x29eac0 - 0x29eb68
void sub_0029EAC0_0x29eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EAC0_0x29eac0");
#endif

    switch (ctx->pc) {
        case 0x29eaf0u: goto label_29eaf0;
        case 0x29eaf8u: goto label_29eaf8;
        case 0x29eb0cu: goto label_29eb0c;
        default: break;
    }

    ctx->pc = 0x29eac0u;

    // 0x29eac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29eac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29eac4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29eac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29eac8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29eac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29eacc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29eaccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ead0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29ead4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29ead4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ead8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29ead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29eadc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29eadcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29eae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29eae4: 0x24950014  addiu       $s5, $a0, 0x14
    ctx->pc = 0x29eae4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x29eae8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29eae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29eaec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29eaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29eaf0:
    // 0x29eaf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29eaf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eaf4: 0x2558021  addu        $s0, $s2, $s5
    ctx->pc = 0x29eaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_29eaf8:
    // 0x29eaf8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29eafc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29EAFCu;
    {
        const bool branch_taken_0x29eafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eafc) {
            ctx->pc = 0x29EB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EAFCu;
            // 0x29eb00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EB20u;
            goto label_29eb20;
        }
    }
    ctx->pc = 0x29EB04u;
    // 0x29eb04: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29EB04u;
    SET_GPR_U32(ctx, 31, 0x29EB0Cu);
    ctx->pc = 0x29EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EB04u;
    // 0x29eb08: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29EB04u, 0x29EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB0Cu;
label_29eb0c:
    // 0x29eb0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29eb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29eb10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29EB10u;
    {
        const bool branch_taken_0x29eb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB10u;
        // 0x29eb14: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb10) {
            ctx->pc = 0x29EB20u;
            goto label_29eb20;
        }
    }
    ctx->pc = 0x29EB18u;
    // 0x29eb18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29EB18u;
    {
        const bool branch_taken_0x29eb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB18u;
        // 0x29eb1c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb18) {
            ctx->pc = 0x29EB40u;
            goto label_29eb40;
        }
    }
    ctx->pc = 0x29EB20u;
label_29eb20:
    // 0x29eb20: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29eb20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29eb24: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29EB24u;
    {
        const bool branch_taken_0x29eb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB24u;
        // 0x29eb28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb24) {
            ctx->pc = 0x29EAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29eaf8;
        }
    }
    ctx->pc = 0x29EB2Cu;
    // 0x29eb2c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x29eb2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x29eb30: 0x2e820019  sltiu       $v0, $s4, 0x19
    ctx->pc = 0x29eb30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x29eb34: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x29EB34u;
    {
        const bool branch_taken_0x29eb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB34u;
        // 0x29eb38: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb34) {
            ctx->pc = 0x29EAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29eaf0;
        }
    }
    ctx->pc = 0x29EB3Cu;
    // 0x29eb3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29eb3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29eb40:
    // 0x29eb40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29eb40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29eb44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29eb44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29eb48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29eb48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29eb4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29eb4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eb50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29eb50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29eb54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29eb54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29eb58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29eb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29eb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x29EB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB5Cu;
        // 0x29eb60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EB64u;
    // 0x29eb64: 0x0  nop
    ctx->pc = 0x29eb64u;
    // NOP
    ctx->pc = 0x29eb68u;
}
