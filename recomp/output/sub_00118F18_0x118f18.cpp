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

// Function: sub_00118F18
// Address: 0x118f18 - 0x118f4c
void sub_00118F18_0x118f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118F18_0x118f18");
#endif

    switch (ctx->pc) {
        case 0x118f18u: goto label_118f18;
        case 0x118f1cu: goto label_118f1c;
        case 0x118f20u: goto label_118f20;
        case 0x118f24u: goto label_118f24;
        case 0x118f28u: goto label_118f28;
        case 0x118f2cu: goto label_118f2c;
        case 0x118f30u: goto label_118f30;
        case 0x118f34u: goto label_118f34;
        case 0x118f38u: goto label_118f38;
        case 0x118f3cu: goto label_118f3c;
        case 0x118f40u: goto label_118f40;
        case 0x118f44u: goto label_118f44;
        case 0x118f48u: goto label_118f48;
        default: break;
    }

    ctx->pc = 0x118f18u;

label_118f18:
    // 0x118f18: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x118f18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_118f1c:
    // 0x118f1c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x118f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_118f20:
    // 0x118f20: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x118f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_118f24:
    // 0x118f24: 0x106200d2  beq         $v1, $v0, . + 4 + (0xD2 << 2)
label_118f28:
    if (ctx->pc == 0x118F28u) {
        ctx->pc = 0x118F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F24u;
        // 0x118f28: 0x2c620018  sltiu       $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x118F2Cu;
        goto label_118f2c;
    }
    ctx->pc = 0x118F24u;
    {
        const bool branch_taken_0x118f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x118F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F24u;
        // 0x118f28: 0x2c620018  sltiu       $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f24) {
            ctx->pc = 0x119270u;
            return;
        }
    }
    ctx->pc = 0x118F2Cu;
label_118f2c:
    // 0x118f2c: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
label_118f30:
    if (ctx->pc == 0x118F30u) {
        ctx->pc = 0x118F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F2Cu;
        // 0x118f30: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118F34u;
        goto label_118f34;
    }
    ctx->pc = 0x118F2Cu;
    {
        const bool branch_taken_0x118f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F2Cu;
        // 0x118f30: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f2c) {
            ctx->pc = 0x119270u;
            return;
        }
    }
    ctx->pc = 0x118F34u;
label_118f34:
    // 0x118f34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x118f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_118f38:
    // 0x118f38: 0x2442b650  addiu       $v0, $v0, -0x49B0
    ctx->pc = 0x118f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948432));
label_118f3c:
    // 0x118f3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_118f40:
    // 0x118f40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118f44:
    // 0x118f44: 0x800008  jr          $a0
label_118f48:
    if (ctx->pc == 0x118F48u) {
        ctx->pc = 0x118F4Cu;
        goto label_fallthrough_0x118f44;
    }
    ctx->pc = 0x118F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118F44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118f44:
    ctx->pc = 0x118F4Cu;
}
