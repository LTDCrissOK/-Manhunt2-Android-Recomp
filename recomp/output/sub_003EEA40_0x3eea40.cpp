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

// Function: sub_003EEA40
// Address: 0x3eea40 - 0x3eead8
void sub_003EEA40_0x3eea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEA40_0x3eea40");
#endif

    switch (ctx->pc) {
        case 0x3eeaccu: goto label_3eeacc;
        default: break;
    }

    ctx->pc = 0x3eea40u;

    // 0x3eea40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3eea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3eea44: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3eea44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eea48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3eea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3eea4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3eea4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eea50: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3eea50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3eea54: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEA54u;
    {
        const bool branch_taken_0x3eea54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eea54) {
            ctx->pc = 0x3EEA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEA54u;
            // 0x3eea58: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEA68u;
            goto label_3eea68;
        }
    }
    ctx->pc = 0x3EEA5Cu;
    // 0x3eea5c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3eea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3eea60: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3eea60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3eea64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3eea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3eea68:
    // 0x3eea68: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEA68u;
    {
        const bool branch_taken_0x3eea68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eea68) {
            ctx->pc = 0x3EEA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEA68u;
            // 0x3eea6c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEA7Cu;
            goto label_3eea7c;
        }
    }
    ctx->pc = 0x3EEA70u;
    // 0x3eea70: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3eea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3eea74: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3eea74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3eea78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eea7c:
    // 0x3eea7c: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEA7Cu;
    {
        const bool branch_taken_0x3eea7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eea7c) {
            ctx->pc = 0x3EEA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEA7Cu;
            // 0x3eea80: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEA90u;
            goto label_3eea90;
        }
    }
    ctx->pc = 0x3EEA84u;
    // 0x3eea84: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3eea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3eea88: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3eea88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3eea8c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3eea8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3eea90:
    // 0x3eea90: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEA90u;
    {
        const bool branch_taken_0x3eea90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eea90) {
            ctx->pc = 0x3EEA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEA90u;
            // 0x3eea94: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEAA4u;
            goto label_3eeaa4;
        }
    }
    ctx->pc = 0x3EEA98u;
    // 0x3eea98: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3eea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3eea9c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3eea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x3eeaa0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3eeaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3eeaa4:
    // 0x3eeaa4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEAA4u;
    {
        const bool branch_taken_0x3eeaa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eeaa4) {
            ctx->pc = 0x3EEAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEAA4u;
            // 0x3eeaa8: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEAB8u;
            goto label_3eeab8;
        }
    }
    ctx->pc = 0x3EEAACu;
    // 0x3eeaac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3eeaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3eeab0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3eeab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3eeab4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3eeab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3eeab8:
    // 0x3eeab8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3eeab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3eeabc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EEABCu;
    {
        const bool branch_taken_0x3eeabc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEABCu;
        // 0x3eeac0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeabc) {
            ctx->pc = 0x3EEACCu;
            goto label_3eeacc;
        }
    }
    ctx->pc = 0x3EEAC4u;
    // 0x3eeac4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EEAC4u;
    SET_GPR_U32(ctx, 31, 0x3EEACCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EEAC4u, 0x3EEACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEACCu;
label_3eeacc:
    // 0x3eeacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eeaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eead0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EEAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEAD0u;
        // 0x3eead4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EEAD8u;
}
