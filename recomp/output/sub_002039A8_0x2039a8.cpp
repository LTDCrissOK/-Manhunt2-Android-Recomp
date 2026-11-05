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

// Function: sub_002039A8
// Address: 0x2039a8 - 0x203a80
void sub_002039A8_0x2039a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002039A8_0x2039a8");
#endif

    switch (ctx->pc) {
        case 0x2039e8u: goto label_2039e8;
        case 0x203a00u: goto label_203a00;
        case 0x203a0cu: goto label_203a0c;
        case 0x203a20u: goto label_203a20;
        case 0x203a28u: goto label_203a28;
        case 0x203a48u: goto label_203a48;
        default: break;
    }

    ctx->pc = 0x2039a8u;

    // 0x2039a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2039a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2039ac: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x2039acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2039b0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2039b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2039b4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2039b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039b8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2039b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2039bc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2039bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2039c0: 0x26c40010  addiu       $a0, $s6, 0x10
    ctx->pc = 0x2039c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x2039c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2039c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2039c8: 0x26de1ba0  addiu       $fp, $s6, 0x1BA0
    ctx->pc = 0x2039c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 7072));
    // 0x2039cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2039ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2039d0: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x2039d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2039d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2039d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2039d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2039d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2039dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2039dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2039e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2039e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2039e4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2039e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2039e8:
    // 0x2039e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2039e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039ec: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x2039ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2039f0: 0x26120040  addiu       $s2, $s0, 0x40
    ctx->pc = 0x2039f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2039f4: 0x26130070  addiu       $s3, $s0, 0x70
    ctx->pc = 0x2039f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2039f8: 0x261400b0  addiu       $s4, $s0, 0xB0
    ctx->pc = 0x2039f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2039fc: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2039fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_203a00:
    // 0x203a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a04: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x203A04u;
    SET_GPR_U32(ctx, 31, 0x203A0Cu);
    ctx->pc = 0x203A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A04u;
    // 0x203a08: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x203A04u, 0x203A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A0Cu;
label_203a0c:
    // 0x203a0c: 0x0  nop
    ctx->pc = 0x203a0cu;
    // NOP
    // 0x203a10: 0x1637fffb  bne         $s1, $s7, . + 4 + (-0x5 << 2)
    ctx->pc = 0x203A10u;
    {
        const bool branch_taken_0x203a10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        ctx->pc = 0x203A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A10u;
        // 0x203a14: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a10) {
            ctx->pc = 0x203A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203a00;
        }
    }
    ctx->pc = 0x203A18u;
    // 0x203a18: 0xc07a804  jal         func_1EA010
    ctx->pc = 0x203A18u;
    SET_GPR_U32(ctx, 31, 0x203A20u);
    ctx->pc = 0x203A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A18u;
    // 0x203a1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA010u, 0x203A18u, 0x203A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A20u;
label_203a20:
    // 0x203a20: 0xc07a804  jal         func_1EA010
    ctx->pc = 0x203A20u;
    SET_GPR_U32(ctx, 31, 0x203A28u);
    ctx->pc = 0x203A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A20u;
    // 0x203a24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA010u, 0x203A20u, 0x203A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A28u;
label_203a28:
    // 0x203a28: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x203a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a2c: 0x1457ffee  bne         $v0, $s7, . + 4 + (-0x12 << 2)
    ctx->pc = 0x203A2Cu;
    {
        const bool branch_taken_0x203a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x203A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A2Cu;
        // 0x203a30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a2c) {
            ctx->pc = 0x2039E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2039e8;
        }
    }
    ctx->pc = 0x203A34u;
    // 0x203a34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x203a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203a38: 0xaec01b9c  sw          $zero, 0x1B9C($s6)
    ctx->pc = 0x203a38u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 7068), GPR_U32(ctx, 0));
    // 0x203a3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x203a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a40: 0xc08062c  jal         func_2018B0
    ctx->pc = 0x203A40u;
    SET_GPR_U32(ctx, 31, 0x203A48u);
    ctx->pc = 0x203A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A40u;
    // 0x203a44: 0xaec21b90  sw          $v0, 0x1B90($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 7056), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2018B0u, 0x203A40u, 0x203A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A48u;
label_203a48:
    // 0x203a48: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x203a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203a50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203a54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x203a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203a58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x203a58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x203a5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x203a5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203a60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x203a60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203a64: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x203a64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203a68: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x203a68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x203a6c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x203a6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203a70: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x203a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x203a74: 0x3e00008  jr          $ra
    ctx->pc = 0x203A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A74u;
        // 0x203a78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203A7Cu;
    // 0x203a7c: 0x0  nop
    ctx->pc = 0x203a7cu;
    // NOP
    ctx->pc = 0x203a80u;
}
