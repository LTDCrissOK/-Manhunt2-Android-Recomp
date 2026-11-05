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

// Function: sub_001082E8
// Address: 0x1082e8 - 0x108318
void sub_001082E8_0x1082e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001082E8_0x1082e8");
#endif

    switch (ctx->pc) {
        case 0x1082e8u: goto label_1082e8;
        case 0x1082ecu: goto label_1082ec;
        case 0x1082f0u: goto label_1082f0;
        case 0x1082f4u: goto label_1082f4;
        case 0x1082f8u: goto label_1082f8;
        case 0x1082fcu: goto label_1082fc;
        case 0x108300u: goto label_108300;
        case 0x108304u: goto label_108304;
        case 0x108308u: goto label_108308;
        case 0x10830cu: goto label_10830c;
        case 0x108310u: goto label_108310;
        case 0x108314u: goto label_108314;
        default: break;
    }

    ctx->pc = 0x1082e8u;

label_1082e8:
    // 0x1082e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1082e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1082ec:
    // 0x1082ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1082ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1082f0:
    // 0x1082f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1082f4:
    if (ctx->pc == 0x1082F4u) {
        ctx->pc = 0x1082F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082F0u;
        // 0x1082f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1082F8u;
        goto label_1082f8;
    }
    ctx->pc = 0x1082F0u;
    {
        const bool branch_taken_0x1082f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082F0u;
        // 0x1082f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082f0) {
            ctx->pc = 0x108308u;
            goto label_108308;
        }
    }
    ctx->pc = 0x1082F8u;
label_1082f8:
    // 0x1082f8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1082f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1082fc:
    // 0x1082fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1082fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_108300:
    // 0x108300: 0x40f809  jalr        $v0
label_108304:
    if (ctx->pc == 0x108304u) {
        ctx->pc = 0x108304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108300u;
        // 0x108304: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108308u;
        goto label_108308;
    }
    ctx->pc = 0x108300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108308u);
        ctx->pc = 0x108304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108300u;
        // 0x108304: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108300u, 0x108308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108308u;
label_108308:
    // 0x108308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10830c:
    // 0x10830c: 0x3e00008  jr          $ra
label_108310:
    if (ctx->pc == 0x108310u) {
        ctx->pc = 0x108310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10830Cu;
        // 0x108310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108314u;
        goto label_108314;
    }
    ctx->pc = 0x10830Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10830Cu;
        // 0x108310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10830Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108314u;
label_108314:
    // 0x108314: 0x0  nop
    ctx->pc = 0x108314u;
    // NOP
    ctx->pc = 0x108318u;
}
