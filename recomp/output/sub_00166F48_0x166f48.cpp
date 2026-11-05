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

// Function: sub_00166F48
// Address: 0x166f48 - 0x166fa0
void sub_00166F48_0x166f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166F48_0x166f48");
#endif

    switch (ctx->pc) {
        case 0x166f68u: goto label_166f68;
        case 0x166f80u: goto label_166f80;
        case 0x166f90u: goto label_166f90;
        default: break;
    }

    ctx->pc = 0x166f48u;

    // 0x166f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x166f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x166f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166f50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x166f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x166f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f58: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x166f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
    // 0x166f5c: 0x8e0503a0  lw          $a1, 0x3A0($s0)
    ctx->pc = 0x166f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
    // 0x166f60: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x166F60u;
    SET_GPR_U32(ctx, 31, 0x166F68u);
    ctx->pc = 0x166F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F60u;
    // 0x166f64: 0xae0003a4  sw          $zero, 0x3A4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x166F60u, 0x166F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F68u;
label_166f68:
    // 0x166f68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166f6c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x166f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166f70: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x166F70u;
    {
        const bool branch_taken_0x166f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x166f70) {
            ctx->pc = 0x166F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166F70u;
            // 0x166f74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166F94u;
            goto label_166f94;
        }
    }
    ctx->pc = 0x166F78u;
    // 0x166f78: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x166F78u;
    SET_GPR_U32(ctx, 31, 0x166F80u);
    ctx->pc = 0x166F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F78u;
    // 0x166f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x166F78u, 0x166F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F80u;
label_166f80:
    // 0x166f80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166F80u;
    {
        const bool branch_taken_0x166f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F80u;
        // 0x166f84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f80) {
            ctx->pc = 0x166F90u;
            goto label_166f90;
        }
    }
    ctx->pc = 0x166F88u;
    // 0x166f88: 0xc04d7d4  jal         func_135F50
    ctx->pc = 0x166F88u;
    SET_GPR_U32(ctx, 31, 0x166F90u);
    ctx->pc = 0x166F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F88u;
    // 0x166f8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F50u, 0x166F88u, 0x166F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F90u;
label_166f90:
    // 0x166f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x166f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166f94:
    // 0x166f94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x166f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166f98: 0x3e00008  jr          $ra
    ctx->pc = 0x166F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F98u;
        // 0x166f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166FA0u;
}
