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

// Function: sub_003169A0
// Address: 0x3169a0 - 0x3169f0
void sub_003169A0_0x3169a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003169A0_0x3169a0");
#endif

    switch (ctx->pc) {
        case 0x3169ccu: goto label_3169cc;
        case 0x3169d8u: goto label_3169d8;
        default: break;
    }

    ctx->pc = 0x3169a0u;

    // 0x3169a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3169a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3169a4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3169a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3169a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3169a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3169ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3169acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3169b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3169b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169b4: 0x8c43bd4c  lw          $v1, -0x42B4($v0)
    ctx->pc = 0x3169b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD4Cu));
    // 0x3169b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3169b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3169BCu;
    {
        const bool branch_taken_0x3169bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3169C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169BCu;
        // 0x3169c0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3169bc) {
            ctx->pc = 0x3169CCu;
            goto label_3169cc;
        }
    }
    ctx->pc = 0x3169C4u;
    // 0x3169c4: 0xc0401ee  jal         func_1007B8
    ctx->pc = 0x3169C4u;
    SET_GPR_U32(ctx, 31, 0x3169CCu);
    ctx->pc = 0x3169C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3169C4u;
    // 0x3169c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1007B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1007B8u, 0x3169C4u, 0x3169CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3169CCu;
label_3169cc:
    // 0x3169cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3169ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169d0: 0xc0402c0  jal         func_100B00
    ctx->pc = 0x3169D0u;
    SET_GPR_U32(ctx, 31, 0x3169D8u);
    ctx->pc = 0x3169D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3169D0u;
    // 0x3169d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B00u, 0x3169D0u, 0x3169D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3169D8u;
label_3169d8:
    // 0x3169d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3169d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3169dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3169dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3169e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3169e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3169e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3169e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3169e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3169E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3169ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169E8u;
        // 0x3169ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3169E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3169F0u;
}
