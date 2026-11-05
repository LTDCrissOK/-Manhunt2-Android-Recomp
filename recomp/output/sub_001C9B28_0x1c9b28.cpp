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

// Function: sub_001C9B28
// Address: 0x1c9b28 - 0x1c9c10
void sub_001C9B28_0x1c9b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9B28_0x1c9b28");
#endif

    switch (ctx->pc) {
        case 0x1c9b48u: goto label_1c9b48;
        default: break;
    }

    ctx->pc = 0x1c9b28u;

    // 0x1c9b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9b34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c9b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9b3c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c9b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b40: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1C9B40u;
    SET_GPR_U32(ctx, 31, 0x1C9B48u);
    ctx->pc = 0x1C9B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B40u;
    // 0x1c9b44: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1C9B40u, 0x1C9B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B48u;
label_1c9b48:
    // 0x1c9b48: 0x2443ffd8  addiu       $v1, $v0, -0x28
    ctx->pc = 0x1c9b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1c9b4c: 0x2c62005c  sltiu       $v0, $v1, 0x5C
    ctx->pc = 0x1c9b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)92) ? 1 : 0);
    // 0x1c9b50: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C9B50u;
    {
        const bool branch_taken_0x1c9b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B50u;
        // 0x1c9b54: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b50) {
            ctx->pc = 0x1C9BE0u;
            goto label_1c9be0;
        }
    }
    ctx->pc = 0x1C9B58u;
    // 0x1c9b58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9b5c: 0x2442c8e0  addiu       $v0, $v0, -0x3720
    ctx->pc = 0x1c9b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953184));
    // 0x1c9b60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c9b64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c9b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9b68: 0x800008  jr          $a0
    ctx->pc = 0x1C9B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9B70u: goto label_1c9b70;
            case 0x1C9B84u: goto label_1c9b84;
            case 0x1C9BA4u: goto label_1c9ba4;
            case 0x1C9BC4u: goto label_1c9bc4;
            case 0x1C9BE0u: goto label_1c9be0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C9B70u;
label_1c9b70:
    // 0x1c9b70: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1c9b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1c9b74: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c9b74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c9b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9b7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C9B7Cu;
    {
        const bool branch_taken_0x1c9b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b7c) {
            ctx->pc = 0x1C9BCCu;
            goto label_1c9bcc;
        }
    }
    ctx->pc = 0x1C9B84u;
label_1c9b84:
    // 0x1c9b84: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c9b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1c9b88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9b88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9b8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9b90: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1c9b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1c9b94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9b98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9b9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C9B9Cu;
    {
        const bool branch_taken_0x1c9b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B9Cu;
        // 0x1c9ba0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b9c) {
            ctx->pc = 0x1C9BD8u;
            goto label_1c9bd8;
        }
    }
    ctx->pc = 0x1C9BA4u;
label_1c9ba4:
    // 0x1c9ba4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c9ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1c9ba8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9bac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9bb0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1c9bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1c9bb4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c9bb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c9bb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9bbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9BBCu;
    {
        const bool branch_taken_0x1c9bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BBCu;
        // 0x1c9bc0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bbc) {
            ctx->pc = 0x1C9BD8u;
            goto label_1c9bd8;
        }
    }
    ctx->pc = 0x1C9BC4u;
label_1c9bc4:
    // 0x1c9bc4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c9bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c9bc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9bcc:
    // 0x1c9bcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9bd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9bd4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c9bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1c9bd8:
    // 0x1c9bd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9BD8u;
    {
        const bool branch_taken_0x1c9bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BD8u;
        // 0x1c9bdc: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bd8) {
            ctx->pc = 0x1C9BF8u;
            goto label_1c9bf8;
        }
    }
    ctx->pc = 0x1C9BE0u;
label_1c9be0:
    // 0x1c9be0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c9be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1c9be4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9bec: 0x0  nop
    ctx->pc = 0x1c9becu;
    // NOP
    // 0x1c9bf0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c9bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c9bf4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1c9bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1c9bf8:
    // 0x1c9bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9bfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9c04: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C04u;
        // 0x1c9c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9C0Cu;
    // 0x1c9c0c: 0x0  nop
    ctx->pc = 0x1c9c0cu;
    // NOP
    ctx->pc = 0x1c9c10u;
}
