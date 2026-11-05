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

// Function: sub_00308EE8
// Address: 0x308ee8 - 0x308f38
void sub_00308EE8_0x308ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308EE8_0x308ee8");
#endif

    switch (ctx->pc) {
        case 0x308f24u: goto label_308f24;
        default: break;
    }

    ctx->pc = 0x308ee8u;

    // 0x308ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308eec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x308eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ef0: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x308EF0u;
    {
        const bool branch_taken_0x308ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x308EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EF0u;
        // 0x308ef4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ef0) {
            ctx->pc = 0x308F24u;
            goto label_308f24;
        }
    }
    ctx->pc = 0x308EF8u;
    // 0x308ef8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x308efc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x308EFCu;
    {
        const bool branch_taken_0x308efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EFCu;
        // 0x308f00: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308efc) {
            ctx->pc = 0x308F1Cu;
            goto label_308f1c;
        }
    }
    ctx->pc = 0x308F04u;
    // 0x308f04: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x308f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x308f08: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x308f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x308f0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x308f10: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x308f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x308f14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x308f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x308f18: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x308f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_308f1c:
    // 0x308f1c: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x308F1Cu;
    SET_GPR_U32(ctx, 31, 0x308F24u);
    ctx->pc = 0x308F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308F1Cu;
    // 0x308f20: 0x24846810  addiu       $a0, $a0, 0x6810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x308F1Cu, 0x308F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F24u;
label_308f24:
    // 0x308f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x308F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F2Cu;
        // 0x308f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308F34u;
    // 0x308f34: 0x0  nop
    ctx->pc = 0x308f34u;
    // NOP
    ctx->pc = 0x308f38u;
}
