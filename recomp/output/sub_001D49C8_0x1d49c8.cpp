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

// Function: sub_001D49C8
// Address: 0x1d49c8 - 0x1d4bf0
void sub_001D49C8_0x1d49c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D49C8_0x1d49c8");
#endif

    switch (ctx->pc) {
        case 0x1d4a00u: goto label_1d4a00;
        case 0x1d4a10u: goto label_1d4a10;
        case 0x1d4a18u: goto label_1d4a18;
        case 0x1d4a54u: goto label_1d4a54;
        case 0x1d4a68u: goto label_1d4a68;
        case 0x1d4a90u: goto label_1d4a90;
        case 0x1d4a98u: goto label_1d4a98;
        case 0x1d4ae0u: goto label_1d4ae0;
        case 0x1d4af8u: goto label_1d4af8;
        case 0x1d4b38u: goto label_1d4b38;
        case 0x1d4b50u: goto label_1d4b50;
        case 0x1d4b64u: goto label_1d4b64;
        case 0x1d4b78u: goto label_1d4b78;
        case 0x1d4b8cu: goto label_1d4b8c;
        case 0x1d4ba0u: goto label_1d4ba0;
        case 0x1d4bb8u: goto label_1d4bb8;
        default: break;
    }

    ctx->pc = 0x1d49c8u;

label_1d49c8:
    // 0x1d49c8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1d49c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1d49cc: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x1d49ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x1d49d0: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x1d49d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x1d49d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d49d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d49d8: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x1d49d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x1d49dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d49dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d49e0: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x1d49e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x1d49e4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1d49e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d49e8: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x1d49e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x1d49ec: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x1d49ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x1d49f0: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x1d49f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x1d49f4: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x1d49f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x1d49f8: 0xc07524a  jal         func_1D4928
    ctx->pc = 0x1D49F8u;
    SET_GPR_U32(ctx, 31, 0x1D4A00u);
    ctx->pc = 0x1D49FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D49F8u;
    // 0x1d49fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4928u, 0x1D49F8u, 0x1D4A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A00u;
label_1d4a00:
    // 0x1d4a00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d4a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d4a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a08: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x1D4A08u;
    SET_GPR_U32(ctx, 31, 0x1D4A10u);
    ctx->pc = 0x1D4A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A08u;
    // 0x1d4a0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x1D4A08u, 0x1D4A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A10u;
label_1d4a10:
    // 0x1d4a10: 0xc0f0adc  jal         func_3C2B70
    ctx->pc = 0x1D4A10u;
    SET_GPR_U32(ctx, 31, 0x1D4A18u);
    ctx->pc = 0x1D4A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A10u;
    // 0x1d4a14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2B70u, 0x1D4A10u, 0x1D4A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A18u;
label_1d4a18:
    // 0x1d4a18: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d4a1c: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1d4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x1d4a20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d4a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d4a24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4A24u;
    {
        const bool branch_taken_0x1d4a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A24u;
        // 0x1d4a28: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a24) {
            ctx->pc = 0x1D4A34u;
            goto label_1d4a34;
        }
    }
    ctx->pc = 0x1D4A2Cu;
    // 0x1d4a2c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D4A2Cu;
    {
        const bool branch_taken_0x1d4a2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4a2c) {
            ctx->pc = 0x1D4AC0u;
            goto label_1d4ac0;
        }
    }
    ctx->pc = 0x1D4A34u;
label_1d4a34:
    // 0x1d4a34: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4A34u;
    {
        const bool branch_taken_0x1d4a34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A34u;
        // 0x1d4a38: 0x27b200d0  addiu       $s2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a34) {
            ctx->pc = 0x1D4A58u;
            goto label_1d4a58;
        }
    }
    ctx->pc = 0x1D4A3Cu;
    // 0x1d4a3c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1d4a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1d4a40: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d4a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d4a44: 0x24c6d350  addiu       $a2, $a2, -0x2CB0
    ctx->pc = 0x1d4a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955856));
    // 0x1d4a48: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1d4a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d4a4c: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x1D4A4Cu;
    SET_GPR_U32(ctx, 31, 0x1D4A54u);
    ctx->pc = 0x1D4A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A4Cu;
    // 0x1d4a50: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x1D4A4Cu, 0x1D4A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A54u;
