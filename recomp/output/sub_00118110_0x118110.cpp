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

// Function: sub_00118110
// Address: 0x118110 - 0x118140
void sub_00118110_0x118110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118110_0x118110");
#endif

    switch (ctx->pc) {
        case 0x118110u: goto label_118110;
        case 0x118114u: goto label_118114;
        case 0x118118u: goto label_118118;
        case 0x11811cu: goto label_11811c;
        case 0x118120u: goto label_118120;
        case 0x118124u: goto label_118124;
        case 0x118128u: goto label_118128;
        case 0x11812cu: goto label_11812c;
        case 0x118130u: goto label_118130;
        case 0x118134u: goto label_118134;
        case 0x118138u: goto label_118138;
        case 0x11813cu: goto label_11813c;
        default: break;
    }

    ctx->pc = 0x118110u;

label_118110:
    // 0x118110: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x118110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_118114:
    // 0x118114: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x118114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_118118:
    // 0x118118: 0x2444fffa  addiu       $a0, $v0, -0x6
    ctx->pc = 0x118118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_11811c:
    // 0x11811c: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x11811cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_118120:
    // 0x118120: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_118124:
    if (ctx->pc == 0x118124u) {
        ctx->pc = 0x118124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118120u;
        // 0x118124: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118128u;
        goto label_118128;
    }
    ctx->pc = 0x118120u;
    {
        const bool branch_taken_0x118120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118120u;
        // 0x118124: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118120) {
            ctx->pc = 0x118158u;
            return;
        }
    }
    ctx->pc = 0x118128u;
label_118128:
    // 0x118128: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_11812c:
    // 0x11812c: 0x2442b1e0  addiu       $v0, $v0, -0x4E20
    ctx->pc = 0x11812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_118130:
    // 0x118130: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_118134:
    // 0x118134: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118138:
    // 0x118138: 0x800008  jr          $a0
label_11813c:
    if (ctx->pc == 0x11813Cu) {
        ctx->pc = 0x118140u;
        goto label_fallthrough_0x118138;
    }
    ctx->pc = 0x118138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118138u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118138:
    ctx->pc = 0x118140u;
}
