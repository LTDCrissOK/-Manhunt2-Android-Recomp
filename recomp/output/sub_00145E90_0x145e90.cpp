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

// Function: sub_00145E90
// Address: 0x145e90 - 0x145f30
void sub_00145E90_0x145e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145E90_0x145e90");
#endif

    switch (ctx->pc) {
        case 0x145ec4u: goto label_145ec4;
        case 0x145ef0u: goto label_145ef0;
        case 0x145f1cu: goto label_145f1c;
        default: break;
    }

    ctx->pc = 0x145e90u;

    // 0x145e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145e94: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x145e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x145e98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145e9c: 0x24420948  addiu       $v0, $v0, 0x948
    ctx->pc = 0x145e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2376));
    // 0x145ea0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145ea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145eac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x145eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x145eb0: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x145eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x145eb4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145EB4u;
    {
        const bool branch_taken_0x145eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x145EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145EB4u;
        // 0x145eb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145eb4) {
            ctx->pc = 0x145EC4u;
            goto label_145ec4;
        }
    }
    ctx->pc = 0x145EBCu;
    // 0x145ebc: 0xc0517e4  jal         func_145F90
    ctx->pc = 0x145EBCu;
    SET_GPR_U32(ctx, 31, 0x145EC4u);
    ctx->pc = 0x145F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F90u, 0x145EBCu, 0x145EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EC4u;
label_145ec4:
    // 0x145ec4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x145ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x145ec8: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x145ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x145ecc: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x145eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x145ed0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x145ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x145ed4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x145ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x145ed8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x145ED8u;
    {
        const bool branch_taken_0x145ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x145EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145ED8u;
        // 0x145edc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ed8) {
            ctx->pc = 0x145F08u;
            goto label_145f08;
        }
    }
    ctx->pc = 0x145EE0u;
    // 0x145ee0: 0x26030410  addiu       $v1, $s0, 0x410
    ctx->pc = 0x145ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x145ee4: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x145EE4u;
    {
        const bool branch_taken_0x145ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x145ee4) {
            ctx->pc = 0x145EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145EE4u;
            // 0x145ee8: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145F0Cu;
            goto label_145f0c;
        }
    }
    ctx->pc = 0x145EECu;
    // 0x145eec: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x145eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_145ef0:
    // 0x145ef0: 0x0  nop
    ctx->pc = 0x145ef0u;
    // NOP
    // 0x145ef4: 0x0  nop
    ctx->pc = 0x145ef4u;
    // NOP
    // 0x145ef8: 0x0  nop
    ctx->pc = 0x145ef8u;
    // NOP
    // 0x145efc: 0x0  nop
    ctx->pc = 0x145efcu;
    // NOP
    // 0x145f00: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x145F00u;
    {
        const bool branch_taken_0x145f00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x145f00) {
            ctx->pc = 0x145F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145F00u;
            // 0x145f04: 0x2463ffc0  addiu       $v1, $v1, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145ef0;
        }
    }
    ctx->pc = 0x145F08u;
label_145f08:
    // 0x145f08: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x145f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_145f0c:
    // 0x145f0c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145F0Cu;
    {
        const bool branch_taken_0x145f0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F0Cu;
        // 0x145f10: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f0c) {
            ctx->pc = 0x145F1Cu;
            goto label_145f1c;
        }
    }
    ctx->pc = 0x145F14u;
    // 0x145f14: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x145F14u;
    SET_GPR_U32(ctx, 31, 0x145F1Cu);
    ctx->pc = 0x145F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F14u;
    // 0x145f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x145F14u, 0x145F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F1Cu;
label_145f1c:
    // 0x145f1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145f20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145f24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145f28: 0x3e00008  jr          $ra
    ctx->pc = 0x145F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F28u;
        // 0x145f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145F30u;
}
