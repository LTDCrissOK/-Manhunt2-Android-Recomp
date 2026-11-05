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

// Function: sub_00157DA8
// Address: 0x157da8 - 0x157e08
void sub_00157DA8_0x157da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157DA8_0x157da8");
#endif

    switch (ctx->pc) {
        case 0x157dccu: goto label_157dcc;
        case 0x157dd4u: goto label_157dd4;
        case 0x157ddcu: goto label_157ddc;
        case 0x157de4u: goto label_157de4;
        case 0x157decu: goto label_157dec;
        case 0x157df4u: goto label_157df4;
        default: break;
    }

    ctx->pc = 0x157da8u;

    // 0x157da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x157dac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157db0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x157db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x157db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157db8: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x157db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x157dbc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x157DBCu;
    {
        const bool branch_taken_0x157dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157dbc) {
            ctx->pc = 0x157DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157DBCu;
            // 0x157dc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157DF8u;
            goto label_157df8;
        }
    }
    ctx->pc = 0x157DC4u;
    // 0x157dc4: 0xc056050  jal         func_158140
    ctx->pc = 0x157DC4u;
    SET_GPR_U32(ctx, 31, 0x157DCCu);
    ctx->pc = 0x158140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158140u, 0x157DC4u, 0x157DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DCCu;
label_157dcc:
    // 0x157dcc: 0xc05608e  jal         func_158238
    ctx->pc = 0x157DCCu;
    SET_GPR_U32(ctx, 31, 0x157DD4u);
    ctx->pc = 0x157DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DCCu;
    // 0x157dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158238u, 0x157DCCu, 0x157DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DD4u;
label_157dd4:
    // 0x157dd4: 0xc0560cc  jal         func_158330
    ctx->pc = 0x157DD4u;
    SET_GPR_U32(ctx, 31, 0x157DDCu);
    ctx->pc = 0x157DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DD4u;
    // 0x157dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158330u, 0x157DD4u, 0x157DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DDCu;
label_157ddc:
    // 0x157ddc: 0xc04f04c  jal         func_13C130
    ctx->pc = 0x157DDCu;
    SET_GPR_U32(ctx, 31, 0x157DE4u);
    ctx->pc = 0x157DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DDCu;
    // 0x157de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C130u, 0x157DDCu, 0x157DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DE4u;
label_157de4:
    // 0x157de4: 0xc04f06e  jal         func_13C1B8
    ctx->pc = 0x157DE4u;
    SET_GPR_U32(ctx, 31, 0x157DECu);
    ctx->pc = 0x157DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DE4u;
    // 0x157de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1B8u, 0x157DE4u, 0x157DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DECu;
label_157dec:
    // 0x157dec: 0xc056362  jal         func_158D88
    ctx->pc = 0x157DECu;
    SET_GPR_U32(ctx, 31, 0x157DF4u);
    ctx->pc = 0x157DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DECu;
    // 0x157df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D88u, 0x157DECu, 0x157DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DF4u;
label_157df4:
    // 0x157df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157df8:
    // 0x157df8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x157df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x157DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DFCu;
        // 0x157e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157E04u;
    // 0x157e04: 0x0  nop
    ctx->pc = 0x157e04u;
    // NOP
    ctx->pc = 0x157e08u;
}
