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

// Function: sub_00161318
// Address: 0x161318 - 0x1613a0
void sub_00161318_0x161318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161318_0x161318");
#endif

    switch (ctx->pc) {
        case 0x161340u: goto label_161340;
        case 0x16134cu: goto label_16134c;
        case 0x161390u: goto label_161390;
        default: break;
    }

    ctx->pc = 0x161318u;

    // 0x161318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16131c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16131cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x161320: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x161320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x161324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161328: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x161328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16132c: 0x920208a5  lbu         $v0, 0x8A5($s0)
    ctx->pc = 0x16132cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2213)));
    // 0x161330: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161334: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x161334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x161338: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x161338u;
    SET_GPR_U32(ctx, 31, 0x161340u);
    ctx->pc = 0x16133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161338u;
    // 0x16133c: 0xac4504a4  sw          $a1, 0x4A4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1188), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x161338u, 0x161340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161340u;
label_161340:
    // 0x161340: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x161340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161344: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x161344u;
    SET_GPR_U32(ctx, 31, 0x16134Cu);
    ctx->pc = 0x161348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161344u;
    // 0x161348: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x161344u, 0x16134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16134Cu;
label_16134c:
    // 0x16134c: 0x920308a5  lbu         $v1, 0x8A5($s0)
    ctx->pc = 0x16134cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2213)));
    // 0x161350: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x161350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x161354: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x161354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161358: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x161358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x16135c: 0xac6206a4  sw          $v0, 0x6A4($v1)
    ctx->pc = 0x16135cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1700), GPR_U32(ctx, 2));
    // 0x161360: 0x920208a5  lbu         $v0, 0x8A5($s0)
    ctx->pc = 0x161360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2213)));
    // 0x161364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x161364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x161368: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x161368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16136c: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16136Cu;
    {
        const bool branch_taken_0x16136c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x161370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16136Cu;
        // 0x161370: 0xa20208a5  sb          $v0, 0x8A5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2213), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16136c) {
            ctx->pc = 0x161378u;
            goto label_161378;
        }
    }
    ctx->pc = 0x161374u;
    // 0x161374: 0xa20008a5  sb          $zero, 0x8A5($s0)
    ctx->pc = 0x161374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2213), (uint8_t)GPR_U32(ctx, 0));
label_161378:
    // 0x161378: 0x920208a4  lbu         $v0, 0x8A4($s0)
    ctx->pc = 0x161378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2212)));
    // 0x16137c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16137cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161380: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x161380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161384: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x161384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x161388: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x161388u;
    SET_GPR_U32(ctx, 31, 0x161390u);
    ctx->pc = 0x16138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161388u;
    // 0x16138c: 0xa20208a4  sb          $v0, 0x8A4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2212), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x161388u, 0x161390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161390u;
label_161390:
    // 0x161390: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x161390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161394: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x161394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x161398: 0x3e00008  jr          $ra
    ctx->pc = 0x161398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161398u;
        // 0x16139c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1613A0u;
}
