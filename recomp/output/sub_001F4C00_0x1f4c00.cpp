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

// Function: sub_001F4C00
// Address: 0x1f4c00 - 0x1f4c58
void sub_001F4C00_0x1f4c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4C00_0x1f4c00");
#endif

    ctx->pc = 0x1f4c00u;

    // 0x1f4c00: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f4c04: 0x24a5ffd8  addiu       $a1, $a1, -0x28
    ctx->pc = 0x1f4c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
    // 0x1f4c08: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1f4c08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c0c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f4c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c10: 0x2463f730  addiu       $v1, $v1, -0x8D0
    ctx->pc = 0x1f4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965040));
    // 0x1f4c14: 0x2ca20034  sltiu       $v0, $a1, 0x34
    ctx->pc = 0x1f4c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x1f4c18: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F4C18u;
    {
        const bool branch_taken_0x1f4c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C18u;
        // 0x1f4c1c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c18) {
            ctx->pc = 0x1F4C68u;
            return;
        }
    }
    ctx->pc = 0x1F4C20u;
    // 0x1f4c20: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4c24: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1f4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f4c28: 0x2442f780  addiu       $v0, $v0, -0x880
    ctx->pc = 0x1f4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965120));
    // 0x1f4c2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f4c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f4c30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f4c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f4c34: 0x800008  jr          $a0
    ctx->pc = 0x1F4C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4C3Cu: goto label_1f4c3c;
            case 0x1F4C48u: goto label_1f4c48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4C34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F4C3Cu;
label_1f4c3c:
    // 0x1f4c3c: 0x2502f730  addiu       $v0, $t0, -0x8D0
    ctx->pc = 0x1f4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965040));
    // 0x1f4c40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F4C40u;
    {
        const bool branch_taken_0x1f4c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C40u;
        // 0x1f4c44: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c40) {
            ctx->pc = 0x1F4C70u;
            return;
        }
    }
    ctx->pc = 0x1F4C48u;
label_1f4c48:
    // 0x1f4c48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4c4c: 0x2442f748  addiu       $v0, $v0, -0x8B8
    ctx->pc = 0x1f4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965064));
    // 0x1f4c50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4C50u;
    {
        const bool branch_taken_0x1f4c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C50u;
        // 0x1f4c54: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c50) {
            ctx->pc = 0x1F4C70u;
            return;
        }
    }
    ctx->pc = 0x1F4C58u;
}
