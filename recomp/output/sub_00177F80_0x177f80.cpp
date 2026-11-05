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

// Function: sub_00177F80
// Address: 0x177f80 - 0x177fd0
void sub_00177F80_0x177f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177F80_0x177f80");
#endif

    switch (ctx->pc) {
        case 0x177f94u: goto label_177f94;
        case 0x177fb4u: goto label_177fb4;
        default: break;
    }

    ctx->pc = 0x177f80u;

    // 0x177f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177f88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177f8c: 0xc05e1d4  jal         func_178750
    ctx->pc = 0x177F8Cu;
    SET_GPR_U32(ctx, 31, 0x177F94u);
    ctx->pc = 0x177F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F8Cu;
    // 0x177f90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178750u, 0x177F8Cu, 0x177F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F94u;
label_177f94:
    // 0x177f94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x177f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f98: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x177f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x177f9c: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x177F9Cu;
    {
        const bool branch_taken_0x177f9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x177FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F9Cu;
        // 0x177fa0: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f9c) {
            ctx->pc = 0x177FBCu;
            goto label_177fbc;
        }
    }
    ctx->pc = 0x177FA4u;
    // 0x177fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177fa8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x177fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x177fac: 0xc05e16c  jal         func_1785B0
    ctx->pc = 0x177FACu;
    SET_GPR_U32(ctx, 31, 0x177FB4u);
    ctx->pc = 0x177FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177FACu;
    // 0x177fb0: 0x8c500168  lw          $s0, 0x168($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1785B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1785B0u, 0x177FACu, 0x177FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177FB4u;
label_177fb4:
    // 0x177fb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177FB4u;
    {
        const bool branch_taken_0x177fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FB4u;
        // 0x177fb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fb4) {
            ctx->pc = 0x177FC0u;
            goto label_177fc0;
        }
    }
    ctx->pc = 0x177FBCu;
label_177fbc:
    // 0x177fbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x177fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177fc0:
    // 0x177fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177fc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x177FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FC8u;
        // 0x177fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177FD0u;
}
