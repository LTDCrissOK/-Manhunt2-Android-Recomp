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

// Function: sub_00118958
// Address: 0x118958 - 0x118988
void sub_00118958_0x118958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118958_0x118958");
#endif

    switch (ctx->pc) {
        case 0x118958u: goto label_118958;
        case 0x11895cu: goto label_11895c;
        case 0x118960u: goto label_118960;
        case 0x118964u: goto label_118964;
        case 0x118968u: goto label_118968;
        case 0x11896cu: goto label_11896c;
        case 0x118970u: goto label_118970;
        case 0x118974u: goto label_118974;
        case 0x118978u: goto label_118978;
        case 0x11897cu: goto label_11897c;
        case 0x118980u: goto label_118980;
        case 0x118984u: goto label_118984;
        default: break;
    }

    ctx->pc = 0x118958u;

label_118958:
    // 0x118958: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x118958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11895c:
    // 0x11895c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x11895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_118960:
    // 0x118960: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x118960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_118964:
    // 0x118964: 0x2c83000f  sltiu       $v1, $a0, 0xF
    ctx->pc = 0x118964u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_118968:
    // 0x118968: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_11896c:
    if (ctx->pc == 0x11896Cu) {
        ctx->pc = 0x11896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118968u;
        // 0x11896c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118970u;
        goto label_118970;
    }
    ctx->pc = 0x118968u;
    {
        const bool branch_taken_0x118968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118968u;
        // 0x11896c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118968) {
            ctx->pc = 0x1189C0u;
            return;
        }
    }
    ctx->pc = 0x118970u;
label_118970:
    // 0x118970: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x118970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_118974:
    // 0x118974: 0x2442b4c0  addiu       $v0, $v0, -0x4B40
    ctx->pc = 0x118974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948032));
label_118978:
    // 0x118978: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11897c:
    // 0x11897c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11897cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_118980:
    // 0x118980: 0x800008  jr          $a0
label_118984:
    if (ctx->pc == 0x118984u) {
        ctx->pc = 0x118988u;
        goto label_fallthrough_0x118980;
    }
    ctx->pc = 0x118980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118980u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x118980:
    ctx->pc = 0x118988u;
}
