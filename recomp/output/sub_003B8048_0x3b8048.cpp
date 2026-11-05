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

// Function: sub_003B8048
// Address: 0x3b8048 - 0x3b8348
void sub_003B8048_0x3b8048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8048_0x3b8048");
#endif

    switch (ctx->pc) {
        case 0x3b8088u: goto label_3b8088;
        case 0x3b8094u: goto label_3b8094;
        case 0x3b80b4u: goto label_3b80b4;
        case 0x3b80c4u: goto label_3b80c4;
        case 0x3b80e0u: goto label_3b80e0;
        case 0x3b80e8u: goto label_3b80e8;
        case 0x3b8108u: goto label_3b8108;
        case 0x3b811cu: goto label_3b811c;
        case 0x3b813cu: goto label_3b813c;
        case 0x3b8148u: goto label_3b8148;
        case 0x3b81a8u: goto label_3b81a8;
        case 0x3b81fcu: goto label_3b81fc;
        case 0x3b8218u: goto label_3b8218;
        case 0x3b8240u: goto label_3b8240;
        case 0x3b8254u: goto label_3b8254;
        case 0x3b82c8u: goto label_3b82c8;
        case 0x3b82e0u: goto label_3b82e0;
        case 0x3b82f8u: goto label_3b82f8;
        case 0x3b8310u: goto label_3b8310;
        default: break;
    }

    ctx->pc = 0x3b8048u;

    // 0x3b8048: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b8048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3b804c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x3b804cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x3b8050: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3b8050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3b8054: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b8054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8058: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x3b8058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x3b805c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b805cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8060: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3b8060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x3b8064: 0x3c160043  lui         $s6, 0x43
    ctx->pc = 0x3b8064u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)67 << 16));
    // 0x3b8068: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x3b8068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x3b806c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x3b806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x3b8070: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x3b8070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x3b8074: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3b8074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x3b8078: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3b8078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3b807c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b807cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3b8080: 0xc0edf7c  jal         func_3B7DF0
    ctx->pc = 0x3B8080u;
    SET_GPR_U32(ctx, 31, 0x3B8088u);
    ctx->pc = 0x3B8084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8080u;
    // 0x3b8084: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7DF0u, 0x3B8080u, 0x3B8088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8088u;
label_3b8088:
    // 0x3b8088: 0x8ec4aca8  lw          $a0, -0x5358($s6)
    ctx->pc = 0x3b8088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945960)));
    // 0x3b808c: 0xc0f267c  jal         func_3C99F0
    ctx->pc = 0x3B808Cu;
    SET_GPR_U32(ctx, 31, 0x3B8094u);
    ctx->pc = 0x3C99F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99F0u, 0x3B808Cu, 0x3B8094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8094u;
label_3b8094:
    // 0x3b8094: 0x8ec3aca8  lw          $v1, -0x5358($s6)
    ctx->pc = 0x3b8094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945960)));
    // 0x3b8098: 0x1462009e  bne         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x3B8098u;
    {
        const bool branch_taken_0x3b8098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8098u;
        // 0x3b809c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8098) {
            ctx->pc = 0x3B8314u;
            goto label_3b8314;
        }
    }
    ctx->pc = 0x3B80A0u;
    // 0x3b80a0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3b80a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3b80a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b80a8: 0xac62ac9c  sw          $v0, -0x5364($v1)
    ctx->pc = 0x3b80a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x42AC9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42AC9Cu, _value); } while (0);
    // 0x3b80ac: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3B80ACu;
    SET_GPR_U32(ctx, 31, 0x3B80B4u);
    ctx->pc = 0x3B80B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B80ACu;
    // 0x3b80b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3B80ACu, 0x3B80B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B80B4u;