label_1d4a54:
    // 0x1d4a54: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x1d4a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d4a58:
    // 0x1d4a58: 0xafbd00d0  sw          $sp, 0xD0($sp)
    ctx->pc = 0x1d4a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 29));
    // 0x1d4a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d4a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a60: 0xc0d5f28  jal         func_357CA0
    ctx->pc = 0x1D4A60u;
    SET_GPR_U32(ctx, 31, 0x1D4A68u);
    ctx->pc = 0x1D4A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A60u;
    // 0x1d4a64: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357CA0u, 0x1D4A60u, 0x1D4A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A68u;
label_1d4a68:
    // 0x1d4a68: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D4A68u;
    {
        const bool branch_taken_0x1d4a68 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d4a68) {
            ctx->pc = 0x1D4A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4A68u;
            // 0x1d4a6c: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4A70u;
            goto label_1d4a70;
        }
    }
    ctx->pc = 0x1D4A70u;
label_1d4a70:
    // 0x1d4a70: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1d4a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1d4a74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4a78: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d4a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d4a7c: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1d4a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d4a80: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1d4a80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4a84: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4A84u;
    {
        const bool branch_taken_0x1d4a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x1D4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A84u;
        // 0x1d4a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a84) {
            ctx->pc = 0x1D4AB0u;
            goto label_1d4ab0;
        }
    }
    ctx->pc = 0x1D4A8Cu;
    // 0x1d4a8c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1d4a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d4a90:
    // 0x1d4a90: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1D4A90u;
    SET_GPR_U32(ctx, 31, 0x1D4A98u);
    ctx->pc = 0x1D4A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A90u;
    // 0x1d4a94: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1D4A90u, 0x1D4A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A98u;
label_1d4a98:
    // 0x1d4a98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4A98u;
    {
        const bool branch_taken_0x1d4a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A98u;
        // 0x1d4a9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a98) {
            ctx->pc = 0x1D4AB0u;
            goto label_1d4ab0;
        }
    }
    ctx->pc = 0x1D4AA0u;
    // 0x1d4aa0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1d4aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1d4aa4: 0x5611fffa  bnel        $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D4AA4u;
    {
        const bool branch_taken_0x1d4aa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x1d4aa4) {
            ctx->pc = 0x1D4AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4AA4u;
            // 0x1d4aa8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4a90;
        }
    }
    ctx->pc = 0x1D4AACu;
    // 0x1d4aac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d4aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ab0:
    // 0x1d4ab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4AB0u;
    {
        const bool branch_taken_0x1d4ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ab0) {
            ctx->pc = 0x1D4AC0u;
            goto label_1d4ac0;
        }
    }
    ctx->pc = 0x1D4AB8u;
    // 0x1d4ab8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1D4AB8u;
    {
        const bool branch_taken_0x1d4ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AB8u;
        // 0x1d4abc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ab8) {
            ctx->pc = 0x1D4BC4u;
            goto label_1d4bc4;
        }
    }
    ctx->pc = 0x1D4AC0u;
