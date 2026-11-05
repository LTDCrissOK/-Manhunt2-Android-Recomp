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

// Function: sub_001A6BD8
// Address: 0x1a6bd8 - 0x1a6cd8
void sub_001A6BD8_0x1a6bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6BD8_0x1a6bd8");
#endif

    switch (ctx->pc) {
        case 0x1a6c4cu: goto label_1a6c4c;
        case 0x1a6c5cu: goto label_1a6c5c;
        case 0x1a6cb4u: goto label_1a6cb4;
        case 0x1a6cc8u: goto label_1a6cc8;
        default: break;
    }

    ctx->pc = 0x1a6bd8u;

    // 0x1a6bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6be0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a6be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a6be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6be8: 0x8e0601c8  lw          $a2, 0x1C8($s0)
    ctx->pc = 0x1a6be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x1a6bec: 0x4c00019  bltz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A6BECu;
    {
        const bool branch_taken_0x1a6bec = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1A6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BECu;
        // 0x1a6bf0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bec) {
            ctx->pc = 0x1A6C54u;
            goto label_1a6c54;
        }
    }
    ctx->pc = 0x1A6BF4u;
    // 0x1a6bf4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a6bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a6bf8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A6BF8u;
    {
        const bool branch_taken_0x1a6bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BF8u;
        // 0x1a6bfc: 0x28620025  slti        $v0, $v1, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)37) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bf8) {
            ctx->pc = 0x1A6C34u;
            goto label_1a6c34;
        }
    }
    ctx->pc = 0x1A6C00u;
    // 0x1a6c00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6C00u;
    {
        const bool branch_taken_0x1a6c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C00u;
        // 0x1a6c04: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c00) {
            ctx->pc = 0x1A6C18u;
            goto label_1a6c18;
        }
    }
    ctx->pc = 0x1A6C08u;
    // 0x1a6c08: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6C08u;
    {
        const bool branch_taken_0x1a6c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C08u;
        // 0x1a6c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c08) {
            ctx->pc = 0x1A6C2Cu;
            goto label_1a6c2c;
        }
    }
    ctx->pc = 0x1A6C10u;
    // 0x1a6c10: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1A6C10u;
    {
        const bool branch_taken_0x1a6c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C10u;
        // 0x1a6c14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c10) {
            ctx->pc = 0x1A6CCCu;
            goto label_1a6ccc;
        }
    }
    ctx->pc = 0x1A6C18u;
label_1a6c18:
    // 0x1a6c18: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1a6c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1a6c1c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6C1Cu;
    {
        const bool branch_taken_0x1a6c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C1Cu;
        // 0x1a6c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c1c) {
            ctx->pc = 0x1A6C40u;
            goto label_1a6c40;
        }
    }
    ctx->pc = 0x1A6C24u;
    // 0x1a6c24: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1A6C24u;
    {
        const bool branch_taken_0x1a6c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C24u;
        // 0x1a6c28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c24) {
            ctx->pc = 0x1A6CCCu;
            goto label_1a6ccc;
        }
    }
    ctx->pc = 0x1A6C2Cu;
label_1a6c2c:
    // 0x1a6c2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6C2Cu;
    {
        const bool branch_taken_0x1a6c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C2Cu;
        // 0x1a6c30: 0x24c6043e  addiu       $a2, $a2, 0x43E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c2c) {
            ctx->pc = 0x1A6C44u;
            goto label_1a6c44;
        }
    }
    ctx->pc = 0x1A6C34u;
label_1a6c34:
    // 0x1a6c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6C38u;
    {
        const bool branch_taken_0x1a6c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C38u;
        // 0x1a6c3c: 0x24c60443  addiu       $a2, $a2, 0x443 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1091));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c38) {
            ctx->pc = 0x1A6C44u;
            goto label_1a6c44;
        }
    }
    ctx->pc = 0x1A6C40u;
label_1a6c40:
    // 0x1a6c40: 0x24c60448  addiu       $a2, $a2, 0x448
    ctx->pc = 0x1a6c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1096));
label_1a6c44:
    // 0x1a6c44: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6C44u;
    SET_GPR_U32(ctx, 31, 0x1A6C4Cu);
    ctx->pc = 0x1A6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C44u;
    // 0x1a6c48: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6C44u, 0x1A6C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C4Cu;
