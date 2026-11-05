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

// Function: sub_001DA958
// Address: 0x1da958 - 0x1daaa8
void sub_001DA958_0x1da958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA958_0x1da958");
#endif

    switch (ctx->pc) {
        case 0x1da988u: goto label_1da988;
        case 0x1da990u: goto label_1da990;
        case 0x1da9a0u: goto label_1da9a0;
        case 0x1da9f8u: goto label_1da9f8;
        case 0x1daa40u: goto label_1daa40;
        case 0x1daa4cu: goto label_1daa4c;
        default: break;
    }

    ctx->pc = 0x1da958u;

    // 0x1da958: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1da958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1da95c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1da95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1da960: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1da960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1da964: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1da964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1da968: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1da968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1da96c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1da96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1da970: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1da970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x1da974: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1da974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1da978: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x1da978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x1da97c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1da97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1da980: 0xc0f75b6  jal         func_3DD6D8
    ctx->pc = 0x1DA980u;
    SET_GPR_U32(ctx, 31, 0x1DA988u);
    ctx->pc = 0x1DA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA980u;
    // 0x1da984: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD6D8u, 0x1DA980u, 0x1DA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA988u;
label_1da988:
    // 0x1da988: 0xc07ab98  jal         func_1EAE60
    ctx->pc = 0x1DA988u;
    SET_GPR_U32(ctx, 31, 0x1DA990u);
    ctx->pc = 0x1DA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA988u;
    // 0x1da98c: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAE60u, 0x1DA988u, 0x1DA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA990u;
label_1da990:
    // 0x1da990: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x1da990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1da994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1da994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da998: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1DA998u;
    SET_GPR_U32(ctx, 31, 0x1DA9A0u);
    ctx->pc = 0x1DA99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA998u;
    // 0x1da99c: 0x8c730ffc  lw          $s3, 0xFFC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1DA998u, 0x1DA9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9A0u;
label_1da9a0:
    // 0x1da9a0: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x1da9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1da9a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA9A4u;
    {
        const bool branch_taken_0x1da9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9A4u;
        // 0x1da9a8: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9a4) {
            ctx->pc = 0x1DA9B8u;
            goto label_1da9b8;
        }
    }
    ctx->pc = 0x1DA9ACu;
    // 0x1da9ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1da9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1da9b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA9B0u;
    {
        const bool branch_taken_0x1da9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9B0u;
        // 0x1da9b4: 0x3442fdef  ori         $v0, $v0, 0xFDEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65007);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9b0) {
            ctx->pc = 0x1DA9C0u;
            goto label_1da9c0;
        }
    }
    ctx->pc = 0x1DA9B8u;
label_1da9b8:
    // 0x1da9b8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1da9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1da9bc: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1da9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_1da9c0:
    // 0x1da9c0: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1da9c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9c4: 0xac62fff4  sw          $v0, -0xC($v1)
    ctx->pc = 0x1da9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
    // 0x1da9c8: 0x26620034  addiu       $v0, $s3, 0x34
    ctx->pc = 0x1da9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x1da9cc: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x1da9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1da9d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1da9d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1da9d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9d8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1da9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1da9dc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1da9dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1da9e0: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DA9E0u;
    {
        const bool branch_taken_0x1da9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9E0u;
        // 0x1da9e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9e0) {
            ctx->pc = 0x1DAA6Cu;
            goto label_1daa6c;
        }
    }
    ctx->pc = 0x1DA9E8u;
    // 0x1da9e8: 0x3c120010  lui         $s2, 0x10
    ctx->pc = 0x1da9e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16 << 16));
    // 0x1da9ec: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x1da9ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x1da9f0: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x1da9f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x1da9f4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x1da9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1da9f8:
    // 0x1da9f8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1da9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1da9fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1daa00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1daa00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1daa04: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DAA04u;
    {
        const bool branch_taken_0x1daa04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA04u;
        // 0x1daa08: 0x8ec291ac  lw          $v0, -0x6E54($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294939052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa04) {
            ctx->pc = 0x1DAA4Cu;
            goto label_1daa4c;
        }
    }
    ctx->pc = 0x1DAA0Cu;
    // 0x1daa0c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAA0Cu;
    {
        const bool branch_taken_0x1daa0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daa0c) {
            ctx->pc = 0x1DAA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAA0Cu;
            // 0x1daa10: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAA24u;
            goto label_1daa24;
        }
    }
    ctx->pc = 0x1DAA14u;
    // 0x1daa14: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1daa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1daa18: 0x5052000d  beql        $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1DAA18u;
    {
        const bool branch_taken_0x1daa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1daa18) {
            ctx->pc = 0x1DAA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAA18u;
            // 0x1daa1c: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAA50u;
            goto label_1daa50;
        }
    }
    ctx->pc = 0x1DAA20u;
    // 0x1daa20: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x1daa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_1daa24:
    // 0x1daa24: 0x8ee4fff4  lw          $a0, -0xC($s7)
    ctx->pc = 0x1daa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294967284)));
    // 0x1daa28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1daa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1daa2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1daa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1daa30: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DAA30u;
    {
        const bool branch_taken_0x1daa30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daa30) {
            ctx->pc = 0x1DAA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAA30u;
            // 0x1daa34: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAA50u;
            goto label_1daa50;
        }
    }
    ctx->pc = 0x1DAA38u;
    // 0x1daa38: 0xc0f75b6  jal         func_3DD6D8
    ctx->pc = 0x1DAA38u;
    SET_GPR_U32(ctx, 31, 0x1DAA40u);
    ctx->pc = 0x1DAA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA38u;
    // 0x1daa3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD6D8u, 0x1DAA38u, 0x1DAA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA40u;
label_1daa40:
    // 0x1daa40: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1daa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1daa44: 0xc07abaa  jal         func_1EAEA8
    ctx->pc = 0x1DAA44u;
    SET_GPR_U32(ctx, 31, 0x1DAA4Cu);
    ctx->pc = 0x1DAA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA44u;
    // 0x1daa48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAEA8u, 0x1DAA44u, 0x1DAA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA4Cu;
label_1daa4c:
    // 0x1daa4c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1daa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1daa50:
    // 0x1daa50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1daa50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1daa54: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x1daa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1daa58: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1daa58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1daa5c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1daa5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1daa60: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1daa60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1daa64: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1DAA64u;
    {
        const bool branch_taken_0x1daa64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daa64) {
            ctx->pc = 0x1DAA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAA64u;
            // 0x1daa68: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da9f8;
        }
    }
    ctx->pc = 0x1DAA6Cu;
label_1daa6c:
    // 0x1daa6c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1daa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1daa70: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1daa70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1daa74: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1daa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x1daa78: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1daa78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1daa7c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1daa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4903CCu));
    // 0x1daa80: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1daa80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1daa84: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1daa84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1daa88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1daa88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1daa8c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1daa8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1daa90: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1daa90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1daa94: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1daa94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1daa98: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x1daa98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1daa9c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1daa9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1daaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAA0u;
        // 0x1daaa4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAAA8u;
}
