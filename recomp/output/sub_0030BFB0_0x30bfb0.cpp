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

// Function: sub_0030BFB0
// Address: 0x30bfb0 - 0x30c008
void sub_0030BFB0_0x30bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BFB0_0x30bfb0");
#endif

    switch (ctx->pc) {
        case 0x30bfd8u: goto label_30bfd8;
        default: break;
    }

    ctx->pc = 0x30bfb0u;

    // 0x30bfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30bfb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30bfb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30bfbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30bfbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bfc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30bfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30bfc4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x30bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x30bfc8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30BFC8u;
    {
        const bool branch_taken_0x30bfc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFC8u;
        // 0x30bfcc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfc8) {
            ctx->pc = 0x30BFECu;
            goto label_30bfec;
        }
    }
    ctx->pc = 0x30BFD0u;
    // 0x30bfd0: 0xc0c49c6  jal         func_312718
    ctx->pc = 0x30BFD0u;
    SET_GPR_U32(ctx, 31, 0x30BFD8u);
    ctx->pc = 0x312718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312718u, 0x30BFD0u, 0x30BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BFD8u;
label_30bfd8:
    // 0x30bfd8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BFD8u;
    {
        const bool branch_taken_0x30bfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bfd8) {
            ctx->pc = 0x30BFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BFD8u;
            // 0x30bfdc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BFF0u;
            goto label_30bff0;
        }
    }
    ctx->pc = 0x30BFE0u;
    // 0x30bfe0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x30bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x30bfe4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30BFE4u;
    {
        const bool branch_taken_0x30bfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFE4u;
        // 0x30bfe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfe4) {
            ctx->pc = 0x30BFF0u;
            goto label_30bff0;
        }
    }
    ctx->pc = 0x30BFECu;
label_30bfec:
    // 0x30bfec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30bfecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30bff0:
    // 0x30bff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30bff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30bff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30bff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30bff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bffc: 0x3e00008  jr          $ra
    ctx->pc = 0x30BFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFFCu;
        // 0x30c000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C004u;
    // 0x30c004: 0x0  nop
    ctx->pc = 0x30c004u;
    // NOP
    ctx->pc = 0x30c008u;
}
