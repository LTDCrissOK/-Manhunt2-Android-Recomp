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

// Function: sub_00104EB8
// Address: 0x104eb8 - 0x104f60
void sub_00104EB8_0x104eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104EB8_0x104eb8");
#endif

    switch (ctx->pc) {
        case 0x104eecu: goto label_104eec;
        case 0x104f00u: goto label_104f00;
        default: break;
    }

    ctx->pc = 0x104eb8u;

    // 0x104eb8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x104eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x104ebc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x104ebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ec0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104EC0u;
    {
        const bool branch_taken_0x104ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EC0u;
        // 0x104ec4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ec0) {
            ctx->pc = 0x104ECCu;
            goto label_104ecc;
        }
    }
    ctx->pc = 0x104EC8u;
    // 0x104ec8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104ecc:
    // 0x104ecc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x104ECCu;
    {
        const bool branch_taken_0x104ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x104ecc) {
            ctx->pc = 0x104EDCu;
            goto label_104edc;
        }
    }
    ctx->pc = 0x104ED4u;
    // 0x104ed4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x104ED4u;
    {
        const bool branch_taken_0x104ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104ED4u;
        // 0x104ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ed4) {
            ctx->pc = 0x104EF8u;
            goto label_104ef8;
        }
    }
    ctx->pc = 0x104EDCu;
label_104edc:
    // 0x104edc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x104EDCu;
    {
        const bool branch_taken_0x104edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104edc) {
            ctx->pc = 0x104EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104EDCu;
            // 0x104ee0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104EF4u;
            goto label_104ef4;
        }
    }
    ctx->pc = 0x104EE4u;
    // 0x104ee4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x104EE4u;
    {
        const bool branch_taken_0x104ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EE4u;
        // 0x104ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ee4) {
            ctx->pc = 0x104EF4u;
            goto label_104ef4;
        }
    }
    ctx->pc = 0x104EECu;
label_104eec:
    // 0x104eec: 0x3e00008  jr          $ra
    ctx->pc = 0x104EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EECu;
        // 0x104ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104EF4u;
label_104ef4:
    // 0x104ef4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x104ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104ef8:
    // 0x104ef8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x104EF8u;
    {
        const bool branch_taken_0x104ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104ef8) {
            ctx->pc = 0x104F54u;
            goto label_104f54;
        }
    }
    ctx->pc = 0x104F00u;
label_104f00:
    // 0x104f00: 0x1045fffa  beq         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104F00u;
    {
        const bool branch_taken_0x104f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x104f00) {
            ctx->pc = 0x104EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104eec;
        }
    }
    ctx->pc = 0x104F08u;
    // 0x104f08: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x104f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x104f0c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x104F0Cu;
    {
        const bool branch_taken_0x104f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104f0c) {
            ctx->pc = 0x104F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104F0Cu;
            // 0x104f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104F2Cu;
            goto label_104f2c;
        }
    }
    ctx->pc = 0x104F14u;
    // 0x104f14: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x104f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x104f18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104F18u;
    {
        const bool branch_taken_0x104f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F18u;
        // 0x104f1c: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f18) {
            ctx->pc = 0x104F28u;
            goto label_104f28;
        }
    }
    ctx->pc = 0x104F20u;
    // 0x104f20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104F20u;
    {
        const bool branch_taken_0x104f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F20u;
        // 0x104f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f20) {
            ctx->pc = 0x104F2Cu;
            goto label_104f2c;
        }
    }
    ctx->pc = 0x104F28u;
label_104f28:
    // 0x104f28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x104f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104f2c:
    // 0x104f2c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x104F2Cu;
    {
        const bool branch_taken_0x104f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104f2c) {
            ctx->pc = 0x104F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104F2Cu;
            // 0x104f30: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104F3Cu;
            goto label_104f3c;
        }
    }
    ctx->pc = 0x104F34u;
    // 0x104f34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x104F34u;
    {
        const bool branch_taken_0x104f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F34u;
        // 0x104f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f34) {
            ctx->pc = 0x104F4Cu;
            goto label_104f4c;
        }
    }
    ctx->pc = 0x104F3Cu;
label_104f3c:
    // 0x104f3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104F3Cu;
    {
        const bool branch_taken_0x104f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F3Cu;
        // 0x104f40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f3c) {
            ctx->pc = 0x104F48u;
            goto label_104f48;
        }
    }
    ctx->pc = 0x104F44u;
    // 0x104f44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104f48:
    // 0x104f48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x104f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_104f4c:
    // 0x104f4c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x104F4Cu;
    {
        const bool branch_taken_0x104f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104f4c) {
            ctx->pc = 0x104F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104f00;
        }
    }
    ctx->pc = 0x104F54u;
label_104f54:
    // 0x104f54: 0x3e00008  jr          $ra
    ctx->pc = 0x104F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F54u;
        // 0x104f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104F5Cu;
    // 0x104f5c: 0x0  nop
    ctx->pc = 0x104f5cu;
    // NOP
    ctx->pc = 0x104f60u;
}
