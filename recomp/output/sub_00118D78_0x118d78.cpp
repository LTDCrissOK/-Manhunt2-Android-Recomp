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

// Function: sub_00118D78
// Address: 0x118d78 - 0x118de8
void sub_00118D78_0x118d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118D78_0x118d78");
#endif

    switch (ctx->pc) {
        case 0x118da4u: goto label_118da4;
        case 0x118dacu: goto label_118dac;
        case 0x118db4u: goto label_118db4;
        default: break;
    }

    ctx->pc = 0x118d78u;

    // 0x118d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118d7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118d80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x118d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x118d84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x118d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118d8c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x118D8Cu;
    {
        const bool branch_taken_0x118d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118d8c) {
            ctx->pc = 0x118D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118D8Cu;
            // 0x118d90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118DDCu;
            goto label_118ddc;
        }
    }
    ctx->pc = 0x118D94u;
    // 0x118d94: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x118d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x118d98: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x118d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x118d9c: 0xc04637a  jal         func_118DE8
    ctx->pc = 0x118D9Cu;
    SET_GPR_U32(ctx, 31, 0x118DA4u);
    ctx->pc = 0x118DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D9Cu;
    // 0x118da0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DE8u, 0x118D9Cu, 0x118DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DA4u;
label_118da4:
    // 0x118da4: 0xc046380  jal         func_118E00
    ctx->pc = 0x118DA4u;
    SET_GPR_U32(ctx, 31, 0x118DACu);
    ctx->pc = 0x118DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DA4u;
    // 0x118da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E00u, 0x118DA4u, 0x118DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DACu;
label_118dac:
    // 0x118dac: 0xc046386  jal         func_118E18
    ctx->pc = 0x118DACu;
    SET_GPR_U32(ctx, 31, 0x118DB4u);
    ctx->pc = 0x118DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DACu;
    // 0x118db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E18u, 0x118DACu, 0x118DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DB4u;
label_118db4:
    // 0x118db4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x118db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x118db8: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x118db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x118dbc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x118dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x118dc0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x118dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x118dc4: 0x7e000060  sq          $zero, 0x60($s0)
    ctx->pc = 0x118dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 0));
    // 0x118dc8: 0x7e000070  sq          $zero, 0x70($s0)
    ctx->pc = 0x118dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 0));
    // 0x118dcc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x118dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x118dd0: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x118dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x118dd4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x118dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x118dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_118ddc:
    // 0x118ddc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x118ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118de0: 0x3e00008  jr          $ra
    ctx->pc = 0x118DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DE0u;
        // 0x118de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118DE8u;
}
