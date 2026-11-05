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

// Function: sub_003EA930
// Address: 0x3ea930 - 0x3eaa68
void sub_003EA930_0x3ea930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA930_0x3ea930");
#endif

    switch (ctx->pc) {
        case 0x3ea930u: goto label_3ea930;
        case 0x3ea934u: goto label_3ea934;
        case 0x3ea938u: goto label_3ea938;
        case 0x3ea93cu: goto label_3ea93c;
        case 0x3ea940u: goto label_3ea940;
        case 0x3ea944u: goto label_3ea944;
        case 0x3ea948u: goto label_3ea948;
        case 0x3ea94cu: goto label_3ea94c;
        case 0x3ea950u: goto label_3ea950;
        case 0x3ea954u: goto label_3ea954;
        case 0x3ea958u: goto label_3ea958;
        case 0x3ea95cu: goto label_3ea95c;
        case 0x3ea960u: goto label_3ea960;
        case 0x3ea964u: goto label_3ea964;
        case 0x3ea968u: goto label_3ea968;
        case 0x3ea96cu: goto label_3ea96c;
        case 0x3ea970u: goto label_3ea970;
        case 0x3ea974u: goto label_3ea974;
        case 0x3ea978u: goto label_3ea978;
        case 0x3ea97cu: goto label_3ea97c;
        case 0x3ea980u: goto label_3ea980;
        case 0x3ea984u: goto label_3ea984;
        case 0x3ea988u: goto label_3ea988;
        case 0x3ea98cu: goto label_3ea98c;
        case 0x3ea990u: goto label_3ea990;
        case 0x3ea994u: goto label_3ea994;
        case 0x3ea998u: goto label_3ea998;
        case 0x3ea99cu: goto label_3ea99c;
        case 0x3ea9a0u: goto label_3ea9a0;
        case 0x3ea9a4u: goto label_3ea9a4;
        case 0x3ea9a8u: goto label_3ea9a8;
        case 0x3ea9acu: goto label_3ea9ac;
        case 0x3ea9b0u: goto label_3ea9b0;
        case 0x3ea9b4u: goto label_3ea9b4;
        case 0x3ea9b8u: goto label_3ea9b8;
        case 0x3ea9bcu: goto label_3ea9bc;
        case 0x3ea9c0u: goto label_3ea9c0;
        case 0x3ea9c4u: goto label_3ea9c4;
        case 0x3ea9c8u: goto label_3ea9c8;
        case 0x3ea9ccu: goto label_3ea9cc;
        case 0x3ea9d0u: goto label_3ea9d0;
        case 0x3ea9d4u: goto label_3ea9d4;
        case 0x3ea9d8u: goto label_3ea9d8;
        case 0x3ea9dcu: goto label_3ea9dc;
        case 0x3ea9e0u: goto label_3ea9e0;
        case 0x3ea9e4u: goto label_3ea9e4;
        case 0x3ea9e8u: goto label_3ea9e8;
        case 0x3ea9ecu: goto label_3ea9ec;
        case 0x3ea9f0u: goto label_3ea9f0;
        case 0x3ea9f4u: goto label_3ea9f4;
        case 0x3ea9f8u: goto label_3ea9f8;
        case 0x3ea9fcu: goto label_3ea9fc;
        case 0x3eaa00u: goto label_3eaa00;
        case 0x3eaa04u: goto label_3eaa04;
        case 0x3eaa08u: goto label_3eaa08;
        case 0x3eaa0cu: goto label_3eaa0c;
        case 0x3eaa10u: goto label_3eaa10;
        case 0x3eaa14u: goto label_3eaa14;
        case 0x3eaa18u: goto label_3eaa18;
        case 0x3eaa1cu: goto label_3eaa1c;
        case 0x3eaa20u: goto label_3eaa20;
        case 0x3eaa24u: goto label_3eaa24;
        case 0x3eaa28u: goto label_3eaa28;
        case 0x3eaa2cu: goto label_3eaa2c;
        case 0x3eaa30u: goto label_3eaa30;
        case 0x3eaa34u: goto label_3eaa34;
        case 0x3eaa38u: goto label_3eaa38;
        case 0x3eaa3cu: goto label_3eaa3c;
        case 0x3eaa40u: goto label_3eaa40;
        case 0x3eaa44u: goto label_3eaa44;
        case 0x3eaa48u: goto label_3eaa48;
        case 0x3eaa4cu: goto label_3eaa4c;
        case 0x3eaa50u: goto label_3eaa50;
        case 0x3eaa54u: goto label_3eaa54;
        case 0x3eaa58u: goto label_3eaa58;
        case 0x3eaa5cu: goto label_3eaa5c;
        case 0x3eaa60u: goto label_3eaa60;
        case 0x3eaa64u: goto label_3eaa64;
        default: break;
    }

    ctx->pc = 0x3ea930u;

