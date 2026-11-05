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

// Function: sub_003BCE48
// Address: 0x3bce48 - 0x3bced0
void sub_003BCE48_0x3bce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCE48_0x3bce48");
#endif

    switch (ctx->pc) {
        case 0x3bce9cu: goto label_3bce9c;
        case 0x3bceb8u: goto label_3bceb8;
        default: break;
    }

    ctx->pc = 0x3bce48u;

    // 0x3bce48: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3bce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x3bce4c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3bce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3bce50: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x3bce50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x3bce54: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3bce54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3bce58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bce58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3bce5c: 0x2442cde0  addiu       $v0, $v0, -0x3220
    ctx->pc = 0x3bce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954464));
    // 0x3bce60: 0x2463e350  addiu       $v1, $v1, -0x1CB0
    ctx->pc = 0x3bce60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959952));
    // 0x3bce64: 0x24a5aa70  addiu       $a1, $a1, -0x5590
    ctx->pc = 0x3bce64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945392));
    // 0x3bce68: 0x24c60be8  addiu       $a2, $a2, 0xBE8
    ctx->pc = 0x3bce68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3048));
    // 0x3bce6c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x3bce6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3bce70: 0x24080068  addiu       $t0, $zero, 0x68
    ctx->pc = 0x3bce70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x3bce74: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3bce74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3bce78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bce78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bce7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bce80: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3bce80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3bce84: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3bce84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3bce88: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x3bce88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x3bce8c: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x3bce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x3bce90: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x3bce90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x3bce94: 0xc0f25e8  jal         func_3C97A0
    ctx->pc = 0x3BCE94u;
    SET_GPR_U32(ctx, 31, 0x3BCE9Cu);
    ctx->pc = 0x3BCE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCE94u;
    // 0x3bce98: 0xafa60020  sw          $a2, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97A0u, 0x3BCE94u, 0x3BCE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCE9Cu;
label_3bce9c:
    // 0x3bce9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3bce9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcea0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BCEA0u;
    {
        const bool branch_taken_0x3bcea0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3BCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEA0u;
        // 0x3bcea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcea0) {
            ctx->pc = 0x3BCEB0u;
            goto label_3bceb0;
        }
    }
    ctx->pc = 0x3BCEA8u;
    // 0x3bcea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BCEA8u;
    {
        const bool branch_taken_0x3bcea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEA8u;
        // 0x3bceac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcea8) {
            ctx->pc = 0x3BCEBCu;
            goto label_3bcebc;
        }
    }
    ctx->pc = 0x3BCEB0u;
label_3bceb0:
    // 0x3bceb0: 0xc0f2a1e  jal         func_3CA878
    ctx->pc = 0x3BCEB0u;
    SET_GPR_U32(ctx, 31, 0x3BCEB8u);
    ctx->pc = 0x3BCEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCEB0u;
    // 0x3bceb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA878u, 0x3BCEB0u, 0x3BCEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCEB8u;
label_3bceb8:
    // 0x3bceb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3bceb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bcebc:
    // 0x3bcebc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bcebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bcec0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3bcec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bcec4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BCEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEC4u;
        // 0x3bcec8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCECCu;
    // 0x3bcecc: 0x0  nop
    ctx->pc = 0x3bceccu;
    // NOP
    ctx->pc = 0x3bced0u;
}