label_3b80b4:
    // 0x3b80b4: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x3B80B4u;
    {
        const bool branch_taken_0x3b80b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B80B4u;
        // 0x3b80b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b80b4) {
            ctx->pc = 0x3B8248u;
            goto label_3b8248;
        }
    }
    ctx->pc = 0x3B80BCu;
    // 0x3b80bc: 0xc0f3272  jal         func_3CC9C8
    ctx->pc = 0x3B80BCu;
    SET_GPR_U32(ctx, 31, 0x3B80C4u);
    ctx->pc = 0x3B80C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B80BCu;
    // 0x3b80c0: 0x3c110043  lui         $s1, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC9C8u, 0x3B80BCu, 0x3B80C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B80C4u;
label_3b80c4:
    // 0x3b80c4: 0x8e22accc  lw          $v0, -0x5334($s1)
    ctx->pc = 0x3b80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945996)));
    // 0x3b80c8: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3B80C8u;
    {
        const bool branch_taken_0x3b80c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3B80CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B80C8u;
        // 0x3b80cc: 0x3c170066  lui         $s7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b80c8) {
            ctx->pc = 0x3B817Cu;
            goto label_3b817c;
        }
    }
    ctx->pc = 0x3B80D0u;
    // 0x3b80d0: 0x3c140043  lui         $s4, 0x43
    ctx->pc = 0x3b80d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)67 << 16));
    // 0x3b80d4: 0x3c150066  lui         $s5, 0x66
    ctx->pc = 0x3b80d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)102 << 16));
    // 0x3b80d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B80D8u;
    {
        const bool branch_taken_0x3b80d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B80D8u;
        // 0x3b80dc: 0x3c1e0066  lui         $fp, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b80d8) {
            ctx->pc = 0x3B8104u;
            goto label_3b8104;
        }
    }
    ctx->pc = 0x3B80E0u;
label_3b80e0:
    // 0x3b80e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b80e4: 0x0  nop
    ctx->pc = 0x3b80e4u;
    // NOP
label_3b80e8:
    // 0x3b80e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b80ec: 0x0  nop
    ctx->pc = 0x3b80ecu;
    // NOP
    // 0x3b80f0: 0x0  nop
    ctx->pc = 0x3b80f0u;
    // NOP
    // 0x3b80f4: 0x0  nop
    ctx->pc = 0x3b80f4u;
    // NOP
    // 0x3b80f8: 0x0  nop
    ctx->pc = 0x3b80f8u;
    // NOP
    // 0x3b80fc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B80FCu;
    {
        const bool branch_taken_0x3b80fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b80fc) {
            ctx->pc = 0x3B80E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b80e8;
        }
    }
    ctx->pc = 0x3B8104u;
label_3b8104:
    // 0x3b8104: 0x26f09700  addiu       $s0, $s7, -0x6900
    ctx->pc = 0x3b8104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940416));
label_3b8108:
    // 0x3b8108: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3b8108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3b810c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b810cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8110: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x3b8110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x3b8114: 0xc0f3404  jal         func_3CD010
    ctx->pc = 0x3B8114u;
    SET_GPR_U32(ctx, 31, 0x3B811Cu);
    ctx->pc = 0x3B8118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8114u;
    // 0x3b8118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD010u, 0x3B8114u, 0x3B811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B811Cu;
label_3b811c:
    // 0x3b811c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B811Cu;
    {
        const bool branch_taken_0x3b811c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3b811c) {
            ctx->pc = 0x3B8120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B811Cu;
            // 0x3b8120: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B816Cu;
            goto label_3b816c;
        }
    }
    ctx->pc = 0x3B8124u;
    // 0x3b8124: 0x8e82ac90  lw          $v0, -0x5370($s4)
    ctx->pc = 0x3b8124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945936)));
    // 0x3b8128: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8128u;
    {
        const bool branch_taken_0x3b8128 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3B812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8128u;
        // 0x3b812c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8128) {
            ctx->pc = 0x3B8140u;
            goto label_3b8140;
        }
    }
    ctx->pc = 0x3B8130u;
    // 0x3b8130: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b8130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b8134: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3B8134u;
    SET_GPR_U32(ctx, 31, 0x3B813Cu);
    ctx->pc = 0x3B8138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8134u;
    // 0x3b8138: 0x248406e0  addiu       $a0, $a0, 0x6E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3B8134u, 0x3B813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B813Cu;
