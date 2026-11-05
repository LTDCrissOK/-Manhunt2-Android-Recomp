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

// Function: sub_003A89B0
// Address: 0x3a89b0 - 0x3a8a90
void sub_003A89B0_0x3a89b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A89B0_0x3a89b0");
#endif

    switch (ctx->pc) {
        case 0x3a89b0u: goto label_3a89b0;
        case 0x3a89b4u: goto label_3a89b4;
        case 0x3a89b8u: goto label_3a89b8;
        case 0x3a89bcu: goto label_3a89bc;
        case 0x3a89c0u: goto label_3a89c0;
        case 0x3a89c4u: goto label_3a89c4;
        case 0x3a89c8u: goto label_3a89c8;
        case 0x3a89ccu: goto label_3a89cc;
        case 0x3a89d0u: goto label_3a89d0;
        case 0x3a89d4u: goto label_3a89d4;
        case 0x3a89d8u: goto label_3a89d8;
        case 0x3a89dcu: goto label_3a89dc;
        case 0x3a89e0u: goto label_3a89e0;
        case 0x3a89e4u: goto label_3a89e4;
        case 0x3a89e8u: goto label_3a89e8;
        case 0x3a89ecu: goto label_3a89ec;
        case 0x3a89f0u: goto label_3a89f0;
        case 0x3a89f4u: goto label_3a89f4;
        case 0x3a89f8u: goto label_3a89f8;
        case 0x3a89fcu: goto label_3a89fc;
        case 0x3a8a00u: goto label_3a8a00;
        case 0x3a8a04u: goto label_3a8a04;
        case 0x3a8a08u: goto label_3a8a08;
        case 0x3a8a0cu: goto label_3a8a0c;
        case 0x3a8a10u: goto label_3a8a10;
        case 0x3a8a14u: goto label_3a8a14;
        case 0x3a8a18u: goto label_3a8a18;
        case 0x3a8a1cu: goto label_3a8a1c;
        case 0x3a8a20u: goto label_3a8a20;
        case 0x3a8a24u: goto label_3a8a24;
        case 0x3a8a28u: goto label_3a8a28;
        case 0x3a8a2cu: goto label_3a8a2c;
        case 0x3a8a30u: goto label_3a8a30;
        case 0x3a8a34u: goto label_3a8a34;
        case 0x3a8a38u: goto label_3a8a38;
        case 0x3a8a3cu: goto label_3a8a3c;
        case 0x3a8a40u: goto label_3a8a40;
        case 0x3a8a44u: goto label_3a8a44;
        case 0x3a8a48u: goto label_3a8a48;
        case 0x3a8a4cu: goto label_3a8a4c;
        case 0x3a8a50u: goto label_3a8a50;
        case 0x3a8a54u: goto label_3a8a54;
        case 0x3a8a58u: goto label_3a8a58;
        case 0x3a8a5cu: goto label_3a8a5c;
        case 0x3a8a60u: goto label_3a8a60;
        case 0x3a8a64u: goto label_3a8a64;
        case 0x3a8a68u: goto label_3a8a68;
        case 0x3a8a6cu: goto label_3a8a6c;
        case 0x3a8a70u: goto label_3a8a70;
        case 0x3a8a74u: goto label_3a8a74;
        case 0x3a8a78u: goto label_3a8a78;
        case 0x3a8a7cu: goto label_3a8a7c;
        case 0x3a8a80u: goto label_3a8a80;
        case 0x3a8a84u: goto label_3a8a84;
        case 0x3a8a88u: goto label_3a8a88;
        case 0x3a8a8cu: goto label_3a8a8c;
        default: break;
    }

    ctx->pc = 0x3a89b0u;

label_3a89b0:
    // 0x3a89b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a89b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a89b4:
    // 0x3a89b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a89b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3a89b8:
    // 0x3a89b8: 0x3c120042  lui         $s2, 0x42
    ctx->pc = 0x3a89b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)66 << 16));
label_3a89bc:
    // 0x3a89bc: 0x8e42a0c8  lw          $v0, -0x5F38($s2)
    ctx->pc = 0x3a89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942920)));
