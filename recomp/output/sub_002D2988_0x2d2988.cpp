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

// Function: sub_002D2988
// Address: 0x2d2988 - 0x2d2ac0
void sub_002D2988_0x2d2988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2988_0x2d2988");
#endif

    switch (ctx->pc) {
        case 0x2d2a18u: goto label_2d2a18;
        case 0x2d2a40u: goto label_2d2a40;
        case 0x2d2a60u: goto label_2d2a60;
        case 0x2d2a8cu: goto label_2d2a8c;
        default: break;
    }

    ctx->pc = 0x2d2988u;

    // 0x2d2988: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d298c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d2990: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d2990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d2994: 0x249100c8  addiu       $s1, $a0, 0xC8
    ctx->pc = 0x2d2994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x2d2998: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d2998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d299c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d29a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d29a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d29a4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2d29a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2d29a8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2d29a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2d29ac: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2d29acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d29b0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d29b4: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D29B4u;
    {
        const bool branch_taken_0x2d29b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D29B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29B4u;
        // 0x2d29b8: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29b4) {
            ctx->pc = 0x2D29D4u;
            goto label_2d29d4;
        }
    }
    ctx->pc = 0x2D29BCu;
    // 0x2d29bc: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D29BCu;
    {
        const bool branch_taken_0x2d29bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d29bc) {
            ctx->pc = 0x2D29C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D29BCu;
            // 0x2d29c0: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D29C4u;
            goto label_2d29c4;
        }
    }
    ctx->pc = 0x2D29C4u;
label_2d29c4:
    // 0x2d29c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d29c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d29c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d29cc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2D29CCu;
    {
        const bool branch_taken_0x2d29cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D29D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29CCu;
        // 0x2d29d0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29cc) {
            ctx->pc = 0x2D2A9Cu;
            goto label_2d2a9c;
        }
    }
    ctx->pc = 0x2D29D4u;
label_2d29d4:
    // 0x2d29d4: 0x8c8300c8  lw          $v1, 0xC8($a0)
    ctx->pc = 0x2d29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x2d29d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d29dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2d29dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2d29e0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2d29e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2d29e4: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x2d29e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2d29e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d29ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d29f0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d29f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d29f4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d29f8: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x2d29f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x2d29fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d29fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2a00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2a04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2A04u;
    {
        const bool branch_taken_0x2d2a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A04u;
        // 0x2d2a08: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a04) {
            ctx->pc = 0x2D2A20u;
            goto label_2d2a20;
        }
    }
    ctx->pc = 0x2D2A0Cu;
    // 0x2d2a0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d2a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a10: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D2A10u;
    SET_GPR_U32(ctx, 31, 0x2D2A18u);
    ctx->pc = 0x2D2A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2A10u;
    // 0x2d2a14: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D2A10u, 0x2D2A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A18u;
label_2d2a18:
    // 0x2d2a18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2A18u;
    {
        const bool branch_taken_0x2d2a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A18u;
        // 0x2d2a1c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a18) {
            ctx->pc = 0x2D2A28u;
            goto label_2d2a28;
        }
    }
    ctx->pc = 0x2D2A20u;
label_2d2a20:
    // 0x2d2a20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d2a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d2a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2a28:
    // 0x2d2a28: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d2a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2a2c: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2A2Cu;
    {
        const bool branch_taken_0x2d2a2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A2Cu;
        // 0x2d2a30: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a2c) {
            ctx->pc = 0x2D2A48u;
            goto label_2d2a48;
        }
    }
    ctx->pc = 0x2D2A34u;
    // 0x2d2a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d2a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a38: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D2A38u;
    SET_GPR_U32(ctx, 31, 0x2D2A40u);
    ctx->pc = 0x2D2A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2A38u;
    // 0x2d2a3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D2A38u, 0x2D2A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A40u;
label_2d2a40:
    // 0x2d2a40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2A40u;
    {
        const bool branch_taken_0x2d2a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A40u;
        // 0x2d2a44: 0x508021  addu        $s0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a40) {
            ctx->pc = 0x2D2A4Cu;
            goto label_2d2a4c;
        }
    }
    ctx->pc = 0x2D2A48u;
label_2d2a48:
    // 0x2d2a48: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2d2a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d2a4c:
    // 0x2d2a4c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d2a50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d2a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a54: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2A54u;
    {
        const bool branch_taken_0x2d2a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a54) {
            ctx->pc = 0x2D2A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2A54u;
            // 0x2d2a58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2A7Cu;
            goto label_2d2a7c;
        }
    }
    ctx->pc = 0x2D2A5Cu;
    // 0x2d2a5c: 0x0  nop
    ctx->pc = 0x2d2a5cu;
    // NOP
label_2d2a60:
    // 0x2d2a60: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2d2a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d2a64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d2a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d2a68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d2a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d2a6c: 0x0  nop
    ctx->pc = 0x2d2a6cu;
    // NOP
    // 0x2d2a70: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D2A70u;
    {
        const bool branch_taken_0x2d2a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A70u;
        // 0x2d2a74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a70) {
            ctx->pc = 0x2D2A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2a60;
        }
    }
    ctx->pc = 0x2D2A78u;
    // 0x2d2a78: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d2a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d2a7c:
    // 0x2d2a7c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2A7Cu;
    {
        const bool branch_taken_0x2d2a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A7Cu;
        // 0x2d2a80: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a7c) {
            ctx->pc = 0x2D2A90u;
            goto label_2d2a90;
        }
    }
    ctx->pc = 0x2D2A84u;
    // 0x2d2a84: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D2A84u;
    SET_GPR_U32(ctx, 31, 0x2D2A8Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D2A84u, 0x2D2A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A8Cu;
label_2d2a8c:
    // 0x2d2a8c: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2d2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_2d2a90:
    // 0x2d2a90: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x2d2a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x2d2a94: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d2a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d2a98: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2d2a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2d2a9c:
    // 0x2d2a9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d2a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2aa0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d2aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2aa4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d2aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2aa8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d2aa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d2aac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d2aacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2ab0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d2ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d2ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2AB4u;
        // 0x2d2ab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2ABCu;
    // 0x2d2abc: 0x0  nop
    ctx->pc = 0x2d2abcu;
    // NOP
    ctx->pc = 0x2d2ac0u;
}
