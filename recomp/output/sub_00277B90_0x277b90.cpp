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

// Function: sub_00277B90
// Address: 0x277b90 - 0x277c58
void sub_00277B90_0x277b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277B90_0x277b90");
#endif

    switch (ctx->pc) {
        case 0x277bc4u: goto label_277bc4;
        case 0x277be0u: goto label_277be0;
        case 0x277becu: goto label_277bec;
        case 0x277bfcu: goto label_277bfc;
        case 0x277c1cu: goto label_277c1c;
        case 0x277c38u: goto label_277c38;
        default: break;
    }

    ctx->pc = 0x277b90u;

    // 0x277b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x277b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x277b94: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x277b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x277b98: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x277b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x277b9c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x277b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x277ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ba4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x277ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x277ba8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x277ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277bb0: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x277bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x277bb4: 0x24a582d8  addiu       $a1, $a1, -0x7D28
    ctx->pc = 0x277bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935256));
    // 0x277bb8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x277bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x277bbc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277BBCu;
    SET_GPR_U32(ctx, 31, 0x277BC4u);
    ctx->pc = 0x277BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BBCu;
    // 0x277bc0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277BBCu, 0x277BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BC4u;
label_277bc4:
    // 0x277bc4: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x277bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x277bc8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277bcc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x277bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x277bd0: 0x24a582e0  addiu       $a1, $a1, -0x7D20
    ctx->pc = 0x277bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935264));
    // 0x277bd4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x277bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x277bd8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277BD8u;
    SET_GPR_U32(ctx, 31, 0x277BE0u);
    ctx->pc = 0x277BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BD8u;
    // 0x277bdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277BD8u, 0x277BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BE0u;
label_277be0:
    // 0x277be0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x277be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x277be4: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x277BE4u;
    SET_GPR_U32(ctx, 31, 0x277BECu);
    ctx->pc = 0x277BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BE4u;
    // 0x277be8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x277BE4u, 0x277BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BECu;
label_277bec:
    // 0x277bec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277bf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x277bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bf4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x277BF4u;
    SET_GPR_U32(ctx, 31, 0x277BFCu);
    ctx->pc = 0x277BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BF4u;
    // 0x277bf8: 0x24a582e8  addiu       $a1, $a1, -0x7D18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x277BF4u, 0x277BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BFCu;
label_277bfc:
    // 0x277bfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x277bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x277c00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277C00u;
    {
        const bool branch_taken_0x277c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C00u;
        // 0x277c04: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c00) {
            ctx->pc = 0x277C10u;
            goto label_277c10;
        }
    }
    ctx->pc = 0x277C08u;
    // 0x277c08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x277C08u;
    {
        const bool branch_taken_0x277c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C08u;
        // 0x277c0c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c08) {
            ctx->pc = 0x277C2Cu;
            goto label_277c2c;
        }
    }
    ctx->pc = 0x277C10u;
label_277c10:
    // 0x277c10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x277c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c14: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x277C14u;
    SET_GPR_U32(ctx, 31, 0x277C1Cu);
    ctx->pc = 0x277C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C14u;
    // 0x277c18: 0x24a582f0  addiu       $a1, $a1, -0x7D10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x277C14u, 0x277C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C1Cu;
label_277c1c:
    // 0x277c1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x277c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x277c20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x277C20u;
    {
        const bool branch_taken_0x277c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C20u;
        // 0x277c24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c20) {
            ctx->pc = 0x277C2Cu;
            goto label_277c2c;
        }
    }
    ctx->pc = 0x277C28u;
    // 0x277c28: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x277c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_277c2c:
    // 0x277c2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x277c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c30: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x277C30u;
    SET_GPR_U32(ctx, 31, 0x277C38u);
    ctx->pc = 0x277C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C30u;
    // 0x277c34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x277C30u, 0x277C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C38u;
label_277c38:
    // 0x277c38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277c3c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x277c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277c40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x277c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x277c44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x277c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277c48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x277c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x277c4c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x277c4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x277c50: 0x3e00008  jr          $ra
    ctx->pc = 0x277C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C50u;
        // 0x277c54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277C58u;
}