label_3a89c0:
    // 0x3a89c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a89c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3a89c4:
    // 0x3a89c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a89c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a89c8:
    // 0x3a89c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a89c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a89cc:
    // 0x3a89cc: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_3a89d0:
    if (ctx->pc == 0x3A89D0u) {
        ctx->pc = 0x3A89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89CCu;
        // 0x3a89d0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89D4u;
        goto label_3a89d4;
    }
    ctx->pc = 0x3A89CCu;
    {
        const bool branch_taken_0x3a89cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89CCu;
        // 0x3a89d0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a89cc) {
            ctx->pc = 0x3A8A48u;
            goto label_3a8a48;
        }
    }
    ctx->pc = 0x3A89D4u;
label_3a89d4:
    // 0x3a89d4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a89d8:
    // 0x3a89d8: 0x2450a128  addiu       $s0, $v0, -0x5ED8
    ctx->pc = 0x3a89d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943016));
label_3a89dc:
    // 0x3a89dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a89e0:
    // 0x3a89e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a89e4:
    if (ctx->pc == 0x3A89E4u) {
        ctx->pc = 0x3A89E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89E0u;
        // 0x3a89e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89E8u;
        goto label_3a89e8;
    }
    ctx->pc = 0x3A89E0u;
    {
        const bool branch_taken_0x3a89e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A89E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89E0u;
        // 0x3a89e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a89e0) {
            ctx->pc = 0x3A89F0u;
            goto label_3a89f0;
        }
    }
    ctx->pc = 0x3A89E8u;
label_3a89e8:
    // 0x3a89e8: 0xc0eb0b6  jal         func_3AC2D8
label_3a89ec:
    if (ctx->pc == 0x3A89ECu) {
        ctx->pc = 0x3A89F0u;
        goto label_3a89f0;
    }
    ctx->pc = 0x3A89E8u;
    SET_GPR_U32(ctx, 31, 0x3A89F0u);
    ctx->pc = 0x3AC2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC2D8u, 0x3A89E8u, 0x3A89F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A89F0u;
label_3a89f0:
    // 0x3a89f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3a89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a89f4:
    // 0x3a89f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a89f8:
    if (ctx->pc == 0x3A89F8u) {
        ctx->pc = 0x3A89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89F4u;
        // 0x3a89f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89FCu;
        goto label_3a89fc;
    }
    ctx->pc = 0x3A89F4u;
    {
        const bool branch_taken_0x3a89f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89F4u;
        // 0x3a89f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a89f4) {
            ctx->pc = 0x3A8A0Cu;
            goto label_3a8a0c;
        }
    }
    ctx->pc = 0x3A89FCu;
label_3a89fc:
    // 0x3a89fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a8a00:
    // 0x3a8a00: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3a8a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3a8a04:
    // 0x3a8a04: 0x60f809  jalr        $v1
label_3a8a08:
    if (ctx->pc == 0x3A8A08u) {
        ctx->pc = 0x3A8A0Cu;
        goto label_3a8a0c;
    }
    ctx->pc = 0x3A8A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A8A0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8A04u, 0x3A8A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A8A0Cu;
label_3a8a0c:
    // 0x3a8a0c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3a8a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a8a10:
    // 0x3a8a10: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3a8a14:
    if (ctx->pc == 0x3A8A14u) {
        ctx->pc = 0x3A8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A10u;
        // 0x3a8a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A18u;
        goto label_3a8a18;
    }
    ctx->pc = 0x3A8A10u;
    {
        const bool branch_taken_0x3a8a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8a10) {
            ctx->pc = 0x3A8A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8A10u;
            // 0x3a8a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8A24u;
            goto label_3a8a24;
        }
    }
    ctx->pc = 0x3A8A18u;
label_3a8a18:
    // 0x3a8a18: 0xc0eb220  jal         func_3AC880
label_3a8a1c:
    if (ctx->pc == 0x3A8A1Cu) {
        ctx->pc = 0x3A8A20u;
        goto label_3a8a20;
    }
    ctx->pc = 0x3A8A18u;
    SET_GPR_U32(ctx, 31, 0x3A8A20u);
    ctx->pc = 0x3AC880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC880u, 0x3A8A18u, 0x3A8A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A20u;
