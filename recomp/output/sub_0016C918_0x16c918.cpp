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

// Function: sub_0016C918
// Address: 0x16c918 - 0x16ca34
void sub_0016C918_0x16c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C918_0x16c918");
#endif

    switch (ctx->pc) {
        case 0x16c918u: goto label_16c918;
        case 0x16c91cu: goto label_16c91c;
        case 0x16c920u: goto label_16c920;
        case 0x16c924u: goto label_16c924;
        case 0x16c928u: goto label_16c928;
        case 0x16c92cu: goto label_16c92c;
        case 0x16c930u: goto label_16c930;
        case 0x16c934u: goto label_16c934;
        case 0x16c938u: goto label_16c938;
        case 0x16c93cu: goto label_16c93c;
        case 0x16c940u: goto label_16c940;
        case 0x16c944u: goto label_16c944;
        case 0x16c948u: goto label_16c948;
        case 0x16c94cu: goto label_16c94c;
        case 0x16c950u: goto label_16c950;
        case 0x16c954u: goto label_16c954;
        case 0x16c958u: goto label_16c958;
        case 0x16c95cu: goto label_16c95c;
        case 0x16c960u: goto label_16c960;
        case 0x16c964u: goto label_16c964;
        case 0x16c968u: goto label_16c968;
        case 0x16c96cu: goto label_16c96c;
        case 0x16c970u: goto label_16c970;
        case 0x16c974u: goto label_16c974;
        case 0x16c978u: goto label_16c978;
        case 0x16c97cu: goto label_16c97c;
        case 0x16c980u: goto label_16c980;
        case 0x16c984u: goto label_16c984;
        case 0x16c988u: goto label_16c988;
        case 0x16c98cu: goto label_16c98c;
        case 0x16c990u: goto label_16c990;
        case 0x16c994u: goto label_16c994;
        case 0x16c998u: goto label_16c998;
        case 0x16c99cu: goto label_16c99c;
        case 0x16c9a0u: goto label_16c9a0;
        case 0x16c9a4u: goto label_16c9a4;
        case 0x16c9a8u: goto label_16c9a8;
        case 0x16c9acu: goto label_16c9ac;
        case 0x16c9b0u: goto label_16c9b0;
        case 0x16c9b4u: goto label_16c9b4;
        case 0x16c9b8u: goto label_16c9b8;
        case 0x16c9bcu: goto label_16c9bc;
        case 0x16c9c0u: goto label_16c9c0;
        case 0x16c9c4u: goto label_16c9c4;
        case 0x16c9c8u: goto label_16c9c8;
        case 0x16c9ccu: goto label_16c9cc;
        case 0x16c9d0u: goto label_16c9d0;
        case 0x16c9d4u: goto label_16c9d4;
        case 0x16c9d8u: goto label_16c9d8;
        case 0x16c9dcu: goto label_16c9dc;
        case 0x16c9e0u: goto label_16c9e0;
        case 0x16c9e4u: goto label_16c9e4;
        case 0x16c9e8u: goto label_16c9e8;
        case 0x16c9ecu: goto label_16c9ec;
        case 0x16c9f0u: goto label_16c9f0;
        case 0x16c9f4u: goto label_16c9f4;
        case 0x16c9f8u: goto label_16c9f8;
        case 0x16c9fcu: goto label_16c9fc;
        case 0x16ca00u: goto label_16ca00;
        case 0x16ca04u: goto label_16ca04;
        case 0x16ca08u: goto label_16ca08;
        case 0x16ca0cu: goto label_16ca0c;
        case 0x16ca10u: goto label_16ca10;
        case 0x16ca14u: goto label_16ca14;
        case 0x16ca18u: goto label_16ca18;
        case 0x16ca1cu: goto label_16ca1c;
        case 0x16ca20u: goto label_16ca20;
        case 0x16ca24u: goto label_16ca24;
        case 0x16ca28u: goto label_16ca28;
        case 0x16ca2cu: goto label_16ca2c;
        case 0x16ca30u: goto label_16ca30;
        default: break;
    }

    ctx->pc = 0x16c918u;

