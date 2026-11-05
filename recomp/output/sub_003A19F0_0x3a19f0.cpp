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

// Function: sub_003A19F0
// Address: 0x3a19f0 - 0x3a1a20
void sub_003A19F0_0x3a19f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A19F0_0x3a19f0");
#endif

    switch (ctx->pc) {
        case 0x3a19f0u: goto label_3a19f0;
        case 0x3a19f4u: goto label_3a19f4;
        case 0x3a19f8u: goto label_3a19f8;
        case 0x3a19fcu: goto label_3a19fc;
        case 0x3a1a00u: goto label_3a1a00;
        case 0x3a1a04u: goto label_3a1a04;
        case 0x3a1a08u: goto label_3a1a08;
        case 0x3a1a0cu: goto label_3a1a0c;
        case 0x3a1a10u: goto label_3a1a10;
        case 0x3a1a14u: goto label_3a1a14;
        case 0x3a1a18u: goto label_3a1a18;
        case 0x3a1a1cu: goto label_3a1a1c;
        default: break;
    }

    ctx->pc = 0x3a19f0u;

label_3a19f0:
    // 0x3a19f0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a19f4:
    // 0x3a19f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a19f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a19f8:
    // 0x3a19f8: 0x8c431dbc  lw          $v1, 0x1DBC($v0)
    ctx->pc = 0x3a19f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7612)));
label_3a19fc:
    // 0x3a19fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3a1a00:
    if (ctx->pc == 0x3A1A00u) {
        ctx->pc = 0x3A1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19FCu;
        // 0x3a1a00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A04u;
        goto label_3a1a04;
    }
    ctx->pc = 0x3A19FCu;
    {
        const bool branch_taken_0x3a19fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19FCu;
        // 0x3a1a00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a19fc) {
            ctx->pc = 0x3A1A10u;
            goto label_3a1a10;
        }
    }
    ctx->pc = 0x3A1A04u;
label_3a1a04:
    // 0x3a1a04: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a1a08:
    // 0x3a1a08: 0x60f809  jalr        $v1
label_3a1a0c:
    if (ctx->pc == 0x3A1A0Cu) {
        ctx->pc = 0x3A1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A08u;
        // 0x3a1a0c: 0x8c441dc0  lw          $a0, 0x1DC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A10u;
        goto label_3a1a10;
    }
    ctx->pc = 0x3A1A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1A10u);
        ctx->pc = 0x3A1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A08u;
        // 0x3a1a0c: 0x8c441dc0  lw          $a0, 0x1DC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7616)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1A08u, 0x3A1A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1A10u;
label_3a1a10:
    // 0x3a1a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1a14:
    // 0x3a1a14: 0x3e00008  jr          $ra
label_3a1a18:
    if (ctx->pc == 0x3A1A18u) {
        ctx->pc = 0x3A1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A14u;
        // 0x3a1a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A1Cu;
        goto label_3a1a1c;
    }
    ctx->pc = 0x3A1A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A14u;
        // 0x3a1a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1A1Cu;
label_3a1a1c:
    // 0x3a1a1c: 0x0  nop
    ctx->pc = 0x3a1a1cu;
    // NOP
    ctx->pc = 0x3a1a20u;
}
