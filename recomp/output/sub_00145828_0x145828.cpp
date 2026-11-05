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

// Function: sub_00145828
// Address: 0x145828 - 0x1458c8
void sub_00145828_0x145828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145828_0x145828");
#endif

    switch (ctx->pc) {
        case 0x14585cu: goto label_14585c;
        case 0x145888u: goto label_145888;
        case 0x1458b4u: goto label_1458b4;
        default: break;
    }

    ctx->pc = 0x145828u;

    // 0x145828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14582c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14582cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x145830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145834: 0x24420900  addiu       $v0, $v0, 0x900
    ctx->pc = 0x145834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2304));
    // 0x145838: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14583c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14583cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145840: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145844: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x145844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x145848: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x145848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x14584c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14584Cu;
    {
        const bool branch_taken_0x14584c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x145850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14584Cu;
        // 0x145850: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14584c) {
            ctx->pc = 0x14585Cu;
            goto label_14585c;
        }
    }
    ctx->pc = 0x145854u;
    // 0x145854: 0xc051646  jal         func_145918
    ctx->pc = 0x145854u;
    SET_GPR_U32(ctx, 31, 0x14585Cu);
    ctx->pc = 0x145918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145918u, 0x145854u, 0x14585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14585Cu;
label_14585c:
    // 0x14585c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14585cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x145860: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x145860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x145864: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x145864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x145868: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x145868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14586c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14586cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x145870: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x145870u;
    {
        const bool branch_taken_0x145870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x145874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145870u;
        // 0x145874: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145870) {
            ctx->pc = 0x1458A0u;
            goto label_1458a0;
        }
    }
    ctx->pc = 0x145878u;
    // 0x145878: 0x26030410  addiu       $v1, $s0, 0x410
    ctx->pc = 0x145878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x14587c: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14587Cu;
    {
        const bool branch_taken_0x14587c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14587c) {
            ctx->pc = 0x145880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14587Cu;
            // 0x145880: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1458A4u;
            goto label_1458a4;
        }
    }
    ctx->pc = 0x145884u;
    // 0x145884: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x145884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_145888:
    // 0x145888: 0x0  nop
    ctx->pc = 0x145888u;
    // NOP
    // 0x14588c: 0x0  nop
    ctx->pc = 0x14588cu;
    // NOP
    // 0x145890: 0x0  nop
    ctx->pc = 0x145890u;
    // NOP
    // 0x145894: 0x0  nop
    ctx->pc = 0x145894u;
    // NOP
    // 0x145898: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x145898u;
    {
        const bool branch_taken_0x145898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x145898) {
            ctx->pc = 0x14589Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145898u;
            // 0x14589c: 0x2463ffc0  addiu       $v1, $v1, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145888;
        }
    }
    ctx->pc = 0x1458A0u;
label_1458a0:
    // 0x1458a0: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x1458a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_1458a4:
    // 0x1458a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1458A4u;
    {
        const bool branch_taken_0x1458a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1458A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1458A4u;
        // 0x1458a8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1458a4) {
            ctx->pc = 0x1458B4u;
            goto label_1458b4;
        }
    }
    ctx->pc = 0x1458ACu;
    // 0x1458ac: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1458ACu;
    SET_GPR_U32(ctx, 31, 0x1458B4u);
    ctx->pc = 0x1458B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1458ACu;
    // 0x1458b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1458ACu, 0x1458B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1458B4u;
label_1458b4:
    // 0x1458b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1458b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1458b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1458b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1458bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1458bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1458c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1458C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1458C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1458C0u;
        // 0x1458c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1458C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1458C8u;
}
