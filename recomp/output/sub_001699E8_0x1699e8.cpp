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

// Function: sub_001699E8
// Address: 0x1699e8 - 0x169a38
void sub_001699E8_0x1699e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001699E8_0x1699e8");
#endif

    switch (ctx->pc) {
        case 0x169a10u: goto label_169a10;
        case 0x169a24u: goto label_169a24;
        default: break;
    }

    ctx->pc = 0x1699e8u;

    // 0x1699e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1699e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1699ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1699ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1699f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1699f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1699f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1699f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1699f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1699fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1699fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x169a00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169A00u;
    {
        const bool branch_taken_0x169a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A00u;
        // 0x169a04: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a00) {
            ctx->pc = 0x169A10u;
            goto label_169a10;
        }
    }
    ctx->pc = 0x169A08u;
    // 0x169a08: 0xc05a69c  jal         func_169A70
    ctx->pc = 0x169A08u;
    SET_GPR_U32(ctx, 31, 0x169A10u);
    ctx->pc = 0x169A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169A70u, 0x169A08u, 0x169A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A10u;
label_169a10:
    // 0x169a10: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x169a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x169a14: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x169A14u;
    {
        const bool branch_taken_0x169a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a14) {
            ctx->pc = 0x169A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169A14u;
            // 0x169a18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169A28u;
            goto label_169a28;
        }
    }
    ctx->pc = 0x169A1Cu;
    // 0x169a1c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x169A1Cu;
    SET_GPR_U32(ctx, 31, 0x169A24u);
    ctx->pc = 0x169A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A1Cu;
    // 0x169a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x169A1Cu, 0x169A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A24u;
label_169a24:
    // 0x169a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169a28:
    // 0x169a28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169a2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169a30: 0x3e00008  jr          $ra
    ctx->pc = 0x169A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A30u;
        // 0x169a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169A38u;
}
