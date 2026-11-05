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

// Function: sub_0012BFB8
// Address: 0x12bfb8 - 0x12c000
void sub_0012BFB8_0x12bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BFB8_0x12bfb8");
#endif

    switch (ctx->pc) {
        case 0x12bfd4u: goto label_12bfd4;
        default: break;
    }

    ctx->pc = 0x12bfb8u;

    // 0x12bfb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bfbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bfc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12bfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bfc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12bfc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12bfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12bfcc: 0xc04b000  jal         func_12C000
    ctx->pc = 0x12BFCCu;
    SET_GPR_U32(ctx, 31, 0x12BFD4u);
    ctx->pc = 0x12BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BFCCu;
    // 0x12bfd0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C000u, 0x12BFCCu, 0x12BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFD4u;
label_12bfd4:
    // 0x12bfd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12bfd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12bfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bfdc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12bfe0: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x12bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x12bfe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bfe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bfe8: 0x92020084  lbu         $v0, 0x84($s0)
    ctx->pc = 0x12bfe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x12bfec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bff0: 0xa2020084  sb          $v0, 0x84($s0)
    ctx->pc = 0x12bff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 2));
    // 0x12bff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bff8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFF8u;
        // 0x12bffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C000u;
}
