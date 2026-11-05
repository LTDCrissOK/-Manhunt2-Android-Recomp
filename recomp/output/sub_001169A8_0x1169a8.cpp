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

// Function: sub_001169A8
// Address: 0x1169a8 - 0x116af8
void sub_001169A8_0x1169a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001169A8_0x1169a8");
#endif

    switch (ctx->pc) {
        case 0x1169e0u: goto label_1169e0;
        case 0x116a10u: goto label_116a10;
        case 0x116a48u: goto label_116a48;
        case 0x116a80u: goto label_116a80;
        case 0x116ab8u: goto label_116ab8;
        case 0x116ae4u: goto label_116ae4;
        default: break;
    }

    ctx->pc = 0x1169a8u;

    // 0x1169a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1169a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1169ac: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1169acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1169b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1169b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1169b4: 0x24420488  addiu       $v0, $v0, 0x488
    ctx->pc = 0x1169b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1160));
    // 0x1169b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1169b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1169bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1169bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1169c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1169c4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1169c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1169c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1169c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1169cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1169ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1169d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1169D0u;
    {
        const bool branch_taken_0x1169d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1169D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169D0u;
        // 0x1169d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169d0) {
            ctx->pc = 0x1169E0u;
            goto label_1169e0;
        }
    }
    ctx->pc = 0x1169D8u;
    // 0x1169d8: 0xc045ace  jal         func_116B38
    ctx->pc = 0x1169D8u;
    SET_GPR_U32(ctx, 31, 0x1169E0u);
    ctx->pc = 0x116B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116B38u, 0x1169D8u, 0x1169E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169E0u;
label_1169e0:
    // 0x1169e0: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x1169e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1169e4: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x1169e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1169e8: 0x26070058  addiu       $a3, $s0, 0x58
    ctx->pc = 0x1169e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1169ec: 0x26080040  addiu       $t0, $s0, 0x40
    ctx->pc = 0x1169ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1169f0: 0x26090028  addiu       $t1, $s0, 0x28
    ctx->pc = 0x1169f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1169f4: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1169F4u;
    {
        const bool branch_taken_0x1169f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1169F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169F4u;
        // 0x1169f8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169f4) {
            ctx->pc = 0x116A28u;
            goto label_116a28;
        }
    }
    ctx->pc = 0x1169FCu;
    // 0x1169fc: 0x26030088  addiu       $v1, $s0, 0x88
    ctx->pc = 0x1169fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x116a00: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x116A00u;
    {
        const bool branch_taken_0x116a00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x116a00) {
            ctx->pc = 0x116A28u;
            goto label_116a28;
        }
    }
    ctx->pc = 0x116A08u;
    // 0x116a08: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x116a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a0c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x116a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_116a10:
    // 0x116a10: 0x0  nop
    ctx->pc = 0x116a10u;
    // NOP
    // 0x116a14: 0x0  nop
    ctx->pc = 0x116a14u;
    // NOP
    // 0x116a18: 0x0  nop
    ctx->pc = 0x116a18u;
    // NOP
    // 0x116a1c: 0x0  nop
    ctx->pc = 0x116a1cu;
    // NOP
    // 0x116a20: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x116A20u;
    {
        const bool branch_taken_0x116a20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x116a20) {
            ctx->pc = 0x116A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116A20u;
            // 0x116a24: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116a10;
        }
    }
    ctx->pc = 0x116A28u;
label_116a28:
    // 0x116a28: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x116A28u;
    {
        const bool branch_taken_0x116a28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x116a28) {
            ctx->pc = 0x116A60u;
            goto label_116a60;
        }
    }
    ctx->pc = 0x116A30u;
    // 0x116a30: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x116a30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a34: 0x10e3000a  beq         $a3, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x116A34u;
    {
        const bool branch_taken_0x116a34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x116a34) {
            ctx->pc = 0x116A60u;
            goto label_116a60;
        }
    }
    ctx->pc = 0x116A3Cu;
    // 0x116a3c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x116a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a40: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x116a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x116a44: 0x0  nop
    ctx->pc = 0x116a44u;
    // NOP
