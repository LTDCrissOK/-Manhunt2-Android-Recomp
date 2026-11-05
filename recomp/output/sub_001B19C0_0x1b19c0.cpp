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

// Function: sub_001B19C0
// Address: 0x1b19c0 - 0x1b1a00
void sub_001B19C0_0x1b19c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B19C0_0x1b19c0");
#endif

    switch (ctx->pc) {
        case 0x1b19c0u: goto label_1b19c0;
        case 0x1b19c4u: goto label_1b19c4;
        case 0x1b19c8u: goto label_1b19c8;
        case 0x1b19ccu: goto label_1b19cc;
        case 0x1b19d0u: goto label_1b19d0;
        case 0x1b19d4u: goto label_1b19d4;
        case 0x1b19d8u: goto label_1b19d8;
        case 0x1b19dcu: goto label_1b19dc;
        case 0x1b19e0u: goto label_1b19e0;
        case 0x1b19e4u: goto label_1b19e4;
        case 0x1b19e8u: goto label_1b19e8;
        case 0x1b19ecu: goto label_1b19ec;
        case 0x1b19f0u: goto label_1b19f0;
        case 0x1b19f4u: goto label_1b19f4;
        case 0x1b19f8u: goto label_1b19f8;
        case 0x1b19fcu: goto label_1b19fc;
        default: break;
    }

    ctx->pc = 0x1b19c0u;

label_1b19c0:
    // 0x1b19c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b19c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b19c4:
    // 0x1b19c4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1b19c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1b19c8:
    // 0x1b19c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b19c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b19cc:
    // 0x1b19cc: 0x2463b430  addiu       $v1, $v1, -0x4BD0
    ctx->pc = 0x1b19ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947888));
label_1b19d0:
    // 0x1b19d0: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x1b19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_1b19d4:
    // 0x1b19d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b19d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1b19d8:
    // 0x1b19d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b19d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b19dc:
    // 0x1b19dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b19dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b19e0:
    // 0x1b19e0: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x1b19e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1b19e4:
    // 0x1b19e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1b19e8:
    // 0x1b19e8: 0x40f809  jalr        $v0
label_1b19ec:
    if (ctx->pc == 0x1B19ECu) {
        ctx->pc = 0x1B19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19E8u;
        // 0x1b19ec: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B19F0u;
        goto label_1b19f0;
    }
    ctx->pc = 0x1B19E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B19F0u);
        ctx->pc = 0x1B19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19E8u;
        // 0x1b19ec: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B19E8u, 0x1B19F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B19F0u;
label_1b19f0:
    // 0x1b19f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b19f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b19f4:
    // 0x1b19f4: 0x3e00008  jr          $ra
label_1b19f8:
    if (ctx->pc == 0x1B19F8u) {
        ctx->pc = 0x1B19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19F4u;
        // 0x1b19f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B19FCu;
        goto label_1b19fc;
    }
    ctx->pc = 0x1B19F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19F4u;
        // 0x1b19f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B19F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B19FCu;
label_1b19fc:
    // 0x1b19fc: 0x0  nop
    ctx->pc = 0x1b19fcu;
    // NOP
    ctx->pc = 0x1b1a00u;
}
