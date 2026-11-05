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

// Function: sub_001450C0
// Address: 0x1450c0 - 0x145160
void sub_001450C0_0x1450c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001450C0_0x1450c0");
#endif

    switch (ctx->pc) {
        case 0x1450f4u: goto label_1450f4;
        case 0x145120u: goto label_145120;
        case 0x14514cu: goto label_14514c;
        default: break;
    }

    ctx->pc = 0x1450c0u;

    // 0x1450c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1450c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1450c4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1450c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1450c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1450c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1450cc: 0x244208b8  addiu       $v0, $v0, 0x8B8
    ctx->pc = 0x1450ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2232));
    // 0x1450d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1450d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1450d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1450d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1450d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1450dc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1450dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1450e0: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x1450e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x1450e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1450E4u;
    {
        const bool branch_taken_0x1450e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1450E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450E4u;
        // 0x1450e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450e4) {
            ctx->pc = 0x1450F4u;
            goto label_1450f4;
        }
    }
    ctx->pc = 0x1450ECu;
    // 0x1450ec: 0xc05146c  jal         func_1451B0
    ctx->pc = 0x1450ECu;
    SET_GPR_U32(ctx, 31, 0x1450F4u);
    ctx->pc = 0x1451B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451B0u, 0x1450ECu, 0x1450F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450F4u;
label_1450f4:
    // 0x1450f4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1450f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1450f8: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x1450f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1450fc: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x1450fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x145100: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x145100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x145104: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x145104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x145108: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x145108u;
    {
        const bool branch_taken_0x145108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145108u;
        // 0x14510c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145108) {
            ctx->pc = 0x145138u;
            goto label_145138;
        }
    }
    ctx->pc = 0x145110u;
    // 0x145110: 0x26030410  addiu       $v1, $s0, 0x410
    ctx->pc = 0x145110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x145114: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x145114u;
    {
        const bool branch_taken_0x145114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x145114) {
            ctx->pc = 0x145118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145114u;
            // 0x145118: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14513Cu;
            goto label_14513c;
        }
    }
    ctx->pc = 0x14511Cu;
    // 0x14511c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x14511cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_145120:
    // 0x145120: 0x0  nop
    ctx->pc = 0x145120u;
    // NOP
    // 0x145124: 0x0  nop
    ctx->pc = 0x145124u;
    // NOP
    // 0x145128: 0x0  nop
    ctx->pc = 0x145128u;
    // NOP
    // 0x14512c: 0x0  nop
    ctx->pc = 0x14512cu;
    // NOP
    // 0x145130: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x145130u;
    {
        const bool branch_taken_0x145130 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x145130) {
            ctx->pc = 0x145134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145130u;
            // 0x145134: 0x2463ffc0  addiu       $v1, $v1, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145120;
        }
    }
    ctx->pc = 0x145138u;
label_145138:
    // 0x145138: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x145138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_14513c:
    // 0x14513c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14513Cu;
    {
        const bool branch_taken_0x14513c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x145140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14513Cu;
        // 0x145140: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14513c) {
            ctx->pc = 0x14514Cu;
            goto label_14514c;
        }
    }
    ctx->pc = 0x145144u;
    // 0x145144: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x145144u;
    SET_GPR_U32(ctx, 31, 0x14514Cu);
    ctx->pc = 0x145148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145144u;
    // 0x145148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x145144u, 0x14514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14514Cu;
label_14514c:
    // 0x14514c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14514cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145158: 0x3e00008  jr          $ra
    ctx->pc = 0x145158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145158u;
        // 0x14515c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145160u;
}
