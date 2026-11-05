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

// Function: sub_001320B0
// Address: 0x1320b0 - 0x1321e8
void sub_001320B0_0x1320b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001320B0_0x1320b0");
#endif

    switch (ctx->pc) {
        case 0x132108u: goto label_132108;
        case 0x132120u: goto label_132120;
        case 0x13215cu: goto label_13215c;
        case 0x132198u: goto label_132198;
        case 0x1321d4u: goto label_1321d4;
        default: break;
    }

    ctx->pc = 0x1320b0u;

    // 0x1320b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1320b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1320b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1320b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1320b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1320b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1320bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1320bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1320c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1320c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1320c4: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x1320c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x1320c8: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1320C8u;
    {
        const bool branch_taken_0x1320c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1320CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320C8u;
        // 0x1320cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320c8) {
            ctx->pc = 0x1321D4u;
            goto label_1321d4;
        }
    }
    ctx->pc = 0x1320D0u;
    // 0x1320d0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1320d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1320d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1320d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1320d8: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1320D8u;
    {
        const bool branch_taken_0x1320d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1320DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320D8u;
        // 0x1320dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320d8) {
            ctx->pc = 0x1321D4u;
            goto label_1321d4;
        }
    }
    ctx->pc = 0x1320E0u;
    // 0x1320e0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1320E0u;
    {
        const bool branch_taken_0x1320e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1320E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320E0u;
        // 0x1320e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320e0) {
            ctx->pc = 0x1320F4u;
            goto label_1320f4;
        }
    }
    ctx->pc = 0x1320E8u;
    // 0x1320e8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1320e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1320ec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1320ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1320f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1320f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1320f4:
    // 0x1320f4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1320F4u;
    {
        const bool branch_taken_0x1320f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1320F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320F4u;
        // 0x1320f8: 0x111900  sll         $v1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320f4) {
            ctx->pc = 0x132128u;
            goto label_132128;
        }
    }
    ctx->pc = 0x1320FCu;
    // 0x1320fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1320fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132100: 0xc04c7c8  jal         func_131F20
    ctx->pc = 0x132100u;
    SET_GPR_U32(ctx, 31, 0x132108u);
    ctx->pc = 0x132104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132100u;
    // 0x132104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131F20u, 0x132100u, 0x132108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132108u;
label_132108:
    // 0x132108: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x132108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x13210c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13210Cu;
    {
        const bool branch_taken_0x13210c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13210Cu;
        // 0x132110: 0x111900  sll         $v1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13210c) {
            ctx->pc = 0x132128u;
            goto label_132128;
        }
    }
    ctx->pc = 0x132114u;
    // 0x132114: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x132114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x132118: 0xc04b4d6  jal         func_12D358
    ctx->pc = 0x132118u;
    SET_GPR_U32(ctx, 31, 0x132120u);
    ctx->pc = 0x13211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132118u;
    // 0x13211c: 0x8e05021c  lw          $a1, 0x21C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D358u, 0x132118u, 0x132120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132120u;
label_132120:
    // 0x132120: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x132120u;
    {
        const bool branch_taken_0x132120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132120u;
        // 0x132124: 0xae00021c  sw          $zero, 0x21C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132120) {
            ctx->pc = 0x1321D4u;
            goto label_1321d4;
        }
    }
    ctx->pc = 0x132128u;
label_132128:
    // 0x132128: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x132128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x13212c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132130: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x132130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x132134: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x132134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132138: 0x10440026  beq         $v0, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x132138u;
    {
        const bool branch_taken_0x132138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132138u;
        // 0x13213c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132138) {
            ctx->pc = 0x1321D4u;
            goto label_1321d4;
        }
    }
    ctx->pc = 0x132140u;
    // 0x132140: 0x50430025  beql        $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x132140u;
    {
        const bool branch_taken_0x132140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x132140) {
            ctx->pc = 0x132144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132140u;
            // 0x132144: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1321D8u;
            goto label_1321d8;
        }
    }
    ctx->pc = 0x132148u;
    // 0x132148: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x132148u;
    {
        const bool branch_taken_0x132148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132148) {
            ctx->pc = 0x13214Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132148u;
            // 0x13214c: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132164u;
            goto label_132164;
        }
    }
    ctx->pc = 0x132150u;
    // 0x132150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132154: 0xc04c87a  jal         func_1321E8
    ctx->pc = 0x132154u;
    SET_GPR_U32(ctx, 31, 0x13215Cu);
    ctx->pc = 0x132158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132154u;
    // 0x132158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1321E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1321E8u, 0x132154u, 0x13215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13215Cu;
