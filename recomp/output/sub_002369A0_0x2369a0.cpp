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

// Function: sub_002369A0
// Address: 0x2369a0 - 0x236a10
void sub_002369A0_0x2369a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002369A0_0x2369a0");
#endif

    switch (ctx->pc) {
        case 0x2369b4u: goto label_2369b4;
        case 0x2369c8u: goto label_2369c8;
        case 0x2369f0u: goto label_2369f0;
        default: break;
    }

    ctx->pc = 0x2369a0u;

    // 0x2369a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2369a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2369a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2369a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2369a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2369a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2369ac: 0xc08dada  jal         func_236B68
    ctx->pc = 0x2369ACu;
    SET_GPR_U32(ctx, 31, 0x2369B4u);
    ctx->pc = 0x2369B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369ACu;
    // 0x2369b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x2369ACu, 0x2369B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369B4u;
label_2369b4:
    // 0x2369b4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2369B4u;
    {
        const bool branch_taken_0x2369b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2369B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369B4u;
        // 0x2369b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2369b4) {
            ctx->pc = 0x2369FCu;
            goto label_2369fc;
        }
    }
    ctx->pc = 0x2369BCu;
    // 0x2369bc: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x2369bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x2369c0: 0xc0ac9da  jal         func_2B2768
    ctx->pc = 0x2369C0u;
    SET_GPR_U32(ctx, 31, 0x2369C8u);
    ctx->pc = 0x2369C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369C0u;
    // 0x2369c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2768u, 0x2369C0u, 0x2369C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369C8u;
label_2369c8:
    // 0x2369c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2369c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2369cc: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x2369ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x2369d0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2369D0u;
    {
        const bool branch_taken_0x2369d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2369D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369D0u;
        // 0x2369d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2369d0) {
            ctx->pc = 0x2369E0u;
            goto label_2369e0;
        }
    }
    ctx->pc = 0x2369D8u;
    // 0x2369d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2369D8u;
    {
        const bool branch_taken_0x2369d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2369DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369D8u;
        // 0x2369dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2369d8) {
            ctx->pc = 0x2369FCu;
            goto label_2369fc;
        }
    }
    ctx->pc = 0x2369E0u;
label_2369e0:
    // 0x2369e0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2369E0u;
    {
        const bool branch_taken_0x2369e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2369E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369E0u;
        // 0x2369e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2369e0) {
            ctx->pc = 0x2369F8u;
            goto label_2369f8;
        }
    }
    ctx->pc = 0x2369E8u;
    // 0x2369e8: 0xc08db1e  jal         func_236C78
    ctx->pc = 0x2369E8u;
    SET_GPR_U32(ctx, 31, 0x2369F0u);
    ctx->pc = 0x2369ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2369E8u;
    // 0x2369ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x2369E8u, 0x2369F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2369F0u;
label_2369f0:
    // 0x2369f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2369F0u;
    {
        const bool branch_taken_0x2369f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2369F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369F0u;
        // 0x2369f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2369f0) {
            ctx->pc = 0x236A00u;
            goto label_236a00;
        }
    }
    ctx->pc = 0x2369F8u;
label_2369f8:
    // 0x2369f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2369f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2369fc:
    // 0x2369fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2369fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236a00:
    // 0x236a00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236a04: 0x3e00008  jr          $ra
    ctx->pc = 0x236A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A04u;
        // 0x236a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236A0Cu;
    // 0x236a0c: 0x0  nop
    ctx->pc = 0x236a0cu;
    // NOP
    ctx->pc = 0x236a10u;
}
