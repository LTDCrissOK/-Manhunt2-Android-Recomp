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

// Function: sub_002CAC20
// Address: 0x2cac20 - 0x2cac88
void sub_002CAC20_0x2cac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAC20_0x2cac20");
#endif

    switch (ctx->pc) {
        case 0x2cac68u: goto label_2cac68;
        default: break;
    }

    ctx->pc = 0x2cac20u;

    // 0x2cac20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cac24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cac28: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2cac28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cac2c: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x2cac2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2cac30: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CAC30u;
    {
        const bool branch_taken_0x2cac30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cac30) {
            ctx->pc = 0x2CAC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAC30u;
            // 0x2cac34: 0x90820011  lbu         $v0, 0x11($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAC58u;
            goto label_2cac58;
        }
    }
    ctx->pc = 0x2CAC38u;
    // 0x2cac38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cac3c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2cac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cac40: 0x433818  mult        $a3, $v0, $v1
    ctx->pc = 0x2cac40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2cac44: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2cac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2cac48: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2cac48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cac4c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CAC4Cu;
    {
        const bool branch_taken_0x2cac4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cac4c) {
            ctx->pc = 0x2CAC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAC4Cu;
            // 0x2cac50: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAC70u;
            goto label_2cac70;
        }
    }
    ctx->pc = 0x2CAC54u;
    // 0x2cac54: 0x90820011  lbu         $v0, 0x11($a0)
    ctx->pc = 0x2cac54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
label_2cac58:
    // 0x2cac58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CAC58u;
    {
        const bool branch_taken_0x2cac58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC58u;
        // 0x2cac5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac58) {
            ctx->pc = 0x2CAC7Cu;
            goto label_2cac7c;
        }
    }
    ctx->pc = 0x2CAC60u;
    // 0x2cac60: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2CAC60u;
    SET_GPR_U32(ctx, 31, 0x2CAC68u);
    ctx->pc = 0x2CAC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC60u;
    // 0x2cac64: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2CAC60u, 0x2CAC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC68u;
label_2cac68:
    // 0x2cac68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAC68u;
    {
        const bool branch_taken_0x2cac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC68u;
        // 0x2cac6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac68) {
            ctx->pc = 0x2CAC7Cu;
            goto label_2cac7c;
        }
    }
    ctx->pc = 0x2CAC70u;
label_2cac70:
    // 0x2cac70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cac70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cac74: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2cac74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2cac78: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2cac78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2cac7c:
    // 0x2cac7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cac7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cac80: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC80u;
        // 0x2cac84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAC88u;
}
