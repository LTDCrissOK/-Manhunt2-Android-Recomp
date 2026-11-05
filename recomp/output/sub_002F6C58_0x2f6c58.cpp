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

// Function: sub_002F6C58
// Address: 0x2f6c58 - 0x2f6fa0
void sub_002F6C58_0x2f6c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6C58_0x2f6c58");
#endif

    switch (ctx->pc) {
        case 0x2f6cc4u: goto label_2f6cc4;
        case 0x2f6cccu: goto label_2f6ccc;
        case 0x2f6ce0u: goto label_2f6ce0;
        case 0x2f6cfcu: goto label_2f6cfc;
        case 0x2f6d28u: goto label_2f6d28;
        case 0x2f6d48u: goto label_2f6d48;
        case 0x2f6dc8u: goto label_2f6dc8;
        case 0x2f6ee8u: goto label_2f6ee8;
        case 0x2f6f80u: goto label_2f6f80;
        default: break;
    }

    ctx->pc = 0x2f6c58u;

    // 0x2f6c58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f6c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f6c5c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2f6c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2f6c60: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2f6c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2f6c64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f6c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c68: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2f6c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2f6c6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f6c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c70: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2f6c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2f6c74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f6c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f6c78: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x2f6c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2f6c7c: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2f6c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f6c80: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2f6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2f6c84: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6C84u;
    {
        const bool branch_taken_0x2f6c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C84u;
        // 0x2f6c88: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c84) {
            ctx->pc = 0x2F6CA4u;
            goto label_2f6ca4;
        }
    }
    ctx->pc = 0x2F6C8Cu;
    // 0x2f6c8c: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x2f6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x2f6c90: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6C90u;
    {
        const bool branch_taken_0x2f6c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C90u;
        // 0x2f6c94: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c90) {
            ctx->pc = 0x2F6CA4u;
            goto label_2f6ca4;
        }
    }
    ctx->pc = 0x2F6C98u;
    // 0x2f6c98: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x2f6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950448)));
    // 0x2f6c9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6C9Cu;
    {
        const bool branch_taken_0x2f6c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C9Cu;
        // 0x2f6ca0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c9c) {
            ctx->pc = 0x2F6CACu;
            goto label_2f6cac;
        }
    }
    ctx->pc = 0x2F6CA4u;
label_2f6ca4:
    // 0x2f6ca4: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2F6CA4u;
    {
        const bool branch_taken_0x2f6ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CA4u;
        // 0x2f6ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ca4) {
            ctx->pc = 0x2F6F84u;
            goto label_2f6f84;
        }
    }
    ctx->pc = 0x2F6CACu;
label_2f6cac:
    // 0x2f6cac: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2f6cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2f6cb0: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x2f6cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x2f6cb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6cb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f6cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6cbc: 0xc046642  jal         func_119908
    ctx->pc = 0x2F6CBCu;
    SET_GPR_U32(ctx, 31, 0x2F6CC4u);
    ctx->pc = 0x2F6CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CBCu;
    // 0x2f6cc0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x2F6CBCu, 0x2F6CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CC4u;
label_2f6cc4:
    // 0x2f6cc4: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2F6CC4u;
    SET_GPR_U32(ctx, 31, 0x2F6CCCu);
    ctx->pc = 0x2F6CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CC4u;
    // 0x2f6cc8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2F6CC4u, 0x2F6CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CCCu;
label_2f6ccc:
    // 0x2f6ccc: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2f6cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2f6cd0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6CD0u;
    {
        const bool branch_taken_0x2f6cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6cd0) {
            ctx->pc = 0x2F6CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6CD0u;
            // 0x2f6cd4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6CE4u;
            goto label_2f6ce4;
        }
    }
    ctx->pc = 0x2F6CD8u;
    // 0x2f6cd8: 0xc0bb688  jal         func_2EDA20
    ctx->pc = 0x2F6CD8u;
    SET_GPR_U32(ctx, 31, 0x2F6CE0u);
    ctx->pc = 0x2F6CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CD8u;
    // 0x2f6cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA20u, 0x2F6CD8u, 0x2F6CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CE0u;