label_1d4ac0:
    // 0x1d4ac0: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D4AC0u;
    {
        const bool branch_taken_0x1d4ac0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AC0u;
        // 0x1d4ac4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ac0) {
            ctx->pc = 0x1D4B18u;
            goto label_1d4b18;
        }
    }
    ctx->pc = 0x1D4AC8u;
    // 0x1d4ac8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d4ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4acc: 0x8c628eb4  lw          $v0, -0x714C($v1)
    ctx->pc = 0x1d4accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938292)));
    // 0x1d4ad0: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1D4AD0u;
    {
        const bool branch_taken_0x1d4ad0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AD0u;
        // 0x1d4ad4: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ad0) {
            ctx->pc = 0x1D4BC0u;
            goto label_1d4bc0;
        }
    }
    ctx->pc = 0x1D4AD8u;
    // 0x1d4ad8: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x1d4ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x1d4adc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d4adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ae0:
    // 0x1d4ae0: 0x8e628eb0  lw          $v0, -0x7150($s3)
    ctx->pc = 0x1d4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938288)));
    // 0x1d4ae4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4aec: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1d4aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d4af0: 0xc075272  jal         func_1D49C8
    ctx->pc = 0x1D4AF0u;
    SET_GPR_U32(ctx, 31, 0x1D4AF8u);
    ctx->pc = 0x1D4AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4AF0u;
    // 0x1d4af4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    goto label_1d49c8;
    ctx->pc = 0x1D4AF8u;
label_1d4af8:
    // 0x1d4af8: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D4AF8u;
    {
        const bool branch_taken_0x1d4af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AF8u;
        // 0x1d4afc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4af8) {
            ctx->pc = 0x1D4BC4u;
            goto label_1d4bc4;
        }
    }
    ctx->pc = 0x1D4B00u;
    // 0x1d4b00: 0x8ea28eb4  lw          $v0, -0x714C($s5)
    ctx->pc = 0x1d4b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938292)));
    // 0x1d4b04: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d4b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4b08: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D4B08u;
    {
        const bool branch_taken_0x1d4b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B08u;
        // 0x1d4b0c: 0x26520818  addiu       $s2, $s2, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b08) {
            ctx->pc = 0x1D4AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4ae0;
        }
    }
    ctx->pc = 0x1D4B10u;
    // 0x1d4b10: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1D4B10u;
    {
        const bool branch_taken_0x1d4b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B10u;
        // 0x1d4b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b10) {
            ctx->pc = 0x1D4BC4u;
            goto label_1d4bc4;
        }
    }
    ctx->pc = 0x1D4B18u;
label_1d4b18:
    // 0x1d4b18: 0x8ec2bd70  lw          $v0, -0x4290($s6)
    ctx->pc = 0x1d4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950256)));
    // 0x1d4b1c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d4b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d4b20: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D4B20u;
    {
        const bool branch_taken_0x1d4b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B20u;
        // 0x1d4b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b20) {
            ctx->pc = 0x1D4BC4u;
            goto label_1d4bc4;
        }
    }
    ctx->pc = 0x1D4B28u;
    // 0x1d4b28: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d4b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d4b2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b30: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1D4B30u;
    SET_GPR_U32(ctx, 31, 0x1D4B38u);
    ctx->pc = 0x1D4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B30u;
    // 0x1d4b34: 0x24a5d380  addiu       $a1, $a1, -0x2C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1D4B30u, 0x1D4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B38u;
label_1d4b38:
    // 0x1d4b38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4B38u;
    {
        const bool branch_taken_0x1d4b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B38u;
        // 0x1d4b3c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b38) {
            ctx->pc = 0x1D4B58u;
            goto label_1d4b58;
        }
    }
    ctx->pc = 0x1D4B40u;
    // 0x1d4b40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d4b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d4b44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b48: 0xc0752fc  jal         func_1D4BF0
    ctx->pc = 0x1D4B48u;
    SET_GPR_U32(ctx, 31, 0x1D4B50u);
    ctx->pc = 0x1D4B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B48u;
    // 0x1d4b4c: 0x8c458eb8  lw          $a1, -0x7148($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4BF0u, 0x1D4B48u, 0x1D4B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B50u;
label_1d4b50:
    // 0x1d4b50: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4B50u;
    {
        const bool branch_taken_0x1d4b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B50u;
        // 0x1d4b54: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b50) {
            ctx->pc = 0x1D4BC8u;
            goto label_1d4bc8;
        }
    }
    ctx->pc = 0x1D4B58u;
label_1d4b58:
    // 0x1d4b58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b5c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1D4B5Cu;
    SET_GPR_U32(ctx, 31, 0x1D4B64u);
    ctx->pc = 0x1D4B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B5Cu;
    // 0x1d4b60: 0x24a5d390  addiu       $a1, $a1, -0x2C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1D4B5Cu, 0x1D4B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B64u;