label_116a48:
    // 0x116a48: 0x0  nop
    ctx->pc = 0x116a48u;
    // NOP
    // 0x116a4c: 0x0  nop
    ctx->pc = 0x116a4cu;
    // NOP
    // 0x116a50: 0x0  nop
    ctx->pc = 0x116a50u;
    // NOP
    // 0x116a54: 0x0  nop
    ctx->pc = 0x116a54u;
    // NOP
    // 0x116a58: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x116A58u;
    {
        const bool branch_taken_0x116a58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x116a58) {
            ctx->pc = 0x116A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116A58u;
            // 0x116a5c: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116a48;
        }
    }
    ctx->pc = 0x116A60u;
label_116a60:
    // 0x116a60: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x116A60u;
    {
        const bool branch_taken_0x116a60 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x116a60) {
            ctx->pc = 0x116A98u;
            goto label_116a98;
        }
    }
    ctx->pc = 0x116A68u;
    // 0x116a68: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x116a68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a6c: 0x1103000a  beq         $t0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x116A6Cu;
    {
        const bool branch_taken_0x116a6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x116a6c) {
            ctx->pc = 0x116A98u;
            goto label_116a98;
        }
    }
    ctx->pc = 0x116A74u;
    // 0x116a74: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x116a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a78: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x116a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x116a7c: 0x0  nop
    ctx->pc = 0x116a7cu;
    // NOP
label_116a80:
    // 0x116a80: 0x0  nop
    ctx->pc = 0x116a80u;
    // NOP
    // 0x116a84: 0x0  nop
    ctx->pc = 0x116a84u;
    // NOP
    // 0x116a88: 0x0  nop
    ctx->pc = 0x116a88u;
    // NOP
    // 0x116a8c: 0x0  nop
    ctx->pc = 0x116a8cu;
    // NOP
    // 0x116a90: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x116A90u;
    {
        const bool branch_taken_0x116a90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x116a90) {
            ctx->pc = 0x116A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116A90u;
            // 0x116a94: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116a80;
        }
    }
    ctx->pc = 0x116A98u;
label_116a98:
    // 0x116a98: 0x5120000e  beql        $t1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x116A98u;
    {
        const bool branch_taken_0x116a98 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x116a98) {
            ctx->pc = 0x116A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116A98u;
            // 0x116a9c: 0x24420348  addiu       $v0, $v0, 0x348 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 840));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116AD4u;
            goto label_116ad4;
        }
    }
    ctx->pc = 0x116AA0u;
    // 0x116aa0: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x116aa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116aa4: 0x5123000b  beql        $t1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x116AA4u;
    {
        const bool branch_taken_0x116aa4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x116aa4) {
            ctx->pc = 0x116AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116AA4u;
            // 0x116aa8: 0x24420348  addiu       $v0, $v0, 0x348 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 840));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116AD4u;
            goto label_116ad4;
        }
    }
    ctx->pc = 0x116AACu;
    // 0x116aac: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x116aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ab0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x116ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x116ab4: 0x0  nop
    ctx->pc = 0x116ab4u;
    // NOP
label_116ab8:
    // 0x116ab8: 0x0  nop
    ctx->pc = 0x116ab8u;
    // NOP
    // 0x116abc: 0x0  nop
    ctx->pc = 0x116abcu;
    // NOP
    // 0x116ac0: 0x0  nop
    ctx->pc = 0x116ac0u;
    // NOP
    // 0x116ac4: 0x0  nop
    ctx->pc = 0x116ac4u;
    // NOP
    // 0x116ac8: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x116AC8u;
    {
        const bool branch_taken_0x116ac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x116ac8) {
            ctx->pc = 0x116ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116AC8u;
            // 0x116acc: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116ab8;
        }
    }
    ctx->pc = 0x116AD0u;
    // 0x116ad0: 0x24420348  addiu       $v0, $v0, 0x348
    ctx->pc = 0x116ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 840));
label_116ad4:
    // 0x116ad4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116AD4u;
    {
        const bool branch_taken_0x116ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x116AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AD4u;
        // 0x116ad8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ad4) {
            ctx->pc = 0x116AE4u;
            goto label_116ae4;
        }
    }
    ctx->pc = 0x116ADCu;
    // 0x116adc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x116ADCu;
    SET_GPR_U32(ctx, 31, 0x116AE4u);
    ctx->pc = 0x116AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116ADCu;
    // 0x116ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x116ADCu, 0x116AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AE4u;
label_116ae4:
    // 0x116ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116aec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116af0: 0x3e00008  jr          $ra
    ctx->pc = 0x116AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AF0u;
        // 0x116af4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116AF8u;
}
