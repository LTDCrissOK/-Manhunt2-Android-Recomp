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

// Function: sub_003C92A8
// Address: 0x3c92a8 - 0x3c9300
void sub_003C92A8_0x3c92a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C92A8_0x3c92a8");
#endif

    switch (ctx->pc) {
        case 0x3c92ccu: goto label_3c92cc;
        default: break;
    }

    ctx->pc = 0x3c92a8u;

    // 0x3c92a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c92a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c92ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c92acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c92b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c92b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c92b4: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3c92b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x3c92b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c92b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c92bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c92bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c92c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3c92c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c92c4: 0xc0f2818  jal         func_3CA060
    ctx->pc = 0x3C92C4u;
    SET_GPR_U32(ctx, 31, 0x3C92CCu);
    ctx->pc = 0x3C92C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C92C4u;
    // 0x3c92c8: 0xae001130  sw          $zero, 0x1130($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA060u, 0x3C92C4u, 0x3C92CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C92CCu;
label_3c92cc:
    // 0x3c92cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c92ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c92d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c92d4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C92D4u;
    {
        const bool branch_taken_0x3c92d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c92d4) {
            ctx->pc = 0x3C92D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C92D4u;
            // 0x3c92d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C92ECu;
            goto label_3c92ec;
        }
    }
    ctx->pc = 0x3C92DCu;
    // 0x3c92dc: 0x8e021130  lw          $v0, 0x1130($s0)
    ctx->pc = 0x3c92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4400)));
    // 0x3c92e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C92E0u;
    {
        const bool branch_taken_0x3c92e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c92e0) {
            ctx->pc = 0x3C92E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C92E0u;
            // 0x3c92e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C92E8u;
            goto label_3c92e8;
        }
    }
    ctx->pc = 0x3C92E8u;
label_3c92e8:
    // 0x3c92e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c92e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c92ec:
    // 0x3c92ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c92ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c92f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c92f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c92f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c92f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c92f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C92F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C92F8u;
        // 0x3c92fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C92F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9300u;
}
