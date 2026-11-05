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

// Function: sub_00147C90
// Address: 0x147c90 - 0x147d68
void sub_00147C90_0x147c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147C90_0x147c90");
#endif

    switch (ctx->pc) {
        case 0x147cc4u: goto label_147cc4;
        case 0x147cf0u: goto label_147cf0;
        case 0x147d28u: goto label_147d28;
        case 0x147d54u: goto label_147d54;
        default: break;
    }

    ctx->pc = 0x147c90u;

    // 0x147c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147c94: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x147c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x147c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x147c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x147c9c: 0x24420990  addiu       $v0, $v0, 0x990
    ctx->pc = 0x147c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
    // 0x147ca0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x147ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x147ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x147cac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x147cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x147cb0: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x147cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x147cb4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147CB4u;
    {
        const bool branch_taken_0x147cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CB4u;
        // 0x147cb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cb4) {
            ctx->pc = 0x147CC4u;
            goto label_147cc4;
        }
    }
    ctx->pc = 0x147CBCu;
    // 0x147cbc: 0xc051f6e  jal         func_147DB8
    ctx->pc = 0x147CBCu;
    SET_GPR_U32(ctx, 31, 0x147CC4u);
    ctx->pc = 0x147DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147DB8u, 0x147CBCu, 0x147CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CC4u;
label_147cc4:
    // 0x147cc4: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x147cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x147cc8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x147cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x147ccc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x147cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x147cd0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x147cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x147cd4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x147CD4u;
    {
        const bool branch_taken_0x147cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CD4u;
        // 0x147cd8: 0x3c070043  lui         $a3, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cd4) {
            ctx->pc = 0x147D08u;
            goto label_147d08;
        }
    }
    ctx->pc = 0x147CDCu;
    // 0x147cdc: 0x260306a0  addiu       $v1, $s0, 0x6A0
    ctx->pc = 0x147cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1696));
    // 0x147ce0: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x147CE0u;
    {
        const bool branch_taken_0x147ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x147ce0) {
            ctx->pc = 0x147CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147CE0u;
            // 0x147ce4: 0x244205f0  addiu       $v0, $v0, 0x5F0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147D0Cu;
            goto label_147d0c;
        }
    }
    ctx->pc = 0x147CE8u;
    // 0x147ce8: 0x2463ffe4  addiu       $v1, $v1, -0x1C
    ctx->pc = 0x147ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x147cec: 0x0  nop
    ctx->pc = 0x147cecu;
    // NOP
label_147cf0:
    // 0x147cf0: 0x0  nop
    ctx->pc = 0x147cf0u;
    // NOP
    // 0x147cf4: 0x0  nop
    ctx->pc = 0x147cf4u;
    // NOP
    // 0x147cf8: 0x0  nop
    ctx->pc = 0x147cf8u;
    // NOP
    // 0x147cfc: 0x0  nop
    ctx->pc = 0x147cfcu;
    // NOP
    // 0x147d00: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147D00u;
    {
        const bool branch_taken_0x147d00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x147d00) {
            ctx->pc = 0x147D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147D00u;
            // 0x147d04: 0x2463ffe4  addiu       $v1, $v1, -0x1C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147cf0;
        }
    }
    ctx->pc = 0x147D08u;
label_147d08:
    // 0x147d08: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x147d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
label_147d0c:
    // 0x147d0c: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x147D0Cu;
    {
        const bool branch_taken_0x147d0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D0Cu;
        // 0x147d10: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d0c) {
            ctx->pc = 0x147D40u;
            goto label_147d40;
        }
    }
    ctx->pc = 0x147D14u;
    // 0x147d14: 0x26020410  addiu       $v0, $s0, 0x410
    ctx->pc = 0x147d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x147d18: 0x50c2000a  beql        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x147D18u;
    {
        const bool branch_taken_0x147d18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x147d18) {
            ctx->pc = 0x147D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147D18u;
            // 0x147d1c: 0x24e20638  addiu       $v0, $a3, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147D44u;
            goto label_147d44;
        }
    }
    ctx->pc = 0x147D20u;
    // 0x147d20: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x147d20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147d24: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x147d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_147d28:
    // 0x147d28: 0x0  nop
    ctx->pc = 0x147d28u;
    // NOP
    // 0x147d2c: 0x0  nop
    ctx->pc = 0x147d2cu;
    // NOP
    // 0x147d30: 0x0  nop
    ctx->pc = 0x147d30u;
    // NOP
    // 0x147d34: 0x0  nop
    ctx->pc = 0x147d34u;
    // NOP
    // 0x147d38: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147D38u;
    {
        const bool branch_taken_0x147d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x147D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D38u;
        // 0x147d3c: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d38) {
            ctx->pc = 0x147D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147d28;
        }
    }
    ctx->pc = 0x147D40u;
label_147d40:
    // 0x147d40: 0x24e20638  addiu       $v0, $a3, 0x638
    ctx->pc = 0x147d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1592));
label_147d44:
    // 0x147d44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147D44u;
    {
        const bool branch_taken_0x147d44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D44u;
        // 0x147d48: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d44) {
            ctx->pc = 0x147D54u;
            goto label_147d54;
        }
    }
    ctx->pc = 0x147D4Cu;
    // 0x147d4c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x147D4Cu;
    SET_GPR_U32(ctx, 31, 0x147D54u);
    ctx->pc = 0x147D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147D4Cu;
    // 0x147d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x147D4Cu, 0x147D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D54u;
label_147d54:
    // 0x147d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x147d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x147d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x147d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147d60: 0x3e00008  jr          $ra
    ctx->pc = 0x147D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D60u;
        // 0x147d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147D68u;
}
