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

// Function: sub_00370D30
// Address: 0x370d30 - 0x370de0
void sub_00370D30_0x370d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370D30_0x370d30");
#endif

    switch (ctx->pc) {
        case 0x370d6cu: goto label_370d6c;
        case 0x370d88u: goto label_370d88;
        case 0x370dacu: goto label_370dac;
        case 0x370dc0u: goto label_370dc0;
        default: break;
    }

    ctx->pc = 0x370d30u;

    // 0x370d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370d38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x370d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x370d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d40: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x370d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x370d44: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x370d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x370d48: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x370d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x370d4c: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x370d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x370d50: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x370d50u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x370d54: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x370D54u;
    {
        const bool branch_taken_0x370d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x370d54) {
            ctx->pc = 0x370D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370D54u;
            // 0x370d58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x370D5Cu;
            goto label_370d5c;
        }
    }
    ctx->pc = 0x370D5Cu;
label_370d5c:
    // 0x370d5c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x370d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x370d60: 0x3010  mfhi        $a2
    ctx->pc = 0x370d60u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x370d64: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x370D64u;
    {
        const bool branch_taken_0x370d64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x370d64) {
            ctx->pc = 0x370D88u;
            goto label_370d88;
        }
    }
    ctx->pc = 0x370D6Cu;
label_370d6c:
    // 0x370d6c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x370d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x370d70: 0x0  nop
    ctx->pc = 0x370d70u;
    // NOP
    // 0x370d74: 0x0  nop
    ctx->pc = 0x370d74u;
    // NOP
    // 0x370d78: 0x0  nop
    ctx->pc = 0x370d78u;
    // NOP
    // 0x370d7c: 0x10c2fffb  beq         $a2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x370D7Cu;
    {
        const bool branch_taken_0x370d7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x370d7c) {
            ctx->pc = 0x370D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370d6c;
        }
    }
    ctx->pc = 0x370D84u;
    // 0x370d84: 0x0  nop
    ctx->pc = 0x370d84u;
    // NOP
label_370d88:
    // 0x370d88: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x370d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x370d8c: 0x0  nop
    ctx->pc = 0x370d8cu;
    // NOP
    // 0x370d90: 0x0  nop
    ctx->pc = 0x370d90u;
    // NOP
    // 0x370d94: 0x0  nop
    ctx->pc = 0x370d94u;
    // NOP
    // 0x370d98: 0x10c2fffb  beq         $a2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x370D98u;
    {
        const bool branch_taken_0x370d98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x370D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D98u;
        // 0x370d9c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370d98) {
            ctx->pc = 0x370D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370d88;
        }
    }
    ctx->pc = 0x370DA0u;
    // 0x370da0: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x370da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x370da4: 0xc0dc346  jal         func_370D18
    ctx->pc = 0x370DA4u;
    SET_GPR_U32(ctx, 31, 0x370DACu);
    ctx->pc = 0x370DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DA4u;
    // 0x370da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D18u, 0x370DA4u, 0x370DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DACu;
label_370dac:
    // 0x370dac: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x370dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x370db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370db4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x370db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x370db8: 0xc0dc346  jal         func_370D18
    ctx->pc = 0x370DB8u;
    SET_GPR_U32(ctx, 31, 0x370DC0u);
    ctx->pc = 0x370DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DB8u;
    // 0x370dbc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D18u, 0x370DB8u, 0x370DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DC0u;
label_370dc0:
    // 0x370dc0: 0x2443ffc0  addiu       $v1, $v0, -0x40
    ctx->pc = 0x370dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x370dc4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x370dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x370dc8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x370dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x370dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370dd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x370DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370DD4u;
        // 0x370dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370DDCu;
    // 0x370ddc: 0x0  nop
    ctx->pc = 0x370ddcu;
    // NOP
    ctx->pc = 0x370de0u;
}
