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

// Function: sub_00249640
// Address: 0x249640 - 0x2496f8
void sub_00249640_0x249640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249640_0x249640");
#endif

    switch (ctx->pc) {
        case 0x249660u: goto label_249660;
        case 0x24966cu: goto label_24966c;
        case 0x249678u: goto label_249678;
        case 0x249694u: goto label_249694;
        case 0x2496a0u: goto label_2496a0;
        case 0x2496acu: goto label_2496ac;
        case 0x2496c8u: goto label_2496c8;
        case 0x2496e8u: goto label_2496e8;
        default: break;
    }

    ctx->pc = 0x249640u;

    // 0x249640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249644: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x249644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x249648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24964c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24964cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249650: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x249650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x249654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249658: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x249658u;
    SET_GPR_U32(ctx, 31, 0x249660u);
    ctx->pc = 0x24965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249658u;
    // 0x24965c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x249658u, 0x249660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249660u;
label_249660:
    // 0x249660: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x249660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x249664: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x249664u;
    SET_GPR_U32(ctx, 31, 0x24966Cu);
    ctx->pc = 0x249668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249664u;
    // 0x249668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x249664u, 0x24966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24966Cu;
label_24966c:
    // 0x24966c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24966cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249670: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x249670u;
    SET_GPR_U32(ctx, 31, 0x249678u);
    ctx->pc = 0x249674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249670u;
    // 0x249674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x249670u, 0x249678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249678u;
label_249678:
    // 0x249678: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x249678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x24967c: 0x90430032  lbu         $v1, 0x32($v0)
    ctx->pc = 0x24967cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x249680: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x249680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x249684: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x249684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x249688: 0xa0430032  sb          $v1, 0x32($v0)
    ctx->pc = 0x249688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x24968c: 0xc07682a  jal         func_1DA0A8
    ctx->pc = 0x24968Cu;
    SET_GPR_U32(ctx, 31, 0x249694u);
    ctx->pc = 0x249690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24968Cu;
    // 0x249690: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x24968Cu, 0x249694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249694u;
label_249694:
    // 0x249694: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x249694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x249698: 0xc076628  jal         func_1D98A0
    ctx->pc = 0x249698u;
    SET_GPR_U32(ctx, 31, 0x2496A0u);
    ctx->pc = 0x24969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249698u;
    // 0x24969c: 0xae000fd0  sw          $zero, 0xFD0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98A0u, 0x249698u, 0x2496A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496A0u;
label_2496a0:
    // 0x2496a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2496a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2496a4: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x2496A4u;
    SET_GPR_U32(ctx, 31, 0x2496ACu);
    ctx->pc = 0x2496A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2496A4u;
    // 0x2496a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2496A4u, 0x2496ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496ACu;
label_2496ac:
    // 0x2496ac: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2496acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2496b0: 0xa2000794  sb          $zero, 0x794($s0)
    ctx->pc = 0x2496b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1940), (uint8_t)GPR_U32(ctx, 0));
    // 0x2496b4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2496b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2496b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2496B8u;
    {
        const bool branch_taken_0x2496b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2496BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496B8u;
        // 0x2496bc: 0xa2000795  sb          $zero, 0x795($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1941), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496b8) {
            ctx->pc = 0x2496E0u;
            goto label_2496e0;
        }
    }
    ctx->pc = 0x2496C0u;
    // 0x2496c0: 0xc0bf868  jal         func_2FE1A0
    ctx->pc = 0x2496C0u;
    SET_GPR_U32(ctx, 31, 0x2496C8u);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2496C0u, 0x2496C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496C8u;
label_2496c8:
    // 0x2496c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2496C8u;
    {
        const bool branch_taken_0x2496c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2496CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496C8u;
        // 0x2496cc: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496c8) {
            ctx->pc = 0x2496E0u;
            goto label_2496e0;
        }
    }
    ctx->pc = 0x2496D0u;
    // 0x2496d0: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x2496d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2496d4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2496d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2496d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2496d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2496dc: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x2496dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
label_2496e0:
    // 0x2496e0: 0xc092372  jal         func_248DC8
    ctx->pc = 0x2496E0u;
    SET_GPR_U32(ctx, 31, 0x2496E8u);
    ctx->pc = 0x248DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248DC8u, 0x2496E0u, 0x2496E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496E8u;
label_2496e8:
    // 0x2496e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2496e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2496ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2496ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2496f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2496F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2496F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496F0u;
        // 0x2496f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2496F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2496F8u;
}
