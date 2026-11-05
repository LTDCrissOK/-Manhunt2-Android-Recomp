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

// Function: sub_001556E8
// Address: 0x1556e8 - 0x155730
void sub_001556E8_0x1556e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001556E8_0x1556e8");
#endif

    ctx->pc = 0x1556e8u;

    // 0x1556e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1556e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1556ec: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1556ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1556f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1556f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1556f4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1556f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1556f8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1556f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1556fc: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1556fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x155700: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x155700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155704: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x155708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15570c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x15570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x155710: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155710u;
    {
        const bool branch_taken_0x155710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155710) {
            ctx->pc = 0x155728u;
            goto label_155728;
        }
    }
    ctx->pc = 0x155718u;
    // 0x155718: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x155718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x15571c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x15571cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x155720: 0x3e00008  jr          $ra
    ctx->pc = 0x155720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155720u;
        // 0x155724: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155728u;
label_155728:
    // 0x155728: 0x3e00008  jr          $ra
    ctx->pc = 0x155728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155728u;
        // 0x15572c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155730u;
}
