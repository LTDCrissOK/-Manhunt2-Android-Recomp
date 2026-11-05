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

// Function: sub_002D7BD8
// Address: 0x2d7bd8 - 0x2d7c58
void sub_002D7BD8_0x2d7bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7BD8_0x2d7bd8");
#endif

    switch (ctx->pc) {
        case 0x2d7bf8u: goto label_2d7bf8;
        case 0x2d7c24u: goto label_2d7c24;
        default: break;
    }

    ctx->pc = 0x2d7bd8u;

    // 0x2d7bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7be0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7be4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d7be8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d7be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d7becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d7bf0: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x2D7BF0u;
    SET_GPR_U32(ctx, 31, 0x2D7BF8u);
    ctx->pc = 0x2D7BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7BF0u;
    // 0x2d7bf4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2D7BF0u, 0x2D7BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BF8u;
label_2d7bf8:
    // 0x2d7bf8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7bfc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d7bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d7c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c04: 0x24a51048  addiu       $a1, $a1, 0x1048
    ctx->pc = 0x2d7c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4168));
    // 0x2d7c08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d7c0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d7c10: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d7c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7c14: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d7c18: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7c1c: 0xc0b5f56  jal         func_2D7D58
    ctx->pc = 0x2D7C1Cu;
    SET_GPR_U32(ctx, 31, 0x2D7C24u);
    ctx->pc = 0x2D7C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C1Cu;
    // 0x2d7c20: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D58u, 0x2D7C1Cu, 0x2D7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C24u;
label_2d7c24:
    // 0x2d7c24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7c28: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d7c2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d7c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7c30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d7c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7c34: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2d7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x2d7c38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7c3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7c44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d7c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7c48: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d7c4c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d7c50: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C50u;
        // 0x2d7c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7C58u;
}