label_3b813c:
    // 0x3b813c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3b813cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_3b8140:
    // 0x3b8140: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b8140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b8144: 0x0  nop
    ctx->pc = 0x3b8144u;
    // NOP
label_3b8148:
    // 0x3b8148: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b8148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b814c: 0x0  nop
    ctx->pc = 0x3b814cu;
    // NOP
    // 0x3b8150: 0x0  nop
    ctx->pc = 0x3b8150u;
    // NOP
    // 0x3b8154: 0x0  nop
    ctx->pc = 0x3b8154u;
    // NOP
    // 0x3b8158: 0x0  nop
    ctx->pc = 0x3b8158u;
    // NOP
    // 0x3b815c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B815Cu;
    {
        const bool branch_taken_0x3b815c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b815c) {
            ctx->pc = 0x3B8148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8148;
        }
    }
    ctx->pc = 0x3B8164u;
    // 0x3b8164: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x3B8164u;
    {
        const bool branch_taken_0x3b8164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8164u;
        // 0x3b8168: 0x26f09700  addiu       $s0, $s7, -0x6900 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8164) {
            ctx->pc = 0x3B8108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8108;
        }
    }
    ctx->pc = 0x3B816Cu;
label_3b816c:
    // 0x3b816c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3B816Cu;
    {
        const bool branch_taken_0x3b816c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B816Cu;
        // 0x3b8170: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b816c) {
            ctx->pc = 0x3B80E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b80e0;
        }
    }
    ctx->pc = 0x3B8174u;
    // 0x3b8174: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8174u;
    {
        const bool branch_taken_0x3b8174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8174u;
        // 0x3b8178: 0xae20accc  sw          $zero, -0x5334($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294945996), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8174) {
            ctx->pc = 0x3B8188u;
            goto label_3b8188;
        }
    }
    ctx->pc = 0x3B817Cu;
label_3b817c:
    // 0x3b817c: 0x3c140043  lui         $s4, 0x43
    ctx->pc = 0x3b817cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)67 << 16));
    // 0x3b8180: 0x3c150066  lui         $s5, 0x66
    ctx->pc = 0x3b8180u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)102 << 16));
    // 0x3b8184: 0x3c1e0066  lui         $fp, 0x66
    ctx->pc = 0x3b8184u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)102 << 16));
label_3b8188:
    // 0x3b8188: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x3b8188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b818c: 0x26a49580  addiu       $a0, $s5, -0x6A80
    ctx->pc = 0x3b818cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940032));
    // 0x3b8190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b8190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8194: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3b8194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3b8198: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B8198u;
    {
        const bool branch_taken_0x3b8198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8198u;
        // 0x3b819c: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8198) {
            ctx->pc = 0x3B81CCu;
            goto label_3b81cc;
        }
    }
    ctx->pc = 0x3B81A0u;
    // 0x3b81a0: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x3b81a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x3b81a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3b81a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3b81a8:
    // 0x3b81a8: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x3b81a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b81ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B81ACu;
    {
        const bool branch_taken_0x3b81ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81ACu;
        // 0x3b81b0: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81ac) {
            ctx->pc = 0x3B81CCu;
            goto label_3b81cc;
        }
    }
    ctx->pc = 0x3B81B4u;
    // 0x3b81b4: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x3b81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3b81b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b81b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b81bc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3b81bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b81c0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3b81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3b81c4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B81C4u;
    {
        const bool branch_taken_0x3b81c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b81c4) {
            ctx->pc = 0x3B81C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B81C4u;
            // 0x3b81c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B81A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b81a8;
        }
    }
    ctx->pc = 0x3B81CCu;
