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

// Function: sub_002D53C8
// Address: 0x2d53c8 - 0x2d5470
void sub_002D53C8_0x2d53c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D53C8_0x2d53c8");
#endif

    switch (ctx->pc) {
        case 0x2d5408u: goto label_2d5408;
        case 0x2d5418u: goto label_2d5418;
        case 0x2d5424u: goto label_2d5424;
        case 0x2d5430u: goto label_2d5430;
        case 0x2d5440u: goto label_2d5440;
        case 0x2d544cu: goto label_2d544c;
        case 0x2d5454u: goto label_2d5454;
        default: break;
    }

    ctx->pc = 0x2d53c8u;

    // 0x2d53c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d53c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d53cc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d53ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2d53d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d53d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d53d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d53d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d53d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d53d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d53dc: 0x8c62bd50  lw          $v0, -0x42B0($v1)
    ctx->pc = 0x2d53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x2d53e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d53e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d53e4: 0x8c5201a0  lw          $s2, 0x1A0($v0)
    ctx->pc = 0x2d53e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x2d53e8: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D53E8u;
    {
        const bool branch_taken_0x2d53e8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2D53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53E8u;
        // 0x2d53ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d53e8) {
            ctx->pc = 0x2D53F4u;
            goto label_2d53f4;
        }
    }
    ctx->pc = 0x2D53F0u;
    // 0x2d53f0: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x2d53f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2d53f4:
    // 0x2d53f4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2d53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2d53f8: 0x12420014  beq         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D53F8u;
    {
        const bool branch_taken_0x2d53f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53F8u;
        // 0x2d53fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d53f8) {
            ctx->pc = 0x2D544Cu;
            goto label_2d544c;
        }
    }
    ctx->pc = 0x2D5400u;
    // 0x2d5400: 0xc0b580e  jal         func_2D6038
    ctx->pc = 0x2D5400u;
    SET_GPR_U32(ctx, 31, 0x2D5408u);
    ctx->pc = 0x2D5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5400u;
    // 0x2d5404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6038u, 0x2D5400u, 0x2D5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5408u;
label_2d5408:
    // 0x2d5408: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2d5408u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2d540c: 0x8e05bd48  lw          $a1, -0x42B8($s0)
    ctx->pc = 0x2d540cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2d5410: 0xc0c884e  jal         func_322138
    ctx->pc = 0x2D5410u;
    SET_GPR_U32(ctx, 31, 0x2D5418u);
    ctx->pc = 0x2D5414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5410u;
    // 0x2d5414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322138u, 0x2D5410u, 0x2D5418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5418u;
label_2d5418:
    // 0x2d5418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d541c: 0xc0b57ea  jal         func_2D5FA8
    ctx->pc = 0x2D541Cu;
    SET_GPR_U32(ctx, 31, 0x2D5424u);
    ctx->pc = 0x2D5420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D541Cu;
    // 0x2d5420: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5FA8u, 0x2D541Cu, 0x2D5424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5424u;
label_2d5424:
    // 0x2d5424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5428: 0xc0b5794  jal         func_2D5E50
    ctx->pc = 0x2D5428u;
    SET_GPR_U32(ctx, 31, 0x2D5430u);
    ctx->pc = 0x2D542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5428u;
    // 0x2d542c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E50u, 0x2D5428u, 0x2D5430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5430u;
label_2d5430:
    // 0x2d5430: 0xae320024  sw          $s2, 0x24($s1)
    ctx->pc = 0x2d5430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
    // 0x2d5434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5438: 0xc0b580e  jal         func_2D6038
    ctx->pc = 0x2D5438u;
    SET_GPR_U32(ctx, 31, 0x2D5440u);
    ctx->pc = 0x2D543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5438u;
    // 0x2d543c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6038u, 0x2D5438u, 0x2D5440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5440u;
label_2d5440:
    // 0x2d5440: 0x8e05bd48  lw          $a1, -0x42B8($s0)
    ctx->pc = 0x2d5440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    // 0x2d5444: 0xc0c8848  jal         func_322120
    ctx->pc = 0x2D5444u;
    SET_GPR_U32(ctx, 31, 0x2D544Cu);
    ctx->pc = 0x2D5448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5444u;
    // 0x2d5448: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322120u, 0x2D5444u, 0x2D544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D544Cu;
label_2d544c:
    // 0x2d544c: 0xc0b54e8  jal         func_2D53A0
    ctx->pc = 0x2D544Cu;
    SET_GPR_U32(ctx, 31, 0x2D5454u);
    ctx->pc = 0x2D5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D544Cu;
    // 0x2d5450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D53A0u, 0x2D544Cu, 0x2D5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5454u;
label_2d5454:
    // 0x2d5454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5458: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d545c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d545cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5460: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d5460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5464: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5464u;
        // 0x2d5468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D546Cu;
    // 0x2d546c: 0x0  nop
    ctx->pc = 0x2d546cu;
    // NOP
    ctx->pc = 0x2d5470u;
}
