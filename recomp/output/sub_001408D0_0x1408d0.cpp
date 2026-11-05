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

// Function: sub_001408D0
// Address: 0x1408d0 - 0x140970
void sub_001408D0_0x1408d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001408D0_0x1408d0");
#endif

    switch (ctx->pc) {
        case 0x140904u: goto label_140904;
        case 0x140930u: goto label_140930;
        case 0x14095cu: goto label_14095c;
        default: break;
    }

    ctx->pc = 0x1408d0u;

    // 0x1408d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1408d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1408d4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1408d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1408d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1408d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1408dc: 0x24420778  addiu       $v0, $v0, 0x778
    ctx->pc = 0x1408dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1912));
    // 0x1408e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1408e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1408e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1408e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1408e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1408e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1408ec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1408ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1408f0: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x1408f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x1408f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1408F4u;
    {
        const bool branch_taken_0x1408f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1408F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408F4u;
        // 0x1408f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408f4) {
            ctx->pc = 0x140904u;
            goto label_140904;
        }
    }
    ctx->pc = 0x1408FCu;
    // 0x1408fc: 0xc050270  jal         func_1409C0
    ctx->pc = 0x1408FCu;
    SET_GPR_U32(ctx, 31, 0x140904u);
    ctx->pc = 0x1409C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1409C0u, 0x1408FCu, 0x140904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140904u;
label_140904:
    // 0x140904: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x140904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x140908: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x140908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x14090c: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x14090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x140910: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x140910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x140914: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x140914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x140918: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x140918u;
    {
        const bool branch_taken_0x140918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140918u;
        // 0x14091c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140918) {
            ctx->pc = 0x140948u;
            goto label_140948;
        }
    }
    ctx->pc = 0x140920u;
    // 0x140920: 0x26030410  addiu       $v1, $s0, 0x410
    ctx->pc = 0x140920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x140924: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x140924u;
    {
        const bool branch_taken_0x140924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x140924) {
            ctx->pc = 0x140928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140924u;
            // 0x140928: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14094Cu;
            goto label_14094c;
        }
    }
    ctx->pc = 0x14092Cu;
    // 0x14092c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x14092cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_140930:
    // 0x140930: 0x0  nop
    ctx->pc = 0x140930u;
    // NOP
    // 0x140934: 0x0  nop
    ctx->pc = 0x140934u;
    // NOP
    // 0x140938: 0x0  nop
    ctx->pc = 0x140938u;
    // NOP
    // 0x14093c: 0x0  nop
    ctx->pc = 0x14093cu;
    // NOP
    // 0x140940: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x140940u;
    {
        const bool branch_taken_0x140940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x140940) {
            ctx->pc = 0x140944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140940u;
            // 0x140944: 0x2463ffc0  addiu       $v1, $v1, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140930;
        }
    }
    ctx->pc = 0x140948u;
label_140948:
    // 0x140948: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x140948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_14094c:
    // 0x14094c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14094Cu;
    {
        const bool branch_taken_0x14094c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x140950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14094Cu;
        // 0x140950: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14094c) {
            ctx->pc = 0x14095Cu;
            goto label_14095c;
        }
    }
    ctx->pc = 0x140954u;
    // 0x140954: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x140954u;
    SET_GPR_U32(ctx, 31, 0x14095Cu);
    ctx->pc = 0x140958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140954u;
    // 0x140958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x140954u, 0x14095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14095Cu;
label_14095c:
    // 0x14095c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14095cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x140960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140968: 0x3e00008  jr          $ra
    ctx->pc = 0x140968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140968u;
        // 0x14096c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140970u;
}
