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

// Function: sub_00160098
// Address: 0x160098 - 0x160190
void sub_00160098_0x160098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160098_0x160098");
#endif

    switch (ctx->pc) {
        case 0x1600d4u: goto label_1600d4;
        case 0x1600ecu: goto label_1600ec;
        case 0x1600f8u: goto label_1600f8;
        case 0x160140u: goto label_160140;
        case 0x16015cu: goto label_16015c;
        case 0x160174u: goto label_160174;
        default: break;
    }

    ctx->pc = 0x160098u;

    // 0x160098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16009c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1600a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1600a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1600a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1600a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1600a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1600ac: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1600acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1600b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1600b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1600b4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1600b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1600b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1600b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1600bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1600bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1600c0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1600c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1600c4: 0x5240002c  beql        $s2, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1600C4u;
    {
        const bool branch_taken_0x1600c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1600c4) {
            ctx->pc = 0x1600C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1600C4u;
            // 0x1600c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160178u;
            goto label_160178;
        }
    }
    ctx->pc = 0x1600CCu;
    // 0x1600cc: 0xc056b7c  jal         func_15ADF0
    ctx->pc = 0x1600CCu;
    SET_GPR_U32(ctx, 31, 0x1600D4u);
    ctx->pc = 0x1600D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1600CCu;
    // 0x1600d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ADF0u, 0x1600CCu, 0x1600D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1600D4u;
label_1600d4:
    // 0x1600d4: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1600D4u;
    {
        const bool branch_taken_0x1600d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1600d4) {
            ctx->pc = 0x1600D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1600D4u;
            // 0x1600d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160178u;
            goto label_160178;
        }
    }
    ctx->pc = 0x1600DCu;
    // 0x1600dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1600dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1600e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600e4: 0xc056b76  jal         func_15ADD8
    ctx->pc = 0x1600E4u;
    SET_GPR_U32(ctx, 31, 0x1600ECu);
    ctx->pc = 0x1600E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1600E4u;
    // 0x1600e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ADD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ADD8u, 0x1600E4u, 0x1600ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1600ECu;
label_1600ec:
    // 0x1600ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1600ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600f0: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x1600F0u;
    SET_GPR_U32(ctx, 31, 0x1600F8u);
    ctx->pc = 0x1600F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1600F0u;
    // 0x1600f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x1600F0u, 0x1600F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1600F8u;
label_1600f8:
    // 0x1600f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1600f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600fc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1600fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x160100: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x160100u;
    {
        const bool branch_taken_0x160100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160100u;
        // 0x160104: 0x2862000b  slti        $v0, $v1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160100) {
            ctx->pc = 0x160148u;
            goto label_160148;
        }
    }
    ctx->pc = 0x160108u;
    // 0x160108: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160108u;
    {
        const bool branch_taken_0x160108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160108u;
        // 0x16010c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160108) {
            ctx->pc = 0x160120u;
            goto label_160120;
        }
    }
    ctx->pc = 0x160110u;
    // 0x160110: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x160110u;
    {
        const bool branch_taken_0x160110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160110u;
        // 0x160114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160110) {
            ctx->pc = 0x160164u;
            goto label_160164;
        }
    }
    ctx->pc = 0x160118u;
    // 0x160118: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x160118u;
    {
        const bool branch_taken_0x160118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160118u;
        // 0x16011c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160118) {
            ctx->pc = 0x160178u;
            goto label_160178;
        }
    }
    ctx->pc = 0x160120u;
label_160120:
    // 0x160120: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x160120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x160124: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x160124u;
    {
        const bool branch_taken_0x160124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x160124) {
            ctx->pc = 0x160128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160124u;
            // 0x160128: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160178u;
            goto label_160178;
        }
    }
    ctx->pc = 0x16012Cu;
    // 0x16012c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160130: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160134: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x160134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x160138: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x160138u;
    SET_GPR_U32(ctx, 31, 0x160140u);
    ctx->pc = 0x16013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160138u;
    // 0x16013c: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x160138u, 0x160140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160140u;
label_160140:
    // 0x160140: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160140u;
    {
        const bool branch_taken_0x160140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160140u;
        // 0x160144: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160140) {
            ctx->pc = 0x160178u;
            goto label_160178;
        }
    }
    ctx->pc = 0x160148u;
label_160148:
    // 0x160148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x160148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16014c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16014cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160150: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x160150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x160154: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x160154u;
    SET_GPR_U32(ctx, 31, 0x16015Cu);
    ctx->pc = 0x160158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160154u;
    // 0x160158: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x160154u, 0x16015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16015Cu;
label_16015c:
    // 0x16015c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16015Cu;
    {
        const bool branch_taken_0x16015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16015Cu;
        // 0x160160: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16015c) {
            ctx->pc = 0x160178u;
            goto label_160178;
        }
    }
    ctx->pc = 0x160164u;
label_160164:
    // 0x160164: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160168: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x160168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x16016c: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x16016Cu;
    SET_GPR_U32(ctx, 31, 0x160174u);
    ctx->pc = 0x160170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16016Cu;
    // 0x160170: 0x2407000d  addiu       $a3, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x16016Cu, 0x160174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160174u;
label_160174:
    // 0x160174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160178:
    // 0x160178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16017c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16017cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160180: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x160180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x160184: 0x3e00008  jr          $ra
    ctx->pc = 0x160184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160184u;
        // 0x160188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16018Cu;
    // 0x16018c: 0x0  nop
    ctx->pc = 0x16018cu;
    // NOP
    ctx->pc = 0x160190u;
}
