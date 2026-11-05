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

// Function: sub_0020FEA8
// Address: 0x20fea8 - 0x20ff40
void sub_0020FEA8_0x20fea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FEA8_0x20fea8");
#endif

    switch (ctx->pc) {
        case 0x20ff14u: goto label_20ff14;
        case 0x20ff2cu: goto label_20ff2c;
        default: break;
    }

    ctx->pc = 0x20fea8u;

    // 0x20fea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20fea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20feac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20feacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20feb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20feb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20feb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20feb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20feb8: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x20feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x20febc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x20FEBCu;
    {
        const bool branch_taken_0x20febc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20febc) {
            ctx->pc = 0x20FEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FEBCu;
            // 0x20fec0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FF30u;
            goto label_20ff30;
        }
    }
    ctx->pc = 0x20FEC4u;
    // 0x20fec4: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x20fec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x20fec8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20fec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20fecc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x20FECCu;
    {
        const bool branch_taken_0x20fecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fecc) {
            ctx->pc = 0x20FED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FECCu;
            // 0x20fed0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FF30u;
            goto label_20ff30;
        }
    }
    ctx->pc = 0x20FED4u;
    // 0x20fed4: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x20fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x20fed8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x20fed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x20fedc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20FEDCu;
    {
        const bool branch_taken_0x20fedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FEDCu;
        // 0x20fee0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fedc) {
            ctx->pc = 0x20FEF0u;
            goto label_20fef0;
        }
    }
    ctx->pc = 0x20FEE4u;
    // 0x20fee4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x20fee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20fee8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20FEE8u;
    {
        const bool branch_taken_0x20fee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fee8) {
            ctx->pc = 0x20FEF4u;
            goto label_20fef4;
        }
    }
    ctx->pc = 0x20FEF0u;
label_20fef0:
    // 0x20fef0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20fef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fef4:
    // 0x20fef4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x20FEF4u;
    {
        const bool branch_taken_0x20fef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FEF4u;
        // 0x20fef8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fef4) {
            ctx->pc = 0x20FF2Cu;
            goto label_20ff2c;
        }
    }
    ctx->pc = 0x20FEFCu;
    // 0x20fefc: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x20fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x20ff00: 0xc44c2b30  lwc1        $f12, 0x2B30($v0)
    ctx->pc = 0x20ff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20ff04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ff04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ff08: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x20ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20ff0c: 0xc07466e  jal         func_1D19B8
    ctx->pc = 0x20FF0Cu;
    SET_GPR_U32(ctx, 31, 0x20FF14u);
    ctx->pc = 0x20FF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF0Cu;
    // 0x20ff10: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B8u, 0x20FF0Cu, 0x20FF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF14u;
label_20ff14:
    // 0x20ff14: 0x8e040194  lw          $a0, 0x194($s0)
    ctx->pc = 0x20ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x20ff18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ff18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ff1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20ff1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ff20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20ff20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ff24: 0xc07400e  jal         func_1D0038
    ctx->pc = 0x20FF24u;
    SET_GPR_U32(ctx, 31, 0x20FF2Cu);
    ctx->pc = 0x20FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FF24u;
    // 0x20ff28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0038u, 0x20FF24u, 0x20FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF2Cu;
label_20ff2c:
    // 0x20ff2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ff2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ff30:
    // 0x20ff30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20ff30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ff34: 0x3e00008  jr          $ra
    ctx->pc = 0x20FF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF34u;
        // 0x20ff38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FF3Cu;
    // 0x20ff3c: 0x0  nop
    ctx->pc = 0x20ff3cu;
    // NOP
    ctx->pc = 0x20ff40u;
}
