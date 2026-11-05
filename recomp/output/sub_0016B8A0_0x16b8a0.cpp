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

// Function: sub_0016B8A0
// Address: 0x16b8a0 - 0x16b8f8
void sub_0016B8A0_0x16b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B8A0_0x16b8a0");
#endif

    switch (ctx->pc) {
        case 0x16b8c0u: goto label_16b8c0;
        case 0x16b8ccu: goto label_16b8cc;
        case 0x16b8d8u: goto label_16b8d8;
        default: break;
    }

    ctx->pc = 0x16b8a0u;

    // 0x16b8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b8a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b8a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b8b0: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x16b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x16b8b4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x16B8B4u;
    {
        const bool branch_taken_0x16b8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b8b4) {
            ctx->pc = 0x16B8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B8B4u;
            // 0x16b8b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B8E8u;
            goto label_16b8e8;
        }
    }
    ctx->pc = 0x16B8BCu;
    // 0x16b8bc: 0x8e05014c  lw          $a1, 0x14C($s0)
    ctx->pc = 0x16b8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
label_16b8c0:
    // 0x16b8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b8c4: 0xc05ae06  jal         func_16B818
    ctx->pc = 0x16B8C4u;
    SET_GPR_U32(ctx, 31, 0x16B8CCu);
    ctx->pc = 0x16B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B8C4u;
    // 0x16b8c8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B818u, 0x16B8C4u, 0x16B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B8CCu;
label_16b8cc:
    // 0x16b8cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16b8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b8d0: 0xc05adbc  jal         func_16B6F0
    ctx->pc = 0x16B8D0u;
    SET_GPR_U32(ctx, 31, 0x16B8D8u);
    ctx->pc = 0x16B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B8D0u;
    // 0x16b8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B6F0u, 0x16B8D0u, 0x16B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B8D8u;
label_16b8d8:
    // 0x16b8d8: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x16b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x16b8dc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16B8DCu;
    {
        const bool branch_taken_0x16b8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b8dc) {
            ctx->pc = 0x16B8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B8DCu;
            // 0x16b8e0: 0x8e05014c  lw          $a1, 0x14C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b8c0;
        }
    }
    ctx->pc = 0x16B8E4u;
    // 0x16b8e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b8e8:
    // 0x16b8e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x16B8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8ECu;
        // 0x16b8f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B8F4u;
    // 0x16b8f4: 0x0  nop
    ctx->pc = 0x16b8f4u;
    // NOP
    ctx->pc = 0x16b8f8u;
}
