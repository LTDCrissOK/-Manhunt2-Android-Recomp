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

// Function: sub_00154960
// Address: 0x154960 - 0x1549e8
void sub_00154960_0x154960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154960_0x154960");
#endif

    switch (ctx->pc) {
        case 0x154998u: goto label_154998;
        case 0x1549a4u: goto label_1549a4;
        case 0x1549b8u: goto label_1549b8;
        case 0x1549ccu: goto label_1549cc;
        default: break;
    }

    ctx->pc = 0x154960u;

    // 0x154960: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x154960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x154964: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x154964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x154968: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x154968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15496c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15496cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154970: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x154970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x154974: 0x248404e8  addiu       $a0, $a0, 0x4E8
    ctx->pc = 0x154974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1256));
    // 0x154978: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x154978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15497c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x154980: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x154980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154984: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x154984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154988: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x154988u;
    {
        const bool branch_taken_0x154988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154988u;
        // 0x15498c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154988) {
            ctx->pc = 0x1549D0u;
            goto label_1549d0;
        }
    }
    ctx->pc = 0x154990u;
    // 0x154990: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x154990u;
    SET_GPR_U32(ctx, 31, 0x154998u);
    ctx->pc = 0x154994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154990u;
    // 0x154994: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x154990u, 0x154998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154998u;
label_154998:
    // 0x154998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15499c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15499Cu;
    SET_GPR_U32(ctx, 31, 0x1549A4u);
    ctx->pc = 0x1549A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15499Cu;
    // 0x1549a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15499Cu, 0x1549A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549A4u;
label_1549a4:
    // 0x1549a4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1549A4u;
    {
        const bool branch_taken_0x1549a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1549a4) {
            ctx->pc = 0x1549A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1549A4u;
            // 0x1549a8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1549C0u;
            goto label_1549c0;
        }
    }
    ctx->pc = 0x1549ACu;
    // 0x1549ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1549acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1549b0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1549B0u;
    SET_GPR_U32(ctx, 31, 0x1549B8u);
    ctx->pc = 0x1549B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549B0u;
    // 0x1549b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1549B0u, 0x1549B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549B8u;
label_1549b8:
    // 0x1549b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1549B8u;
    {
        const bool branch_taken_0x1549b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549B8u;
        // 0x1549bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549b8) {
            ctx->pc = 0x1549D0u;
            goto label_1549d0;
        }
    }
    ctx->pc = 0x1549C0u;
label_1549c0:
    // 0x1549c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1549c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1549c4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1549C4u;
    SET_GPR_U32(ctx, 31, 0x1549CCu);
    ctx->pc = 0x1549C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549C4u;
    // 0x1549c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1549C4u, 0x1549CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549CCu;
label_1549cc:
    // 0x1549cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1549ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1549d0:
    // 0x1549d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1549d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1549d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1549d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1549d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1549d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1549dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1549DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1549E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549DCu;
        // 0x1549e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1549DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1549E4u;
    // 0x1549e4: 0x0  nop
    ctx->pc = 0x1549e4u;
    // NOP
    ctx->pc = 0x1549e8u;
}
