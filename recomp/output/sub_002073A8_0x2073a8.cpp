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

// Function: sub_002073A8
// Address: 0x2073a8 - 0x2073e0
void sub_002073A8_0x2073a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002073A8_0x2073a8");
#endif

    switch (ctx->pc) {
        case 0x2073d0u: goto label_2073d0;
        default: break;
    }

    ctx->pc = 0x2073a8u;

    // 0x2073a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2073a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2073ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2073acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2073b0: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x2073b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2073b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2073B4u;
    {
        const bool branch_taken_0x2073b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073B4u;
        // 0x2073b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073b4) {
            ctx->pc = 0x2073D4u;
            goto label_2073d4;
        }
    }
    ctx->pc = 0x2073BCu;
    // 0x2073bc: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x2073bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2073c0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2073C0u;
    {
        const bool branch_taken_0x2073c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2073c0) {
            ctx->pc = 0x2073D4u;
            goto label_2073d4;
        }
    }
    ctx->pc = 0x2073C8u;
    // 0x2073c8: 0xc0819e8  jal         func_2067A0
    ctx->pc = 0x2073C8u;
    SET_GPR_U32(ctx, 31, 0x2073D0u);
    ctx->pc = 0x2067A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2067A0u, 0x2073C8u, 0x2073D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073D0u;
label_2073d0:
    // 0x2073d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2073d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2073d4:
    // 0x2073d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2073D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2073D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073D4u;
        // 0x2073d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2073D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2073DCu;
    // 0x2073dc: 0x0  nop
    ctx->pc = 0x2073dcu;
    // NOP
    ctx->pc = 0x2073e0u;
}
