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

// Function: sub_001519F0
// Address: 0x1519f0 - 0x151ab8
void sub_001519F0_0x1519f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001519F0_0x1519f0");
#endif

    switch (ctx->pc) {
        case 0x151a14u: goto label_151a14;
        case 0x151a20u: goto label_151a20;
        case 0x151a30u: goto label_151a30;
        case 0x151a40u: goto label_151a40;
        case 0x151a4cu: goto label_151a4c;
        case 0x151a58u: goto label_151a58;
        case 0x151a84u: goto label_151a84;
        case 0x151a94u: goto label_151a94;
        case 0x151aa0u: goto label_151aa0;
        default: break;
    }

    ctx->pc = 0x1519f0u;

    // 0x1519f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1519f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1519f4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1519f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1519f8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1519f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1519fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1519fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a00: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x151a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x151a04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x151a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a08: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x151a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x151a0c: 0xc0f700e  jal         func_3DC038
    ctx->pc = 0x151A0Cu;
    SET_GPR_U32(ctx, 31, 0x151A14u);
    ctx->pc = 0x151A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A0Cu;
    // 0x151a10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC038u, 0x151A0Cu, 0x151A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A14u;
label_151a14:
    // 0x151a14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x151a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a18: 0xc0f7028  jal         func_3DC0A0
    ctx->pc = 0x151A18u;
    SET_GPR_U32(ctx, 31, 0x151A20u);
    ctx->pc = 0x151A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A18u;
    // 0x151a1c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC0A0u, 0x151A18u, 0x151A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A20u;
label_151a20:
    // 0x151a20: 0x8e320468  lw          $s2, 0x468($s1)
    ctx->pc = 0x151a20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1128)));
    // 0x151a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a28: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x151A28u;
    SET_GPR_U32(ctx, 31, 0x151A30u);
    ctx->pc = 0x151A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A28u;
    // 0x151a2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x151A28u, 0x151A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A30u;
label_151a30:
    // 0x151a30: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x151A30u;
    {
        const bool branch_taken_0x151a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A30u;
        // 0x151a34: 0x26300918  addiu       $s0, $s1, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151a30) {
            ctx->pc = 0x151A8Cu;
            goto label_151a8c;
        }
    }
    ctx->pc = 0x151A38u;
    // 0x151a38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x151A38u;
    {
        const bool branch_taken_0x151a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151a38) {
            ctx->pc = 0x151A7Cu;
            goto label_151a7c;
        }
    }
    ctx->pc = 0x151A40u;
label_151a40:
    // 0x151a40: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x151a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x151a44: 0xc0f7044  jal         func_3DC110
    ctx->pc = 0x151A44u;
    SET_GPR_U32(ctx, 31, 0x151A4Cu);
    ctx->pc = 0x151A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A44u;
    // 0x151a48: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC110u, 0x151A44u, 0x151A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A4Cu;
label_151a4c:
    // 0x151a4c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x151a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151a50: 0xc058258  jal         func_160960
    ctx->pc = 0x151A50u;
    SET_GPR_U32(ctx, 31, 0x151A58u);
    ctx->pc = 0x151A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A50u;
    // 0x151a54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160960u, 0x151A50u, 0x151A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A58u;
label_151a58:
    // 0x151a58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x151A58u;
    {
        const bool branch_taken_0x151a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A58u;
        // 0x151a5c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151a58) {
            ctx->pc = 0x151A7Cu;
            goto label_151a7c;
        }
    }
    ctx->pc = 0x151A60u;
    // 0x151a60: 0x92220938  lbu         $v0, 0x938($s1)
    ctx->pc = 0x151a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2360)));
    // 0x151a64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151a68: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x151a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x151a6c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x151a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x151a70: 0x92230938  lbu         $v1, 0x938($s1)
    ctx->pc = 0x151a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2360)));
    // 0x151a74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151a78: 0xa2230938  sb          $v1, 0x938($s1)
    ctx->pc = 0x151a78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2360), (uint8_t)GPR_U32(ctx, 3));
label_151a7c:
    // 0x151a7c: 0xc0f6770  jal         func_3D9DC0
    ctx->pc = 0x151A7Cu;
    SET_GPR_U32(ctx, 31, 0x151A84u);
    ctx->pc = 0x151A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A7Cu;
    // 0x151a80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DC0u, 0x151A7Cu, 0x151A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A84u;
label_151a84:
    // 0x151a84: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x151A84u;
    {
        const bool branch_taken_0x151a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A84u;
        // 0x151a88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151a84) {
            ctx->pc = 0x151A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151a40;
        }
    }
    ctx->pc = 0x151A8Cu;
label_151a8c:
    // 0x151a8c: 0xc0f706e  jal         func_3DC1B8
    ctx->pc = 0x151A8Cu;
    SET_GPR_U32(ctx, 31, 0x151A94u);
    ctx->pc = 0x151A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A8Cu;
    // 0x151a90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC1B8u, 0x151A8Cu, 0x151A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A94u;
label_151a94:
    // 0x151a94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x151a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a98: 0xc0f6ffe  jal         func_3DBFF8
    ctx->pc = 0x151A98u;
    SET_GPR_U32(ctx, 31, 0x151AA0u);
    ctx->pc = 0x151A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A98u;
    // 0x151a9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBFF8u, 0x151A98u, 0x151AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151AA0u;
label_151aa0:
    // 0x151aa0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x151aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151aa4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x151aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x151aa8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x151aa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151aac: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x151aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x151ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x151AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AB0u;
        // 0x151ab4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151AB8u;
}
