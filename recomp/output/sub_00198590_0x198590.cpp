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

// Function: sub_00198590
// Address: 0x198590 - 0x1985e8
void sub_00198590_0x198590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198590_0x198590");
#endif

    switch (ctx->pc) {
        case 0x1985a8u: goto label_1985a8;
        default: break;
    }

    ctx->pc = 0x198590u;

    // 0x198590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198598: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x198598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x19859c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19859cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985a0: 0xc09504e  jal         func_254138
    ctx->pc = 0x1985A0u;
    SET_GPR_U32(ctx, 31, 0x1985A8u);
    ctx->pc = 0x1985A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1985A0u;
    // 0x1985a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254138u, 0x1985A0u, 0x1985A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1985A8u;
label_1985a8:
    // 0x1985a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1985a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1985ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1985ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1985B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985ACu;
        // 0x1985b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1985ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1985B4u;
    // 0x1985b4: 0x0  nop
    ctx->pc = 0x1985b4u;
    // NOP
    // 0x1985b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1985b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1985bc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1985bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1985c0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1985C0u;
    {
        const bool branch_taken_0x1985c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1985C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985C0u;
        // 0x1985c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985c0) {
            ctx->pc = 0x1985DCu;
            goto label_1985dc;
        }
    }
    ctx->pc = 0x1985C8u;
    // 0x1985c8: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x1985c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1985cc: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x1985ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1985d0: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1985D0u;
    {
        const bool branch_taken_0x1985d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1985D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985D0u;
        // 0x1985d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985d0) {
            ctx->pc = 0x1985DCu;
            goto label_1985dc;
        }
    }
    ctx->pc = 0x1985D8u;
    // 0x1985d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1985d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1985dc:
    // 0x1985dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1985DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1985DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1985E4u;
    // 0x1985e4: 0x0  nop
    ctx->pc = 0x1985e4u;
    // NOP
    ctx->pc = 0x1985e8u;
}
