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

// Function: sub_00205980
// Address: 0x205980 - 0x2059c0
void sub_00205980_0x205980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205980_0x205980");
#endif

    switch (ctx->pc) {
        case 0x2059a4u: goto label_2059a4;
        default: break;
    }

    ctx->pc = 0x205980u;

    // 0x205980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205988: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20598c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20598cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205990: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x205990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x205994: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x205994u;
    {
        const bool branch_taken_0x205994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205994) {
            ctx->pc = 0x205998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205994u;
            // 0x205998: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2059B0u;
            goto label_2059b0;
        }
    }
    ctx->pc = 0x20599Cu;
    // 0x20599c: 0xc0e7e52  jal         func_39F948
    ctx->pc = 0x20599Cu;
    SET_GPR_U32(ctx, 31, 0x2059A4u);
    ctx->pc = 0x2059A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20599Cu;
    // 0x2059a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F948u, 0x20599Cu, 0x2059A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059A4u;
label_2059a4:
    // 0x2059a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2059a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2059a8: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x2059a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x2059ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2059acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2059b0:
    // 0x2059b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2059b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2059b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2059B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2059B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059B4u;
        // 0x2059b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2059B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2059BCu;
    // 0x2059bc: 0x0  nop
    ctx->pc = 0x2059bcu;
    // NOP
    ctx->pc = 0x2059c0u;
}
