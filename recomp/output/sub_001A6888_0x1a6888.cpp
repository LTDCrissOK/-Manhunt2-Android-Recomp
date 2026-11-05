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

// Function: sub_001A6888
// Address: 0x1a6888 - 0x1a6940
void sub_001A6888_0x1a6888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6888_0x1a6888");
#endif

    switch (ctx->pc) {
        case 0x1a68a8u: goto label_1a68a8;
        case 0x1a68b0u: goto label_1a68b0;
        case 0x1a68b8u: goto label_1a68b8;
        case 0x1a68d4u: goto label_1a68d4;
        case 0x1a68f4u: goto label_1a68f4;
        case 0x1a6924u: goto label_1a6924;
        default: break;
    }

    ctx->pc = 0x1a6888u;

    // 0x1a6888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a688c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a688cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6894: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a6898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a689c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a689cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a68a0: 0xc06a1c4  jal         func_1A8710
    ctx->pc = 0x1A68A0u;
    SET_GPR_U32(ctx, 31, 0x1A68A8u);
    ctx->pc = 0x1A68A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68A0u;
    // 0x1a68a4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8710u, 0x1A68A0u, 0x1A68A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68A8u;
label_1a68a8:
    // 0x1a68a8: 0xc06a19a  jal         func_1A8668
    ctx->pc = 0x1A68A8u;
    SET_GPR_U32(ctx, 31, 0x1A68B0u);
    ctx->pc = 0x1A68ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68A8u;
    // 0x1a68ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8668u, 0x1A68A8u, 0x1A68B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68B0u;
label_1a68b0:
    // 0x1a68b0: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1A68B0u;
    SET_GPR_U32(ctx, 31, 0x1A68B8u);
    ctx->pc = 0x1A68B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68B0u;
    // 0x1a68b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1A68B0u, 0x1A68B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68B8u;
label_1a68b8:
    // 0x1a68b8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1a68b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1a68bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A68BCu;
    {
        const bool branch_taken_0x1a68bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a68bc) {
            ctx->pc = 0x1A68CCu;
            goto label_1a68cc;
        }
    }
    ctx->pc = 0x1A68C4u;
    // 0x1a68c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A68C4u;
    {
        const bool branch_taken_0x1a68c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68C4u;
        // 0x1a68c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68c4) {
            ctx->pc = 0x1A6910u;
            goto label_1a6910;
        }
    }
    ctx->pc = 0x1A68CCu;
label_1a68cc:
    // 0x1a68cc: 0xc069ffa  jal         func_1A7FE8
    ctx->pc = 0x1A68CCu;
    SET_GPR_U32(ctx, 31, 0x1A68D4u);
    ctx->pc = 0x1A68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68CCu;
    // 0x1a68d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7FE8u, 0x1A68CCu, 0x1A68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68D4u;
label_1a68d4:
    // 0x1a68d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a68d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a68d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a68dc: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A68DCu;
    {
        const bool branch_taken_0x1a68dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a68dc) {
            ctx->pc = 0x1A68ECu;
            goto label_1a68ec;
        }
    }
    ctx->pc = 0x1A68E4u;
    // 0x1a68e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A68E4u;
    {
        const bool branch_taken_0x1a68e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68E4u;
        // 0x1a68e8: 0x241004e0  addiu       $s0, $zero, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68e4) {
            ctx->pc = 0x1A6910u;
            goto label_1a6910;
        }
    }
    ctx->pc = 0x1A68ECu;
label_1a68ec:
    // 0x1a68ec: 0xc06a026  jal         func_1A8098
    ctx->pc = 0x1A68ECu;
    SET_GPR_U32(ctx, 31, 0x1A68F4u);
    ctx->pc = 0x1A68F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68ECu;
    // 0x1a68f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8098u, 0x1A68ECu, 0x1A68F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68F4u;
label_1a68f4:
    // 0x1a68f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a68f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a68f8: 0x1070000a  beq         $v1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A68F8u;
    {
        const bool branch_taken_0x1a68f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68F8u;
        // 0x1a68fc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68f8) {
            ctx->pc = 0x1A6924u;
            goto label_1a6924;
        }
    }
    ctx->pc = 0x1A6900u;
    // 0x1a6900: 0x241004e2  addiu       $s0, $zero, 0x4E2
    ctx->pc = 0x1a6900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x1a6904: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a6904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a6908: 0x240304e1  addiu       $v1, $zero, 0x4E1
    ctx->pc = 0x1a6908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1249));
    // 0x1a690c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1a690cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1a6910:
    // 0x1a6910: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6910u;
    {
        const bool branch_taken_0x1a6910 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6910u;
        // 0x1a6914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6910) {
            ctx->pc = 0x1A6924u;
            goto label_1a6924;
        }
    }
    ctx->pc = 0x1A6918u;
    // 0x1a6918: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a6918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a691c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A691Cu;
    SET_GPR_U32(ctx, 31, 0x1A6924u);
    ctx->pc = 0x1A6920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A691Cu;
    // 0x1a6920: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A691Cu, 0x1A6924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6924u;
label_1a6924:
    // 0x1a6924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a692c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a692cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6930: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a6930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6934: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6934u;
        // 0x1a6938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A693Cu;
    // 0x1a693c: 0x0  nop
    ctx->pc = 0x1a693cu;
    // NOP
    ctx->pc = 0x1a6940u;
}
