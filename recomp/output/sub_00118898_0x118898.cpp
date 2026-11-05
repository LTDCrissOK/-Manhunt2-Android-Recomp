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

// Function: sub_00118898
// Address: 0x118898 - 0x1188cc
void sub_00118898_0x118898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118898_0x118898");
#endif

    switch (ctx->pc) {
        case 0x118898u: goto label_118898;
        case 0x11889cu: goto label_11889c;
        case 0x1188a0u: goto label_1188a0;
        case 0x1188a4u: goto label_1188a4;
        case 0x1188a8u: goto label_1188a8;
        case 0x1188acu: goto label_1188ac;
        case 0x1188b0u: goto label_1188b0;
        case 0x1188b4u: goto label_1188b4;
        case 0x1188b8u: goto label_1188b8;
        case 0x1188bcu: goto label_1188bc;
        case 0x1188c0u: goto label_1188c0;
        case 0x1188c4u: goto label_1188c4;
        case 0x1188c8u: goto label_1188c8;
        default: break;
    }

    ctx->pc = 0x118898u;

label_118898:
    // 0x118898: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x118898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11889c:
    // 0x11889c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x11889cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1188a0:
    // 0x1188a0: 0x2444fff1  addiu       $a0, $v0, -0xF
    ctx->pc = 0x1188a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
label_1188a4:
    // 0x1188a4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x1188a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1188a8:
    // 0x1188a8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1188ac:
    if (ctx->pc == 0x1188ACu) {
        ctx->pc = 0x1188ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1188A8u;
        // 0x1188ac: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1188B0u;
        goto label_1188b0;
    }
    ctx->pc = 0x1188A8u;
    {
        const bool branch_taken_0x1188a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1188ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1188A8u;
        // 0x1188ac: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188a8) {
            ctx->pc = 0x1188ECu;
            return;
        }
    }
    ctx->pc = 0x1188B0u;
label_1188b0:
    // 0x1188b0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1188b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_1188b4:
    // 0x1188b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1188b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1188b8:
    // 0x1188b8: 0x2442b480  addiu       $v0, $v0, -0x4B80
    ctx->pc = 0x1188b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947968));
label_1188bc:
    // 0x1188bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1188bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1188c0:
    // 0x1188c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1188c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1188c4:
    // 0x1188c4: 0x800008  jr          $a0
label_1188c8:
    if (ctx->pc == 0x1188C8u) {
        ctx->pc = 0x1188CCu;
        goto label_fallthrough_0x1188c4;
    }
    ctx->pc = 0x1188C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1188C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1188c4:
    ctx->pc = 0x1188CCu;
}