label_1d4b64:
    // 0x1d4b64: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D4B64u;
    {
        const bool branch_taken_0x1d4b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B64u;
        // 0x1d4b68: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b64) {
            ctx->pc = 0x1D4BC0u;
            goto label_1d4bc0;
        }
    }
    ctx->pc = 0x1D4B6Cu;
    // 0x1d4b6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b70: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1D4B70u;
    SET_GPR_U32(ctx, 31, 0x1D4B78u);
    ctx->pc = 0x1D4B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B70u;
    // 0x1d4b74: 0x24a5d3a0  addiu       $a1, $a1, -0x2C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1D4B70u, 0x1D4B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B78u;
label_1d4b78:
    // 0x1d4b78: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D4B78u;
    {
        const bool branch_taken_0x1d4b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B78u;
        // 0x1d4b7c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b78) {
            ctx->pc = 0x1D4BC0u;
            goto label_1d4bc0;
        }
    }
    ctx->pc = 0x1D4B80u;
    // 0x1d4b80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b84: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1D4B84u;
    SET_GPR_U32(ctx, 31, 0x1D4B8Cu);
    ctx->pc = 0x1D4B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B84u;
    // 0x1d4b88: 0x24a5d3b0  addiu       $a1, $a1, -0x2C50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1D4B84u, 0x1D4B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B8Cu;
label_1d4b8c:
    // 0x1d4b8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D4B8Cu;
    {
        const bool branch_taken_0x1d4b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B8Cu;
        // 0x1d4b90: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b8c) {
            ctx->pc = 0x1D4BC0u;
            goto label_1d4bc0;
        }
    }
    ctx->pc = 0x1D4B94u;
    // 0x1d4b94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b98: 0xc0752fc  jal         func_1D4BF0
    ctx->pc = 0x1D4B98u;
    SET_GPR_U32(ctx, 31, 0x1D4BA0u);
    ctx->pc = 0x1D4B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B98u;
    // 0x1d4b9c: 0x8c458ebc  lw          $a1, -0x7144($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4BF0u, 0x1D4B98u, 0x1D4BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BA0u;
label_1d4ba0:
    // 0x1d4ba0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4BA0u;
    {
        const bool branch_taken_0x1d4ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BA0u;
        // 0x1d4ba4: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ba0) {
            ctx->pc = 0x1D4BC8u;
            goto label_1d4bc8;
        }
    }
    ctx->pc = 0x1D4BA8u;
    // 0x1d4ba8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d4bac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4bb0: 0xc0752fc  jal         func_1D4BF0
    ctx->pc = 0x1D4BB0u;
    SET_GPR_U32(ctx, 31, 0x1D4BB8u);
    ctx->pc = 0x1D4BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4BB0u;
    // 0x1d4bb4: 0x8c458eb8  lw          $a1, -0x7148($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4BF0u, 0x1D4BB0u, 0x1D4BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BB8u;
label_1d4bb8:
    // 0x1d4bb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4BB8u;
    {
        const bool branch_taken_0x1d4bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BB8u;
        // 0x1d4bbc: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bb8) {
            ctx->pc = 0x1D4BC8u;
            goto label_1d4bc8;
        }
    }
    ctx->pc = 0x1D4BC0u;
label_1d4bc0:
    // 0x1d4bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d4bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4bc4:
    // 0x1d4bc4: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x1d4bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1d4bc8:
    // 0x1d4bc8: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x1d4bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1d4bcc: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x1d4bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d4bd0: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x1d4bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d4bd4: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x1d4bd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d4bd8: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x1d4bd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d4bdc: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x1d4bdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d4be0: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x1d4be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1d4be4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BE4u;
        // 0x1d4be8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4BECu;
    // 0x1d4bec: 0x0  nop
    ctx->pc = 0x1d4becu;
    // NOP
    ctx->pc = 0x1d4bf0u;
}
