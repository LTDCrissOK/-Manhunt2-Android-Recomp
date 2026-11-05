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

// Function: sub_00254A00
// Address: 0x254a00 - 0x254ad8
void sub_00254A00_0x254a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254A00_0x254a00");
#endif

    switch (ctx->pc) {
        case 0x254a00u: goto label_254a00;
        case 0x254a04u: goto label_254a04;
        case 0x254a08u: goto label_254a08;
        case 0x254a0cu: goto label_254a0c;
        case 0x254a10u: goto label_254a10;
        case 0x254a14u: goto label_254a14;
        case 0x254a18u: goto label_254a18;
        case 0x254a1cu: goto label_254a1c;
        case 0x254a20u: goto label_254a20;
        case 0x254a24u: goto label_254a24;
        case 0x254a28u: goto label_254a28;
        case 0x254a2cu: goto label_254a2c;
        case 0x254a30u: goto label_254a30;
        case 0x254a34u: goto label_254a34;
        case 0x254a38u: goto label_254a38;
        case 0x254a3cu: goto label_254a3c;
        case 0x254a40u: goto label_254a40;
        case 0x254a44u: goto label_254a44;
        case 0x254a48u: goto label_254a48;
        case 0x254a4cu: goto label_254a4c;
        case 0x254a50u: goto label_254a50;
        case 0x254a54u: goto label_254a54;
        case 0x254a58u: goto label_254a58;
        case 0x254a5cu: goto label_254a5c;
        case 0x254a60u: goto label_254a60;
        case 0x254a64u: goto label_254a64;
        case 0x254a68u: goto label_254a68;
        case 0x254a6cu: goto label_254a6c;
        case 0x254a70u: goto label_254a70;
        case 0x254a74u: goto label_254a74;
        case 0x254a78u: goto label_254a78;
        case 0x254a7cu: goto label_254a7c;
        case 0x254a80u: goto label_254a80;
        case 0x254a84u: goto label_254a84;
        case 0x254a88u: goto label_254a88;
        case 0x254a8cu: goto label_254a8c;
        case 0x254a90u: goto label_254a90;
        case 0x254a94u: goto label_254a94;
        case 0x254a98u: goto label_254a98;
        case 0x254a9cu: goto label_254a9c;
        case 0x254aa0u: goto label_254aa0;
        case 0x254aa4u: goto label_254aa4;
        case 0x254aa8u: goto label_254aa8;
        case 0x254aacu: goto label_254aac;
        case 0x254ab0u: goto label_254ab0;
        case 0x254ab4u: goto label_254ab4;
        case 0x254ab8u: goto label_254ab8;
        case 0x254abcu: goto label_254abc;
        case 0x254ac0u: goto label_254ac0;
        case 0x254ac4u: goto label_254ac4;
        case 0x254ac8u: goto label_254ac8;
        case 0x254accu: goto label_254acc;
        case 0x254ad0u: goto label_254ad0;
        case 0x254ad4u: goto label_254ad4;
        default: break;
    }

    ctx->pc = 0x254a00u;

label_254a00:
    // 0x254a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_254a04:
    // 0x254a04: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x254a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_254a08:
    // 0x254a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_254a0c:
    // 0x254a0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x254a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_254a10:
    // 0x254a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_254a14:
    // 0x254a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_254a18:
    // 0x254a18: 0x8e031060  lw          $v1, 0x1060($s0)
    ctx->pc = 0x254a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
label_254a1c:
    // 0x254a1c: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
label_254a20:
    if (ctx->pc == 0x254A20u) {
        ctx->pc = 0x254A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A1Cu;
        // 0x254a20: 0x8e020fe4  lw          $v0, 0xFE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A24u;
        goto label_254a24;
    }
    ctx->pc = 0x254A1Cu;
    {
        const bool branch_taken_0x254a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x254a1c) {
            ctx->pc = 0x254A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A1Cu;
            // 0x254a20: 0x8e020fe4  lw          $v0, 0xFE4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254AA0u;
            goto label_254aa0;
        }
    }
    ctx->pc = 0x254A24u;
