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

// Function: sub_003EB8F0
// Address: 0x3eb8f0 - 0x3eba28
void sub_003EB8F0_0x3eb8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB8F0_0x3eb8f0");
#endif

    switch (ctx->pc) {
        case 0x3eb8f0u: goto label_3eb8f0;
        case 0x3eb8f4u: goto label_3eb8f4;
        case 0x3eb8f8u: goto label_3eb8f8;
        case 0x3eb8fcu: goto label_3eb8fc;
        case 0x3eb900u: goto label_3eb900;
        case 0x3eb904u: goto label_3eb904;
        case 0x3eb908u: goto label_3eb908;
        case 0x3eb90cu: goto label_3eb90c;
        case 0x3eb910u: goto label_3eb910;
        case 0x3eb914u: goto label_3eb914;
        case 0x3eb918u: goto label_3eb918;
        case 0x3eb91cu: goto label_3eb91c;
        case 0x3eb920u: goto label_3eb920;
        case 0x3eb924u: goto label_3eb924;
        case 0x3eb928u: goto label_3eb928;
        case 0x3eb92cu: goto label_3eb92c;
        case 0x3eb930u: goto label_3eb930;
        case 0x3eb934u: goto label_3eb934;
        case 0x3eb938u: goto label_3eb938;
        case 0x3eb93cu: goto label_3eb93c;
        case 0x3eb940u: goto label_3eb940;
        case 0x3eb944u: goto label_3eb944;
        case 0x3eb948u: goto label_3eb948;
        case 0x3eb94cu: goto label_3eb94c;
        case 0x3eb950u: goto label_3eb950;
        case 0x3eb954u: goto label_3eb954;
        case 0x3eb958u: goto label_3eb958;
        case 0x3eb95cu: goto label_3eb95c;
        case 0x3eb960u: goto label_3eb960;
        case 0x3eb964u: goto label_3eb964;
        case 0x3eb968u: goto label_3eb968;
        case 0x3eb96cu: goto label_3eb96c;
        case 0x3eb970u: goto label_3eb970;
        case 0x3eb974u: goto label_3eb974;
        case 0x3eb978u: goto label_3eb978;
        case 0x3eb97cu: goto label_3eb97c;
        case 0x3eb980u: goto label_3eb980;
        case 0x3eb984u: goto label_3eb984;
        case 0x3eb988u: goto label_3eb988;
        case 0x3eb98cu: goto label_3eb98c;
        case 0x3eb990u: goto label_3eb990;
        case 0x3eb994u: goto label_3eb994;
        case 0x3eb998u: goto label_3eb998;
        case 0x3eb99cu: goto label_3eb99c;
        case 0x3eb9a0u: goto label_3eb9a0;
        case 0x3eb9a4u: goto label_3eb9a4;
        case 0x3eb9a8u: goto label_3eb9a8;
        case 0x3eb9acu: goto label_3eb9ac;
        case 0x3eb9b0u: goto label_3eb9b0;
        case 0x3eb9b4u: goto label_3eb9b4;
        case 0x3eb9b8u: goto label_3eb9b8;
        case 0x3eb9bcu: goto label_3eb9bc;
        case 0x3eb9c0u: goto label_3eb9c0;
        case 0x3eb9c4u: goto label_3eb9c4;
        case 0x3eb9c8u: goto label_3eb9c8;
        case 0x3eb9ccu: goto label_3eb9cc;
        case 0x3eb9d0u: goto label_3eb9d0;
        case 0x3eb9d4u: goto label_3eb9d4;
        case 0x3eb9d8u: goto label_3eb9d8;
        case 0x3eb9dcu: goto label_3eb9dc;
        case 0x3eb9e0u: goto label_3eb9e0;
        case 0x3eb9e4u: goto label_3eb9e4;
        case 0x3eb9e8u: goto label_3eb9e8;
        case 0x3eb9ecu: goto label_3eb9ec;
        case 0x3eb9f0u: goto label_3eb9f0;
        case 0x3eb9f4u: goto label_3eb9f4;
        case 0x3eb9f8u: goto label_3eb9f8;
        case 0x3eb9fcu: goto label_3eb9fc;
        case 0x3eba00u: goto label_3eba00;
        case 0x3eba04u: goto label_3eba04;
        case 0x3eba08u: goto label_3eba08;
        case 0x3eba0cu: goto label_3eba0c;
        case 0x3eba10u: goto label_3eba10;
        case 0x3eba14u: goto label_3eba14;
        case 0x3eba18u: goto label_3eba18;
        case 0x3eba1cu: goto label_3eba1c;
        case 0x3eba20u: goto label_3eba20;
        case 0x3eba24u: goto label_3eba24;
        default: break;
    }

    ctx->pc = 0x3eb8f0u;

