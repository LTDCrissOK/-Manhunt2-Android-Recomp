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

// Function: sub_002D6B98
// Address: 0x2d6b98 - 0x2d6be0
void sub_002D6B98_0x2d6b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6B98_0x2d6b98");
#endif

    switch (ctx->pc) {
        case 0x2d6bb8u: goto label_2d6bb8;
        case 0x2d6bc8u: goto label_2d6bc8;
        default: break;
    }

    ctx->pc = 0x2d6b98u;

    // 0x2d6b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6ba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d6ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d6ba4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d6ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ba8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d6ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6bac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d6bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6bb0: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x2D6BB0u;
    SET_GPR_U32(ctx, 31, 0x2D6BB8u);
    ctx->pc = 0x2D6BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6BB0u;
    // 0x2d6bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x2D6BB0u, 0x2D6BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6BB8u;
label_2d6bb8:
    // 0x2d6bb8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d6bbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d6bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6bc0: 0xc0b4dea  jal         func_2D37A8
    ctx->pc = 0x2D6BC0u;
    SET_GPR_U32(ctx, 31, 0x2D6BC8u);
    ctx->pc = 0x2D6BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6BC0u;
    // 0x2d6bc4: 0x8c44bd2c  lw          $a0, -0x42D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D37A8u, 0x2D6BC0u, 0x2D6BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6BC8u;
label_2d6bc8:
    // 0x2d6bc8: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2d6bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x2d6bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d6bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d6bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BD8u;
        // 0x2d6bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6BE0u;
}
