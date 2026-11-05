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

// Function: sub_001237A0
// Address: 0x1237a0 - 0x1237f0
void sub_001237A0_0x1237a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001237A0_0x1237a0");
#endif

    switch (ctx->pc) {
        case 0x1237c0u: goto label_1237c0;
        case 0x1237d4u: goto label_1237d4;
        default: break;
    }

    ctx->pc = 0x1237a0u;

    // 0x1237a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1237a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1237a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1237a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1237a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1237a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1237ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1237acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1237b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1237b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1237b8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1237B8u;
    SET_GPR_U32(ctx, 31, 0x1237C0u);
    ctx->pc = 0x1237BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1237B8u;
    // 0x1237bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1237B8u, 0x1237C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237C0u;
label_1237c0:
    // 0x1237c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1237C0u;
    {
        const bool branch_taken_0x1237c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237C0u;
        // 0x1237c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237c0) {
            ctx->pc = 0x1237DCu;
            goto label_1237dc;
        }
    }
    ctx->pc = 0x1237C8u;
    // 0x1237c8: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1237c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1237cc: 0xc042b64  jal         func_10AD90
    ctx->pc = 0x1237CCu;
    SET_GPR_U32(ctx, 31, 0x1237D4u);
    ctx->pc = 0x1237D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1237CCu;
    // 0x1237d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AD90u, 0x1237CCu, 0x1237D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237D4u;
label_1237d4:
    // 0x1237d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1237D4u;
    {
        const bool branch_taken_0x1237d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237D4u;
        // 0x1237d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237d4) {
            ctx->pc = 0x1237E0u;
            goto label_1237e0;
        }
    }
    ctx->pc = 0x1237DCu;
label_1237dc:
    // 0x1237dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1237dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1237e0:
    // 0x1237e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1237e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1237e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1237e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1237e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1237E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1237ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237E8u;
        // 0x1237ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1237E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1237F0u;
}