label_2f6ce0:
    // 0x2f6ce0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f6ce4:
    // 0x2f6ce4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f6ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6cec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f6cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6cf0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2f6cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f6cf4: 0xc095424  jal         func_255090
    ctx->pc = 0x2F6CF4u;
    SET_GPR_U32(ctx, 31, 0x2F6CFCu);
    ctx->pc = 0x2F6CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CF4u;
    // 0x2f6cf8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255090u, 0x2F6CF4u, 0x2F6CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CFCu;
label_2f6cfc:
    // 0x2f6cfc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F6CFCu;
    {
        const bool branch_taken_0x2f6cfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CFCu;
        // 0x2f6d00: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6cfc) {
            ctx->pc = 0x2F6D28u;
            goto label_2f6d28;
        }
    }
    ctx->pc = 0x2F6D04u;
    // 0x2f6d04: 0x8e031060  lw          $v1, 0x1060($s0)
    ctx->pc = 0x2f6d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
    // 0x2f6d08: 0x38620011  xori        $v0, $v1, 0x11
    ctx->pc = 0x2f6d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)17);
    // 0x2f6d0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6D0Cu;
    {
        const bool branch_taken_0x2f6d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D0Cu;
        // 0x2f6d10: 0x38620015  xori        $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)21);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d0c) {
            ctx->pc = 0x2F6D1Cu;
            goto label_2f6d1c;
        }
    }
    ctx->pc = 0x2F6D14u;
    // 0x2f6d14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6D14u;
    {
        const bool branch_taken_0x2f6d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d14) {
            ctx->pc = 0x2F6D28u;
            goto label_2f6d28;
        }
    }
    ctx->pc = 0x2F6D1Cu;
label_2f6d1c:
    // 0x2f6d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d20: 0xc0952c8  jal         func_254B20
    ctx->pc = 0x2F6D20u;
    SET_GPR_U32(ctx, 31, 0x2F6D28u);
    ctx->pc = 0x2F6D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D20u;
    // 0x2f6d24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254B20u, 0x2F6D20u, 0x2F6D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D28u;
label_2f6d28:
    // 0x2f6d28: 0x12600096  beqz        $s3, . + 4 + (0x96 << 2)
    ctx->pc = 0x2F6D28u;
    {
        const bool branch_taken_0x2f6d28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D28u;
        // 0x2f6d2c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d28) {
            ctx->pc = 0x2F6F84u;
            goto label_2f6f84;
        }
    }
    ctx->pc = 0x2F6D30u;
    // 0x2f6d30: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x2f6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x2f6d34: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2F6D34u;
    {
        const bool branch_taken_0x2f6d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D34u;
        // 0x2f6d38: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d34) {
            ctx->pc = 0x2F6F84u;
            goto label_2f6f84;
        }
    }
    ctx->pc = 0x2F6D3Cu;
    // 0x2f6d3c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2f6d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f6d40: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2F6D40u;
    SET_GPR_U32(ctx, 31, 0x2F6D48u);
    ctx->pc = 0x2F6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D40u;
    // 0x2f6d44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F6D40u, 0x2F6D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D48u;
label_2f6d48:
    // 0x2f6d48: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2f6d48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f6d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6d50: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6D50u;
    {
        const bool branch_taken_0x2f6d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D50u;
        // 0x2f6d54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d50) {
            ctx->pc = 0x2F6D6Cu;
            goto label_2f6d6c;
        }
    }
    ctx->pc = 0x2F6D58u;
    // 0x2f6d58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f6d5c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6D5Cu;
    {
        const bool branch_taken_0x2f6d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D5Cu;
        // 0x2f6d60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d5c) {
            ctx->pc = 0x2F6D6Cu;
            goto label_2f6d6c;
        }
    }
    ctx->pc = 0x2F6D64u;
    // 0x2f6d64: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6D64u;
    {
        const bool branch_taken_0x2f6d64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6d64) {
            ctx->pc = 0x2F6D70u;
            goto label_2f6d70;
        }
    }
    ctx->pc = 0x2F6D6Cu;
