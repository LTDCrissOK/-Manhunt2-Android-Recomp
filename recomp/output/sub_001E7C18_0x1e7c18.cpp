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

// Function: sub_001E7C18
// Address: 0x1e7c18 - 0x1e7d40
void sub_001E7C18_0x1e7c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7C18_0x1e7c18");
#endif

    switch (ctx->pc) {
        case 0x1e7c48u: goto label_1e7c48;
        case 0x1e7c64u: goto label_1e7c64;
        case 0x1e7c88u: goto label_1e7c88;
        case 0x1e7cb4u: goto label_1e7cb4;
        case 0x1e7cccu: goto label_1e7ccc;
        case 0x1e7cfcu: goto label_1e7cfc;
        case 0x1e7d18u: goto label_1e7d18;
        default: break;
    }

    ctx->pc = 0x1e7c18u;

    // 0x1e7c18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e7c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e7c1c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1e7c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1e7c20: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1e7c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1e7c24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e7c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c28: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1e7c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1e7c2c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e7c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c30: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1e7c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1e7c34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e7c34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c38: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1e7c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1e7c3c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1e7c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1e7c40: 0xc079de6  jal         func_1E7798
    ctx->pc = 0x1E7C40u;
    SET_GPR_U32(ctx, 31, 0x1E7C48u);
    ctx->pc = 0x1E7C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C40u;
    // 0x1e7c44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7798u, 0x1E7C40u, 0x1E7C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C48u;
label_1e7c48:
    // 0x1e7c48: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1e7c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e7c4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e7c50: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e7c54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e7c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e7c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e7c5c: 0xc0854d4  jal         func_215350
    ctx->pc = 0x1E7C5Cu;
    SET_GPR_U32(ctx, 31, 0x1E7C64u);
    ctx->pc = 0x1E7C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C5Cu;
    // 0x1e7c60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215350u, 0x1E7C5Cu, 0x1E7C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C64u;
label_1e7c64:
    // 0x1e7c64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7c68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e7c6c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7C6Cu;
    {
        const bool branch_taken_0x1e7c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C6Cu;
        // 0x1e7c70: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c6c) {
            ctx->pc = 0x1E7C78u;
            goto label_1e7c78;
        }
    }
    ctx->pc = 0x1E7C74u;
    // 0x1e7c74: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1e7c74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e7c78:
    // 0x1e7c78: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E7C78u;
    {
        const bool branch_taken_0x1e7c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C78u;
        // 0x1e7c7c: 0x3c110800  lui         $s1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c78) {
            ctx->pc = 0x1E7CF4u;
            goto label_1e7cf4;
        }
    }
    ctx->pc = 0x1E7C80u;
    // 0x1e7c80: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x1e7c80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1e7c84: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1e7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1e7c88:
    // 0x1e7c88: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1e7c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e7c8c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1e7c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e7c90: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E7C90u;
    {
        const bool branch_taken_0x1e7c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C90u;
        // 0x1e7c94: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c90) {
            ctx->pc = 0x1E7CD0u;
            goto label_1e7cd0;
        }
    }
    ctx->pc = 0x1E7C98u;
    // 0x1e7c98: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1e7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1e7c9c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1e7c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1e7ca0: 0x1051000c  beq         $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E7CA0u;
    {
        const bool branch_taken_0x1e7ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1E7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CA0u;
        // 0x1e7ca4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ca0) {
            ctx->pc = 0x1E7CD4u;
            goto label_1e7cd4;
        }
    }
    ctx->pc = 0x1E7CA8u;
    // 0x1e7ca8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e7ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7cac: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x1E7CACu;
    SET_GPR_U32(ctx, 31, 0x1E7CB4u);
    ctx->pc = 0x1E7CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7CACu;
    // 0x1e7cb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x1E7CACu, 0x1E7CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7CB4u;
label_1e7cb4:
    // 0x1e7cb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7CB4u;
    {
        const bool branch_taken_0x1e7cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CB4u;
        // 0x1e7cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7cb4) {
            ctx->pc = 0x1E7CCCu;
            goto label_1e7ccc;
        }
    }
    ctx->pc = 0x1E7CBCu;
    // 0x1e7cbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e7cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7cc0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e7cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7cc4: 0xc07a022  jal         func_1E8088
    ctx->pc = 0x1E7CC4u;
    SET_GPR_U32(ctx, 31, 0x1E7CCCu);
    ctx->pc = 0x1E7CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7CC4u;
    // 0x1e7cc8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8088u, 0x1E7CC4u, 0x1E7CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7CCCu;
label_1e7ccc:
    // 0x1e7ccc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1e7cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e7cd0:
    // 0x1e7cd0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7cd4:
    // 0x1e7cd4: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7CD4u;
    {
        const bool branch_taken_0x1e7cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E7CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CD4u;
        // 0x1e7cd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7cd4) {
            ctx->pc = 0x1E7CECu;
            goto label_1e7cec;
        }
    }
    ctx->pc = 0x1E7CDCu;
    // 0x1e7cdc: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1e7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e7ce0: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7CE0u;
    {
        const bool branch_taken_0x1e7ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E7CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CE0u;
        // 0x1e7ce4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ce0) {
            ctx->pc = 0x1E7CECu;
            goto label_1e7cec;
        }
    }
    ctx->pc = 0x1E7CE8u;
    // 0x1e7ce8: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1e7ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e7cec:
    // 0x1e7cec: 0x5600ffe6  bnel        $s0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1E7CECu;
    {
        const bool branch_taken_0x1e7cec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7cec) {
            ctx->pc = 0x1E7CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7CECu;
            // 0x1e7cf0: 0x8e0200c4  lw          $v0, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7c88;
        }
    }
    ctx->pc = 0x1E7CF4u;
label_1e7cf4:
    // 0x1e7cf4: 0xc079e08  jal         func_1E7820
    ctx->pc = 0x1E7CF4u;
    SET_GPR_U32(ctx, 31, 0x1E7CFCu);
    ctx->pc = 0x1E7820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7820u, 0x1E7CF4u, 0x1E7CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7CFCu;
label_1e7cfc:
    // 0x1e7cfc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e7d00: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e7d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7d04: 0x8c4391f0  lw          $v1, -0x6E10($v0)
    ctx->pc = 0x1e7d04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91F0u));
    // 0x1e7d08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7D08u;
    {
        const bool branch_taken_0x1e7d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D08u;
        // 0x1e7d0c: 0x3802b  sltu        $s0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d08) {
            ctx->pc = 0x1E7D18u;
            goto label_1e7d18;
        }
    }
    ctx->pc = 0x1E7D10u;
    // 0x1e7d10: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1E7D10u;
    SET_GPR_U32(ctx, 31, 0x1E7D18u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1E7D10u, 0x1E7D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D18u;
label_1e7d18:
    // 0x1e7d18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e7d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d1c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1e7d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e7d20: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1e7d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7d24: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1e7d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7d28: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1e7d28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e7d2c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1e7d2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7d30: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1e7d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e7d34: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D34u;
        // 0x1e7d38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7D3Cu;
    // 0x1e7d3c: 0x0  nop
    ctx->pc = 0x1e7d3cu;
    // NOP
    ctx->pc = 0x1e7d40u;
}