label_16c918:
    // 0x16c918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16c91c:
    // 0x16c91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16c920:
    // 0x16c920: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_16c924:
    // 0x16c924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c928:
    // 0x16c928: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x16c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_16c92c:
    // 0x16c92c: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x16c92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_16c930:
    // 0x16c930: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_16c934:
    if (ctx->pc == 0x16C934u) {
        ctx->pc = 0x16C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C930u;
        // 0x16c934: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C938u;
        goto label_16c938;
    }
    ctx->pc = 0x16C930u;
    {
        const bool branch_taken_0x16c930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C930u;
        // 0x16c934: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c930) {
            ctx->pc = 0x16CA08u;
            goto label_16ca08;
        }
    }
    ctx->pc = 0x16C938u;
label_16c938:
    // 0x16c938: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16c938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16c93c:
    // 0x16c93c: 0x2442f050  addiu       $v0, $v0, -0xFB0
    ctx->pc = 0x16c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963280));
label_16c940:
    // 0x16c940: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16c944:
    // 0x16c944: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16c944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16c948:
    // 0x16c948: 0x800008  jr          $a0
label_16c94c:
    if (ctx->pc == 0x16C94Cu) {
        ctx->pc = 0x16C950u;
        goto label_16c950;
    }
    ctx->pc = 0x16C948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C950u: goto label_16c950;
            case 0x16C960u: goto label_16c960;
            case 0x16C970u: goto label_16c970;
            case 0x16C980u: goto label_16c980;
            case 0x16C990u: goto label_16c990;
            case 0x16C9A0u: goto label_16c9a0;
            case 0x16C9B0u: goto label_16c9b0;
            case 0x16C9C0u: goto label_16c9c0;
            case 0x16C9D0u: goto label_16c9d0;
            case 0x16C9E0u: goto label_16c9e0;
            case 0x16C9F0u: goto label_16c9f0;
            case 0x16CA00u: goto label_16ca00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C948u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16C950u;
label_16c950:
    // 0x16c950: 0xc05b4e8  jal         func_16D3A0
label_16c954:
    if (ctx->pc == 0x16C954u) {
        ctx->pc = 0x16C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C950u;
        // 0x16c954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C958u;
        goto label_16c958;
    }
    ctx->pc = 0x16C950u;
    SET_GPR_U32(ctx, 31, 0x16C958u);
    ctx->pc = 0x16C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C950u;
    // 0x16c954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D3A0u, 0x16C950u, 0x16C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C958u;
label_16c958:
    // 0x16c958: 0x1000002c  b           . + 4 + (0x2C << 2)
label_16c95c:
    if (ctx->pc == 0x16C95Cu) {
        ctx->pc = 0x16C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C958u;
        // 0x16c95c: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C960u;
        goto label_16c960;
    }
    ctx->pc = 0x16C958u;
    {
        const bool branch_taken_0x16c958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C958u;
        // 0x16c95c: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c958) {
            ctx->pc = 0x16CA0Cu;
            goto label_16ca0c;
        }
    }
    ctx->pc = 0x16C960u;
label_16c960:
    // 0x16c960: 0xc05b522  jal         func_16D488
label_16c964:
    if (ctx->pc == 0x16C964u) {
        ctx->pc = 0x16C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C960u;
        // 0x16c964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C968u;
        goto label_16c968;
    }
    ctx->pc = 0x16C960u;
    SET_GPR_U32(ctx, 31, 0x16C968u);
    ctx->pc = 0x16C964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C960u;
    // 0x16c964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D488u, 0x16C960u, 0x16C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C968u;
label_16c968:
    // 0x16c968: 0x10000028  b           . + 4 + (0x28 << 2)
label_16c96c:
    if (ctx->pc == 0x16C96Cu) {
        ctx->pc = 0x16C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C968u;
        // 0x16c96c: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C970u;
        goto label_16c970;
    }
    ctx->pc = 0x16C968u;
    {
        const bool branch_taken_0x16c968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C968u;
        // 0x16c96c: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c968) {
            ctx->pc = 0x16CA0Cu;
            goto label_16ca0c;
        }
    }
    ctx->pc = 0x16C970u;