label_254a24:
    // 0x254a24: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x254a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_254a28:
    // 0x254a28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_254a2c:
    if (ctx->pc == 0x254A2Cu) {
        ctx->pc = 0x254A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A28u;
        // 0x254a2c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A30u;
        goto label_254a30;
    }
    ctx->pc = 0x254A28u;
    {
        const bool branch_taken_0x254a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A28u;
        // 0x254a2c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a28) {
            ctx->pc = 0x254A48u;
            goto label_254a48;
        }
    }
    ctx->pc = 0x254A30u;
label_254a30:
    // 0x254a30: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_254a34:
    if (ctx->pc == 0x254A34u) {
        ctx->pc = 0x254A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A30u;
        // 0x254a34: 0x8e040fe8  lw          $a0, 0xFE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A38u;
        goto label_254a38;
    }
    ctx->pc = 0x254A30u;
    {
        const bool branch_taken_0x254a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254a30) {
            ctx->pc = 0x254A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A30u;
            // 0x254a34: 0x8e040fe8  lw          $a0, 0xFE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254AB4u;
            goto label_254ab4;
        }
    }
    ctx->pc = 0x254A38u;
label_254a38:
    // 0x254a38: 0x5860001e  blezl       $v1, . + 4 + (0x1E << 2)
label_254a3c:
    if (ctx->pc == 0x254A3Cu) {
        ctx->pc = 0x254A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A38u;
        // 0x254a3c: 0x8e040fe8  lw          $a0, 0xFE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A40u;
        goto label_254a40;
    }
    ctx->pc = 0x254A38u;
    {
        const bool branch_taken_0x254a38 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x254a38) {
            ctx->pc = 0x254A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A38u;
            // 0x254a3c: 0x8e040fe8  lw          $a0, 0xFE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254AB4u;
            goto label_254ab4;
        }
    }
    ctx->pc = 0x254A40u;
label_254a40:
    // 0x254a40: 0x10000005  b           . + 4 + (0x5 << 2)
label_254a44:
    if (ctx->pc == 0x254A44u) {
        ctx->pc = 0x254A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A40u;
        // 0x254a44: 0x8e020fe4  lw          $v0, 0xFE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A48u;
        goto label_254a48;
    }
    ctx->pc = 0x254A40u;
    {
        const bool branch_taken_0x254a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A40u;
        // 0x254a44: 0x8e020fe4  lw          $v0, 0xFE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a40) {
            ctx->pc = 0x254A58u;
            goto label_254a58;
        }
    }
    ctx->pc = 0x254A48u;
label_254a48:
    // 0x254a48: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x254a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_254a4c:
    // 0x254a4c: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
label_254a50:
    if (ctx->pc == 0x254A50u) {
        ctx->pc = 0x254A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A4Cu;
        // 0x254a50: 0x8e040fe8  lw          $a0, 0xFE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A54u;
        goto label_254a54;
    }
    ctx->pc = 0x254A4Cu;
    {
        const bool branch_taken_0x254a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x254a4c) {
            ctx->pc = 0x254A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A4Cu;
            // 0x254a50: 0x8e040fe8  lw          $a0, 0xFE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254AB4u;
            goto label_254ab4;
        }
    }
    ctx->pc = 0x254A54u;
label_254a54:
    // 0x254a54: 0x8e020fe4  lw          $v0, 0xFE4($s0)
    ctx->pc = 0x254a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
label_254a58:
    // 0x254a58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x254a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_254a5c:
    // 0x254a5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x254a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_254a60:
    // 0x254a60: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x254a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_254a64:
    // 0x254a64: 0x40f809  jalr        $v0
label_254a68:
    if (ctx->pc == 0x254A68u) {
        ctx->pc = 0x254A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A64u;
        // 0x254a68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A6Cu;
        goto label_254a6c;
    }
    ctx->pc = 0x254A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x254A6Cu);
        ctx->pc = 0x254A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A64u;
        // 0x254a68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254A64u, 0x254A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x254A6Cu;
