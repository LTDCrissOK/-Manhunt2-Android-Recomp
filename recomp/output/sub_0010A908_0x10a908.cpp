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

// Function: sub_0010A908
// Address: 0x10a908 - 0x10aa08
void sub_0010A908_0x10a908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A908_0x10a908");
#endif

    switch (ctx->pc) {
        case 0x10a938u: goto label_10a938;
        case 0x10a964u: goto label_10a964;
        case 0x10a99cu: goto label_10a99c;
        case 0x10a9b0u: goto label_10a9b0;
        case 0x10a9c0u: goto label_10a9c0;
        default: break;
    }

    ctx->pc = 0x10a908u;

    // 0x10a908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a910: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10a910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a918: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10a918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10a91c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10a91cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a924: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x10a924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10a928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10a92c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10a92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10a930: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A930u;
    SET_GPR_U32(ctx, 31, 0x10A938u);
    ctx->pc = 0x10A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A930u;
    // 0x10a934: 0x2611000c  addiu       $s1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A930u, 0x10A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A938u;
label_10a938:
    // 0x10a938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a93c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10a940: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a944: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x10a944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10a948: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x10a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x10a94c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x10A94Cu;
    {
        const bool branch_taken_0x10a94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A94Cu;
        // 0x10a950: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a94c) {
            ctx->pc = 0x10A9E8u;
            goto label_10a9e8;
        }
    }
    ctx->pc = 0x10A954u;
    // 0x10a954: 0x8cb30010  lw          $s3, 0x10($a1)
    ctx->pc = 0x10a954u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10a958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a95c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A95Cu;
    SET_GPR_U32(ctx, 31, 0x10A964u);
    ctx->pc = 0x10A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A95Cu;
    // 0x10a960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A95Cu, 0x10A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A964u;
label_10a964:
    // 0x10a964: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a968: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10a96c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a970: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x10a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10a974: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x10a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x10a978: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x10A978u;
    {
        const bool branch_taken_0x10a978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A978u;
        // 0x10a97c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a978) {
            ctx->pc = 0x10A9E8u;
            goto label_10a9e8;
        }
    }
    ctx->pc = 0x10A980u;
    // 0x10a980: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x10a980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x10a984: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10a984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10a988: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x10a988u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x10a98c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x10a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x10a990: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10a990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a994: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x10A994u;
    SET_GPR_U32(ctx, 31, 0x10A99Cu);
    ctx->pc = 0x10A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A994u;
    // 0x10a998: 0x24e78738  addiu       $a3, $a3, -0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x10A994u, 0x10A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A99Cu;
label_10a99c:
    // 0x10a99c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9a0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x10A9A0u;
    {
        const bool branch_taken_0x10a9a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9A0u;
        // 0x10a9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9a0) {
            ctx->pc = 0x10A9CCu;
            goto label_10a9cc;
        }
    }
    ctx->pc = 0x10A9A8u;
    // 0x10a9a8: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x10A9A8u;
    SET_GPR_U32(ctx, 31, 0x10A9B0u);
    ctx->pc = 0x10A9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9A8u;
    // 0x10a9ac: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x10A9A8u, 0x10A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9B0u;
label_10a9b0:
    // 0x10a9b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10a9b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10a9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9b8: 0xc042128  jal         func_1084A0
    ctx->pc = 0x10A9B8u;
    SET_GPR_U32(ctx, 31, 0x10A9C0u);
    ctx->pc = 0x10A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9B8u;
    // 0x10a9bc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x10A9B8u, 0x10A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9C0u;
label_10a9c0:
    // 0x10a9c0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x10a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10a9c4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A9C4u;
    {
        const bool branch_taken_0x10a9c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a9c4) {
            ctx->pc = 0x10A9D4u;
            goto label_10a9d4;
        }
    }
    ctx->pc = 0x10A9CCu;
label_10a9cc:
    // 0x10a9cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10A9CCu;
    {
        const bool branch_taken_0x10a9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9CCu;
        // 0x10a9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9cc) {
            ctx->pc = 0x10A9E8u;
            goto label_10a9e8;
        }
    }
    ctx->pc = 0x10A9D4u;
label_10a9d4:
    // 0x10a9d4: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A9D4u;
    {
        const bool branch_taken_0x10a9d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9D4u;
        // 0x10a9d8: 0x234102a  slt         $v0, $s1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9d4) {
            ctx->pc = 0x10A9E4u;
            goto label_10a9e4;
        }
    }
    ctx->pc = 0x10A9DCu;
    // 0x10a9dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10A9DCu;
    {
        const bool branch_taken_0x10a9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9DCu;
        // 0x10a9e0: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9dc) {
            ctx->pc = 0x10A9E8u;
            goto label_10a9e8;
        }
    }
    ctx->pc = 0x10A9E4u;
label_10a9e4:
    // 0x10a9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a9e8:
    // 0x10a9e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a9ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a9ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a9f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10a9f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a9f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10a9f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a9f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10a9f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a9fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10a9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10aa00: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA00u;
        // 0x10aa04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AA08u;
}