label_16c970:
    // 0x16c970: 0xc05b560  jal         func_16D580
label_16c974:
    if (ctx->pc == 0x16C974u) {
        ctx->pc = 0x16C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C970u;
        // 0x16c974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C978u;
        goto label_16c978;
    }
    ctx->pc = 0x16C970u;
    SET_GPR_U32(ctx, 31, 0x16C978u);
    ctx->pc = 0x16C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C970u;
    // 0x16c974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D580u, 0x16C970u, 0x16C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C978u;
label_16c978:
    // 0x16c978: 0x10000024  b           . + 4 + (0x24 << 2)
label_16c97c:
    if (ctx->pc == 0x16C97Cu) {
        ctx->pc = 0x16C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C978u;
        // 0x16c97c: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C980u;
        goto label_16c980;
    }
    ctx->pc = 0x16C978u;
    {
        const bool branch_taken_0x16c978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C978u;
        // 0x16c97c: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c978) {
            ctx->pc = 0x16CA0Cu;
            goto label_16ca0c;
        }
    }
    ctx->pc = 0x16C980u;
label_16c980:
    // 0x16c980: 0xc05b59a  jal         func_16D668
label_16c984:
    if (ctx->pc == 0x16C984u) {
        ctx->pc = 0x16C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C980u;
        // 0x16c984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C988u;
        goto label_16c988;
    }
    ctx->pc = 0x16C980u;
    SET_GPR_U32(ctx, 31, 0x16C988u);
    ctx->pc = 0x16C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C980u;
    // 0x16c984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D668u, 0x16C980u, 0x16C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C988u;
label_16c988:
    // 0x16c988: 0x10000020  b           . + 4 + (0x20 << 2)
label_16c98c:
    if (ctx->pc == 0x16C98Cu) {
        ctx->pc = 0x16C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C988u;
        // 0x16c98c: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C990u;
        goto label_16c990;
    }
    ctx->pc = 0x16C988u;
    {
        const bool branch_taken_0x16c988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C988u;
        // 0x16c98c: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c988) {
            ctx->pc = 0x16CA0Cu;
            goto label_16ca0c;
        }
    }
    ctx->pc = 0x16C990u;
label_16c990:
    // 0x16c990: 0xc05b5d4  jal         func_16D750
label_16c994:
    if (ctx->pc == 0x16C994u) {
        ctx->pc = 0x16C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C990u;
        // 0x16c994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C998u;
        goto label_16c998;
    }
    ctx->pc = 0x16C990u;
    SET_GPR_U32(ctx, 31, 0x16C998u);
    ctx->pc = 0x16C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C990u;
    // 0x16c994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D750u, 0x16C990u, 0x16C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C998u;
label_16c998:
    // 0x16c998: 0x1000001c  b           . + 4 + (0x1C << 2)
label_16c99c:
    if (ctx->pc == 0x16C99Cu) {
        ctx->pc = 0x16C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C998u;
        // 0x16c99c: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9A0u;
        goto label_16c9a0;
    }
    ctx->pc = 0x16C998u;
    {
        const bool branch_taken_0x16c998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C998u;
        // 0x16c99c: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c998) {
            ctx->pc = 0x16CA0Cu;
            goto label_16ca0c;
        }
    }
    ctx->pc = 0x16C9A0u;
label_16c9a0:
    // 0x16c9a0: 0xc05b60e  jal         func_16D838
label_16c9a4:
    if (ctx->pc == 0x16C9A4u) {
        ctx->pc = 0x16C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9A0u;
        // 0x16c9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9A8u;
        goto label_16c9a8;
    }
    ctx->pc = 0x16C9A0u;
    SET_GPR_U32(ctx, 31, 0x16C9A8u);
    ctx->pc = 0x16C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9A0u;
    // 0x16c9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D838u, 0x16C9A0u, 0x16C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9A8u;
label_16c9a8:
    // 0x16c9a8: 0x10000018  b           . + 4 + (0x18 << 2)
