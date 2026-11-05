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

// Function: sub_00153110
// Address: 0x153110 - 0x1531b0
void sub_00153110_0x153110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153110_0x153110");
#endif

    switch (ctx->pc) {
        case 0x153144u: goto label_153144;
        case 0x153170u: goto label_153170;
        case 0x15319cu: goto label_15319c;
        default: break;
    }

    ctx->pc = 0x153110u;

    // 0x153110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153114: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x153114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x153118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x153118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15311c: 0x24420b40  addiu       $v0, $v0, 0xB40
    ctx->pc = 0x15311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2880));
    // 0x153120: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x153120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x153124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15312c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15312cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x153130: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x153130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x153134: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153134u;
    {
        const bool branch_taken_0x153134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x153138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153134u;
        // 0x153138: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153134) {
            ctx->pc = 0x153144u;
            goto label_153144;
        }
    }
    ctx->pc = 0x15313Cu;
    // 0x15313c: 0xc054c80  jal         func_153200
    ctx->pc = 0x15313Cu;
    SET_GPR_U32(ctx, 31, 0x153144u);
    ctx->pc = 0x153200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153200u, 0x15313Cu, 0x153144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153144u;
label_153144:
    // 0x153144: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x153144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x153148: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x153148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x15314c: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x15314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x153150: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x153150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x153154: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x153154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x153158: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x153158u;
    {
        const bool branch_taken_0x153158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153158u;
        // 0x15315c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153158) {
            ctx->pc = 0x153188u;
            goto label_153188;
        }
    }
    ctx->pc = 0x153160u;
    // 0x153160: 0x26030410  addiu       $v1, $s0, 0x410
    ctx->pc = 0x153160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x153164: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x153164u;
    {
        const bool branch_taken_0x153164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x153164) {
            ctx->pc = 0x153168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153164u;
            // 0x153168: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15318Cu;
            goto label_15318c;
        }
    }
    ctx->pc = 0x15316Cu;
    // 0x15316c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x15316cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_153170:
    // 0x153170: 0x0  nop
    ctx->pc = 0x153170u;
    // NOP
    // 0x153174: 0x0  nop
    ctx->pc = 0x153174u;
    // NOP
    // 0x153178: 0x0  nop
    ctx->pc = 0x153178u;
    // NOP
    // 0x15317c: 0x0  nop
    ctx->pc = 0x15317cu;
    // NOP
    // 0x153180: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x153180u;
    {
        const bool branch_taken_0x153180 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x153180) {
            ctx->pc = 0x153184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153180u;
            // 0x153184: 0x2463ffc0  addiu       $v1, $v1, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153170;
        }
    }
    ctx->pc = 0x153188u;
label_153188:
    // 0x153188: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x153188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_15318c:
    // 0x15318c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15318Cu;
    {
        const bool branch_taken_0x15318c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x153190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15318Cu;
        // 0x153190: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15318c) {
            ctx->pc = 0x15319Cu;
            goto label_15319c;
        }
    }
    ctx->pc = 0x153194u;
    // 0x153194: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x153194u;
    SET_GPR_U32(ctx, 31, 0x15319Cu);
    ctx->pc = 0x153198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153194u;
    // 0x153198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x153194u, 0x15319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15319Cu;
label_15319c:
    // 0x15319c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15319cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1531a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1531a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1531a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1531a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1531a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1531A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1531ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531A8u;
        // 0x1531ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1531A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1531B0u;
}
