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

// Function: sub_001AE9B0
// Address: 0x1ae9b0 - 0x1aea70
void sub_001AE9B0_0x1ae9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE9B0_0x1ae9b0");
#endif

    switch (ctx->pc) {
        case 0x1ae9c8u: goto label_1ae9c8;
        case 0x1ae9e8u: goto label_1ae9e8;
        case 0x1aea44u: goto label_1aea44;
        case 0x1aea5cu: goto label_1aea5c;
        default: break;
    }

    ctx->pc = 0x1ae9b0u;

    // 0x1ae9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae9b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae9b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae9bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ae9c0: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AE9C0u;
    SET_GPR_U32(ctx, 31, 0x1AE9C8u);
    ctx->pc = 0x1AE9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9C0u;
    // 0x1ae9c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AE9C0u, 0x1AE9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9C8u;
label_1ae9c8:
    // 0x1ae9c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ae9c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae9d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE9D0u;
    {
        const bool branch_taken_0x1ae9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9D0u;
        // 0x1ae9d4: 0x241001ba  addiu       $s0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9d0) {
            ctx->pc = 0x1AE9E0u;
            goto label_1ae9e0;
        }
    }
    ctx->pc = 0x1AE9D8u;
    // 0x1ae9d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AE9D8u;
    {
        const bool branch_taken_0x1ae9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9D8u;
        // 0x1ae9dc: 0x247000cc  addiu       $s0, $v1, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9d8) {
            ctx->pc = 0x1AEA18u;
            goto label_1aea18;
        }
    }
    ctx->pc = 0x1AE9E0u;
label_1ae9e0:
    // 0x1ae9e0: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AE9E0u;
    SET_GPR_U32(ctx, 31, 0x1AE9E8u);
    ctx->pc = 0x1AE9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9E0u;
    // 0x1ae9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AE9E0u, 0x1AE9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9E8u;
label_1ae9e8:
    // 0x1ae9e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ae9e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9ec: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ae9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ae9f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE9F0u;
    {
        const bool branch_taken_0x1ae9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9F0u;
        // 0x1ae9f4: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9f0) {
            ctx->pc = 0x1AEA00u;
            goto label_1aea00;
        }
    }
    ctx->pc = 0x1AE9F8u;
    // 0x1ae9f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE9F8u;
    {
        const bool branch_taken_0x1ae9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9F8u;
        // 0x1ae9fc: 0x241000d1  addiu       $s0, $zero, 0xD1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9f8) {
            ctx->pc = 0x1AEA18u;
            goto label_1aea18;
        }
    }
    ctx->pc = 0x1AEA00u;
label_1aea00:
    // 0x1aea00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEA00u;
    {
        const bool branch_taken_0x1aea00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA00u;
        // 0x1aea04: 0x28630000  slti        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea00) {
            ctx->pc = 0x1AEA10u;
            goto label_1aea10;
        }
    }
    ctx->pc = 0x1AEA08u;
    // 0x1aea08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEA08u;
    {
        const bool branch_taken_0x1aea08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA08u;
        // 0x1aea0c: 0x241000d3  addiu       $s0, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea08) {
            ctx->pc = 0x1AEA18u;
            goto label_1aea18;
        }
    }
    ctx->pc = 0x1AEA10u;
label_1aea10:
    // 0x1aea10: 0x240200d2  addiu       $v0, $zero, 0xD2
    ctx->pc = 0x1aea10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x1aea14: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x1aea14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1aea18:
    // 0x1aea18: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1aea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1aea1c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEA1Cu;
    {
        const bool branch_taken_0x1aea1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA1Cu;
        // 0x1aea20: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea1c) {
            ctx->pc = 0x1AEA38u;
            goto label_1aea38;
        }
    }
    ctx->pc = 0x1AEA24u;
    // 0x1aea24: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1aea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1aea28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aea2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1aea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aea30: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEA30u;
    {
        const bool branch_taken_0x1aea30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA30u;
        // 0x1aea34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea30) {
            ctx->pc = 0x1AEA4Cu;
            goto label_1aea4c;
        }
    }
    ctx->pc = 0x1AEA38u;
label_1aea38:
    // 0x1aea38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea3c: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AEA3Cu;
    SET_GPR_U32(ctx, 31, 0x1AEA44u);
    ctx->pc = 0x1AEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA3Cu;
    // 0x1aea40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AEA3Cu, 0x1AEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA44u;
label_1aea44:
    // 0x1aea44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEA44u;
    {
        const bool branch_taken_0x1aea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA44u;
        // 0x1aea48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aea44) {
            ctx->pc = 0x1AEA60u;
            goto label_1aea60;
        }
    }
    ctx->pc = 0x1AEA4Cu;
label_1aea4c:
    // 0x1aea4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1aea4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea50: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1aea50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aea54: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AEA54u;
    SET_GPR_U32(ctx, 31, 0x1AEA5Cu);
    ctx->pc = 0x1AEA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA54u;
    // 0x1aea58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AEA54u, 0x1AEA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA5Cu;
label_1aea5c:
    // 0x1aea5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aea5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aea60:
    // 0x1aea60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aea60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aea64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aea64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aea68: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA68u;
        // 0x1aea6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEA70u;
}