label_3ea930:
    // 0x3ea930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ea930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ea934:
    // 0x3ea934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ea934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ea938:
    // 0x3ea938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ea938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ea93c:
    // 0x3ea93c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ea93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea940:
    // 0x3ea940: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ea940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3ea944:
    // 0x3ea944: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ea944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3ea948:
    // 0x3ea948: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea94c:
    // 0x3ea94c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3ea950:
    if (ctx->pc == 0x3EA950u) {
        ctx->pc = 0x3EA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA94Cu;
        // 0x3ea950: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA954u;
        goto label_3ea954;
    }
    ctx->pc = 0x3EA94Cu;
    {
        const bool branch_taken_0x3ea94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA94Cu;
        // 0x3ea950: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea94c) {
            ctx->pc = 0x3EA9CCu;
            goto label_3ea9cc;
        }
    }
    ctx->pc = 0x3EA954u;
label_3ea954:
    // 0x3ea954: 0x0  nop
    ctx->pc = 0x3ea954u;
    // NOP
label_3ea958:
    // 0x3ea958: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea95c:
    // 0x3ea95c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea960:
    // 0x3ea960: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea964:
    if (ctx->pc == 0x3EA964u) {
        ctx->pc = 0x3EA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA960u;
        // 0x3ea964: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA968u;
        goto label_3ea968;
    }
    ctx->pc = 0x3EA960u;
    {
        const bool branch_taken_0x3ea960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea960) {
            ctx->pc = 0x3EA964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA960u;
            // 0x3ea964: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA9BCu;
            goto label_3ea9bc;
        }
    }
    ctx->pc = 0x3EA968u;
label_3ea968:
    // 0x3ea968: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea96c:
    // 0x3ea96c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea96cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea970:
    // 0x3ea970: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea974:
    // 0x3ea974: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea978:
    if (ctx->pc == 0x3EA978u) {
        ctx->pc = 0x3EA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA974u;
        // 0x3ea978: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA97Cu;
        goto label_3ea97c;
    }
    ctx->pc = 0x3EA974u;
    {
        const bool branch_taken_0x3ea974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea974) {
            ctx->pc = 0x3EA978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA974u;
            // 0x3ea978: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA9A8u;
            goto label_3ea9a8;
        }
    }
    ctx->pc = 0x3EA97Cu;
label_3ea97c:
    // 0x3ea97c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea980:
    // 0x3ea980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea984:
    // 0x3ea984: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea988:
    // 0x3ea988: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea98c:
    // 0x3ea98c: 0x40f809  jalr        $v0
label_3ea990:
    if (ctx->pc == 0x3EA990u) {
        ctx->pc = 0x3EA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA98Cu;
        // 0x3ea990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA994u;
        goto label_3ea994;
    }
    ctx->pc = 0x3EA98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA994u);
        ctx->pc = 0x3EA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA98Cu;
        // 0x3ea990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA98Cu, 0x3EA994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA994u;
label_3ea994:
    // 0x3ea994: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ea994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea998:
    // 0x3ea998: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea99c:
    // 0x3ea99c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea9a0:
    if (ctx->pc == 0x3EA9A0u) {
        ctx->pc = 0x3EA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA99Cu;
        // 0x3ea9a0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA9A4u;
        goto label_3ea9a4;
    }
    ctx->pc = 0x3EA99Cu;
    {
        const bool branch_taken_0x3ea99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA99Cu;
        // 0x3ea9a0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea99c) {
            ctx->pc = 0x3EA980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea980;
        }
    }
    ctx->pc = 0x3EA9A4u;
