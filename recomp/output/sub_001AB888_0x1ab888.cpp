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

// Function: sub_001AB888
// Address: 0x1ab888 - 0x1ab8e0
void sub_001AB888_0x1ab888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB888_0x1ab888");
#endif

    switch (ctx->pc) {
        case 0x1ab8a4u: goto label_1ab8a4;
        default: break;
    }

    ctx->pc = 0x1ab888u;

    // 0x1ab888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab88c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab894: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ab894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab898: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ab898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ab89c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB89Cu;
    SET_GPR_U32(ctx, 31, 0x1AB8A4u);
    ctx->pc = 0x1AB8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB89Cu;
    // 0x1ab8a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB89Cu, 0x1AB8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB8A4u;
label_1ab8a4:
    // 0x1ab8a4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1ab8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1ab8a8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1ab8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ab8ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB8ACu;
    {
        const bool branch_taken_0x1ab8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8ACu;
        // 0x1ab8b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8ac) {
            ctx->pc = 0x1AB8C0u;
            goto label_1ab8c0;
        }
    }
    ctx->pc = 0x1AB8B4u;
    // 0x1ab8b4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1ab8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ab8b8: 0x2442f948  addiu       $v0, $v0, -0x6B8
    ctx->pc = 0x1ab8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965576));
    // 0x1ab8bc: 0x2c4400d3  sltiu       $a0, $v0, 0xD3
    ctx->pc = 0x1ab8bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)211) ? 1 : 0);
label_1ab8c0:
    // 0x1ab8c0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB8C0u;
    {
        const bool branch_taken_0x1ab8c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8C0u;
        // 0x1ab8c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8c0) {
            ctx->pc = 0x1AB8CCu;
            goto label_1ab8cc;
        }
    }
    ctx->pc = 0x1AB8C8u;
    // 0x1ab8c8: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x1ab8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
label_1ab8cc:
    // 0x1ab8cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab8d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8D4u;
        // 0x1ab8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB8DCu;
    // 0x1ab8dc: 0x0  nop
    ctx->pc = 0x1ab8dcu;
    // NOP
    ctx->pc = 0x1ab8e0u;
}
