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

// Function: sub_002D7CD8
// Address: 0x2d7cd8 - 0x2d7d58
void sub_002D7CD8_0x2d7cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7CD8_0x2d7cd8");
#endif

    switch (ctx->pc) {
        case 0x2d7cf8u: goto label_2d7cf8;
        case 0x2d7d24u: goto label_2d7d24;
        default: break;
    }

    ctx->pc = 0x2d7cd8u;

    // 0x2d7cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7ce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d7ce8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d7ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7cec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d7cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d7cf0: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x2D7CF0u;
    SET_GPR_U32(ctx, 31, 0x2D7CF8u);
    ctx->pc = 0x2D7CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7CF0u;
    // 0x2d7cf4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2D7CF0u, 0x2D7CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CF8u;
label_2d7cf8:
    // 0x2d7cf8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d7cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7cfc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d7cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d7d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d04: 0x24a51058  addiu       $a1, $a1, 0x1058
    ctx->pc = 0x2d7d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4184));
    // 0x2d7d08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d7d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d7d0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d7d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d7d10: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d7d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7d14: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d7d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d7d18: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d7d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7d1c: 0xc0b5f56  jal         func_2D7D58
    ctx->pc = 0x2D7D1Cu;
    SET_GPR_U32(ctx, 31, 0x2D7D24u);
    ctx->pc = 0x2D7D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7D1Cu;
    // 0x2d7d20: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D58u, 0x2D7D1Cu, 0x2D7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D24u;
label_2d7d24:
    // 0x2d7d24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7d28: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d7d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d7d2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d7d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7d30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7d34: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2d7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x2d7d38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7d3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7d40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7d44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7d48: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d7d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d7d4c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d7d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d7d50: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D50u;
        // 0x2d7d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7D58u;
}
