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

// Function: sub_001AEA70
// Address: 0x1aea70 - 0x1aeb50
void sub_001AEA70_0x1aea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEA70_0x1aea70");
#endif

    switch (ctx->pc) {
        case 0x1aea90u: goto label_1aea90;
        case 0x1aeaa0u: goto label_1aeaa0;
        case 0x1aeac4u: goto label_1aeac4;
        case 0x1aeae0u: goto label_1aeae0;
        case 0x1aeb20u: goto label_1aeb20;
        case 0x1aeb38u: goto label_1aeb38;
        default: break;
    }

    ctx->pc = 0x1aea70u;

    // 0x1aea70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aea74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aea74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aea78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aea78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aea7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aea80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aea84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aea88: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AEA88u;
    SET_GPR_U32(ctx, 31, 0x1AEA90u);
    ctx->pc = 0x1AEA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA88u;
    // 0x1aea8c: 0x241101ba  addiu       $s1, $zero, 0x1BA (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AEA88u, 0x1AEA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA90u;
label_1aea90:
    // 0x1aea90: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1aea90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1aea94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aea94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea98: 0xc08db00  jal         func_236C00
    ctx->pc = 0x1AEA98u;
    SET_GPR_U32(ctx, 31, 0x1AEAA0u);
    ctx->pc = 0x1AEA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA98u;
    // 0x1aea9c: 0x8c64bd50  lw          $a0, -0x42B0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x1AEA98u, 0x1AEAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEAA0u;
label_1aeaa0:
    // 0x1aeaa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aeaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aeaa4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1aeaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aeaa8: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1aeaa8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1aeaac: 0x12040003  beq         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEAACu;
    {
        const bool branch_taken_0x1aeaac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x1aeaac) {
            ctx->pc = 0x1AEABCu;
            goto label_1aeabc;
        }
    }
    ctx->pc = 0x1AEAB4u;
    // 0x1aeab4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AEAB4u;
    {
        const bool branch_taken_0x1aeab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAB4u;
        // 0x1aeab8: 0x261100d4  addiu       $s1, $s0, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeab4) {
            ctx->pc = 0x1AEAF4u;
            goto label_1aeaf4;
        }
    }
    ctx->pc = 0x1AEABCu;
label_1aeabc:
    // 0x1aeabc: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AEABCu;
    SET_GPR_U32(ctx, 31, 0x1AEAC4u);
    ctx->pc = 0x1AEAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEABCu;
    // 0x1aeac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AEABCu, 0x1AEAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEAC4u;
label_1aeac4:
    // 0x1aeac4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aeac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeac8: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x1aeac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1aeacc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEACCu;
    {
        const bool branch_taken_0x1aeacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEACCu;
        // 0x1aead0: 0x28630000  slti        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeacc) {
            ctx->pc = 0x1AEAECu;
            goto label_1aeaec;
        }
    }
    ctx->pc = 0x1AEAD4u;
    // 0x1aead4: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1aead4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1aead8: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AEAD8u;
    SET_GPR_U32(ctx, 31, 0x1AEAE0u);
    ctx->pc = 0x1AEADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAD8u;
    // 0x1aeadc: 0x241100db  addiu       $s1, $zero, 0xDB (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AEAD8u, 0x1AEAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEAE0u;
label_1aeae0:
    // 0x1aeae0: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x1aeae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1aeae4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEAE4u;
    {
        const bool branch_taken_0x1aeae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAE4u;
        // 0x1aeae8: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeae4) {
            ctx->pc = 0x1AEAF4u;
            goto label_1aeaf4;
        }
    }
    ctx->pc = 0x1AEAECu;
label_1aeaec:
    // 0x1aeaec: 0x240200da  addiu       $v0, $zero, 0xDA
    ctx->pc = 0x1aeaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x1aeaf0: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x1aeaf0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_1aeaf4:
    // 0x1aeaf4: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1aeaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1aeaf8: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEAF8u;
    {
        const bool branch_taken_0x1aeaf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAF8u;
        // 0x1aeafc: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeaf8) {
            ctx->pc = 0x1AEB14u;
            goto label_1aeb14;
        }
    }
    ctx->pc = 0x1AEB00u;
    // 0x1aeb00: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1aeb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1aeb04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aeb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aeb08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1aeb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aeb0c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEB0Cu;
    {
        const bool branch_taken_0x1aeb0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB0Cu;
        // 0x1aeb10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb0c) {
            ctx->pc = 0x1AEB28u;
            goto label_1aeb28;
        }
    }
    ctx->pc = 0x1AEB14u;
label_1aeb14:
    // 0x1aeb14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aeb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb18: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AEB18u;
    SET_GPR_U32(ctx, 31, 0x1AEB20u);
    ctx->pc = 0x1AEB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB18u;
    // 0x1aeb1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AEB18u, 0x1AEB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB20u;
label_1aeb20:
    // 0x1aeb20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEB20u;
    {
        const bool branch_taken_0x1aeb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB20u;
        // 0x1aeb24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb20) {
            ctx->pc = 0x1AEB3Cu;
            goto label_1aeb3c;
        }
    }
    ctx->pc = 0x1AEB28u;
label_1aeb28:
    // 0x1aeb28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1aeb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb2c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1aeb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aeb30: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AEB30u;
    SET_GPR_U32(ctx, 31, 0x1AEB38u);
    ctx->pc = 0x1AEB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB30u;
    // 0x1aeb34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AEB30u, 0x1AEB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB38u;
label_1aeb38:
    // 0x1aeb38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aeb38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aeb3c:
    // 0x1aeb3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aeb3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aeb40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aeb40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeb44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aeb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aeb48: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB48u;
        // 0x1aeb4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEB50u;
}
