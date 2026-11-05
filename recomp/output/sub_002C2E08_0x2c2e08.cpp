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

// Function: sub_002C2E08
// Address: 0x2c2e08 - 0x2c2e60
void sub_002C2E08_0x2c2e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2E08_0x2c2e08");
#endif

    switch (ctx->pc) {
        case 0x2c2e20u: goto label_2c2e20;
        case 0x2c2e30u: goto label_2c2e30;
        default: break;
    }

    ctx->pc = 0x2c2e08u;

    // 0x2c2e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c2e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2e14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c2e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c2e18: 0xc0b055a  jal         func_2C1568
    ctx->pc = 0x2C2E18u;
    SET_GPR_U32(ctx, 31, 0x2C2E20u);
    ctx->pc = 0x2C2E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2E18u;
    // 0x2c2e1c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1568u, 0x2C2E18u, 0x2C2E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E20u;
label_2c2e20:
    // 0x2c2e20: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2c2e20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c2e24: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2E24u;
    {
        const bool branch_taken_0x2c2e24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E24u;
        // 0x2c2e28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e24) {
            ctx->pc = 0x2C2E48u;
            goto label_2c2e48;
        }
    }
    ctx->pc = 0x2C2E2Cu;
    // 0x2c2e2c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c2e30:
    // 0x2c2e30: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2E30u;
    {
        const bool branch_taken_0x2c2e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c2e30) {
            ctx->pc = 0x2C2E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2E30u;
            // 0x2c2e34: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2E40u;
            goto label_2c2e40;
        }
    }
    ctx->pc = 0x2C2E38u;
    // 0x2c2e38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2E38u;
    {
        const bool branch_taken_0x2c2e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E38u;
        // 0x2c2e3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e38) {
            ctx->pc = 0x2C2E4Cu;
            goto label_2c2e4c;
        }
    }
    ctx->pc = 0x2C2E40u;
label_2c2e40:
    // 0x2c2e40: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C2E40u;
    {
        const bool branch_taken_0x2c2e40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2e40) {
            ctx->pc = 0x2C2E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2E40u;
            // 0x2c2e44: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2e30;
        }
    }
    ctx->pc = 0x2C2E48u;
label_2c2e48:
    // 0x2c2e48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2e4c:
    // 0x2c2e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c2e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2e50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c2e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2e54: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E54u;
        // 0x2c2e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2E5Cu;
    // 0x2c2e5c: 0x0  nop
    ctx->pc = 0x2c2e5cu;
    // NOP
    ctx->pc = 0x2c2e60u;
}
