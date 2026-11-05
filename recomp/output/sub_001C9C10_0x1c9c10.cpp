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

// Function: sub_001C9C10
// Address: 0x1c9c10 - 0x1c9d38
void sub_001C9C10_0x1c9c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9C10_0x1c9c10");
#endif

    switch (ctx->pc) {
        case 0x1c9c30u: goto label_1c9c30;
        default: break;
    }

    ctx->pc = 0x1c9c10u;

    // 0x1c9c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9c14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9c18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9c1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c9c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9c24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c9c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c28: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1C9C28u;
    SET_GPR_U32(ctx, 31, 0x1C9C30u);
    ctx->pc = 0x1C9C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9C28u;
    // 0x1c9c2c: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1C9C28u, 0x1C9C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C30u;
label_1c9c30:
    // 0x1c9c30: 0x2443ffd8  addiu       $v1, $v0, -0x28
    ctx->pc = 0x1c9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1c9c34: 0x2c62005c  sltiu       $v0, $v1, 0x5C
    ctx->pc = 0x1c9c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)92) ? 1 : 0);
    // 0x1c9c38: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C9C38u;
    {
        const bool branch_taken_0x1c9c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C38u;
        // 0x1c9c3c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c38) {
            ctx->pc = 0x1C9D0Cu;
            goto label_1c9d0c;
        }
    }
    ctx->pc = 0x1C9C40u;
    // 0x1c9c40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9c44: 0x2442ca50  addiu       $v0, $v0, -0x35B0
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953552));
    // 0x1c9c48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c9c4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c9c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9c50: 0x800008  jr          $a0
    ctx->pc = 0x1C9C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9C58u: goto label_1c9c58;
            case 0x1C9C78u: goto label_1c9c78;
            case 0x1C9C98u: goto label_1c9c98;
            case 0x1C9CB8u: goto label_1c9cb8;
            case 0x1C9CD8u: goto label_1c9cd8;
            case 0x1C9CF0u: goto label_1c9cf0;
            case 0x1C9D0Cu: goto label_1c9d0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9C50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C9C58u;
label_1c9c58:
    // 0x1c9c58: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1c9c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1c9c5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9c60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9c64: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1c9c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1c9c68: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c9c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c9c6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9c70: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C9C70u;
    {
        const bool branch_taken_0x1c9c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C70u;
        // 0x1c9c74: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c70) {
            ctx->pc = 0x1C9D20u;
            goto label_1c9d20;
        }
    }
    ctx->pc = 0x1C9C78u;
label_1c9c78:
    // 0x1c9c78: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1c9c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1c9c7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9c7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9c80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9c84: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1c9c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1c9c88: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c9c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c9c8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9c90: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C9C90u;
    {
        const bool branch_taken_0x1c9c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C90u;
        // 0x1c9c94: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c90) {
            ctx->pc = 0x1C9D20u;
            goto label_1c9d20;
        }
    }
    ctx->pc = 0x1C9C98u;
label_1c9c98:
    // 0x1c9c98: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1c9c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1c9c9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9c9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9ca0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ca4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1c9ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1c9ca8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9cac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9cb0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C9CB0u;
    {
        const bool branch_taken_0x1c9cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CB0u;
        // 0x1c9cb4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9cb0) {
            ctx->pc = 0x1C9D20u;
            goto label_1c9d20;
        }
    }
    ctx->pc = 0x1C9CB8u;
label_1c9cb8:
    // 0x1c9cb8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c9cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1c9cbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9cc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9cc4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1c9cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1c9cc8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1c9cc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1c9ccc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9cd0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C9CD0u;
    {
        const bool branch_taken_0x1c9cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CD0u;
        // 0x1c9cd4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9cd0) {
            ctx->pc = 0x1C9D20u;
            goto label_1c9d20;
        }
    }
    ctx->pc = 0x1C9CD8u;
label_1c9cd8:
    // 0x1c9cd8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1c9cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1c9cdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ce0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1c9ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1c9ce4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9ce8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C9CE8u;
    {
        const bool branch_taken_0x1c9ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CE8u;
        // 0x1c9cec: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ce8) {
            ctx->pc = 0x1C9D20u;
            goto label_1c9d20;
        }
    }
    ctx->pc = 0x1C9CF0u;
label_1c9cf0:
    // 0x1c9cf0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1c9cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1c9cf4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c9cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c9cf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9cfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9d00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9d04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9D04u;
    {
        const bool branch_taken_0x1c9d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D04u;
        // 0x1c9d08: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d04) {
            ctx->pc = 0x1C9D20u;
            goto label_1c9d20;
        }
    }
    ctx->pc = 0x1C9D0Cu;
label_1c9d0c:
    // 0x1c9d0c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1c9d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1c9d10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9d14: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1c9d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1c9d18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9d1c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c9d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1c9d20:
    // 0x1c9d20: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1c9d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1c9d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9d28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9d2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D30u;
        // 0x1c9d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9D38u;
}
