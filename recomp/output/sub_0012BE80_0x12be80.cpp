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

// Function: sub_0012BE80
// Address: 0x12be80 - 0x12bec0
void sub_0012BE80_0x12be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BE80_0x12be80");
#endif

    switch (ctx->pc) {
        case 0x12bea0u: goto label_12bea0;
        case 0x12beacu: goto label_12beac;
        default: break;
    }

    ctx->pc = 0x12be80u;

    // 0x12be80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12be84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12be88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12be88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be8c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BE8Cu;
    {
        const bool branch_taken_0x12be8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE8Cu;
        // 0x12be90: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be8c) {
            ctx->pc = 0x12BEA4u;
            goto label_12bea4;
        }
    }
    ctx->pc = 0x12BE94u;
    // 0x12be94: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12be94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12be98: 0xc041e9c  jal         func_107A70
    ctx->pc = 0x12BE98u;
    SET_GPR_U32(ctx, 31, 0x12BEA0u);
    ctx->pc = 0x12BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BE98u;
    // 0x12be9c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A70u, 0x12BE98u, 0x12BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BEA0u;
label_12bea0:
    // 0x12bea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12bea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12bea4:
    // 0x12bea4: 0xc045e90  jal         func_117A40
    ctx->pc = 0x12BEA4u;
    SET_GPR_U32(ctx, 31, 0x12BEACu);
    ctx->pc = 0x12BEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BEA4u;
    // 0x12bea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A40u, 0x12BEA4u, 0x12BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BEACu;
label_12beac:
    // 0x12beac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12beacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12beb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12beb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12beb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12beb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12beb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEB8u;
        // 0x12bebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BEC0u;
}
