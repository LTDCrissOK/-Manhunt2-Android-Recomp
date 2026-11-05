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

// Function: sub_00289180
// Address: 0x289180 - 0x2891b0
void sub_00289180_0x289180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289180_0x289180");
#endif

    switch (ctx->pc) {
        case 0x289180u: goto label_289180;
        case 0x289184u: goto label_289184;
        case 0x289188u: goto label_289188;
        case 0x28918cu: goto label_28918c;
        case 0x289190u: goto label_289190;
        case 0x289194u: goto label_289194;
        case 0x289198u: goto label_289198;
        case 0x28919cu: goto label_28919c;
        case 0x2891a0u: goto label_2891a0;
        case 0x2891a4u: goto label_2891a4;
        case 0x2891a8u: goto label_2891a8;
        case 0x2891acu: goto label_2891ac;
        default: break;
    }

    ctx->pc = 0x289180u;

label_289180:
    // 0x289180: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x289180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_289184:
    // 0x289184: 0x8c43a4fc  lw          $v1, -0x5B04($v0)
    ctx->pc = 0x289184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943996)));
label_289188:
    // 0x289188: 0x2463fff7  addiu       $v1, $v1, -0x9
    ctx->pc = 0x289188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
label_28918c:
    // 0x28918c: 0x2c62002a  sltiu       $v0, $v1, 0x2A
    ctx->pc = 0x28918cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
label_289190:
    // 0x289190: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_289194:
    if (ctx->pc == 0x289194u) {
        ctx->pc = 0x289194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289190u;
        // 0x289194: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289198u;
        goto label_289198;
    }
    ctx->pc = 0x289190u;
    {
        const bool branch_taken_0x289190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289190u;
        // 0x289194: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289190) {
            ctx->pc = 0x2891B8u;
            return;
        }
    }
    ctx->pc = 0x289198u;
label_289198:
    // 0x289198: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x289198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28919c:
    // 0x28919c: 0x2442ac60  addiu       $v0, $v0, -0x53A0
    ctx->pc = 0x28919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945888));
label_2891a0:
    // 0x2891a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2891a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2891a4:
    // 0x2891a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2891a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2891a8:
    // 0x2891a8: 0x800008  jr          $a0
label_2891ac:
    if (ctx->pc == 0x2891ACu) {
        ctx->pc = 0x2891B0u;
        goto label_fallthrough_0x2891a8;
    }
    ctx->pc = 0x2891A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2891A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2891a8:
    ctx->pc = 0x2891B0u;
}
