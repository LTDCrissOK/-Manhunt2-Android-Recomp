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

// Function: sub_0020E340
// Address: 0x20e340 - 0x20e3f8
void sub_0020E340_0x20e340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E340_0x20e340");
#endif

    switch (ctx->pc) {
        case 0x20e36cu: goto label_20e36c;
        case 0x20e380u: goto label_20e380;
        case 0x20e398u: goto label_20e398;
        case 0x20e3a8u: goto label_20e3a8;
        case 0x20e3bcu: goto label_20e3bc;
        case 0x20e3c8u: goto label_20e3c8;
        case 0x20e3dcu: goto label_20e3dc;
        default: break;
    }

    ctx->pc = 0x20e340u;

    // 0x20e340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20e340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20e344: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x20e344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x20e348: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x20e348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x20e34c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20e34cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e350: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20e350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20e354: 0x92220116  lbu         $v0, 0x116($s1)
    ctx->pc = 0x20e354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 278)));
    // 0x20e358: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20e358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20e35c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20E35Cu;
    {
        const bool branch_taken_0x20e35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E35Cu;
        // 0x20e360: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e35c) {
            ctx->pc = 0x20E3E0u;
            goto label_20e3e0;
        }
    }
    ctx->pc = 0x20E364u;
    // 0x20e364: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x20E364u;
    SET_GPR_U32(ctx, 31, 0x20E36Cu);
    ctx->pc = 0x20E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E364u;
    // 0x20e368: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x20E364u, 0x20E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E36Cu;
label_20e36c:
    // 0x20e36c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x20e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x20e370: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20e370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e374: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20e374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e378: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x20E378u;
    SET_GPR_U32(ctx, 31, 0x20E380u);
    ctx->pc = 0x20E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E378u;
    // 0x20e37c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x20E378u, 0x20E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E380u;
label_20e380:
    // 0x20e380: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x20e380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x20e384: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x20e384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x20e388: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x20e388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20e38c: 0xae220108  sw          $v0, 0x108($s1)
    ctx->pc = 0x20e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
    // 0x20e390: 0xc0c31d0  jal         func_30C740
    ctx->pc = 0x20E390u;
    SET_GPR_U32(ctx, 31, 0x20E398u);
    ctx->pc = 0x20E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E390u;
    // 0x20e394: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x20E390u, 0x20E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E398u;
label_20e398:
    // 0x20e398: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x20e398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x20e39c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e3a0: 0xc085ea2  jal         func_217A88
    ctx->pc = 0x20E3A0u;
    SET_GPR_U32(ctx, 31, 0x20E3A8u);
    ctx->pc = 0x20E3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E3A0u;
    // 0x20e3a4: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217A88u, 0x20E3A0u, 0x20E3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3A8u;
label_20e3a8:
    // 0x20e3a8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x20e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x20e3ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20e3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e3b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e3b4: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x20E3B4u;
    SET_GPR_U32(ctx, 31, 0x20E3BCu);
    ctx->pc = 0x20E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E3B4u;
    // 0x20e3b8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x20E3B4u, 0x20E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3BCu;
label_20e3bc:
    // 0x20e3bc: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x20e3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x20e3c0: 0xc0c32d8  jal         func_30CB60
    ctx->pc = 0x20E3C0u;
    SET_GPR_U32(ctx, 31, 0x20E3C8u);
    ctx->pc = 0x20E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E3C0u;
    // 0x20e3c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CB60u, 0x20E3C0u, 0x20E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3C8u;
label_20e3c8:
    // 0x20e3c8: 0x92220116  lbu         $v0, 0x116($s1)
    ctx->pc = 0x20e3c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 278)));
    // 0x20e3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e3d0: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x20e3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x20e3d4: 0xc083892  jal         func_20E248
    ctx->pc = 0x20E3D4u;
    SET_GPR_U32(ctx, 31, 0x20E3DCu);
    ctx->pc = 0x20E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E3D4u;
    // 0x20e3d8: 0xa2220116  sb          $v0, 0x116($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 278), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E248u, 0x20E3D4u, 0x20E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3DCu;
label_20e3dc:
    // 0x20e3dc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x20e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_20e3e0:
    // 0x20e3e0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x20e3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e3e4: 0xa2220117  sb          $v0, 0x117($s1)
    ctx->pc = 0x20e3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 279), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e3e8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x20e3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20e3ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20e3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20e3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x20E3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E3F0u;
        // 0x20e3f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E3F8u;
}
