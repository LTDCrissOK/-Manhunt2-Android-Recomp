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

// Function: sub_0014DD38
// Address: 0x14dd38 - 0x14ddd8
void sub_0014DD38_0x14dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DD38_0x14dd38");
#endif

    switch (ctx->pc) {
        case 0x14dd6cu: goto label_14dd6c;
        case 0x14dd98u: goto label_14dd98;
        case 0x14ddc4u: goto label_14ddc4;
        default: break;
    }

    ctx->pc = 0x14dd38u;

    // 0x14dd38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14dd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14dd3c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x14dd40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14dd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14dd44: 0x24420ab0  addiu       $v0, $v0, 0xAB0
    ctx->pc = 0x14dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x14dd48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14dd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14dd4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14dd4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14dd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14dd54: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14dd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x14dd58: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x14dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x14dd5c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DD5Cu;
    {
        const bool branch_taken_0x14dd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD5Cu;
        // 0x14dd60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd5c) {
            ctx->pc = 0x14DD6Cu;
            goto label_14dd6c;
        }
    }
    ctx->pc = 0x14DD64u;
    // 0x14dd64: 0xc05378e  jal         func_14DE38
    ctx->pc = 0x14DD64u;
    SET_GPR_U32(ctx, 31, 0x14DD6Cu);
    ctx->pc = 0x14DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE38u, 0x14DD64u, 0x14DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DD6Cu;
label_14dd6c:
    // 0x14dd6c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x14dd70: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x14dd70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x14dd74: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x14dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x14dd78: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x14dd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14dd7c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x14dd80: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x14DD80u;
    {
        const bool branch_taken_0x14dd80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD80u;
        // 0x14dd84: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd80) {
            ctx->pc = 0x14DDB0u;
            goto label_14ddb0;
        }
    }
    ctx->pc = 0x14DD88u;
    // 0x14dd88: 0x26030410  addiu       $v1, $s0, 0x410
    ctx->pc = 0x14dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x14dd8c: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14DD8Cu;
    {
        const bool branch_taken_0x14dd8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14dd8c) {
            ctx->pc = 0x14DD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DD8Cu;
            // 0x14dd90: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DDB4u;
            goto label_14ddb4;
        }
    }
    ctx->pc = 0x14DD94u;
    // 0x14dd94: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x14dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_14dd98:
    // 0x14dd98: 0x0  nop
    ctx->pc = 0x14dd98u;
    // NOP
    // 0x14dd9c: 0x0  nop
    ctx->pc = 0x14dd9cu;
    // NOP
    // 0x14dda0: 0x0  nop
    ctx->pc = 0x14dda0u;
    // NOP
    // 0x14dda4: 0x0  nop
    ctx->pc = 0x14dda4u;
    // NOP
    // 0x14dda8: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14DDA8u;
    {
        const bool branch_taken_0x14dda8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14dda8) {
            ctx->pc = 0x14DDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DDA8u;
            // 0x14ddac: 0x2463ffc0  addiu       $v1, $v1, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14dd98;
        }
    }
    ctx->pc = 0x14DDB0u;
label_14ddb0:
    // 0x14ddb0: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x14ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_14ddb4:
    // 0x14ddb4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DDB4u;
    {
        const bool branch_taken_0x14ddb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDB4u;
        // 0x14ddb8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ddb4) {
            ctx->pc = 0x14DDC4u;
            goto label_14ddc4;
        }
    }
    ctx->pc = 0x14DDBCu;
    // 0x14ddbc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x14DDBCu;
    SET_GPR_U32(ctx, 31, 0x14DDC4u);
    ctx->pc = 0x14DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DDBCu;
    // 0x14ddc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x14DDBCu, 0x14DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DDC4u;
label_14ddc4:
    // 0x14ddc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ddc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ddc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ddc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ddcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ddccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ddd0: 0x3e00008  jr          $ra
    ctx->pc = 0x14DDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDD0u;
        // 0x14ddd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DDD8u;
}