label_13215c:
    // 0x13215c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x13215Cu;
    {
        const bool branch_taken_0x13215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13215Cu;
        // 0x132160: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13215c) {
            ctx->pc = 0x1321D8u;
            goto label_1321d8;
        }
    }
    ctx->pc = 0x132164u;
label_132164:
    // 0x132164: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x132164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132168: 0x5051001b  beql        $v0, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x132168u;
    {
        const bool branch_taken_0x132168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x132168) {
            ctx->pc = 0x13216Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132168u;
            // 0x13216c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1321D8u;
            goto label_1321d8;
        }
    }
    ctx->pc = 0x132170u;
    // 0x132170: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x132170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x132174: 0x50510018  beql        $v0, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x132174u;
    {
        const bool branch_taken_0x132174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x132174) {
            ctx->pc = 0x132178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132174u;
            // 0x132178: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1321D8u;
            goto label_1321d8;
        }
    }
    ctx->pc = 0x13217Cu;
    // 0x13217c: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x13217Cu;
    {
        const bool branch_taken_0x13217c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13217c) {
            ctx->pc = 0x132180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13217Cu;
            // 0x132180: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132184u;
            goto label_132184;
        }
    }
    ctx->pc = 0x132184u;
label_132184:
    // 0x132184: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x132184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x132188: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x132188u;
    {
        const bool branch_taken_0x132188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132188u;
        // 0x13218c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132188) {
            ctx->pc = 0x1321A8u;
            goto label_1321a8;
        }
    }
    ctx->pc = 0x132190u;
    // 0x132190: 0xc04c7c8  jal         func_131F20
    ctx->pc = 0x132190u;
    SET_GPR_U32(ctx, 31, 0x132198u);
    ctx->pc = 0x132194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132190u;
    // 0x132194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131F20u, 0x132190u, 0x132198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132198u;
label_132198:
    // 0x132198: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x132198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x13219c: 0x5051000e  beql        $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x13219Cu;
    {
        const bool branch_taken_0x13219c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x13219c) {
            ctx->pc = 0x1321A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13219Cu;
            // 0x1321a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1321D8u;
            goto label_1321d8;
        }
    }
    ctx->pc = 0x1321A4u;
    // 0x1321a4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1321a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1321a8:
    // 0x1321a8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1321A8u;
    {
        const bool branch_taken_0x1321a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1321a8) {
            ctx->pc = 0x1321ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1321A8u;
            // 0x1321ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1321D8u;
            goto label_1321d8;
        }
    }
    ctx->pc = 0x1321B0u;
    // 0x1321b0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1321b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1321b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1321b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1321b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1321B8u;
    {
        const bool branch_taken_0x1321b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1321BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321B8u;
        // 0x1321bc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1321b8) {
            ctx->pc = 0x1321C8u;
            goto label_1321c8;
        }
    }
    ctx->pc = 0x1321C0u;
    // 0x1321c0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1321C0u;
    {
        const bool branch_taken_0x1321c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1321c0) {
            ctx->pc = 0x1321C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1321C0u;
            // 0x1321c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1321D8u;
            goto label_1321d8;
        }
    }
    ctx->pc = 0x1321C8u;
label_1321c8:
    // 0x1321c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1321c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1321cc: 0xc04c87a  jal         func_1321E8
    ctx->pc = 0x1321CCu;
    SET_GPR_U32(ctx, 31, 0x1321D4u);
    ctx->pc = 0x1321D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1321CCu;
    // 0x1321d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1321E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1321E8u, 0x1321CCu, 0x1321D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1321D4u;
label_1321d4:
    // 0x1321d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1321d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1321d8:
    // 0x1321d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1321d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1321dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1321dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1321e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1321E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1321E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321E0u;
        // 0x1321e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1321E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1321E8u;
}