label_3eb8f0:
    // 0x3eb8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eb8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eb8f4:
    // 0x3eb8f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eb8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3eb8f8:
    // 0x3eb8f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eb8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3eb8fc:
    // 0x3eb8fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eb8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb900:
    // 0x3eb900: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eb900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3eb904:
    // 0x3eb904: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eb904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3eb908:
    // 0x3eb908: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb90c:
    // 0x3eb90c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3eb910:
    if (ctx->pc == 0x3EB910u) {
        ctx->pc = 0x3EB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB90Cu;
        // 0x3eb910: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB914u;
        goto label_3eb914;
    }
    ctx->pc = 0x3EB90Cu;
    {
        const bool branch_taken_0x3eb90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB90Cu;
        // 0x3eb910: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb90c) {
            ctx->pc = 0x3EB98Cu;
            goto label_3eb98c;
        }
    }
    ctx->pc = 0x3EB914u;
label_3eb914:
    // 0x3eb914: 0x0  nop
    ctx->pc = 0x3eb914u;
    // NOP
label_3eb918:
    // 0x3eb918: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb91c:
    // 0x3eb91c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb920:
    // 0x3eb920: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb924:
    if (ctx->pc == 0x3EB924u) {
        ctx->pc = 0x3EB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB920u;
        // 0x3eb924: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB928u;
        goto label_3eb928;
    }
    ctx->pc = 0x3EB920u;
    {
        const bool branch_taken_0x3eb920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb920) {
            ctx->pc = 0x3EB924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB920u;
            // 0x3eb924: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB97Cu;
            goto label_3eb97c;
        }
    }
    ctx->pc = 0x3EB928u;
label_3eb928:
    // 0x3eb928: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb92c:
    // 0x3eb92c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb930:
    // 0x3eb930: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb934:
    // 0x3eb934: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb938:
    if (ctx->pc == 0x3EB938u) {
        ctx->pc = 0x3EB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB934u;
        // 0x3eb938: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB93Cu;
        goto label_3eb93c;
    }
    ctx->pc = 0x3EB934u;
    {
        const bool branch_taken_0x3eb934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb934) {
            ctx->pc = 0x3EB938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB934u;
            // 0x3eb938: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB968u;
            goto label_3eb968;
        }
    }
    ctx->pc = 0x3EB93Cu;
label_3eb93c:
    // 0x3eb93c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb93cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb940:
    // 0x3eb940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb944:
    // 0x3eb944: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb948:
    // 0x3eb948: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb94c:
    // 0x3eb94c: 0x40f809  jalr        $v0
label_3eb950:
    if (ctx->pc == 0x3EB950u) {
        ctx->pc = 0x3EB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB94Cu;
        // 0x3eb950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB954u;
        goto label_3eb954;
    }
    ctx->pc = 0x3EB94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB954u);
        ctx->pc = 0x3EB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB94Cu;
        // 0x3eb950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB94Cu, 0x3EB954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB954u;