label_3a8a20:
    // 0x3a8a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a8a24:
    // 0x3a8a24: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x3a8a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3a8a28:
    // 0x3a8a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a8a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a8a2c:
    // 0x3a8a2c: 0xc0efab3  jal         func_3BEACC
label_3a8a30:
    if (ctx->pc == 0x3A8A30u) {
        ctx->pc = 0x3A8A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A2Cu;
        // 0x3a8a30: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A34u;
        goto label_3a8a34;
    }
    ctx->pc = 0x3A8A2Cu;
    SET_GPR_U32(ctx, 31, 0x3A8A34u);
    ctx->pc = 0x3A8A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A2Cu;
    // 0x3a8a30: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A8A2Cu, 0x3A8A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A34u;
label_3a8a34:
    // 0x3a8a34: 0x8e43a0c8  lw          $v1, -0x5F38($s2)
    ctx->pc = 0x3a8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942920)));
label_3a8a38:
    // 0x3a8a38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a8a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a8a3c:
    // 0x3a8a3c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3a8a3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3a8a40:
    // 0x3a8a40: 0x5460ffe7  bnel        $v1, $zero, . + 4 + (-0x19 << 2)
label_3a8a44:
    if (ctx->pc == 0x3A8A44u) {
        ctx->pc = 0x3A8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A40u;
        // 0x3a8a44: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A48u;
        goto label_3a8a48;
    }
    ctx->pc = 0x3A8A40u;
    {
        const bool branch_taken_0x3a8a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8a40) {
            ctx->pc = 0x3A8A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8A40u;
            // 0x3a8a44: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A89E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a89e0;
        }
    }
    ctx->pc = 0x3A8A48u;
label_3a8a48:
    // 0x3a8a48: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a8a4c:
    // 0x3a8a4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a8a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a8a50:
    // 0x3a8a50: 0x2451a0dc  addiu       $s1, $v0, -0x5F24
    ctx->pc = 0x3a8a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942940));
label_3a8a54:
    // 0x3a8a54: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x3a8a54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3a8a58:
    // 0x3a8a58: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_3a8a5c:
    if (ctx->pc == 0x3A8A5Cu) {
        ctx->pc = 0x3A8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A58u;
        // 0x3a8a5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A60u;
        goto label_3a8a60;
    }
    ctx->pc = 0x3A8A58u;
    {
        const bool branch_taken_0x3a8a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A58u;
        // 0x3a8a5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8a58) {
            ctx->pc = 0x3A8A7Cu;
            goto label_3a8a7c;
        }
    }
    ctx->pc = 0x3A8A60u;
label_3a8a60:
    // 0x3a8a60: 0x3c100042  lui         $s0, 0x42
    ctx->pc = 0x3a8a60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
label_3a8a64:
    // 0x3a8a64: 0x2610a0d4  addiu       $s0, $s0, -0x5F2C
    ctx->pc = 0x3a8a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942932));
label_3a8a68:
    // 0x3a8a68: 0xc0f3e3a  jal         func_3CF8E8
label_3a8a6c:
    if (ctx->pc == 0x3A8A6Cu) {
        ctx->pc = 0x3A8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A68u;
        // 0x3a8a6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A70u;
        goto label_3a8a70;
    }
    ctx->pc = 0x3A8A68u;
    SET_GPR_U32(ctx, 31, 0x3A8A70u);
    ctx->pc = 0x3A8A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A68u;
    // 0x3a8a6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF8E8u, 0x3A8A68u, 0x3A8A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A70u;
label_3a8a70:
    // 0x3a8a70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3a8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3a8a74:
    // 0x3a8a74: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3a8a74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_3a8a78:
    // 0x3a8a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a8a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a8a7c:
    // 0x3a8a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a8a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a8a80:
    // 0x3a8a80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a8a80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a8a84:
    // 0x3a8a84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a8a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3a8a88:
    // 0x3a8a88: 0x3e00008  jr          $ra
label_3a8a8c:
    if (ctx->pc == 0x3A8A8Cu) {
        ctx->pc = 0x3A8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A88u;
        // 0x3a8a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A90u;
        goto label_fallthrough_0x3a8a88;
    }
    ctx->pc = 0x3A8A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A88u;
        // 0x3a8a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a8a88:
    ctx->pc = 0x3A8A90u;
}
