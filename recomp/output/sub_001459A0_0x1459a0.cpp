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

// Function: sub_001459A0
// Address: 0x1459a0 - 0x145a50
void sub_001459A0_0x1459a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001459A0_0x1459a0");
#endif

    switch (ctx->pc) {
        case 0x1459a0u: goto label_1459a0;
        case 0x1459a4u: goto label_1459a4;
        case 0x1459a8u: goto label_1459a8;
        case 0x1459acu: goto label_1459ac;
        case 0x1459b0u: goto label_1459b0;
        case 0x1459b4u: goto label_1459b4;
        case 0x1459b8u: goto label_1459b8;
        case 0x1459bcu: goto label_1459bc;
        case 0x1459c0u: goto label_1459c0;
        case 0x1459c4u: goto label_1459c4;
        case 0x1459c8u: goto label_1459c8;
        case 0x1459ccu: goto label_1459cc;
        case 0x1459d0u: goto label_1459d0;
        case 0x1459d4u: goto label_1459d4;
        case 0x1459d8u: goto label_1459d8;
        case 0x1459dcu: goto label_1459dc;
        case 0x1459e0u: goto label_1459e0;
        case 0x1459e4u: goto label_1459e4;
        case 0x1459e8u: goto label_1459e8;
        case 0x1459ecu: goto label_1459ec;
        case 0x1459f0u: goto label_1459f0;
        case 0x1459f4u: goto label_1459f4;
        case 0x1459f8u: goto label_1459f8;
        case 0x1459fcu: goto label_1459fc;
        case 0x145a00u: goto label_145a00;
        case 0x145a04u: goto label_145a04;
        case 0x145a08u: goto label_145a08;
        case 0x145a0cu: goto label_145a0c;
        case 0x145a10u: goto label_145a10;
        case 0x145a14u: goto label_145a14;
        case 0x145a18u: goto label_145a18;
        case 0x145a1cu: goto label_145a1c;
        case 0x145a20u: goto label_145a20;
        case 0x145a24u: goto label_145a24;
        case 0x145a28u: goto label_145a28;
        case 0x145a2cu: goto label_145a2c;
        case 0x145a30u: goto label_145a30;
        case 0x145a34u: goto label_145a34;
        case 0x145a38u: goto label_145a38;
        case 0x145a3cu: goto label_145a3c;
        case 0x145a40u: goto label_145a40;
        case 0x145a44u: goto label_145a44;
        case 0x145a48u: goto label_145a48;
        case 0x145a4cu: goto label_145a4c;
        default: break;
    }

    ctx->pc = 0x1459a0u;

label_1459a0:
    // 0x1459a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1459a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1459a4:
    // 0x1459a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1459a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1459a8:
    // 0x1459a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1459a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1459ac:
    // 0x1459ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1459acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1459b0:
    // 0x1459b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1459b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1459b4:
    // 0x1459b4: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x1459b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1459b8:
    // 0x1459b8: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_1459bc:
    if (ctx->pc == 0x1459BCu) {
        ctx->pc = 0x1459BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459B8u;
        // 0x1459bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1459C0u;
        goto label_1459c0;
    }
    ctx->pc = 0x1459B8u;
    {
        const bool branch_taken_0x1459b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1459b8) {
            ctx->pc = 0x1459BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1459B8u;
            // 0x1459bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145A40u;
            goto label_145a40;
        }
    }
    ctx->pc = 0x1459C0u;
label_1459c0:
    // 0x1459c0: 0xc04db02  jal         func_136C08
label_1459c4:
    if (ctx->pc == 0x1459C4u) {
        ctx->pc = 0x1459C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459C0u;
        // 0x1459c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1459C8u;
        goto label_1459c8;
    }
    ctx->pc = 0x1459C0u;
    SET_GPR_U32(ctx, 31, 0x1459C8u);
    ctx->pc = 0x1459C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1459C0u;
    // 0x1459c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x1459C0u, 0x1459C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459C8u;
label_1459c8:
    // 0x1459c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1459cc:
    if (ctx->pc == 0x1459CCu) {
        ctx->pc = 0x1459CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459C8u;
        // 0x1459cc: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1459D0u;
        goto label_1459d0;
    }
    ctx->pc = 0x1459C8u;
    {
        const bool branch_taken_0x1459c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1459CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459C8u;
        // 0x1459cc: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1459c8) {
            ctx->pc = 0x1459D8u;
            goto label_1459d8;
        }
    }
    ctx->pc = 0x1459D0u;