label_3b81cc:
    // 0x3b81cc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3b81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3b81d0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B81D0u;
    {
        const bool branch_taken_0x3b81d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81D0u;
        // 0x3b81d4: 0x8e82ac90  lw          $v0, -0x5370($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81d0) {
            ctx->pc = 0x3B81E4u;
            goto label_3b81e4;
        }
    }
    ctx->pc = 0x3B81D8u;
    // 0x3b81d8: 0x26a29580  addiu       $v0, $s5, -0x6A80
    ctx->pc = 0x3b81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940032));
    // 0x3b81dc: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x3b81dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b81e0: 0x8e82ac90  lw          $v0, -0x5370($s4)
    ctx->pc = 0x3b81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945936)));
label_3b81e4:
    // 0x3b81e4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B81E4u;
    {
        const bool branch_taken_0x3b81e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3B81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B81E4u;
        // 0x3b81e8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b81e4) {
            ctx->pc = 0x3B81FCu;
            goto label_3b81fc;
        }
    }
    ctx->pc = 0x3B81ECu;
    // 0x3b81ec: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3b81ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3b81f0: 0x24840700  addiu       $a0, $a0, 0x700
    ctx->pc = 0x3b81f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x3b81f4: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3B81F4u;
    SET_GPR_U32(ctx, 31, 0x3B81FCu);
    ctx->pc = 0x3B81F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B81F4u;
    // 0x3b81f8: 0x24a595a4  addiu       $a1, $a1, -0x6A5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940068));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3B81F4u, 0x3B81FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B81FCu;
label_3b81fc:
    // 0x3b81fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3b81fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8200: 0x26b09580  addiu       $s0, $s5, -0x6A80
    ctx->pc = 0x3b8200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940032));
    // 0x3b8204: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x3b8204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3b8208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b8208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b820c: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x3b820cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x3b8210: 0xc0f3246  jal         func_3CC918
    ctx->pc = 0x3B8210u;
    SET_GPR_U32(ctx, 31, 0x3B8218u);
    ctx->pc = 0x3B8214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8210u;
    // 0x3b8214: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC918u, 0x3B8210u, 0x3B8218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8218u;
label_3b8218:
    // 0x3b8218: 0x26e49700  addiu       $a0, $s7, -0x6900
    ctx->pc = 0x3b8218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940416));
    // 0x3b821c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b821cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b8220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b8220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b8224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8228: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b8228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b822c: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x3b822cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3b8230: 0x27c996c0  addiu       $t1, $fp, -0x6940
    ctx->pc = 0x3b8230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4294940352));
    // 0x3b8234: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b8234u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b8238: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x3B8238u;
    SET_GPR_U32(ctx, 31, 0x3B8240u);
    ctx->pc = 0x3B823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8238u;
    // 0x3b823c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x3B8238u, 0x3B8240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8240u;
label_3b8240:
    // 0x3b8240: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8240u;
    {
        const bool branch_taken_0x3b8240 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3B8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8240u;
        // 0x3b8244: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8240) {
            ctx->pc = 0x3B825Cu;
            goto label_3b825c;
        }
    }
    ctx->pc = 0x3B8248u;
label_3b8248:
    // 0x3b8248: 0x8ec4aca8  lw          $a0, -0x5358($s6)
    ctx->pc = 0x3b8248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945960)));
    // 0x3b824c: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3B824Cu;
    SET_GPR_U32(ctx, 31, 0x3B8254u);
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3B824Cu, 0x3B8254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8254u;
label_3b8254:
    // 0x3b8254: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3B8254u;
    {
        const bool branch_taken_0x3b8254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8254u;
        // 0x3b8258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8254) {
            ctx->pc = 0x3B8314u;
            goto label_3b8314;
        }
    }
    ctx->pc = 0x3B825Cu;