label_16c9ac:
    if (ctx->pc == 0x16C9ACu) {
        ctx->pc = 0x16C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9A8u;
        // 0x16c9ac: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9B0u;
        goto label_16c9b0;
    }
    ctx->pc = 0x16C9A8u;
    {
        const bool branch_taken_0x16c9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9A8u;
        // 0x16c9ac: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9a8) {
            ctx->pc = 0x16CA0Cu;
            goto label_16ca0c;
        }
    }
    ctx->pc = 0x16C9B0u;
label_16c9b0:
    // 0x16c9b0: 0xc05b64c  jal         func_16D930
label_16c9b4:
    if (ctx->pc == 0x16C9B4u) {
        ctx->pc = 0x16C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9B0u;
        // 0x16c9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9B8u;
        goto label_16c9b8;
    }
    ctx->pc = 0x16C9B0u;
    SET_GPR_U32(ctx, 31, 0x16C9B8u);
    ctx->pc = 0x16C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9B0u;
    // 0x16c9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D930u, 0x16C9B0u, 0x16C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9B8u;
label_16c9b8:
    // 0x16c9b8: 0x10000014  b           . + 4 + (0x14 << 2)
label_16c9bc:
    if (ctx->pc == 0x16C9BCu) {
        ctx->pc = 0x16C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9B8u;
        // 0x16c9bc: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9C0u;
        goto label_16c9c0;
    }
    ctx->pc = 0x16C9B8u;
    {
        const bool branch_taken_0x16c9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9B8u;
        // 0x16c9bc: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9b8) {
            ctx->pc = 0x16CA0Cu;
            goto label_16ca0c;
        }
    }
    ctx->pc = 0x16C9C0u;
label_16c9c0:
    // 0x16c9c0: 0xc05b686  jal         func_16DA18
label_16c9c4:
    if (ctx->pc == 0x16C9C4u) {
        ctx->pc = 0x16C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9C0u;
        // 0x16c9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9C8u;
        goto label_16c9c8;
    }
    ctx->pc = 0x16C9C0u;
    SET_GPR_U32(ctx, 31, 0x16C9C8u);
    ctx->pc = 0x16C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9C0u;
    // 0x16c9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA18u, 0x16C9C0u, 0x16C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9C8u;
label_16c9c8:
    // 0x16c9c8: 0x10000010  b           . + 4 + (0x10 << 2)
label_16c9cc:
    if (ctx->pc == 0x16C9CCu) {
        ctx->pc = 0x16C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9C8u;
        // 0x16c9cc: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9D0u;
        goto label_16c9d0;
    }
    ctx->pc = 0x16C9C8u;
    {
        const bool branch_taken_0x16c9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9C8u;
        // 0x16c9cc: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9c8) {
            ctx->pc = 0x16CA0Cu;
            goto label_16ca0c;
        }
    }
    ctx->pc = 0x16C9D0u;
label_16c9d0:
    // 0x16c9d0: 0xc05b6ac  jal         func_16DAB0
label_16c9d4:
    if (ctx->pc == 0x16C9D4u) {
        ctx->pc = 0x16C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9D0u;
        // 0x16c9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9D8u;
        goto label_16c9d8;
    }
    ctx->pc = 0x16C9D0u;
    SET_GPR_U32(ctx, 31, 0x16C9D8u);
    ctx->pc = 0x16C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9D0u;
    // 0x16c9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DAB0u, 0x16C9D0u, 0x16C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9D8u;
label_16c9d8:
    // 0x16c9d8: 0x1000000c  b           . + 4 + (0xC << 2)
label_16c9dc:
    if (ctx->pc == 0x16C9DCu) {
        ctx->pc = 0x16C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9D8u;
        // 0x16c9dc: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9E0u;
        goto label_16c9e0;
    }
    ctx->pc = 0x16C9D8u;
    {
        const bool branch_taken_0x16c9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9D8u;
        // 0x16c9dc: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9d8) {
            ctx->pc = 0x16CA0Cu;
            goto label_16ca0c;
        }
    }
    ctx->pc = 0x16C9E0u;
