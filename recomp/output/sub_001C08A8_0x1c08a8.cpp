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

// Function: sub_001C08A8
// Address: 0x1c08a8 - 0x1c08e8
void sub_001C08A8_0x1c08a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C08A8_0x1c08a8");
#endif

    switch (ctx->pc) {
        case 0x1c08dcu: goto label_1c08dc;
        default: break;
    }

    ctx->pc = 0x1c08a8u;

    // 0x1c08a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c08a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c08ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c08acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c08b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c08b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c08b4: 0x8cc204bc  lw          $v0, 0x4BC($a2)
    ctx->pc = 0x1c08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1212)));
    // 0x1c08b8: 0x8c440334  lw          $a0, 0x334($v0)
    ctx->pc = 0x1c08b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1c08bc: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1c08bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1c08c0: 0x2463ffed  addiu       $v1, $v1, -0x13
    ctx->pc = 0x1c08c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967277));
    // 0x1c08c4: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x1c08c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c08c8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C08C8u;
    {
        const bool branch_taken_0x1c08c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08C8u;
        // 0x1c08cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c08c8) {
            ctx->pc = 0x1C08E0u;
            goto label_1c08e0;
        }
    }
    ctx->pc = 0x1C08D0u;
    // 0x1c08d0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c08d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c08d4: 0xc06f97e  jal         func_1BE5F8
    ctx->pc = 0x1C08D4u;
    SET_GPR_U32(ctx, 31, 0x1C08DCu);
    ctx->pc = 0x1C08D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C08D4u;
    // 0x1c08d8: 0xacc004b0  sw          $zero, 0x4B0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 1200), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE5F8u, 0x1C08D4u, 0x1C08DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C08DCu;
label_1c08dc:
    // 0x1c08dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c08dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c08e0:
    // 0x1c08e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C08E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08E0u;
        // 0x1c08e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C08E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C08E8u;
}