label_3eb954:
    // 0x3eb954: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb958:
    // 0x3eb958: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb95c:
    // 0x3eb95c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb960:
    if (ctx->pc == 0x3EB960u) {
        ctx->pc = 0x3EB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB95Cu;
        // 0x3eb960: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB964u;
        goto label_3eb964;
    }
    ctx->pc = 0x3EB95Cu;
    {
        const bool branch_taken_0x3eb95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB95Cu;
        // 0x3eb960: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb95c) {
            ctx->pc = 0x3EB940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb940;
        }
    }
    ctx->pc = 0x3EB964u;
label_3eb964:
    // 0x3eb964: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb968:
    // 0x3eb968: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb96c:
    // 0x3eb96c: 0xc0f528a  jal         func_3D4A28
label_3eb970:
    if (ctx->pc == 0x3EB970u) {
        ctx->pc = 0x3EB970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB96Cu;
        // 0x3eb970: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB974u;
        goto label_3eb974;
    }
    ctx->pc = 0x3EB96Cu;
    SET_GPR_U32(ctx, 31, 0x3EB974u);
    ctx->pc = 0x3EB970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB96Cu;
    // 0x3eb970: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB96Cu, 0x3EB974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB974u;
label_3eb974:
    // 0x3eb974: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb978:
    // 0x3eb978: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb97c:
    // 0x3eb97c: 0xc0f5222  jal         func_3D4888
label_3eb980:
    if (ctx->pc == 0x3EB980u) {
        ctx->pc = 0x3EB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB97Cu;
        // 0x3eb980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB984u;
        goto label_3eb984;
    }
    ctx->pc = 0x3EB97Cu;
    SET_GPR_U32(ctx, 31, 0x3EB984u);
    ctx->pc = 0x3EB980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB97Cu;
    // 0x3eb980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB97Cu, 0x3EB984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB984u;
label_3eb984:
    // 0x3eb984: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb988:
    if (ctx->pc == 0x3EB988u) {
        ctx->pc = 0x3EB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB984u;
        // 0x3eb988: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB98Cu;
        goto label_3eb98c;
    }
    ctx->pc = 0x3EB984u;
    {
        const bool branch_taken_0x3eb984 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB984u;
        // 0x3eb988: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb984) {
            ctx->pc = 0x3EB918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb918;
        }
    }
    ctx->pc = 0x3EB98Cu;
label_3eb98c:
    // 0x3eb98c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb990:
    // 0x3eb990: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3eb994:
    if (ctx->pc == 0x3EB994u) {
        ctx->pc = 0x3EB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB990u;
        // 0x3eb994: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB998u;
        goto label_3eb998;
    }
    ctx->pc = 0x3EB990u;
    {
        const bool branch_taken_0x3eb990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB990u;
        // 0x3eb994: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb990) {
            ctx->pc = 0x3EBA0Cu;
            goto label_3eba0c;
        }
    }
    ctx->pc = 0x3EB998u;
label_3eb998:
    // 0x3eb998: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb99c:
    // 0x3eb99c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb9a0:
    // 0x3eb9a0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb9a4:
    if (ctx->pc == 0x3EB9A4u) {
        ctx->pc = 0x3EB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9A0u;
        // 0x3eb9a4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB9A8u;
        goto label_3eb9a8;
    }
    ctx->pc = 0x3EB9A0u;
    {
        const bool branch_taken_0x3eb9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb9a0) {
            ctx->pc = 0x3EB9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB9A0u;
            // 0x3eb9a4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB9FCu;
            goto label_3eb9fc;
        }
    }
    ctx->pc = 0x3EB9A8u;
label_3eb9a8:
    // 0x3eb9a8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb9ac:
    // 0x3eb9ac: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb9acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb9b0:
    // 0x3eb9b0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb9b4:
    // 0x3eb9b4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb9b8:
    if (ctx->pc == 0x3EB9B8u) {
        ctx->pc = 0x3EB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9B4u;
        // 0x3eb9b8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB9BCu;
        goto label_3eb9bc;
    }
    ctx->pc = 0x3EB9B4u;
    {
        const bool branch_taken_0x3eb9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb9b4) {
            ctx->pc = 0x3EB9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB9B4u;
            // 0x3eb9b8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB9E8u;
            goto label_3eb9e8;
        }
    }
    ctx->pc = 0x3EB9BCu;
