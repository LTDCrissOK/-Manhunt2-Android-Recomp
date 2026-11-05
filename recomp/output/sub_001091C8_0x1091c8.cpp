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

// Function: sub_001091C8
// Address: 0x1091c8 - 0x109200
void sub_001091C8_0x1091c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001091C8_0x1091c8");
#endif

    switch (ctx->pc) {
        case 0x1091f0u: goto label_1091f0;
        default: break;
    }

    ctx->pc = 0x1091c8u;

    // 0x1091c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1091c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1091cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1091ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1091d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1091d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1091d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1091d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1091d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1091dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1091dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1091e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1091E0u;
    {
        const bool branch_taken_0x1091e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091E0u;
        // 0x1091e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091e0) {
            ctx->pc = 0x1091F0u;
            goto label_1091f0;
        }
    }
    ctx->pc = 0x1091E8u;
    // 0x1091e8: 0xc042496  jal         func_109258
    ctx->pc = 0x1091E8u;
    SET_GPR_U32(ctx, 31, 0x1091F0u);
    ctx->pc = 0x109258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109258u, 0x1091E8u, 0x1091F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1091F0u;
label_1091f0:
    // 0x1091f0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1091f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1091f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1091F4u;
    {
        const bool branch_taken_0x1091f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1091f4) {
            ctx->pc = 0x1091F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1091F4u;
            // 0x1091f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109208u;
            return;
        }
    }
    ctx->pc = 0x1091FCu;
    // 0x1091fc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1091FCu;
    SET_GPR_U32(ctx, 31, 0x109204u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1091FCu, 0x109204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109204u;
}
