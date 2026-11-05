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

// Function: sub_001AE2F0
// Address: 0x1ae2f0 - 0x1ae3d8
void sub_001AE2F0_0x1ae2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE2F0_0x1ae2f0");
#endif

    switch (ctx->pc) {
        case 0x1ae30cu: goto label_1ae30c;
        case 0x1ae314u: goto label_1ae314;
        case 0x1ae328u: goto label_1ae328;
        case 0x1ae350u: goto label_1ae350;
        case 0x1ae36cu: goto label_1ae36c;
        case 0x1ae3a0u: goto label_1ae3a0;
        case 0x1ae3b8u: goto label_1ae3b8;
        default: break;
    }

    ctx->pc = 0x1ae2f0u;

    // 0x1ae2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae2f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ae2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ae2f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae2fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae300: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ae300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ae304: 0xc06c4f4  jal         func_1B13D0
    ctx->pc = 0x1AE304u;
    SET_GPR_U32(ctx, 31, 0x1AE30Cu);
    ctx->pc = 0x1AE308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE304u;
    // 0x1ae308: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B13D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B13D0u, 0x1AE304u, 0x1AE30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE30Cu;
label_1ae30c:
    // 0x1ae30c: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1AE30Cu;
    SET_GPR_U32(ctx, 31, 0x1AE314u);
    ctx->pc = 0x1AE310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE30Cu;
    // 0x1ae310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1AE30Cu, 0x1AE314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE314u;
label_1ae314:
    // 0x1ae314: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1ae314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1ae318: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AE318u;
    {
        const bool branch_taken_0x1ae318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae318) {
            ctx->pc = 0x1AE348u;
            goto label_1ae348;
        }
    }
    ctx->pc = 0x1AE320u;
    // 0x1ae320: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AE320u;
    SET_GPR_U32(ctx, 31, 0x1AE328u);
    ctx->pc = 0x1AE324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE320u;
    // 0x1ae324: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AE320u, 0x1AE328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE328u;
label_1ae328:
    // 0x1ae328: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE328u;
    {
        const bool branch_taken_0x1ae328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE328u;
        // 0x1ae32c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae328) {
            ctx->pc = 0x1AE33Cu;
            goto label_1ae33c;
        }
    }
    ctx->pc = 0x1AE330u;
    // 0x1ae330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae334: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1AE334u;
    {
        const bool branch_taken_0x1ae334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE334u;
        // 0x1ae338: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae334) {
            ctx->pc = 0x1AE3B0u;
            goto label_1ae3b0;
        }
    }
    ctx->pc = 0x1AE33Cu;
label_1ae33c:
    // 0x1ae33c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae340: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1AE340u;
    {
        const bool branch_taken_0x1ae340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE340u;
        // 0x1ae344: 0x24060036  addiu       $a2, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae340) {
            ctx->pc = 0x1AE3B0u;
            goto label_1ae3b0;
        }
    }
    ctx->pc = 0x1AE348u;
label_1ae348:
    // 0x1ae348: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AE348u;
    SET_GPR_U32(ctx, 31, 0x1AE350u);
    ctx->pc = 0x1AE34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE348u;
    // 0x1ae34c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AE348u, 0x1AE350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE350u;
label_1ae350:
    // 0x1ae350: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae354: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae358: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AE358u;
    {
        const bool branch_taken_0x1ae358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE358u;
        // 0x1ae35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae358) {
            ctx->pc = 0x1AE3C0u;
            goto label_1ae3c0;
        }
    }
    ctx->pc = 0x1AE360u;
    // 0x1ae360: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1ae360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1ae364: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AE364u;
    SET_GPR_U32(ctx, 31, 0x1AE36Cu);
    ctx->pc = 0x1AE368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE364u;
    // 0x1ae368: 0x26110022  addiu       $s1, $s0, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AE364u, 0x1AE36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE36Cu;
label_1ae36c:
    // 0x1ae36c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE36Cu;
    {
        const bool branch_taken_0x1ae36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE36Cu;
        // 0x1ae370: 0x26030028  addiu       $v1, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae36c) {
            ctx->pc = 0x1AE380u;
            goto label_1ae380;
        }
    }
    ctx->pc = 0x1AE374u;
    // 0x1ae374: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1ae374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ae378: 0x2411002f  addiu       $s1, $zero, 0x2F
    ctx->pc = 0x1ae378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1ae37c: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x1ae37cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1ae380:
    // 0x1ae380: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1ae380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1ae384: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ae388: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae38c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ae38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae390: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE390u;
    {
        const bool branch_taken_0x1ae390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE390u;
        // 0x1ae394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae390) {
            ctx->pc = 0x1AE3A8u;
            goto label_1ae3a8;
        }
    }
    ctx->pc = 0x1AE398u;
    // 0x1ae398: 0xc06b88a  jal         func_1AE228
    ctx->pc = 0x1AE398u;
    SET_GPR_U32(ctx, 31, 0x1AE3A0u);
    ctx->pc = 0x1AE39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE398u;
    // 0x1ae39c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE228u, 0x1AE398u, 0x1AE3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3A0u;
label_1ae3a0:
    // 0x1ae3a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE3A0u;
    {
        const bool branch_taken_0x1ae3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3A0u;
        // 0x1ae3a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3a0) {
            ctx->pc = 0x1AE3C4u;
            goto label_1ae3c4;
        }
    }
    ctx->pc = 0x1AE3A8u;
label_1ae3a8:
    // 0x1ae3a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ae3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae3b0:
    // 0x1ae3b0: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AE3B0u;
    SET_GPR_U32(ctx, 31, 0x1AE3B8u);
    ctx->pc = 0x1AE3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE3B0u;
    // 0x1ae3b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AE3B0u, 0x1AE3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3B8u;
label_1ae3b8:
    // 0x1ae3b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE3B8u;
    {
        const bool branch_taken_0x1ae3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3B8u;
        // 0x1ae3bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3b8) {
            ctx->pc = 0x1AE3C4u;
            goto label_1ae3c4;
        }
    }
    ctx->pc = 0x1AE3C0u;
label_1ae3c0:
    // 0x1ae3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae3c4:
    // 0x1ae3c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae3c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae3c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ae3c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae3cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ae3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ae3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3D0u;
        // 0x1ae3d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE3D8u;
}
