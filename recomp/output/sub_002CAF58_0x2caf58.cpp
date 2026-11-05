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

// Function: sub_002CAF58
// Address: 0x2caf58 - 0x2cb008
void sub_002CAF58_0x2caf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAF58_0x2caf58");
#endif

    ctx->pc = 0x2caf58u;

    // 0x2caf58: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2caf58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf5c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2caf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2caf60: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2CAF60u;
    {
        const bool branch_taken_0x2caf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caf60) {
            ctx->pc = 0x2CAF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAF60u;
            // 0x2caf64: 0x8d22003c  lw          $v0, 0x3C($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAF9Cu;
            goto label_2caf9c;
        }
    }
    ctx->pc = 0x2CAF68u;
    // 0x2caf68: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x2caf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x2caf6c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2caf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2caf70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2caf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2caf74: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2caf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2caf78: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2caf78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2caf7c: 0x8d23002c  lw          $v1, 0x2C($t1)
    ctx->pc = 0x2caf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x2caf80: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2caf80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2caf84: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2caf84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2caf88: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x2caf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x2caf8c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2caf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2caf90: 0x8d23003c  lw          $v1, 0x3C($t1)
    ctx->pc = 0x2caf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x2caf94: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF94u;
        // 0x2caf98: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAF9Cu;
label_2caf9c:
    // 0x2caf9c: 0x8d230038  lw          $v1, 0x38($t1)
    ctx->pc = 0x2caf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x2cafa0: 0x8d240034  lw          $a0, 0x34($t1)
    ctx->pc = 0x2cafa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x2cafa4: 0x435023  subu        $t2, $v0, $v1
    ctx->pc = 0x2cafa4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cafa8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2cafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cafac: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x2cafacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2cafb0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CAFB0u;
    {
        const bool branch_taken_0x2cafb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFB0u;
        // 0x2cafb4: 0x8d220030  lw          $v0, 0x30($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cafb0) {
            ctx->pc = 0x2CAFD0u;
            goto label_2cafd0;
        }
    }
    ctx->pc = 0x2CAFB8u;
    // 0x2cafb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cafbc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2cafbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cafc0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x2cafc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x2cafc4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2cafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2cafc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFC8u;
        // 0x2cafcc: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAFD0u;
label_2cafd0:
    // 0x2cafd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cafd4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2cafd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2cafd8: 0x8d220034  lw          $v0, 0x34($t1)
    ctx->pc = 0x2cafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x2cafdc: 0x8d23003c  lw          $v1, 0x3C($t1)
    ctx->pc = 0x2cafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x2cafe0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2cafe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cafe4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2cafe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2cafe8: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x2cafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x2cafec: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2cafecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2caff0: 0x8d230034  lw          $v1, 0x34($t1)
    ctx->pc = 0x2caff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x2caff4: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x2caff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x2caff8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2caff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2caffc: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x2caffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2cb000: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB000u;
        // 0x2cb004: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB008u;
}
