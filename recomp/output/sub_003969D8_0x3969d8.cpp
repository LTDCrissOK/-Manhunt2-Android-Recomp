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

// Function: sub_003969D8
// Address: 0x3969d8 - 0x396a30
void sub_003969D8_0x3969d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003969D8_0x3969d8");
#endif

    switch (ctx->pc) {
        case 0x396a00u: goto label_396a00;
        case 0x396a08u: goto label_396a08;
        default: break;
    }

    ctx->pc = 0x3969d8u;

    // 0x3969d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3969d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3969dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3969dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3969e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3969e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3969e4: 0x24421978  addiu       $v0, $v0, 0x1978
    ctx->pc = 0x3969e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6520));
    // 0x3969e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3969e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3969ec: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3969ecu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x401978u));
    // 0x3969f0: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3969F0u;
    {
        const bool branch_taken_0x3969f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3969f0) {
            ctx->pc = 0x3969F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3969F0u;
            // 0x3969f4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396A14u;
            goto label_396a14;
        }
    }
    ctx->pc = 0x3969F8u;
    // 0x3969f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3969f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3969fc: 0x0  nop
    ctx->pc = 0x3969fcu;
    // NOP
label_396a00:
    // 0x396a00: 0xc0e5a70  jal         func_3969C0
    ctx->pc = 0x396A00u;
    SET_GPR_U32(ctx, 31, 0x396A08u);
    ctx->pc = 0x3969C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3969C0u, 0x396A00u, 0x396A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396A08u;
label_396a08:
    // 0x396a08: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x396a08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396a0c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x396A0Cu;
    {
        const bool branch_taken_0x396a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A0Cu;
        // 0x396a10: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a0c) {
            ctx->pc = 0x396A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396a00;
        }
    }
    ctx->pc = 0x396A14u;
label_396a14:
    // 0x396a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396a18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x396a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x396a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396a20: 0x24421980  addiu       $v0, $v0, 0x1980
    ctx->pc = 0x396a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x396a24: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x396a24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x396a28: 0x80f25f8  j           func_3C97E0
    ctx->pc = 0x396A28u;
    ctx->pc = 0x396A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396A28u;
    // 0x396a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97E0u, 0x396A28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x396A30u;
}