label_3ea9a4:
    // 0x3ea9a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea9a8:
    // 0x3ea9a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea9ac:
    // 0x3ea9ac: 0xc0f528a  jal         func_3D4A28
label_3ea9b0:
    if (ctx->pc == 0x3EA9B0u) {
        ctx->pc = 0x3EA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9ACu;
        // 0x3ea9b0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA9B4u;
        goto label_3ea9b4;
    }
    ctx->pc = 0x3EA9ACu;
    SET_GPR_U32(ctx, 31, 0x3EA9B4u);
    ctx->pc = 0x3EA9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA9ACu;
    // 0x3ea9b0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA9ACu, 0x3EA9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA9B4u;
label_3ea9b4:
    // 0x3ea9b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea9b8:
    // 0x3ea9b8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea9bc:
    // 0x3ea9bc: 0xc0f5222  jal         func_3D4888
label_3ea9c0:
    if (ctx->pc == 0x3EA9C0u) {
        ctx->pc = 0x3EA9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9BCu;
        // 0x3ea9c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA9C4u;
        goto label_3ea9c4;
    }
    ctx->pc = 0x3EA9BCu;
    SET_GPR_U32(ctx, 31, 0x3EA9C4u);
    ctx->pc = 0x3EA9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA9BCu;
    // 0x3ea9c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA9BCu, 0x3EA9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA9C4u;
label_3ea9c4:
    // 0x3ea9c4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea9c8:
    if (ctx->pc == 0x3EA9C8u) {
        ctx->pc = 0x3EA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9C4u;
        // 0x3ea9c8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA9CCu;
        goto label_3ea9cc;
    }
    ctx->pc = 0x3EA9C4u;
    {
        const bool branch_taken_0x3ea9c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9C4u;
        // 0x3ea9c8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea9c4) {
            ctx->pc = 0x3EA958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea958;
        }
    }
    ctx->pc = 0x3EA9CCu;
label_3ea9cc:
    // 0x3ea9cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea9d0:
    // 0x3ea9d0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3ea9d4:
    if (ctx->pc == 0x3EA9D4u) {
        ctx->pc = 0x3EA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9D0u;
        // 0x3ea9d4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA9D8u;
        goto label_3ea9d8;
    }
    ctx->pc = 0x3EA9D0u;
    {
        const bool branch_taken_0x3ea9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9D0u;
        // 0x3ea9d4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea9d0) {
            ctx->pc = 0x3EAA4Cu;
            goto label_3eaa4c;
        }
    }
    ctx->pc = 0x3EA9D8u;
label_3ea9d8:
    // 0x3ea9d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea9dc:
    // 0x3ea9dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea9e0:
    // 0x3ea9e0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea9e4:
    if (ctx->pc == 0x3EA9E4u) {
        ctx->pc = 0x3EA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9E0u;
        // 0x3ea9e4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA9E8u;
        goto label_3ea9e8;
    }
    ctx->pc = 0x3EA9E0u;
    {
        const bool branch_taken_0x3ea9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea9e0) {
            ctx->pc = 0x3EA9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA9E0u;
            // 0x3ea9e4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAA3Cu;
            goto label_3eaa3c;
        }
    }
    ctx->pc = 0x3EA9E8u;
label_3ea9e8:
    // 0x3ea9e8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea9ec:
    // 0x3ea9ec: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea9f0:
    // 0x3ea9f0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea9f4:
    // 0x3ea9f4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea9f8:
    if (ctx->pc == 0x3EA9F8u) {
        ctx->pc = 0x3EA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9F4u;
        // 0x3ea9f8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA9FCu;
        goto label_3ea9fc;
    }
    ctx->pc = 0x3EA9F4u;
    {
        const bool branch_taken_0x3ea9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea9f4) {
            ctx->pc = 0x3EA9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA9F4u;
            // 0x3ea9f8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAA28u;
            goto label_3eaa28;
        }
    }
    ctx->pc = 0x3EA9FCu;
