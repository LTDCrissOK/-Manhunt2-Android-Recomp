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

// Function: sub_00356F48
// Address: 0x356f48 - 0x356f6c
void sub_00356F48_0x356f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356F48_0x356f48");
#endif

    switch (ctx->pc) {
        case 0x356f48u: goto label_356f48;
        case 0x356f4cu: goto label_356f4c;
        case 0x356f50u: goto label_356f50;
        case 0x356f54u: goto label_356f54;
        case 0x356f58u: goto label_356f58;
        case 0x356f5cu: goto label_356f5c;
        case 0x356f60u: goto label_356f60;
        case 0x356f64u: goto label_356f64;
        case 0x356f68u: goto label_356f68;
        default: break;
    }

    ctx->pc = 0x356f48u;

label_356f48:
    // 0x356f48: 0x2c820032  sltiu       $v0, $a0, 0x32
    ctx->pc = 0x356f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_356f4c:
    // 0x356f4c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_356f50:
    if (ctx->pc == 0x356F50u) {
        ctx->pc = 0x356F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F4Cu;
        // 0x356f50: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356F54u;
        goto label_356f54;
    }
    ctx->pc = 0x356F4Cu;
    {
        const bool branch_taken_0x356f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F4Cu;
        // 0x356f50: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f4c) {
            ctx->pc = 0x356FC4u;
            return;
        }
    }
    ctx->pc = 0x356F54u;
label_356f54:
    // 0x356f54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x356f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_356f58:
    // 0x356f58: 0x24426a10  addiu       $v0, $v0, 0x6A10
    ctx->pc = 0x356f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27152));
label_356f5c:
    // 0x356f5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x356f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_356f60:
    // 0x356f60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x356f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_356f64:
    // 0x356f64: 0x800008  jr          $a0
label_356f68:
    if (ctx->pc == 0x356F68u) {
        ctx->pc = 0x356F6Cu;
        goto label_fallthrough_0x356f64;
    }
    ctx->pc = 0x356F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356F64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x356f64:
    ctx->pc = 0x356F6Cu;
}
