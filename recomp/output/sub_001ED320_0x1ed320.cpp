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

// Function: sub_001ED320
// Address: 0x1ed320 - 0x1ed358
void sub_001ED320_0x1ed320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED320_0x1ed320");
#endif

    ctx->pc = 0x1ed320u;

    // 0x1ed320: 0x2523ffd8  addiu       $v1, $t1, -0x28
    ctx->pc = 0x1ed320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967256));
    // 0x1ed324: 0x2c62005c  sltiu       $v0, $v1, 0x5C
    ctx->pc = 0x1ed324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)92) ? 1 : 0);
    // 0x1ed328: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED328u;
    {
        const bool branch_taken_0x1ed328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED328u;
        // 0x1ed32c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed328) {
            ctx->pc = 0x1ED368u;
            return;
        }
    }
    ctx->pc = 0x1ED330u;
    // 0x1ed330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed334: 0x2442dc40  addiu       $v0, $v0, -0x23C0
    ctx->pc = 0x1ed334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x1ed338: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ed338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed33c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ed33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed340: 0x800008  jr          $a0
    ctx->pc = 0x1ED340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED348u: goto label_1ed348;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED340u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1ED348u;
label_1ed348:
    // 0x1ed348: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed34c: 0x2442dbf0  addiu       $v0, $v0, -0x2410
    ctx->pc = 0x1ed34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958064));
    // 0x1ed350: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED350u;
    {
        const bool branch_taken_0x1ed350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED350u;
        // 0x1ed354: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed350) {
            ctx->pc = 0x1ED370u;
            return;
        }
    }
    ctx->pc = 0x1ED358u;
}
