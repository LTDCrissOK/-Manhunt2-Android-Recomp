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

// Function: sub_003C6A60
// Address: 0x3c6a60 - 0x3c6b00
void sub_003C6A60_0x3c6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6A60_0x3c6a60");
#endif

    switch (ctx->pc) {
        case 0x3c6aa0u: goto label_3c6aa0;
        case 0x3c6ab4u: goto label_3c6ab4;
        case 0x3c6ac8u: goto label_3c6ac8;
        default: break;
    }

    ctx->pc = 0x3c6a60u;

    // 0x3c6a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c6a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c6a64: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3c6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x3c6a68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c6a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c6a6c: 0x24426b00  addiu       $v0, $v0, 0x6B00
    ctx->pc = 0x3c6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
    // 0x3c6a70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c6a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6a74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c6a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c6a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c6a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c6a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c6a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c6a80: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x3c6a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x3c6a84: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x3c6a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x3c6a88: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x3c6a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x3c6a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c6a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6a90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c6a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6a94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3c6a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c6a98: 0xc0f1a7e  jal         func_3C69F8
    ctx->pc = 0x3C6A98u;
    SET_GPR_U32(ctx, 31, 0x3C6AA0u);
    ctx->pc = 0x3C6A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6A98u;
    // 0x3c6a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C69F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C69F8u, 0x3C6A98u, 0x3C6AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6AA0u;
label_3c6aa0:
    // 0x3c6aa0: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x3c6aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x3c6aa4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c6aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6aa8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3c6aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3c6aac: 0xc0f1a7e  jal         func_3C69F8
    ctx->pc = 0x3C6AACu;
    SET_GPR_U32(ctx, 31, 0x3C6AB4u);
    ctx->pc = 0x3C6AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6AACu;
    // 0x3c6ab0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C69F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C69F8u, 0x3C6AACu, 0x3C6AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6AB4u;
label_3c6ab4:
    // 0x3c6ab4: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x3c6ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x3c6ab8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c6ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6abc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3c6abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c6ac0: 0xc0f1a7e  jal         func_3C69F8
    ctx->pc = 0x3C6AC0u;
    SET_GPR_U32(ctx, 31, 0x3C6AC8u);
    ctx->pc = 0x3C6AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6AC0u;
    // 0x3c6ac4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C69F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C69F8u, 0x3C6AC0u, 0x3C6AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6AC8u;
label_3c6ac8:
    // 0x3c6ac8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c6acc: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x3c6accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x3c6ad0: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x3c6ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x3c6ad4: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x3c6ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x3c6ad8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c6ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c6adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c6adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c6ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c6ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6AE4u;
        // 0x3c6ae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6AECu;
    // 0x3c6aec: 0x0  nop
    ctx->pc = 0x3c6aecu;
    // NOP
    // 0x3c6af0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3c6af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c6af4: 0x0  nop
    ctx->pc = 0x3c6af4u;
    // NOP
    // 0x3c6af8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3c6af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3c6afc: 0x0  nop
    ctx->pc = 0x3c6afcu;
    // NOP
    ctx->pc = 0x3c6b00u;
}