label_3eb9bc:
    // 0x3eb9bc: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb9c0:
    // 0x3eb9c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb9c4:
    // 0x3eb9c4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb9c8:
    // 0x3eb9c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb9cc:
    // 0x3eb9cc: 0x40f809  jalr        $v0
label_3eb9d0:
    if (ctx->pc == 0x3EB9D0u) {
        ctx->pc = 0x3EB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9CCu;
        // 0x3eb9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB9D4u;
        goto label_3eb9d4;
    }
    ctx->pc = 0x3EB9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB9D4u);
        ctx->pc = 0x3EB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9CCu;
        // 0x3eb9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB9CCu, 0x3EB9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB9D4u;
label_3eb9d4:
    // 0x3eb9d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eb9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb9d8:
    // 0x3eb9d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb9dc:
    // 0x3eb9dc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb9e0:
    if (ctx->pc == 0x3EB9E0u) {
        ctx->pc = 0x3EB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9DCu;
        // 0x3eb9e0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB9E4u;
        goto label_3eb9e4;
    }
    ctx->pc = 0x3EB9DCu;
    {
        const bool branch_taken_0x3eb9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9DCu;
        // 0x3eb9e0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb9dc) {
            ctx->pc = 0x3EB9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb9c0;
        }
    }
    ctx->pc = 0x3EB9E4u;
label_3eb9e4:
    // 0x3eb9e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb9e8:
    // 0x3eb9e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb9ec:
    // 0x3eb9ec: 0xc0f528a  jal         func_3D4A28
label_3eb9f0:
    if (ctx->pc == 0x3EB9F0u) {
        ctx->pc = 0x3EB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9ECu;
        // 0x3eb9f0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB9F4u;
        goto label_3eb9f4;
    }
    ctx->pc = 0x3EB9ECu;
    SET_GPR_U32(ctx, 31, 0x3EB9F4u);
    ctx->pc = 0x3EB9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB9ECu;
    // 0x3eb9f0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB9ECu, 0x3EB9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB9F4u;
label_3eb9f4:
    // 0x3eb9f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb9f8:
    // 0x3eb9f8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb9fc:
    // 0x3eb9fc: 0xc0f5222  jal         func_3D4888
label_3eba00:
    if (ctx->pc == 0x3EBA00u) {
        ctx->pc = 0x3EBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB9FCu;
        // 0x3eba00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBA04u;
        goto label_3eba04;
    }
    ctx->pc = 0x3EB9FCu;
    SET_GPR_U32(ctx, 31, 0x3EBA04u);
    ctx->pc = 0x3EBA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB9FCu;
    // 0x3eba00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB9FCu, 0x3EBA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBA04u;
label_3eba04:
    // 0x3eba04: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eba08:
    if (ctx->pc == 0x3EBA08u) {
        ctx->pc = 0x3EBA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA04u;
        // 0x3eba08: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBA0Cu;
        goto label_3eba0c;
    }
    ctx->pc = 0x3EBA04u;
    {
        const bool branch_taken_0x3eba04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA04u;
        // 0x3eba08: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eba04) {
            ctx->pc = 0x3EB998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb998;
        }
    }
    ctx->pc = 0x3EBA0Cu;
label_3eba0c:
    // 0x3eba0c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eba10:
    // 0x3eba10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eba10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eba14:
    // 0x3eba14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eba14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eba18:
    // 0x3eba18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eba18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eba1c:
    // 0x3eba1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eba1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eba20:
    // 0x3eba20: 0x3e00008  jr          $ra
label_3eba24:
    if (ctx->pc == 0x3EBA24u) {
        ctx->pc = 0x3EBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA20u;
        // 0x3eba24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBA28u;
        goto label_fallthrough_0x3eba20;
    }
    ctx->pc = 0x3EBA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBA20u;
        // 0x3eba24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eba20:
    ctx->pc = 0x3EBA28u;
}
