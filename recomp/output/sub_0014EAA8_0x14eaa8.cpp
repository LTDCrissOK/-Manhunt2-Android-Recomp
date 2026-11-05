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

// Function: sub_0014EAA8
// Address: 0x14eaa8 - 0x14eae8
void sub_0014EAA8_0x14eaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EAA8_0x14eaa8");
#endif

    switch (ctx->pc) {
        case 0x14eaccu: goto label_14eacc;
        case 0x14ead4u: goto label_14ead4;
        default: break;
    }

    ctx->pc = 0x14eaa8u;

    // 0x14eaa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14eaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14eaac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14eaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14eab0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14eab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14eab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14eab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eab8: 0x8e020914  lw          $v0, 0x914($s0)
    ctx->pc = 0x14eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2324)));
    // 0x14eabc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14EABCu;
    {
        const bool branch_taken_0x14eabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eabc) {
            ctx->pc = 0x14EAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EABCu;
            // 0x14eac0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EAD8u;
            goto label_14ead8;
        }
    }
    ctx->pc = 0x14EAC4u;
    // 0x14eac4: 0xc04d93c  jal         func_1364F0
    ctx->pc = 0x14EAC4u;
    SET_GPR_U32(ctx, 31, 0x14EACCu);
    ctx->pc = 0x14EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAC4u;
    // 0x14eac8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364F0u, 0x14EAC4u, 0x14EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EACCu;
label_14eacc:
    // 0x14eacc: 0xc05446c  jal         func_1511B0
    ctx->pc = 0x14EACCu;
    SET_GPR_U32(ctx, 31, 0x14EAD4u);
    ctx->pc = 0x14EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EACCu;
    // 0x14ead0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1511B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511B0u, 0x14EACCu, 0x14EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAD4u;
label_14ead4:
    // 0x14ead4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ead4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14ead8:
    // 0x14ead8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14ead8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14eadc: 0x3e00008  jr          $ra
    ctx->pc = 0x14EADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EADCu;
        // 0x14eae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EAE4u;
    // 0x14eae4: 0x0  nop
    ctx->pc = 0x14eae4u;
    // NOP
    ctx->pc = 0x14eae8u;
}