label_2f6d6c:
    // 0x2f6d6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6d70:
    // 0x2f6d70: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F6D70u;
    {
        const bool branch_taken_0x2f6d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D70u;
        // 0x2f6d74: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d70) {
            ctx->pc = 0x2F6DBCu;
            goto label_2f6dbc;
        }
    }
    ctx->pc = 0x2F6D78u;
    // 0x2f6d78: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x2f6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x2f6d7c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2f6d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2f6d80: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x2f6d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2f6d84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f6d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6d88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6d8c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f6d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2f6d90: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2f6d94: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f6d94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6d98: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2f6d98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6d9c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f6d9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f6da0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2f6da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f6da4: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2f6da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6da8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2f6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f6dac: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2f6dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6db0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2f6db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6db4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F6DB4u;
    {
        const bool branch_taken_0x2f6db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DB4u;
        // 0x2f6db8: 0xc7a2002c  lwc1        $f2, 0x2C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6db4) {
            ctx->pc = 0x2F6DF8u;
            goto label_2f6df8;
        }
    }
    ctx->pc = 0x2F6DBCu;
label_2f6dbc:
    // 0x2f6dbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f6dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6dc0: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x2F6DC0u;
    SET_GPR_U32(ctx, 31, 0x2F6DC8u);
    ctx->pc = 0x2F6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DC0u;
    // 0x2f6dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x2F6DC0u, 0x2F6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DC8u;
label_2f6dc8:
    // 0x2f6dc8: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2f6dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2f6dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6dd0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f6dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2f6dd4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f6dd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f6dd8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f6dd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6ddc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f6ddcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f6de0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f6de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f6de4: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2f6de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6de8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2f6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f6dec: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2f6decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6df0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2f6df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6df4: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x2f6df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f6df8:
    // 0x2f6df8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2f6df8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f6dfc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f6dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f6e00: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2f6e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f6e04: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2f6e04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2f6e08: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f6e08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6e0c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f6e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f6e10: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2f6e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6e14: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f6e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6e18: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2f6e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f6e1c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f6e1cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2f6e20: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f6e20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2f6e24: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f6e24u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2f6e28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f6e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6e2c: 0x0  nop
    ctx->pc = 0x2f6e2cu;
    // NOP
    // 0x2f6e30: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f6e30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6e34: 0x0  nop
    ctx->pc = 0x2f6e34u;
    // NOP
    // 0x2f6e38: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x2F6E38u;
    {
        const bool branch_taken_0x2f6e38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6e38) {
            ctx->pc = 0x2F6E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6E38u;
            // 0x2f6e3c: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6E64u;
            goto label_2f6e64;
        }
    }
    ctx->pc = 0x2F6E40u;
    // 0x2f6e40: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f6e40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6e44: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f6e44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f6e48: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f6e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f6e4c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f6e4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f6e50: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f6e50u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2f6e54: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f6e54u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2f6e58: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f6e58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f6e5c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f6e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f6e60: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2f6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2f6e64:
    // 0x2f6e64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f6e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6e68: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2f6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2f6e6c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2f6e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6e70: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2f6e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6e74: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f6e74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2f6e78: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2f6e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6e7c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f6e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6e80: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f6e80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2f6e84: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2f6e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6e88: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2f6e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6e8c: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2f6e8cu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2f6e90: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f6e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f6e94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6e98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f6e9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f6e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6ea0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2f6ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6ea4: 0x0  nop
    ctx->pc = 0x2f6ea4u;
    // NOP
    // 0x2f6ea8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6EA8u;
    {
        const bool branch_taken_0x2f6ea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6ea8) {
            ctx->pc = 0x2F6EB8u;
            goto label_2f6eb8;
        }
    }
    ctx->pc = 0x2F6EB0u;
    // 0x2f6eb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6EB0u;
    {
        const bool branch_taken_0x2f6eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6EB0u;
        // 0x2f6eb4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6eb0) {
            ctx->pc = 0x2F6EC8u;
            goto label_2f6ec8;
        }
    }
    ctx->pc = 0x2F6EB8u;
