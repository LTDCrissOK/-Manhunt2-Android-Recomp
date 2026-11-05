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

// Function: sub_002580C8
// Address: 0x2580c8 - 0x2581b0
void sub_002580C8_0x2580c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002580C8_0x2580c8");
#endif

    switch (ctx->pc) {
        case 0x2580e8u: goto label_2580e8;
        case 0x2580f8u: goto label_2580f8;
        case 0x258130u: goto label_258130;
        case 0x25814cu: goto label_25814c;
        case 0x25815cu: goto label_25815c;
        case 0x258194u: goto label_258194;
        default: break;
    }

    ctx->pc = 0x2580c8u;

    // 0x2580c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2580c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2580cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2580ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2580d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2580d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2580d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2580d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2580d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2580d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2580dc: 0x8e220fe4  lw          $v0, 0xFE4($s1)
    ctx->pc = 0x2580dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4068)));
    // 0x2580e0: 0xc09532e  jal         func_254CB8
    ctx->pc = 0x2580E0u;
    SET_GPR_U32(ctx, 31, 0x2580E8u);
    ctx->pc = 0x2580E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2580E0u;
    // 0x2580e4: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CB8u, 0x2580E0u, 0x2580E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2580E8u;
label_2580e8:
    // 0x2580e8: 0x5602000e  bnel        $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2580E8u;
    {
        const bool branch_taken_0x2580e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2580e8) {
            ctx->pc = 0x2580ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2580E8u;
            // 0x2580ec: 0x8e220fe4  lw          $v0, 0xFE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258124u;
            goto label_258124;
        }
    }
    ctx->pc = 0x2580F0u;
    // 0x2580f0: 0xc09532e  jal         func_254CB8
    ctx->pc = 0x2580F0u;
    SET_GPR_U32(ctx, 31, 0x2580F8u);
    ctx->pc = 0x2580F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2580F0u;
    // 0x2580f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CB8u, 0x2580F0u, 0x2580F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2580F8u;
label_2580f8:
    // 0x2580f8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2580f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2580fc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2580fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x258100: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x258100u;
    {
        const bool branch_taken_0x258100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258100u;
        // 0x258104: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258100) {
            ctx->pc = 0x258184u;
            goto label_258184;
        }
    }
    ctx->pc = 0x258108u;
    // 0x258108: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x258108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x25810c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x25810Cu;
    {
        const bool branch_taken_0x25810c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25810Cu;
        // 0x258110: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25810c) {
            ctx->pc = 0x258184u;
            goto label_258184;
        }
    }
    ctx->pc = 0x258114u;
    // 0x258114: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x258114u;
    {
        const bool branch_taken_0x258114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258114u;
        // 0x258118: 0x38620006  xori        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258114) {
            ctx->pc = 0x258184u;
            goto label_258184;
        }
    }
    ctx->pc = 0x25811Cu;
    // 0x25811c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25811Cu;
    {
        const bool branch_taken_0x25811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25811Cu;
        // 0x258120: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25811c) {
            ctx->pc = 0x258184u;
            goto label_258184;
        }
    }
    ctx->pc = 0x258124u;
label_258124:
    // 0x258124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258128: 0xc09531c  jal         func_254C70
    ctx->pc = 0x258128u;
    SET_GPR_U32(ctx, 31, 0x258130u);
    ctx->pc = 0x25812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258128u;
    // 0x25812c: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C70u, 0x258128u, 0x258130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258130u;
label_258130:
    // 0x258130: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x258130u;
    {
        const bool branch_taken_0x258130 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x258134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258130u;
        // 0x258134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258130) {
            ctx->pc = 0x258198u;
            goto label_258198;
        }
    }
    ctx->pc = 0x258138u;
    // 0x258138: 0x8e221004  lw          $v0, 0x1004($s1)
    ctx->pc = 0x258138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
    // 0x25813c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258140: 0x8c440ff8  lw          $a0, 0xFF8($v0)
    ctx->pc = 0x258140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x258144: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x258144u;
    SET_GPR_U32(ctx, 31, 0x25814Cu);
    ctx->pc = 0x258148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258144u;
    // 0x258148: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x258144u, 0x25814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25814Cu;
label_25814c:
    // 0x25814c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25814Cu;
    {
        const bool branch_taken_0x25814c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25814Cu;
        // 0x258150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25814c) {
            ctx->pc = 0x258198u;
            goto label_258198;
        }
    }
    ctx->pc = 0x258154u;
    // 0x258154: 0xc09531c  jal         func_254C70
    ctx->pc = 0x258154u;
    SET_GPR_U32(ctx, 31, 0x25815Cu);
    ctx->pc = 0x258158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258154u;
    // 0x258158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C70u, 0x258154u, 0x25815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25815Cu;
label_25815c:
    // 0x25815c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x25815cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x258160: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x258160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x258164: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x258164u;
    {
        const bool branch_taken_0x258164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258164u;
        // 0x258168: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258164) {
            ctx->pc = 0x258180u;
            goto label_258180;
        }
    }
    ctx->pc = 0x25816Cu;
    // 0x25816c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x258170: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258170u;
    {
        const bool branch_taken_0x258170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258170u;
        // 0x258174: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258170) {
            ctx->pc = 0x258180u;
            goto label_258180;
        }
    }
    ctx->pc = 0x258178u;
    // 0x258178: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x258178u;
    {
        const bool branch_taken_0x258178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x258178) {
            ctx->pc = 0x258184u;
            goto label_258184;
        }
    }
    ctx->pc = 0x258180u;
label_258180:
    // 0x258180: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x258180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258184:
    // 0x258184: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258184u;
    {
        const bool branch_taken_0x258184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x258188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258184u;
        // 0x258188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258184) {
            ctx->pc = 0x258198u;
            goto label_258198;
        }
    }
    ctx->pc = 0x25818Cu;
    // 0x25818c: 0xc095fd8  jal         func_257F60
    ctx->pc = 0x25818Cu;
    SET_GPR_U32(ctx, 31, 0x258194u);
    ctx->pc = 0x258190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25818Cu;
    // 0x258190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F60u, 0x25818Cu, 0x258194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258194u;
label_258194:
    // 0x258194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258198:
    // 0x258198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x258198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25819c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25819cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2581a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2581a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2581a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2581A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2581A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581A4u;
        // 0x2581a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2581A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2581ACu;
    // 0x2581ac: 0x0  nop
    ctx->pc = 0x2581acu;
    // NOP
    ctx->pc = 0x2581b0u;
}
