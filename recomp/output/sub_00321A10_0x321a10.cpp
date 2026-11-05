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

// Function: sub_00321A10
// Address: 0x321a10 - 0x321ac8
void sub_00321A10_0x321a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321A10_0x321a10");
#endif

    switch (ctx->pc) {
        case 0x321a28u: goto label_321a28;
        case 0x321a54u: goto label_321a54;
        case 0x321a64u: goto label_321a64;
        case 0x321a84u: goto label_321a84;
        case 0x321a8cu: goto label_321a8c;
        case 0x321aa0u: goto label_321aa0;
        case 0x321aa8u: goto label_321aa8;
        default: break;
    }

    ctx->pc = 0x321a10u;

    // 0x321a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x321a14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x321a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a18: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x321a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x321a1c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x321a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x321a20: 0xc09dc30  jal         func_2770C0
    ctx->pc = 0x321A20u;
    SET_GPR_U32(ctx, 31, 0x321A28u);
    ctx->pc = 0x321A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321A20u;
    // 0x321a24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2770C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2770C0u, 0x321A20u, 0x321A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A28u;
label_321a28:
    // 0x321a28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a2c: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x321a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
    // 0x321a30: 0x34634354  ori         $v1, $v1, 0x4354
    ctx->pc = 0x321a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17236);
    // 0x321a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321a38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x321a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x321a3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x321a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a40: 0xafb00028  sw          $s0, 0x28($sp)
    ctx->pc = 0x321a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 16));
    // 0x321a44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x321a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a48: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x321a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x321a4c: 0xc0dc12a  jal         func_3704A8
    ctx->pc = 0x321A4Cu;
    SET_GPR_U32(ctx, 31, 0x321A54u);
    ctx->pc = 0x321A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321A4Cu;
    // 0x321a50: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3704A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3704A8u, 0x321A4Cu, 0x321A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A54u;
label_321a54:
    // 0x321a54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x321a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x321a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x321a5c: 0xc0dc17a  jal         func_3705E8
    ctx->pc = 0x321A5Cu;
    SET_GPR_U32(ctx, 31, 0x321A64u);
    ctx->pc = 0x321A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321A5Cu;
    // 0x321a60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3705E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3705E8u, 0x321A5Cu, 0x321A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A64u;
label_321a64:
    // 0x321a64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a68: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x321A68u;
    {
        const bool branch_taken_0x321a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A68u;
        // 0x321a6c: 0xafb00028  sw          $s0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a68) {
            ctx->pc = 0x321AB0u;
            goto label_321ab0;
        }
    }
    ctx->pc = 0x321A70u;
    // 0x321a70: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x321a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x321a74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x321a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a78: 0x24a519b8  addiu       $a1, $a1, 0x19B8
    ctx->pc = 0x321a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6584));
    // 0x321a7c: 0xc0c7a52  jal         func_31E948
    ctx->pc = 0x321A7Cu;
    SET_GPR_U32(ctx, 31, 0x321A84u);
    ctx->pc = 0x321A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321A7Cu;
    // 0x321a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E948u, 0x321A7Cu, 0x321A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A84u;
label_321a84:
    // 0x321a84: 0xc0db256  jal         func_36C958
    ctx->pc = 0x321A84u;
    SET_GPR_U32(ctx, 31, 0x321A8Cu);
    ctx->pc = 0x321A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321A84u;
    // 0x321a88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C958u, 0x321A84u, 0x321A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A8Cu;
label_321a8c:
    // 0x321a8c: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x321a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x321a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a94: 0x24a519e8  addiu       $a1, $a1, 0x19E8
    ctx->pc = 0x321a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6632));
    // 0x321a98: 0xc0c7a52  jal         func_31E948
    ctx->pc = 0x321A98u;
    SET_GPR_U32(ctx, 31, 0x321AA0u);
    ctx->pc = 0x321A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321A98u;
    // 0x321a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E948u, 0x321A98u, 0x321AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321AA0u;
label_321aa0:
    // 0x321aa0: 0xc0db2b6  jal         func_36CAD8
    ctx->pc = 0x321AA0u;
    SET_GPR_U32(ctx, 31, 0x321AA8u);
    ctx->pc = 0x321AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321AA0u;
    // 0x321aa4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CAD8u, 0x321AA0u, 0x321AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321AA8u;
label_321aa8:
    // 0x321aa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x321AA8u;
    {
        const bool branch_taken_0x321aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AA8u;
        // 0x321aac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321aa8) {
            ctx->pc = 0x321AB4u;
            goto label_321ab4;
        }
    }
    ctx->pc = 0x321AB0u;
label_321ab0:
    // 0x321ab0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321ab4:
    // 0x321ab4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x321ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321ab8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x321ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x321abc: 0x3e00008  jr          $ra
    ctx->pc = 0x321ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321ABCu;
        // 0x321ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321AC4u;
    // 0x321ac4: 0x0  nop
    ctx->pc = 0x321ac4u;
    // NOP
    ctx->pc = 0x321ac8u;
}