label_3b825c:
    // 0x3b825c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3b825cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3b8260: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x3b8260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b8264: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x3b8264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b8268: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x3b8268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3b826c: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x3b826cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3b8270: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x3b8270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3b8274: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x3b8274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3b8278: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x3b8278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3b827c: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x3b827cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3b8280: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x3b8280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b8284: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x3b8284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b8288: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x3b8288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b828c: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x3b828cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b8290: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x3b8290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b8294: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x3b8294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b8298: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x3b8298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b829c: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x3b829cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b82a0: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x3b82a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3b82a4: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x3b82a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3b82a8: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x3b82a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b82ac: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x3b82acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b82b0: 0x8e83ac90  lw          $v1, -0x5370($s4)
    ctx->pc = 0x3b82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945936)));
    // 0x3b82b4: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B82B4u;
    {
        const bool branch_taken_0x3b82b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82B4u;
        // 0x3b82b8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b82b4) {
            ctx->pc = 0x3B82F8u;
            goto label_3b82f8;
        }
    }
    ctx->pc = 0x3B82BCu;
    // 0x3b82bc: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x3b82bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3b82c0: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3B82C0u;
    SET_GPR_U32(ctx, 31, 0x3B82C8u);
    ctx->pc = 0x3B82C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B82C0u;
    // 0x3b82c4: 0x24840718  addiu       $a0, $a0, 0x718 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3B82C0u, 0x3B82C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B82C8u;
label_3b82c8:
    // 0x3b82c8: 0x8e82ac90  lw          $v0, -0x5370($s4)
    ctx->pc = 0x3b82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945936)));
    // 0x3b82cc: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B82CCu;
    {
        const bool branch_taken_0x3b82cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3B82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82CCu;
        // 0x3b82d0: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b82cc) {
            ctx->pc = 0x3B82F8u;
            goto label_3b82f8;
        }
    }
    ctx->pc = 0x3B82D4u;
    // 0x3b82d4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x3b82d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3b82d8: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3B82D8u;
    SET_GPR_U32(ctx, 31, 0x3B82E0u);
    ctx->pc = 0x3B82DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B82D8u;
    // 0x3b82dc: 0x24840728  addiu       $a0, $a0, 0x728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3B82D8u, 0x3B82E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B82E0u;
label_3b82e0:
    // 0x3b82e0: 0x8e82ac90  lw          $v0, -0x5370($s4)
    ctx->pc = 0x3b82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945936)));
    // 0x3b82e4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B82E4u;
    {
        const bool branch_taken_0x3b82e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3B82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82E4u;
        // 0x3b82e8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b82e4) {
            ctx->pc = 0x3B82F8u;
            goto label_3b82f8;
        }
    }
    ctx->pc = 0x3B82ECu;
    // 0x3b82ec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3b82ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b82f0: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3B82F0u;
    SET_GPR_U32(ctx, 31, 0x3B82F8u);
    ctx->pc = 0x3B82F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B82F0u;
    // 0x3b82f4: 0x24840738  addiu       $a0, $a0, 0x738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3B82F0u, 0x3B82F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B82F8u;
label_3b82f8:
    // 0x3b82f8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3b82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x3b82fc: 0x27c296c0  addiu       $v0, $fp, -0x6940
    ctx->pc = 0x3b82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294940352));
    // 0x3b8300: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b8300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b8304: 0x8ec4aca8  lw          $a0, -0x5358($s6)
    ctx->pc = 0x3b8304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945960)));
    // 0x3b8308: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3B8308u;
    SET_GPR_U32(ctx, 31, 0x3B8310u);
    ctx->pc = 0x3B830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8308u;
    // 0x3b830c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3B8308u, 0x3B8310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8310u;
label_3b8310:
    // 0x3b8310: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b8310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b8314:
    // 0x3b8314: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3b8314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b8318: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x3b8318u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b831c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x3b831cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b8320: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x3b8320u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b8324: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x3b8324u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b8328: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3b8328u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b832c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x3b832cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b8330: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3b8330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b8334: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3b8334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b8338: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b8338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b833c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B833Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B833Cu;
        // 0x3b8340: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B833Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8344u;
    // 0x3b8344: 0x0  nop
    ctx->pc = 0x3b8344u;
    // NOP
    ctx->pc = 0x3b8348u;
}
