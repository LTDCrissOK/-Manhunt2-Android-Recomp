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

// Function: sub_00118A40
// Address: 0x118a40 - 0x118a70
void sub_00118A40_0x118a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118A40_0x118a40");
#endif

    switch (ctx->pc) {
        case 0x118a40u: goto label_118a40;
        case 0x118a44u: goto label_118a44;
        case 0x118a48u: goto label_118a48;
        case 0x118a4cu: goto label_118a4c;
        case 0x118a50u: goto label_118a50;
        case 0x118a54u: goto label_118a54;
        case 0x118a58u: goto label_118a58;
        case 0x118a5cu: goto label_118a5c;
        case 0x118a60u: goto label_118a60;
        case 0x118a64u: goto label_118a64;
        case 0x118a68u: goto label_118a68;
        case 0x118a6cu: goto label_118a6c;
        default: break;
    }

    ctx->pc = 0x118a40u;

label_118a40:
    // 0x118a40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x118a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_118a44:
    // 0x118a44: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x118a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_118a48:
    // 0x118a48: 0x2444fffb  addiu       $a0, $v0, -0x5
    ctx->pc = 0x118a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_118a4c:
    // 0x118a4c: 0x2c830012  sltiu       $v1, $a0, 0x12
    ctx->pc = 0x118a4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_118a50:
    // 0x118a50: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_118a54:
    if (ctx->pc == 0x118A54u) {
        ctx->pc = 0x118A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A50u;
        // 0x118a54: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118A58u;
        goto label_118a58;
    }
    ctx->pc = 0x118A50u;
    {
        const bool branch_taken_0x118a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A50u;
        // 0x118a54: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a50) {
            ctx->pc = 0x118AB4u;
            return;
        }
    }
    ctx->pc = 0x118A58u;
label_118a58:
    // 0x118a58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_118a5c:
    // 0x118a5c: 0x2442b540  addiu       $v0, $v0, -0x4AC0
    ctx->pc = 0x118a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948160));
label_118a60:
    // 0x118a60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_118a64:
    // 0x118a64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118a68:
    // 0x118a68: 0x800008  jr          $a0
label_118a6c:
    if (ctx->pc == 0x118A6Cu) {
        ctx->pc = 0x118A70u;
        goto label_fallthrough_0x118a68;
    }
    ctx->pc = 0x118A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118A68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118a68:
    ctx->pc = 0x118A70u;
}
