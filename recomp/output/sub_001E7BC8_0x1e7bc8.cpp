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

// Function: sub_001E7BC8
// Address: 0x1e7bc8 - 0x1e7c18
void sub_001E7BC8_0x1e7bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7BC8_0x1e7bc8");
#endif

    switch (ctx->pc) {
        case 0x1e7bf8u: goto label_1e7bf8;
        case 0x1e7c00u: goto label_1e7c00;
        default: break;
    }

    ctx->pc = 0x1e7bc8u;

    // 0x1e7bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7bd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e7bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e7bd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bd8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e7bdc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1E7BDCu;
    {
        const bool branch_taken_0x1e7bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7bdc) {
            ctx->pc = 0x1E7BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7BDCu;
            // 0x1e7be0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7C0Cu;
            goto label_1e7c0c;
        }
    }
    ctx->pc = 0x1E7BE4u;
    // 0x1e7be4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1e7be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7be8: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x1e7be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e7bec: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1e7becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e7bf0: 0xc0b1ace  jal         func_2C6B38
    ctx->pc = 0x1E7BF0u;
    SET_GPR_U32(ctx, 31, 0x1E7BF8u);
    ctx->pc = 0x1E7BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BF0u;
    // 0x1e7bf4: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B38u, 0x1E7BF0u, 0x1E7BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BF8u;
label_1e7bf8:
    // 0x1e7bf8: 0xc079ebe  jal         func_1E7AF8
    ctx->pc = 0x1E7BF8u;
    SET_GPR_U32(ctx, 31, 0x1E7C00u);
    ctx->pc = 0x1E7BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BF8u;
    // 0x1e7bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7AF8u, 0x1E7BF8u, 0x1E7C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C00u;
label_1e7c00:
    // 0x1e7c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7c04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e7c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e7c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7c0c:
    // 0x1e7c0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e7c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7c10: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C10u;
        // 0x1e7c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7C18u;
}
