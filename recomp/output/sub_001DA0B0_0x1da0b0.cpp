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

// Function: sub_001DA0B0
// Address: 0x1da0b0 - 0x1da2f8
void sub_001DA0B0_0x1da0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA0B0_0x1da0b0");
#endif

    switch (ctx->pc) {
        case 0x1da110u: goto label_1da110;
        case 0x1da130u: goto label_1da130;
        case 0x1da140u: goto label_1da140;
        case 0x1da150u: goto label_1da150;
        case 0x1da168u: goto label_1da168;
        case 0x1da190u: goto label_1da190;
        case 0x1da1acu: goto label_1da1ac;
        case 0x1da1bcu: goto label_1da1bc;
        case 0x1da1dcu: goto label_1da1dc;
        case 0x1da1f8u: goto label_1da1f8;
        case 0x1da238u: goto label_1da238;
        case 0x1da258u: goto label_1da258;
        case 0x1da2b8u: goto label_1da2b8;
        case 0x1da2c0u: goto label_1da2c0;
        default: break;
    }

    ctx->pc = 0x1da0b0u;

    // 0x1da0b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1da0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da0b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1da0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1da0b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1da0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1da0bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da0c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1da0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1da0c4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1da0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1da0c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1da0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1da0cc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1da0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1da0d0: 0x92020032  lbu         $v0, 0x32($s0)
    ctx->pc = 0x1da0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1da0d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA0D4u;
    {
        const bool branch_taken_0x1da0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0D4u;
        // 0x1da0d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0d4) {
            ctx->pc = 0x1DA0E4u;
            goto label_1da0e4;
        }
    }
    ctx->pc = 0x1DA0DCu;
    // 0x1da0dc: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1DA0DCu;
    {
        const bool branch_taken_0x1da0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0DCu;
        // 0x1da0e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0dc) {
            ctx->pc = 0x1DA2D4u;
            goto label_1da2d4;
        }
    }
    ctx->pc = 0x1DA0E4u;
label_1da0e4:
    // 0x1da0e4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1da0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1da0e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA0E8u;
    {
        const bool branch_taken_0x1da0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0E8u;
        // 0x1da0ec: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0e8) {
            ctx->pc = 0x1DA0FCu;
            goto label_1da0fc;
        }
    }
    ctx->pc = 0x1DA0F0u;
    // 0x1da0f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1da0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1da0f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA0F4u;
    {
        const bool branch_taken_0x1da0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0F4u;
        // 0x1da0f8: 0x3442fdef  ori         $v0, $v0, 0xFDEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65007);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0f4) {
            ctx->pc = 0x1DA104u;
            goto label_1da104;
        }
    }
    ctx->pc = 0x1DA0FCu;
label_1da0fc:
    // 0x1da0fc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1da0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1da100: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1da100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_1da104:
    // 0x1da104: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1da104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da108: 0xc076424  jal         func_1D9090
    ctx->pc = 0x1DA108u;
    SET_GPR_U32(ctx, 31, 0x1DA110u);
    ctx->pc = 0x1DA10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA108u;
    // 0x1da10c: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9090u, 0x1DA108u, 0x1DA110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA110u;
label_1da110:
    // 0x1da110: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1da110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da114: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1da114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da118: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1da118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1da11c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DA11Cu;
    {
        const bool branch_taken_0x1da11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA11Cu;
        // 0x1da120: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da11c) {
            ctx->pc = 0x1DA150u;
            goto label_1da150;
        }
    }
    ctx->pc = 0x1DA124u;
    // 0x1da124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1da124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da128: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1DA128u;
    SET_GPR_U32(ctx, 31, 0x1DA130u);
    ctx->pc = 0x1DA12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA128u;
    // 0x1da12c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1DA128u, 0x1DA130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA130u;
label_1da130:
    // 0x1da130: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1da130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da134: 0x8e45fff4  lw          $a1, -0xC($s2)
    ctx->pc = 0x1da134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967284)));
    // 0x1da138: 0xc0794de  jal         func_1E5378
    ctx->pc = 0x1DA138u;
    SET_GPR_U32(ctx, 31, 0x1DA140u);
    ctx->pc = 0x1DA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA138u;
    // 0x1da13c: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5378u, 0x1DA138u, 0x1DA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA140u;
label_1da140:
    // 0x1da140: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1da140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da144: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1da144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da148: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1DA148u;
    SET_GPR_U32(ctx, 31, 0x1DA150u);
    ctx->pc = 0x1DA14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA148u;
    // 0x1da14c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1DA148u, 0x1DA150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA150u;
