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

// Function: sub_0039E4C0
// Address: 0x39e4c0 - 0x39e560
void sub_0039E4C0_0x39e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E4C0_0x39e4c0");
#endif

    switch (ctx->pc) {
        case 0x39e4f8u: goto label_39e4f8;
        case 0x39e518u: goto label_39e518;
        case 0x39e540u: goto label_39e540;
        default: break;
    }

    ctx->pc = 0x39e4c0u;

    // 0x39e4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39e4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39e4c4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x39e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x39e4c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e4cc: 0x2470adec  addiu       $s0, $v1, -0x5214
    ctx->pc = 0x39e4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946284));
    // 0x39e4d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39e4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39e4d4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x39e4d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x39e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x40ADECu));
    // 0x39e4dc: 0x2442adf0  addiu       $v0, $v0, -0x5210
    ctx->pc = 0x39e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946288));
    // 0x39e4e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x40ADF0u));
    // 0x39e4e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39e4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40ADF0u));
    // 0x39e4e8: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E4E8u;
    {
        const bool branch_taken_0x39e4e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e4e8) {
            ctx->pc = 0x39E4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E4E8u;
            // 0x39e4ec: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E500u;
            goto label_39e500;
        }
    }
    ctx->pc = 0x39E4F0u;
    // 0x39e4f0: 0xc0ec6ae  jal         func_3B1AB8
    ctx->pc = 0x39E4F0u;
    SET_GPR_U32(ctx, 31, 0x39E4F8u);
    ctx->pc = 0x3B1AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1AB8u, 0x39E4F0u, 0x39E4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E4F8u;
label_39e4f8:
    // 0x39e4f8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x39e4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39e4fc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x39e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_39e500:
    // 0x39e500: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39e500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e504: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39e504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x39e508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e50c: 0x3e00008  jr          $ra
    ctx->pc = 0x39E50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E50Cu;
        // 0x39e510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E514u;
    // 0x39e514: 0x0  nop
    ctx->pc = 0x39e514u;
    // NOP
label_39e518:
    // 0x39e518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39e518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39e51c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x39e520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e524: 0x2450adec  addiu       $s0, $v0, -0x5214
    ctx->pc = 0x39e524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946284));
    // 0x39e528: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39e528u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40ADECu));
    // 0x39e52c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e530: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E530u;
    {
        const bool branch_taken_0x39e530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E530u;
        // 0x39e534: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e530) {
            ctx->pc = 0x39E544u;
            goto label_39e544;
        }
    }
    ctx->pc = 0x39E538u;
    // 0x39e538: 0xc0ec6be  jal         func_3B1AF8
    ctx->pc = 0x39E538u;
    SET_GPR_U32(ctx, 31, 0x39E540u);
    ctx->pc = 0x3B1AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1AF8u, 0x39E538u, 0x39E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E540u;
label_39e540:
    // 0x39e540: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39e540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39e544:
    // 0x39e544: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39e548: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39e548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e54c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39e54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x39e550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e554: 0x3e00008  jr          $ra
    ctx->pc = 0x39E554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E554u;
        // 0x39e558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E55Cu;
    // 0x39e55c: 0x0  nop
    ctx->pc = 0x39e55cu;
    // NOP
    ctx->pc = 0x39e560u;
}
