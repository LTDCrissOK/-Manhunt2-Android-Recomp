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

// Function: sub_001E4A08
// Address: 0x1e4a08 - 0x1e4ac8
void sub_001E4A08_0x1e4a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4A08_0x1e4a08");
#endif

    switch (ctx->pc) {
        case 0x1e4a40u: goto label_1e4a40;
        case 0x1e4a4cu: goto label_1e4a4c;
        case 0x1e4a68u: goto label_1e4a68;
        case 0x1e4a74u: goto label_1e4a74;
        case 0x1e4a88u: goto label_1e4a88;
        default: break;
    }

    ctx->pc = 0x1e4a08u;

    // 0x1e4a08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e4a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e4a0c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1e4a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1e4a10: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1e4a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1e4a14: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1e4a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a18: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1e4a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1e4a1c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1e4a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e4a20: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1e4a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1e4a24: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1e4a24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4a28: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1e4a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1e4a2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e4a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a30: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1e4a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1e4a34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e4a34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a38: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e4a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e4a3c: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x1e4a3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e4a40:
    // 0x1e4a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a44: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E4A44u;
    SET_GPR_U32(ctx, 31, 0x1E4A4Cu);
    ctx->pc = 0x1E4A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A44u;
    // 0x1e4a48: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E4A44u, 0x1E4A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4A4Cu;
label_1e4a4c:
    // 0x1e4a4c: 0x0  nop
    ctx->pc = 0x1e4a4cu;
    // NOP
    // 0x1e4a50: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E4A50u;
    {
        const bool branch_taken_0x1e4a50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1E4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A50u;
        // 0x1e4a54: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a50) {
            ctx->pc = 0x1E4A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4a40;
        }
    }
    ctx->pc = 0x1E4A58u;
    // 0x1e4a58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e4a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e4a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a60: 0xc079264  jal         func_1E4990
    ctx->pc = 0x1E4A60u;
    SET_GPR_U32(ctx, 31, 0x1E4A68u);
    ctx->pc = 0x1E4A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A60u;
    // 0x1e4a64: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4990u, 0x1E4A60u, 0x1E4A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4A68u;
label_1e4a68:
    // 0x1e4a68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e4a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a6c: 0xc0792b2  jal         func_1E4AC8
    ctx->pc = 0x1E4A6Cu;
    SET_GPR_U32(ctx, 31, 0x1E4A74u);
    ctx->pc = 0x1E4A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A6Cu;
    // 0x1e4a70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4AC8u, 0x1E4A6Cu, 0x1E4A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4A74u;
label_1e4a74:
    // 0x1e4a74: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1e4a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a78: 0x53a2000a  beql        $sp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E4A78u;
    {
        const bool branch_taken_0x1e4a78 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4a78) {
            ctx->pc = 0x1E4A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4A78u;
            // 0x1e4a7c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4AA4u;
            goto label_1e4aa4;
        }
    }
    ctx->pc = 0x1E4A80u;
    // 0x1e4a80: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1e4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1e4a84: 0x0  nop
    ctx->pc = 0x1e4a84u;
    // NOP
label_1e4a88:
    // 0x1e4a88: 0x0  nop
    ctx->pc = 0x1e4a88u;
    // NOP
    // 0x1e4a8c: 0x0  nop
    ctx->pc = 0x1e4a8cu;
    // NOP
    // 0x1e4a90: 0x0  nop
    ctx->pc = 0x1e4a90u;
    // NOP
    // 0x1e4a94: 0x0  nop
    ctx->pc = 0x1e4a94u;
    // NOP
    // 0x1e4a98: 0x57a2fffb  bnel        $sp, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E4A98u;
    {
        const bool branch_taken_0x1e4a98 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4a98) {
            ctx->pc = 0x1E4A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4A98u;
            // 0x1e4a9c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4a88;
        }
    }
    ctx->pc = 0x1E4AA0u;
    // 0x1e4aa0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1e4aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4aa4:
    // 0x1e4aa4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1e4aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e4aa8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1e4aa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4aac: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1e4aacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e4ab0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1e4ab0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4ab4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1e4ab4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e4ab8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e4ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e4abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4ABCu;
        // 0x1e4ac0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4AC4u;
    // 0x1e4ac4: 0x0  nop
    ctx->pc = 0x1e4ac4u;
    // NOP
    ctx->pc = 0x1e4ac8u;
}