label_1da150:
    // 0x1da150: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1da150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da154: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1da154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1da158: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DA158u;
    {
        const bool branch_taken_0x1da158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA158u;
        // 0x1da15c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da158) {
            ctx->pc = 0x1DA1C4u;
            goto label_1da1c4;
        }
    }
    ctx->pc = 0x1DA160u;
    // 0x1da160: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1DA160u;
    SET_GPR_U32(ctx, 31, 0x1DA168u);
    ctx->pc = 0x1DA164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA160u;
    // 0x1da164: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1DA160u, 0x1DA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA168u;
label_1da168:
    // 0x1da168: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x1da168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1da16c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DA16Cu;
    {
        const bool branch_taken_0x1da16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA16Cu;
        // 0x1da170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da16c) {
            ctx->pc = 0x1DA198u;
            goto label_1da198;
        }
    }
    ctx->pc = 0x1DA174u;
    // 0x1da174: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1da174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da178: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1da178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1da17c: 0x34a5fdef  ori         $a1, $a1, 0xFDEF
    ctx->pc = 0x1da17cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65007);
    // 0x1da180: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1da180u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da184: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1da184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da188: 0xc079906  jal         func_1E6418
    ctx->pc = 0x1DA188u;
    SET_GPR_U32(ctx, 31, 0x1DA190u);
    ctx->pc = 0x1DA18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA188u;
    // 0x1da18c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6418u, 0x1DA188u, 0x1DA190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA190u;
label_1da190:
    // 0x1da190: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA190u;
    {
        const bool branch_taken_0x1da190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA190u;
        // 0x1da194: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da190) {
            ctx->pc = 0x1DA1B0u;
            goto label_1da1b0;
        }
    }
    ctx->pc = 0x1DA198u;
label_1da198:
    // 0x1da198: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1da198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da19c: 0x8e45fff4  lw          $a1, -0xC($s2)
    ctx->pc = 0x1da19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967284)));
    // 0x1da1a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1da1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da1a4: 0xc079830  jal         func_1E60C0
    ctx->pc = 0x1DA1A4u;
    SET_GPR_U32(ctx, 31, 0x1DA1ACu);
    ctx->pc = 0x1DA1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA1A4u;
    // 0x1da1a8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E60C0u, 0x1DA1A4u, 0x1DA1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA1ACu;
label_1da1ac:
    // 0x1da1ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1da1acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da1b0:
    // 0x1da1b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1da1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da1b4: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1DA1B4u;
    SET_GPR_U32(ctx, 31, 0x1DA1BCu);
    ctx->pc = 0x1DA1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA1B4u;
    // 0x1da1b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1DA1B4u, 0x1DA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA1BCu;
label_1da1bc:
    // 0x1da1bc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1DA1BCu;
    {
        const bool branch_taken_0x1da1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da1bc) {
            ctx->pc = 0x1DA2B8u;
            goto label_1da2b8;
        }
    }
    ctx->pc = 0x1DA1C4u;
label_1da1c4:
    // 0x1da1c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1da1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da1c8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1da1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1da1cc: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1DA1CCu;
    {
        const bool branch_taken_0x1da1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1CCu;
        // 0x1da1d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1cc) {
            ctx->pc = 0x1DA2B8u;
            goto label_1da2b8;
        }
    }
    ctx->pc = 0x1DA1D4u;
    // 0x1da1d4: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1DA1D4u;
    SET_GPR_U32(ctx, 31, 0x1DA1DCu);
    ctx->pc = 0x1DA1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA1D4u;
    // 0x1da1d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1DA1D4u, 0x1DA1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA1DCu;
label_1da1dc:
    // 0x1da1dc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1da1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da1e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1da1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da1e4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1da1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da1e8: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x1da1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1da1ec: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1da1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1da1f0: 0xc079f50  jal         func_1E7D40
    ctx->pc = 0x1DA1F0u;
    SET_GPR_U32(ctx, 31, 0x1DA1F8u);
    ctx->pc = 0x1DA1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA1F0u;
    // 0x1da1f4: 0x8e45fff4  lw          $a1, -0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7D40u, 0x1DA1F0u, 0x1DA1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA1F8u;