label_3ea9fc:
    // 0x3ea9fc: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eaa00:
    // 0x3eaa00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eaa00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eaa04:
    // 0x3eaa04: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eaa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eaa08:
    // 0x3eaa08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eaa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eaa0c:
    // 0x3eaa0c: 0x40f809  jalr        $v0
label_3eaa10:
    if (ctx->pc == 0x3EAA10u) {
        ctx->pc = 0x3EAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA0Cu;
        // 0x3eaa10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA14u;
        goto label_3eaa14;
    }
    ctx->pc = 0x3EAA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAA14u);
        ctx->pc = 0x3EAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA0Cu;
        // 0x3eaa10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAA0Cu, 0x3EAA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAA14u;
label_3eaa14:
    // 0x3eaa14: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eaa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eaa18:
    // 0x3eaa18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eaa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eaa1c:
    // 0x3eaa1c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eaa20:
    if (ctx->pc == 0x3EAA20u) {
        ctx->pc = 0x3EAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA1Cu;
        // 0x3eaa20: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA24u;
        goto label_3eaa24;
    }
    ctx->pc = 0x3EAA1Cu;
    {
        const bool branch_taken_0x3eaa1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA1Cu;
        // 0x3eaa20: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaa1c) {
            ctx->pc = 0x3EAA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eaa00;
        }
    }
    ctx->pc = 0x3EAA24u;
label_3eaa24:
    // 0x3eaa24: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eaa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eaa28:
    // 0x3eaa28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eaa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eaa2c:
    // 0x3eaa2c: 0xc0f528a  jal         func_3D4A28
label_3eaa30:
    if (ctx->pc == 0x3EAA30u) {
        ctx->pc = 0x3EAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA2Cu;
        // 0x3eaa30: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA34u;
        goto label_3eaa34;
    }
    ctx->pc = 0x3EAA2Cu;
    SET_GPR_U32(ctx, 31, 0x3EAA34u);
    ctx->pc = 0x3EAA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAA2Cu;
    // 0x3eaa30: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EAA2Cu, 0x3EAA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAA34u;
label_3eaa34:
    // 0x3eaa34: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eaa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eaa38:
    // 0x3eaa38: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eaa38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eaa3c:
    // 0x3eaa3c: 0xc0f5222  jal         func_3D4888
label_3eaa40:
    if (ctx->pc == 0x3EAA40u) {
        ctx->pc = 0x3EAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA3Cu;
        // 0x3eaa40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA44u;
        goto label_3eaa44;
    }
    ctx->pc = 0x3EAA3Cu;
    SET_GPR_U32(ctx, 31, 0x3EAA44u);
    ctx->pc = 0x3EAA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAA3Cu;
    // 0x3eaa40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EAA3Cu, 0x3EAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAA44u;
label_3eaa44:
    // 0x3eaa44: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eaa48:
    if (ctx->pc == 0x3EAA48u) {
        ctx->pc = 0x3EAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA44u;
        // 0x3eaa48: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA4Cu;
        goto label_3eaa4c;
    }
    ctx->pc = 0x3EAA44u;
    {
        const bool branch_taken_0x3eaa44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA44u;
        // 0x3eaa48: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaa44) {
            ctx->pc = 0x3EA9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea9d8;
        }
    }
    ctx->pc = 0x3EAA4Cu;
label_3eaa4c:
    // 0x3eaa4c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eaa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eaa50:
    // 0x3eaa50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eaa50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eaa54:
    // 0x3eaa54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eaa54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eaa58:
    // 0x3eaa58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eaa58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eaa5c:
    // 0x3eaa5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eaa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eaa60:
    // 0x3eaa60: 0x3e00008  jr          $ra
label_3eaa64:
    if (ctx->pc == 0x3EAA64u) {
        ctx->pc = 0x3EAA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA60u;
        // 0x3eaa64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA68u;
        goto label_fallthrough_0x3eaa60;
    }
    ctx->pc = 0x3EAA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA60u;
        // 0x3eaa64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eaa60:
    ctx->pc = 0x3EAA68u;
}
