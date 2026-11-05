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

// Function: sub_00158DD0
// Address: 0x158dd0 - 0x158e80
void sub_00158DD0_0x158dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158DD0_0x158dd0");
#endif

    switch (ctx->pc) {
        case 0x158e0cu: goto label_158e0c;
        case 0x158e38u: goto label_158e38;
        case 0x158e64u: goto label_158e64;
        default: break;
    }

    ctx->pc = 0x158dd0u;

    // 0x158dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158dd4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x158dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x158dd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158ddc: 0x24420c60  addiu       $v0, $v0, 0xC60
    ctx->pc = 0x158ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
    // 0x158de0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x158de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158de8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x158de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x158dec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x158decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158df0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x158df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x158df4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x158df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x158df8: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x158df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x158dfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158DFCu;
    {
        const bool branch_taken_0x158dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DFCu;
        // 0x158e00: 0x26120210  addiu       $s2, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158dfc) {
            ctx->pc = 0x158E0Cu;
            goto label_158e0c;
        }
    }
    ctx->pc = 0x158E04u;
    // 0x158e04: 0xc0563b6  jal         func_158ED8
    ctx->pc = 0x158E04u;
    SET_GPR_U32(ctx, 31, 0x158E0Cu);
    ctx->pc = 0x158ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158ED8u, 0x158E04u, 0x158E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E0Cu;
label_158e0c:
    // 0x158e0c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x158e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x158e10: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x158e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x158e14: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x158e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
    // 0x158e18: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x158e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x158e1c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x158e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x158e20: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x158E20u;
    {
        const bool branch_taken_0x158e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E20u;
        // 0x158e24: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e20) {
            ctx->pc = 0x158E50u;
            goto label_158e50;
        }
    }
    ctx->pc = 0x158E28u;
    // 0x158e28: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x158e28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e2c: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x158E2Cu;
    {
        const bool branch_taken_0x158e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158e2c) {
            ctx->pc = 0x158E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158E2Cu;
            // 0x158e30: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158E54u;
            goto label_158e54;
        }
    }
    ctx->pc = 0x158E34u;
    // 0x158e34: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x158e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_158e38:
    // 0x158e38: 0x0  nop
    ctx->pc = 0x158e38u;
    // NOP
    // 0x158e3c: 0x0  nop
    ctx->pc = 0x158e3cu;
    // NOP
    // 0x158e40: 0x0  nop
    ctx->pc = 0x158e40u;
    // NOP
    // 0x158e44: 0x0  nop
    ctx->pc = 0x158e44u;
    // NOP
    // 0x158e48: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x158E48u;
    {
        const bool branch_taken_0x158e48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158e48) {
            ctx->pc = 0x158E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158E48u;
            // 0x158e4c: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158e38;
        }
    }
    ctx->pc = 0x158E50u;
label_158e50:
    // 0x158e50: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x158e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_158e54:
    // 0x158e54: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158E54u;
    {
        const bool branch_taken_0x158e54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E54u;
        // 0x158e58: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e54) {
            ctx->pc = 0x158E64u;
            goto label_158e64;
        }
    }
    ctx->pc = 0x158E5Cu;
    // 0x158e5c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x158E5Cu;
    SET_GPR_U32(ctx, 31, 0x158E64u);
    ctx->pc = 0x158E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E5Cu;
    // 0x158e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x158E5Cu, 0x158E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E64u;
label_158e64:
    // 0x158e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158e68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x158e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158e6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158e70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x158e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x158e74: 0x3e00008  jr          $ra
    ctx->pc = 0x158E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E74u;
        // 0x158e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158E7Cu;
    // 0x158e7c: 0x0  nop
    ctx->pc = 0x158e7cu;
    // NOP
    ctx->pc = 0x158e80u;
}