label_2f6eb8:
    // 0x2f6eb8: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x2f6eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6ebc: 0x0  nop
    ctx->pc = 0x2f6ebcu;
    // NOP
    // 0x2f6ec0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F6EC0u;
    {
        const bool branch_taken_0x2f6ec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6ec0) {
            ctx->pc = 0x2F6EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6EC0u;
            // 0x2f6ec4: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6EC8u;
            goto label_2f6ec8;
        }
    }
    ctx->pc = 0x2F6EC8u;
label_2f6ec8:
    // 0x2f6ec8: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2f6ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2f6ecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f6ed0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f6ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6ed4: 0x0  nop
    ctx->pc = 0x2f6ed4u;
    // NOP
    // 0x2f6ed8: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f6ed8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2f6edc: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2f6edcu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2f6ee0: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2F6EE0u;
    SET_GPR_U32(ctx, 31, 0x2F6EE8u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2F6EE0u, 0x2F6EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6EE8u;
label_2f6ee8:
    // 0x2f6ee8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f6ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2f6eec: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f6eecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2f6ef0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f6ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6ef4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2f6ef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2f6ef8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2f6ef8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f6efc: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x2f6efcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6f00: 0x0  nop
    ctx->pc = 0x2f6f00u;
    // NOP
    // 0x2f6f04: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2F6F04u;
    {
        const bool branch_taken_0x2f6f04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6f04) {
            ctx->pc = 0x2F6F5Cu;
            goto label_2f6f5c;
        }
    }
    ctx->pc = 0x2F6F0Cu;
    // 0x2f6f0c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2f6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2f6f10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f6f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6f14: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2f6f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2f6f18: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2f6f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6f1c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2f6f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6f20: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f6f20u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2f6f24: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2f6f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6f28: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f6f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6f2c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f6f2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2f6f30: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2f6f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6f34: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2f6f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6f38: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2f6f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2f6f3c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2f6f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6f40: 0x0  nop
    ctx->pc = 0x2f6f40u;
    // NOP
    // 0x2f6f44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6F44u;
    {
        const bool branch_taken_0x2f6f44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6f44) {
            ctx->pc = 0x2F6F5Cu;
            goto label_2f6f5c;
        }
    }
    ctx->pc = 0x2F6F4Cu;
    // 0x2f6f4c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f6f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2f6f50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6f54: 0x0  nop
    ctx->pc = 0x2f6f54u;
    // NOP
    // 0x2f6f58: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2f6f58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2f6f5c:
    // 0x2f6f5c: 0x3c013cb6  lui         $at, 0x3CB6
    ctx->pc = 0x2f6f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15542 << 16));
    // 0x2f6f60: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x2f6f60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x2f6f64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6f68: 0x0  nop
    ctx->pc = 0x2f6f68u;
    // NOP
    // 0x2f6f6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f6f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6f70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f6f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f6f74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2f6f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f6f78: 0xc0a2302  jal         func_288C08
    ctx->pc = 0x2F6F78u;
    SET_GPR_U32(ctx, 31, 0x2F6F80u);
    ctx->pc = 0x288C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C08u, 0x2F6F78u, 0x2F6F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F80u;
label_2f6f80:
    // 0x2f6f80: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2f6f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f6f84:
    // 0x2f6f84: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2f6f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6f88: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2f6f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f6f8c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2f6f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f6f90: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2f6f90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6f94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f6f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f6f98: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F98u;
        // 0x2f6f9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6FA0u;
}