label_1a6c4c:
    // 0x1a6c4c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A6C4Cu;
    {
        const bool branch_taken_0x1a6c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C4Cu;
        // 0x1a6c50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c4c) {
            ctx->pc = 0x1A6CCCu;
            goto label_1a6ccc;
        }
    }
    ctx->pc = 0x1A6C54u;
label_1a6c54:
    // 0x1a6c54: 0xc069ffa  jal         func_1A7FE8
    ctx->pc = 0x1A6C54u;
    SET_GPR_U32(ctx, 31, 0x1A6C5Cu);
    ctx->pc = 0x1A6C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C54u;
    // 0x1a6c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7FE8u, 0x1A6C54u, 0x1A6C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C5Cu;
label_1a6c5c:
    // 0x1a6c5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a6c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c60: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a6c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a6c64: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1a6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1a6c68: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A6C68u;
    {
        const bool branch_taken_0x1a6c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C68u;
        // 0x1a6c6c: 0x28620025  slti        $v0, $v1, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)37) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c68) {
            ctx->pc = 0x1A6CA4u;
            goto label_1a6ca4;
        }
    }
    ctx->pc = 0x1A6C70u;
    // 0x1a6c70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6C70u;
    {
        const bool branch_taken_0x1a6c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C70u;
        // 0x1a6c74: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c70) {
            ctx->pc = 0x1A6C88u;
            goto label_1a6c88;
        }
    }
    ctx->pc = 0x1A6C78u;
    // 0x1a6c78: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6C78u;
    {
        const bool branch_taken_0x1a6c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C78u;
        // 0x1a6c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c78) {
            ctx->pc = 0x1A6C9Cu;
            goto label_1a6c9c;
        }
    }
    ctx->pc = 0x1A6C80u;
    // 0x1a6c80: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A6C80u;
    {
        const bool branch_taken_0x1a6c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C80u;
        // 0x1a6c84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c80) {
            ctx->pc = 0x1A6CCCu;
            goto label_1a6ccc;
        }
    }
    ctx->pc = 0x1A6C88u;
label_1a6c88:
    // 0x1a6c88: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1a6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1a6c8c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6C8Cu;
    {
        const bool branch_taken_0x1a6c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C8Cu;
        // 0x1a6c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c8c) {
            ctx->pc = 0x1A6CBCu;
            goto label_1a6cbc;
        }
    }
    ctx->pc = 0x1A6C94u;
    // 0x1a6c94: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A6C94u;
    {
        const bool branch_taken_0x1a6c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C94u;
        // 0x1a6c98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c94) {
            ctx->pc = 0x1A6CCCu;
            goto label_1a6ccc;
        }
    }
    ctx->pc = 0x1A6C9Cu;
label_1a6c9c:
    // 0x1a6c9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6C9Cu;
    {
        const bool branch_taken_0x1a6c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C9Cu;
        // 0x1a6ca0: 0x24c60532  addiu       $a2, $a2, 0x532 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c9c) {
            ctx->pc = 0x1A6CACu;
            goto label_1a6cac;
        }
    }
    ctx->pc = 0x1A6CA4u;
label_1a6ca4:
    // 0x1a6ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ca8: 0x24c60537  addiu       $a2, $a2, 0x537
    ctx->pc = 0x1a6ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1335));
label_1a6cac:
    // 0x1a6cac: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6CACu;
    SET_GPR_U32(ctx, 31, 0x1A6CB4u);
    ctx->pc = 0x1A6CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6CACu;
    // 0x1a6cb0: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6CACu, 0x1A6CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6CB4u;
label_1a6cb4:
    // 0x1a6cb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6CB4u;
    {
        const bool branch_taken_0x1a6cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CB4u;
        // 0x1a6cb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cb4) {
            ctx->pc = 0x1A6CCCu;
            goto label_1a6ccc;
        }
    }
    ctx->pc = 0x1A6CBCu;
label_1a6cbc:
    // 0x1a6cbc: 0x24c6053c  addiu       $a2, $a2, 0x53C
    ctx->pc = 0x1a6cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1340));
    // 0x1a6cc0: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6CC0u;
    SET_GPR_U32(ctx, 31, 0x1A6CC8u);
    ctx->pc = 0x1A6CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6CC0u;
    // 0x1a6cc4: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6CC0u, 0x1A6CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6CC8u;
label_1a6cc8:
    // 0x1a6cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6ccc:
    // 0x1a6ccc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a6cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CD0u;
        // 0x1a6cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6CD8u;
}
