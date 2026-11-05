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

// Function: sub_00276BE0
// Address: 0x276be0 - 0x276c38
void sub_00276BE0_0x276be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276BE0_0x276be0");
#endif

    switch (ctx->pc) {
        case 0x276c00u: goto label_276c00;
        case 0x276c18u: goto label_276c18;
        case 0x276c24u: goto label_276c24;
        default: break;
    }

    ctx->pc = 0x276be0u;

    // 0x276be0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x276be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x276be4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x276be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x276be8: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x276be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x276bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bf0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x276bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x276bf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x276bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bf8: 0xc085d4e  jal         func_217538
    ctx->pc = 0x276BF8u;
    SET_GPR_U32(ctx, 31, 0x276C00u);
    ctx->pc = 0x276BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276BF8u;
    // 0x276bfc: 0x8e040220  lw          $a0, 0x220($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x276BF8u, 0x276C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C00u;
label_276c00:
    // 0x276c00: 0x8e0600f8  lw          $a2, 0xF8($s0)
    ctx->pc = 0x276c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x276c04: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x276c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x276c08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x276c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c0c: 0x24a581e0  addiu       $a1, $a1, -0x7E20
    ctx->pc = 0x276c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935008));
    // 0x276c10: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x276C10u;
    SET_GPR_U32(ctx, 31, 0x276C18u);
    ctx->pc = 0x276C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C10u;
    // 0x276c14: 0xae020228  sw          $v0, 0x228($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x276C10u, 0x276C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C18u;
label_276c18:
    // 0x276c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c1c: 0xc0845aa  jal         func_2116A8
    ctx->pc = 0x276C1Cu;
    SET_GPR_U32(ctx, 31, 0x276C24u);
    ctx->pc = 0x276C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C1Cu;
    // 0x276c20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x276C1Cu, 0x276C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C24u;
label_276c24:
    // 0x276c24: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x276c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x276c28: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x276c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x276c2c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x276c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x276c30: 0x3e00008  jr          $ra
    ctx->pc = 0x276C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C30u;
        // 0x276c34: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276C38u;
}
