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

// Function: sub_0035D9C0
// Address: 0x35d9c0 - 0x35d9f0
void sub_0035D9C0_0x35d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D9C0_0x35d9c0");
#endif

    switch (ctx->pc) {
        case 0x35d9c0u: goto label_35d9c0;
        case 0x35d9c4u: goto label_35d9c4;
        case 0x35d9c8u: goto label_35d9c8;
        case 0x35d9ccu: goto label_35d9cc;
        case 0x35d9d0u: goto label_35d9d0;
        case 0x35d9d4u: goto label_35d9d4;
        case 0x35d9d8u: goto label_35d9d8;
        case 0x35d9dcu: goto label_35d9dc;
        case 0x35d9e0u: goto label_35d9e0;
        case 0x35d9e4u: goto label_35d9e4;
        case 0x35d9e8u: goto label_35d9e8;
        case 0x35d9ecu: goto label_35d9ec;
        default: break;
    }

    ctx->pc = 0x35d9c0u;

label_35d9c0:
    // 0x35d9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_35d9c4:
    // 0x35d9c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35d9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35d9c8:
    // 0x35d9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_35d9cc:
    // 0x35d9cc: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x35d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_35d9d0:
    // 0x35d9d0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x35d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_35d9d4:
    // 0x35d9d4: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x35d9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_35d9d8:
    // 0x35d9d8: 0xa0f809  jalr        $a1
label_35d9dc:
    if (ctx->pc == 0x35D9DCu) {
        ctx->pc = 0x35D9E0u;
        goto label_35d9e0;
    }
    ctx->pc = 0x35D9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x35D9E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D9D8u, 0x35D9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35D9E0u;
label_35d9e0:
    // 0x35d9e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35d9e4:
    // 0x35d9e4: 0x3e00008  jr          $ra
label_35d9e8:
    if (ctx->pc == 0x35D9E8u) {
        ctx->pc = 0x35D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9E4u;
        // 0x35d9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35D9ECu;
        goto label_35d9ec;
    }
    ctx->pc = 0x35D9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9E4u;
        // 0x35d9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D9ECu;
label_35d9ec:
    // 0x35d9ec: 0x0  nop
    ctx->pc = 0x35d9ecu;
    // NOP
    ctx->pc = 0x35d9f0u;
}
