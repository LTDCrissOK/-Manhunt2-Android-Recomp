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

// Function: sub_00139310
// Address: 0x139310 - 0x1393e8
void sub_00139310_0x139310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139310_0x139310");
#endif

    switch (ctx->pc) {
        case 0x139344u: goto label_139344;
        case 0x139370u: goto label_139370;
        case 0x1393a8u: goto label_1393a8;
        case 0x1393d4u: goto label_1393d4;
        default: break;
    }

    ctx->pc = 0x139310u;

    // 0x139310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139314: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x139314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x139318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13931c: 0x24420648  addiu       $v0, $v0, 0x648
    ctx->pc = 0x13931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1608));
    // 0x139320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x139324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x139328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13932c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13932cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x139330: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x139330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x139334: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139334u;
    {
        const bool branch_taken_0x139334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x139338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139334u;
        // 0x139338: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139334) {
            ctx->pc = 0x139344u;
            goto label_139344;
        }
    }
    ctx->pc = 0x13933Cu;
    // 0x13933c: 0xc04e4fa  jal         func_1393E8
    ctx->pc = 0x13933Cu;
    SET_GPR_U32(ctx, 31, 0x139344u);
    ctx->pc = 0x1393E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1393E8u, 0x13933Cu, 0x139344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139344u;
label_139344:
    // 0x139344: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x139344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x139348: 0x260404f0  addiu       $a0, $s0, 0x4F0
    ctx->pc = 0x139348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1264));
    // 0x13934c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x13934cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x139350: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x139350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x139354: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x139354u;
    {
        const bool branch_taken_0x139354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x139358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139354u;
        // 0x139358: 0x3c070043  lui         $a3, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139354) {
            ctx->pc = 0x139388u;
            goto label_139388;
        }
    }
    ctx->pc = 0x13935Cu;
    // 0x13935c: 0x26030ab0  addiu       $v1, $s0, 0xAB0
    ctx->pc = 0x13935cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x139360: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x139360u;
    {
        const bool branch_taken_0x139360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x139360) {
            ctx->pc = 0x139364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139360u;
            // 0x139364: 0x244205f0  addiu       $v0, $v0, 0x5F0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13938Cu;
            goto label_13938c;
        }
    }
    ctx->pc = 0x139368u;
    // 0x139368: 0x2463ffa4  addiu       $v1, $v1, -0x5C
    ctx->pc = 0x139368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967204));
    // 0x13936c: 0x0  nop
    ctx->pc = 0x13936cu;
    // NOP
label_139370:
    // 0x139370: 0x0  nop
    ctx->pc = 0x139370u;
    // NOP
    // 0x139374: 0x0  nop
    ctx->pc = 0x139374u;
    // NOP
    // 0x139378: 0x0  nop
    ctx->pc = 0x139378u;
    // NOP
    // 0x13937c: 0x0  nop
    ctx->pc = 0x13937cu;
    // NOP
    // 0x139380: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x139380u;
    {
        const bool branch_taken_0x139380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x139380) {
            ctx->pc = 0x139384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139380u;
            // 0x139384: 0x2463ffa4  addiu       $v1, $v1, -0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967204));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139370;
        }
    }
    ctx->pc = 0x139388u;
label_139388:
    // 0x139388: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x139388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
label_13938c:
    // 0x13938c: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x13938Cu;
    {
        const bool branch_taken_0x13938c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x139390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13938Cu;
        // 0x139390: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13938c) {
            ctx->pc = 0x1393C0u;
            goto label_1393c0;
        }
    }
    ctx->pc = 0x139394u;
    // 0x139394: 0x26020410  addiu       $v0, $s0, 0x410
    ctx->pc = 0x139394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x139398: 0x50c2000a  beql        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x139398u;
    {
        const bool branch_taken_0x139398 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x139398) {
            ctx->pc = 0x13939Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139398u;
            // 0x13939c: 0x24e20638  addiu       $v0, $a3, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1393C4u;
            goto label_1393c4;
        }
    }
    ctx->pc = 0x1393A0u;
    // 0x1393a0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1393a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393a4: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x1393a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_1393a8:
    // 0x1393a8: 0x0  nop
    ctx->pc = 0x1393a8u;
    // NOP
    // 0x1393ac: 0x0  nop
    ctx->pc = 0x1393acu;
    // NOP
    // 0x1393b0: 0x0  nop
    ctx->pc = 0x1393b0u;
    // NOP
    // 0x1393b4: 0x0  nop
    ctx->pc = 0x1393b4u;
    // NOP
    // 0x1393b8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1393B8u;
    {
        const bool branch_taken_0x1393b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1393BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393B8u;
        // 0x1393bc: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1393b8) {
            ctx->pc = 0x1393A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1393a8;
        }
    }
    ctx->pc = 0x1393C0u;
label_1393c0:
    // 0x1393c0: 0x24e20638  addiu       $v0, $a3, 0x638
    ctx->pc = 0x1393c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1592));
label_1393c4:
    // 0x1393c4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1393C4u;
    {
        const bool branch_taken_0x1393c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1393C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393C4u;
        // 0x1393c8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1393c4) {
            ctx->pc = 0x1393D4u;
            goto label_1393d4;
        }
    }
    ctx->pc = 0x1393CCu;
    // 0x1393cc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1393CCu;
    SET_GPR_U32(ctx, 31, 0x1393D4u);
    ctx->pc = 0x1393D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1393CCu;
    // 0x1393d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1393CCu, 0x1393D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1393D4u;
label_1393d4:
    // 0x1393d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1393d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1393d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1393d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1393dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1393dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1393e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1393E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1393E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393E0u;
        // 0x1393e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1393E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1393E8u;
}