label_16c9e0:
    // 0x16c9e0: 0xc05b6d2  jal         func_16DB48
label_16c9e4:
    if (ctx->pc == 0x16C9E4u) {
        ctx->pc = 0x16C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9E0u;
        // 0x16c9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9E8u;
        goto label_16c9e8;
    }
    ctx->pc = 0x16C9E0u;
    SET_GPR_U32(ctx, 31, 0x16C9E8u);
    ctx->pc = 0x16C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9E0u;
    // 0x16c9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DB48u, 0x16C9E0u, 0x16C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9E8u;
label_16c9e8:
    // 0x16c9e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_16c9ec:
    if (ctx->pc == 0x16C9ECu) {
        ctx->pc = 0x16C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9E8u;
        // 0x16c9ec: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9F0u;
        goto label_16c9f0;
    }
    ctx->pc = 0x16C9E8u;
    {
        const bool branch_taken_0x16c9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9E8u;
        // 0x16c9ec: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9e8) {
            ctx->pc = 0x16CA0Cu;
            goto label_16ca0c;
        }
    }
    ctx->pc = 0x16C9F0u;
label_16c9f0:
    // 0x16c9f0: 0xc05b710  jal         func_16DC40
label_16c9f4:
    if (ctx->pc == 0x16C9F4u) {
        ctx->pc = 0x16C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9F0u;
        // 0x16c9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9F8u;
        goto label_16c9f8;
    }
    ctx->pc = 0x16C9F0u;
    SET_GPR_U32(ctx, 31, 0x16C9F8u);
    ctx->pc = 0x16C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9F0u;
    // 0x16c9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DC40u, 0x16C9F0u, 0x16C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9F8u;
label_16c9f8:
    // 0x16c9f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_16c9fc:
    if (ctx->pc == 0x16C9FCu) {
        ctx->pc = 0x16C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9F8u;
        // 0x16c9fc: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CA00u;
        goto label_16ca00;
    }
    ctx->pc = 0x16C9F8u;
    {
        const bool branch_taken_0x16c9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9F8u;
        // 0x16c9fc: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9f8) {
            ctx->pc = 0x16CA0Cu;
            goto label_16ca0c;
        }
    }
    ctx->pc = 0x16CA00u;
label_16ca00:
    // 0x16ca00: 0xc05b4ca  jal         func_16D328
label_16ca04:
    if (ctx->pc == 0x16CA04u) {
        ctx->pc = 0x16CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA00u;
        // 0x16ca04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CA08u;
        goto label_16ca08;
    }
    ctx->pc = 0x16CA00u;
    SET_GPR_U32(ctx, 31, 0x16CA08u);
    ctx->pc = 0x16CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA00u;
    // 0x16ca04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D328u, 0x16CA00u, 0x16CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CA08u;
label_16ca08:
    // 0x16ca08: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x16ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_16ca0c:
    // 0x16ca0c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x16ca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16ca10:
    // 0x16ca10: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x16ca10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_16ca14:
    // 0x16ca14: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_16ca18:
    if (ctx->pc == 0x16CA18u) {
        ctx->pc = 0x16CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA14u;
        // 0x16ca18: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CA1Cu;
        goto label_16ca1c;
    }
    ctx->pc = 0x16CA14u;
    {
        const bool branch_taken_0x16ca14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA14u;
        // 0x16ca18: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca14) {
            ctx->pc = 0x16CA40u;
            return;
        }
    }
    ctx->pc = 0x16CA1Cu;
label_16ca1c:
    // 0x16ca1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16ca20:
    // 0x16ca20: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x16ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
label_16ca24:
    // 0x16ca24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16ca28:
    // 0x16ca28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16ca2c:
    // 0x16ca2c: 0x800008  jr          $a0
label_16ca30:
    if (ctx->pc == 0x16CA30u) {
        ctx->pc = 0x16CA34u;
        goto label_fallthrough_0x16ca2c;
    }
    ctx->pc = 0x16CA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CA2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x16ca2c:
    ctx->pc = 0x16CA34u;
}
