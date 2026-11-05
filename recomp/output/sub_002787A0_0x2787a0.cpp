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

// Function: sub_002787A0
// Address: 0x2787a0 - 0x2787f8
void sub_002787A0_0x2787a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002787A0_0x2787a0");
#endif

    switch (ctx->pc) {
        case 0x2787d4u: goto label_2787d4;
        case 0x2787e0u: goto label_2787e0;
        default: break;
    }

    ctx->pc = 0x2787a0u;

    // 0x2787a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2787a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2787a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2787a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2787a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2787a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2787ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2787acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2787b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2787b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2787b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787b8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2787b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2787bc: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x2787bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2787c0: 0x24a582e0  addiu       $a1, $a1, -0x7D20
    ctx->pc = 0x2787c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935264));
    // 0x2787c4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2787c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2787c8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2787c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2787cc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2787CCu;
    SET_GPR_U32(ctx, 31, 0x2787D4u);
    ctx->pc = 0x2787D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2787CCu;
    // 0x2787d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2787CCu, 0x2787D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2787D4u;
label_2787d4:
    // 0x2787d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2787d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2787d8: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2787D8u;
    SET_GPR_U32(ctx, 31, 0x2787E0u);
    ctx->pc = 0x2787DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2787D8u;
    // 0x2787dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2787D8u, 0x2787E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2787E0u;
label_2787e0:
    // 0x2787e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2787e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2787e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2787e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2787e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2787e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2787ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2787ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2787F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787ECu;
        // 0x2787f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2787ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2787F4u;
    // 0x2787f4: 0x0  nop
    ctx->pc = 0x2787f4u;
    // NOP
    ctx->pc = 0x2787f8u;
}