label_1459d0:
    // 0x1459d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1459d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1459d4:
    // 0x1459d4: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x1459d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_1459d8:
    // 0x1459d8: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1459d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1459dc:
    // 0x1459dc: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x1459dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1459e0:
    // 0x1459e0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_1459e4:
    if (ctx->pc == 0x1459E4u) {
        ctx->pc = 0x1459E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459E0u;
        // 0x1459e4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1459E8u;
        goto label_1459e8;
    }
    ctx->pc = 0x1459E0u;
    {
        const bool branch_taken_0x1459e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1459e0) {
            ctx->pc = 0x1459E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1459E0u;
            // 0x1459e4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145A30u;
            goto label_145a30;
        }
    }
    ctx->pc = 0x1459E8u;
label_1459e8:
    // 0x1459e8: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1459e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1459ec:
    // 0x1459ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1459ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1459f0:
    // 0x1459f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1459f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1459f4:
    // 0x1459f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1459f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1459f8:
    // 0x1459f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1459f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1459fc:
    // 0x1459fc: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_145a00:
    if (ctx->pc == 0x145A00u) {
        ctx->pc = 0x145A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459FCu;
        // 0x145a00: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145A04u;
        goto label_145a04;
    }
    ctx->pc = 0x1459FCu;
    {
        const bool branch_taken_0x1459fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1459fc) {
            ctx->pc = 0x145A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1459FCu;
            // 0x145a00: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1459D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1459d0;
        }
    }
    ctx->pc = 0x145A04u;
label_145a04:
    // 0x145a04: 0xc0516da  jal         func_145B68
label_145a08:
    if (ctx->pc == 0x145A08u) {
        ctx->pc = 0x145A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A04u;
        // 0x145a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145A0Cu;
        goto label_145a0c;
    }
    ctx->pc = 0x145A04u;
    SET_GPR_U32(ctx, 31, 0x145A0Cu);
    ctx->pc = 0x145A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A04u;
    // 0x145a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145B68u, 0x145A04u, 0x145A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A0Cu;
label_145a0c:
    // 0x145a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_145a10:
    // 0x145a10: 0xc04d80c  jal         func_136030
label_145a14:
    if (ctx->pc == 0x145A14u) {
        ctx->pc = 0x145A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A10u;
        // 0x145a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145A18u;
        goto label_145a18;
    }
    ctx->pc = 0x145A10u;
    SET_GPR_U32(ctx, 31, 0x145A18u);
    ctx->pc = 0x145A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A10u;
    // 0x145a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x145A10u, 0x145A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A18u;
label_145a18:
    // 0x145a18: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x145a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_145a1c:
    // 0x145a1c: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x145a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_145a20:
    // 0x145a20: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x145a20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_145a24:
    // 0x145a24: 0x5623ffea  bnel        $s1, $v1, . + 4 + (-0x16 << 2)
label_145a28:
    if (ctx->pc == 0x145A28u) {
        ctx->pc = 0x145A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A24u;
        // 0x145a28: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145A2Cu;
        goto label_145a2c;
    }
    ctx->pc = 0x145A24u;
    {
        const bool branch_taken_0x145a24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x145a24) {
            ctx->pc = 0x145A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145A24u;
            // 0x145a28: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1459D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1459d0;
        }
    }
    ctx->pc = 0x145A2Cu;
label_145a2c:
    // 0x145a2c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x145a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_145a30:
    // 0x145a30: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x145a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_145a34:
    // 0x145a34: 0x40f809  jalr        $v0
label_145a38:
    if (ctx->pc == 0x145A38u) {
        ctx->pc = 0x145A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A34u;
        // 0x145a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145A3Cu;
        goto label_145a3c;
    }
    ctx->pc = 0x145A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145A3Cu);
        ctx->pc = 0x145A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A34u;
        // 0x145a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145A34u, 0x145A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145A3Cu;
label_145a3c:
    // 0x145a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_145a40:
    // 0x145a40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_145a44:
    // 0x145a44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_145a48:
    // 0x145a48: 0x3e00008  jr          $ra
label_145a4c:
    if (ctx->pc == 0x145A4Cu) {
        ctx->pc = 0x145A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A48u;
        // 0x145a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145A50u;
        goto label_fallthrough_0x145a48;
    }
    ctx->pc = 0x145A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A48u;
        // 0x145a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x145a48:
    ctx->pc = 0x145A50u;
}