label_254a6c:
    // 0x254a6c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_254a70:
    if (ctx->pc == 0x254A70u) {
        ctx->pc = 0x254A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A6Cu;
        // 0x254a70: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A74u;
        goto label_254a74;
    }
    ctx->pc = 0x254A6Cu;
    {
        const bool branch_taken_0x254a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254a6c) {
            ctx->pc = 0x254A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A6Cu;
            // 0x254a70: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254A98u;
            goto label_254a98;
        }
    }
    ctx->pc = 0x254A74u;
label_254a74:
    // 0x254a74: 0x8e020fe4  lw          $v0, 0xFE4($s0)
    ctx->pc = 0x254a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
label_254a78:
    // 0x254a78: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x254a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_254a7c:
    // 0x254a7c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x254a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_254a80:
    // 0x254a80: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x254a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_254a84:
    // 0x254a84: 0x40f809  jalr        $v0
label_254a88:
    if (ctx->pc == 0x254A88u) {
        ctx->pc = 0x254A8Cu;
        goto label_254a8c;
    }
    ctx->pc = 0x254A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x254A8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254A84u, 0x254A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x254A8Cu;
label_254a8c:
    // 0x254a8c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_254a90:
    if (ctx->pc == 0x254A90u) {
        ctx->pc = 0x254A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A8Cu;
        // 0x254a90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254A94u;
        goto label_254a94;
    }
    ctx->pc = 0x254A8Cu;
    {
        const bool branch_taken_0x254a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A8Cu;
        // 0x254a90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a8c) {
            ctx->pc = 0x254AC4u;
            goto label_254ac4;
        }
    }
    ctx->pc = 0x254A94u;
label_254a94:
    // 0x254a94: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x254a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254a98:
    // 0x254a98: 0x1000000a  b           . + 4 + (0xA << 2)
label_254a9c:
    if (ctx->pc == 0x254A9Cu) {
        ctx->pc = 0x254A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A98u;
        // 0x254a9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254AA0u;
        goto label_254aa0;
    }
    ctx->pc = 0x254A98u;
    {
        const bool branch_taken_0x254a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A98u;
        // 0x254a9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a98) {
            ctx->pc = 0x254AC4u;
            goto label_254ac4;
        }
    }
    ctx->pc = 0x254AA0u;
label_254aa0:
    // 0x254aa0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x254aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_254aa4:
    // 0x254aa4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x254aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_254aa8:
    // 0x254aa8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x254aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_254aac:
    // 0x254aac: 0x10000005  b           . + 4 + (0x5 << 2)
label_254ab0:
    if (ctx->pc == 0x254AB0u) {
        ctx->pc = 0x254AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AACu;
        // 0x254ab0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x254AB4u;
        goto label_254ab4;
    }
    ctx->pc = 0x254AACu;
    {
        const bool branch_taken_0x254aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AACu;
        // 0x254ab0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254aac) {
            ctx->pc = 0x254AC4u;
            goto label_254ac4;
        }
    }
    ctx->pc = 0x254AB4u;
label_254ab4:
    // 0x254ab4: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x254ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
label_254ab8:
    // 0x254ab8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x254ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_254abc:
    // 0x254abc: 0x40f809  jalr        $v0
label_254ac0:
    if (ctx->pc == 0x254AC0u) {
        ctx->pc = 0x254AC4u;
        goto label_254ac4;
    }
    ctx->pc = 0x254ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x254AC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254ABCu, 0x254AC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x254AC4u;
label_254ac4:
    // 0x254ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_254ac8:
    // 0x254ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x254ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_254acc:
    // 0x254acc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_254ad0:
    // 0x254ad0: 0x3e00008  jr          $ra
label_254ad4:
    if (ctx->pc == 0x254AD4u) {
        ctx->pc = 0x254AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AD0u;
        // 0x254ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254AD8u;
        goto label_fallthrough_0x254ad0;
    }
    ctx->pc = 0x254AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AD0u;
        // 0x254ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x254ad0:
    ctx->pc = 0x254AD8u;
}