label_1da1f8:
    // 0x1da1f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1da1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1da1fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da200: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1da200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da204: 0x8c6391f0  lw          $v1, -0x6E10($v1)
    ctx->pc = 0x1da204u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91F0u));
    // 0x1da208: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA208u;
    {
        const bool branch_taken_0x1da208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da208) {
            ctx->pc = 0x1DA20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA208u;
            // 0x1da20c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA228u;
            goto label_1da228;
        }
    }
    ctx->pc = 0x1DA210u;
    // 0x1da210: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1da210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1da214: 0x8c4391ec  lw          $v1, -0x6E14($v0)
    ctx->pc = 0x1da214u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ECu));
    // 0x1da218: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1da218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da21c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1da21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1da220: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x1da220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x1da224: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1da224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1da228:
    // 0x1da228: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DA228u;
    {
        const bool branch_taken_0x1da228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA228u;
        // 0x1da22c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da228) {
            ctx->pc = 0x1DA2B0u;
            goto label_1da2b0;
        }
    }
    ctx->pc = 0x1DA230u;
    // 0x1da230: 0xc079e08  jal         func_1E7820
    ctx->pc = 0x1DA230u;
    SET_GPR_U32(ctx, 31, 0x1DA238u);
    ctx->pc = 0x1E7820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7820u, 0x1DA230u, 0x1DA238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA238u;
label_1da238:
    // 0x1da238: 0x8e0291f0  lw          $v0, -0x6E10($s0)
    ctx->pc = 0x1da238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939120)));
    // 0x1da23c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DA23Cu;
    {
        const bool branch_taken_0x1da23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA23Cu;
        // 0x1da240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da23c) {
            ctx->pc = 0x1DA2ACu;
            goto label_1da2ac;
        }
    }
    ctx->pc = 0x1DA244u;
    // 0x1da244: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1da244u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da248: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1da248u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1da24c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1da24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1da250: 0x8ce391ec  lw          $v1, -0x6E14($a3)
    ctx->pc = 0x1da250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ECu));
    // 0x1da254: 0x0  nop
    ctx->pc = 0x1da254u;
    // NOP
label_1da258:
    // 0x1da258: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1da258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1da25c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da260: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1da260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da264: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1da264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1da268: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1da268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da26c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1da26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da270: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1da270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da274: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1da274u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1da278: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1da278u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1da27c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1da27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1da280: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1da280u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1da284: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1da284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1da288: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1da288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1da28c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1da28cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1da290: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1da290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da294: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1da294u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1da298: 0x8d0291f0  lw          $v0, -0x6E10($t0)
    ctx->pc = 0x1da298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939120)));
    // 0x1da29c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1da29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1da2a0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1da2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1da2a4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DA2A4u;
    {
        const bool branch_taken_0x1da2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2A4u;
        // 0x1da2a8: 0x8ce391ec  lw          $v1, -0x6E14($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da2a4) {
            ctx->pc = 0x1DA258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da258;
        }
    }
    ctx->pc = 0x1DA2ACu;
label_1da2ac:
    // 0x1da2ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1da2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1da2b0:
    // 0x1da2b0: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1DA2B0u;
    SET_GPR_U32(ctx, 31, 0x1DA2B8u);
    ctx->pc = 0x1DA2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA2B0u;
    // 0x1da2b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1DA2B0u, 0x1DA2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA2B8u;
label_1da2b8:
    // 0x1da2b8: 0xc07641a  jal         func_1D9068
    ctx->pc = 0x1DA2B8u;
    SET_GPR_U32(ctx, 31, 0x1DA2C0u);
    ctx->pc = 0x1D9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9068u, 0x1DA2B8u, 0x1DA2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA2C0u;
label_1da2c0:
    // 0x1da2c0: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA2C0u;
    {
        const bool branch_taken_0x1da2c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2C0u;
        // 0x1da2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da2c0) {
            ctx->pc = 0x1DA2D0u;
            goto label_1da2d0;
        }
    }
    ctx->pc = 0x1DA2C8u;
    // 0x1da2c8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA2C8u;
    {
        const bool branch_taken_0x1da2c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2C8u;
        // 0x1da2cc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da2c8) {
            ctx->pc = 0x1DA2D8u;
            goto label_1da2d8;
        }
    }
    ctx->pc = 0x1DA2D0u;
label_1da2d0:
    // 0x1da2d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da2d4:
    // 0x1da2d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1da2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1da2d8:
    // 0x1da2d8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1da2d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1da2dc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1da2dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da2e0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1da2e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da2e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1da2e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da2e8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1da2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1da2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2ECu;
        // 0x1da2f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA2F4u;
    // 0x1da2f4: 0x0  nop
    ctx->pc = 0x1da2f4u;
    // NOP
    ctx->pc = 0x1da2f8u;
}
