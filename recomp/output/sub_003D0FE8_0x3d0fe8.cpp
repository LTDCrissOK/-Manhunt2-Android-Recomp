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

// Function: sub_003D0FE8
// Address: 0x3d0fe8 - 0x3d10e0
void sub_003D0FE8_0x3d0fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0FE8_0x3d0fe8");
#endif

    switch (ctx->pc) {
        case 0x3d1064u: goto label_3d1064;
        case 0x3d10acu: goto label_3d10ac;
        case 0x3d10b4u: goto label_3d10b4;
        case 0x3d10bcu: goto label_3d10bc;
        default: break;
    }

    ctx->pc = 0x3d0fe8u;

    // 0x3d0fe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d0fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d0fec: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x3d0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x3d0ff0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3d0ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3d0ff4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d0ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d0ff8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3d0ff8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0ffc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d0ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d1000: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d1000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d1004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d1008: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3d1008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d100c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d100cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3d1010: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D1010u;
    {
        const bool branch_taken_0x3d1010 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3D1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1010u;
        // 0x3d1014: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1010) {
            ctx->pc = 0x3D1028u;
            goto label_3d1028;
        }
    }
    ctx->pc = 0x3D1018u;
    // 0x3d1018: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3d1018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d101c: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x3d101cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x3d1020: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D1020u;
    {
        const bool branch_taken_0x3d1020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d1020) {
            ctx->pc = 0x3D1024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1020u;
            // 0x3d1024: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1034u;
            goto label_3d1034;
        }
    }
    ctx->pc = 0x3D1028u;
label_3d1028:
    // 0x3d1028: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d1028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d102c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3D102Cu;
    {
        const bool branch_taken_0x3d102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D102Cu;
        // 0x3d1030: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d102c) {
            ctx->pc = 0x3D10C0u;
            goto label_3d10c0;
        }
    }
    ctx->pc = 0x3D1034u;
label_3d1034:
    // 0x3d1034: 0x2442e640  addiu       $v0, $v0, -0x19C0
    ctx->pc = 0x3d1034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
    // 0x3d1038: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3d1038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3d103c: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D103Cu;
    {
        const bool branch_taken_0x3d103c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3d103c) {
            ctx->pc = 0x3D1040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D103Cu;
            // 0x3d1040: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1050u;
            goto label_3d1050;
        }
    }
    ctx->pc = 0x3D1044u;
    // 0x3d1044: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d1044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d1048: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3D1048u;
    {
        const bool branch_taken_0x3d1048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1048u;
        // 0x3d104c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1048) {
            ctx->pc = 0x3D10C0u;
            goto label_3d10c0;
        }
    }
    ctx->pc = 0x3D1050u;
label_3d1050:
    // 0x3d1050: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3d1050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3d1054: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D1054u;
    {
        const bool branch_taken_0x3d1054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1054) {
            ctx->pc = 0x3D1068u;
            goto label_3d1068;
        }
    }
    ctx->pc = 0x3D105Cu;
    // 0x3d105c: 0xc0f42ae  jal         func_3D0AB8
    ctx->pc = 0x3D105Cu;
    SET_GPR_U32(ctx, 31, 0x3D1064u);
    ctx->pc = 0x3D1060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D105Cu;
    // 0x3d1060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0AB8u, 0x3D105Cu, 0x3D1064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1064u;
label_3d1064:
    // 0x3d1064: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3d1064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d1068:
    // 0x3d1068: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D1068u;
    {
        const bool branch_taken_0x3d1068 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1068u;
        // 0x3d106c: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1068) {
            ctx->pc = 0x3D1084u;
            goto label_3d1084;
        }
    }
    ctx->pc = 0x3D1070u;
    // 0x3d1070: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d1070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3d1074: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x3d1074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x3d1078: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d1078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3d107c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3D107Cu;
    {
        const bool branch_taken_0x3d107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D107Cu;
        // 0x3d1080: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d107c) {
            ctx->pc = 0x3D10ACu;
            goto label_3d10ac;
        }
    }
    ctx->pc = 0x3D1084u;
label_3d1084:
    // 0x3d1084: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x3d1084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3d1088: 0xfe120020  sd          $s2, 0x20($s0)
    ctx->pc = 0x3d1088u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 18));
    // 0x3d108c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3d108cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3d1090: 0xae1c002c  sw          $gp, 0x2C($s0)
    ctx->pc = 0x3d1090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 28));
    // 0x3d1094: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3d1094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d1098: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d1098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d109c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D109Cu;
    {
        const bool branch_taken_0x3d109c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D109Cu;
        // 0x3d10a0: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d109c) {
            ctx->pc = 0x3D10ACu;
            goto label_3d10ac;
        }
    }
    ctx->pc = 0x3D10A4u;
    // 0x3d10a4: 0xc0f428c  jal         func_3D0A30
    ctx->pc = 0x3D10A4u;
    SET_GPR_U32(ctx, 31, 0x3D10ACu);
    ctx->pc = 0x3D10A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D10A4u;
    // 0x3d10a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0A30u, 0x3D10A4u, 0x3D10ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D10ACu;
label_3d10ac:
    // 0x3d10ac: 0xc0f4366  jal         func_3D0D98
    ctx->pc = 0x3D10ACu;
    SET_GPR_U32(ctx, 31, 0x3D10B4u);
    ctx->pc = 0x3D0D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0D98u, 0x3D10ACu, 0x3D10B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D10B4u;
label_3d10b4:
    // 0x3d10b4: 0xc0f4228  jal         func_3D08A0
    ctx->pc = 0x3D10B4u;
    SET_GPR_U32(ctx, 31, 0x3D10BCu);
    ctx->pc = 0x3D10B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D10B4u;
    // 0x3d10b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D08A0u, 0x3D10B4u, 0x3D10BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D10BCu;
label_3d10bc:
    // 0x3d10bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d10bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d10c0:
    // 0x3d10c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d10c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d10c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3d10c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d10c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d10c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d10cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d10ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d10d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d10d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d10d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D10D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D10D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D10D4u;
        // 0x3d10d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D10D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D10DCu;
    // 0x3d10dc: 0x0  nop
    ctx->pc = 0x3d10dcu;
    // NOP
    ctx->pc = 0x3d10e0u;
}
