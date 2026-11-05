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

// Function: sub_00253DE8
// Address: 0x253de8 - 0x253e30
void sub_00253DE8_0x253de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253DE8_0x253de8");
#endif

    switch (ctx->pc) {
        case 0x253e20u: goto label_253e20;
        default: break;
    }

    ctx->pc = 0x253de8u;

    // 0x253de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253dec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x253decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253df4: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x253df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x253df8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x253df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x253dfc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x253DFCu;
    {
        const bool branch_taken_0x253dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253dfc) {
            ctx->pc = 0x253E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253DFCu;
            // 0x253e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253E24u;
            goto label_253e24;
        }
    }
    ctx->pc = 0x253E04u;
    // 0x253e04: 0x8ca20fe8  lw          $v0, 0xFE8($a1)
    ctx->pc = 0x253e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4072)));
    // 0x253e08: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x253e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253e0c: 0xaca31060  sw          $v1, 0x1060($a1)
    ctx->pc = 0x253e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4192), GPR_U32(ctx, 3));
    // 0x253e10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x253e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253e14: 0xac44035c  sw          $a0, 0x35C($v0)
    ctx->pc = 0x253e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 4));
    // 0x253e18: 0xc094ed4  jal         func_253B50
    ctx->pc = 0x253E18u;
    SET_GPR_U32(ctx, 31, 0x253E20u);
    ctx->pc = 0x253E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E18u;
    // 0x253e1c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x253E18u, 0x253E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E20u;
label_253e20:
    // 0x253e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253e24:
    // 0x253e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253e28: 0x3e00008  jr          $ra
    ctx->pc = 0x253E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E28u;
        // 0x253e2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253E30u;
}
