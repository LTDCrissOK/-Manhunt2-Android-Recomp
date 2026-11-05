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

// Function: sub_0020E3F8
// Address: 0x20e3f8 - 0x20e4e0
void sub_0020E3F8_0x20e3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E3F8_0x20e3f8");
#endif

    switch (ctx->pc) {
        case 0x20e43cu: goto label_20e43c;
        case 0x20e450u: goto label_20e450;
        case 0x20e45cu: goto label_20e45c;
        case 0x20e464u: goto label_20e464;
        case 0x20e480u: goto label_20e480;
        case 0x20e494u: goto label_20e494;
        case 0x20e4a8u: goto label_20e4a8;
        case 0x20e4b4u: goto label_20e4b4;
        case 0x20e4c8u: goto label_20e4c8;
        default: break;
    }

    ctx->pc = 0x20e3f8u;

    // 0x20e3f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20e3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20e3fc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x20e3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x20e400: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x20e400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x20e404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e408: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20e408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20e40c: 0x92020116  lbu         $v0, 0x116($s0)
    ctx->pc = 0x20e40cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 278)));
    // 0x20e410: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20e410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20e414: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x20e414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x20e418: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x20E418u;
    {
        const bool branch_taken_0x20e418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e418) {
            ctx->pc = 0x20E41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E418u;
            // 0x20e41c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E4CCu;
            goto label_20e4cc;
        }
    }
    ctx->pc = 0x20E420u;
    // 0x20e420: 0x92020117  lbu         $v0, 0x117($s0)
    ctx->pc = 0x20e420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 279)));
    // 0x20e424: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20e428: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x20e428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e42c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x20E42Cu;
    {
        const bool branch_taken_0x20e42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E42Cu;
        // 0x20e430: 0xa2020117  sb          $v0, 0x117($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 279), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e42c) {
            ctx->pc = 0x20E4C8u;
            goto label_20e4c8;
        }
    }
    ctx->pc = 0x20E434u;
    // 0x20e434: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x20E434u;
    SET_GPR_U32(ctx, 31, 0x20E43Cu);
    ctx->pc = 0x20E438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E434u;
    // 0x20e438: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x20E434u, 0x20E43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E43Cu;
label_20e43c:
    // 0x20e43c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x20e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x20e440: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20e440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e444: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20e444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e448: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x20E448u;
    SET_GPR_U32(ctx, 31, 0x20E450u);
    ctx->pc = 0x20E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E448u;
    // 0x20e44c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x20E448u, 0x20E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E450u;
label_20e450:
    // 0x20e450: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x20e450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x20e454: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x20E454u;
    SET_GPR_U32(ctx, 31, 0x20E45Cu);
    ctx->pc = 0x20E458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E454u;
    // 0x20e458: 0x8c910004  lw          $s1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x20E454u, 0x20E45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E45Cu;
label_20e45c:
    // 0x20e45c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20E45Cu;
    SET_GPR_U32(ctx, 31, 0x20E464u);
    ctx->pc = 0x20E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E45Cu;
    // 0x20e460: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20E45Cu, 0x20E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E464u;
label_20e464:
    // 0x20e464: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x20e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x20e468: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E468u;
    {
        const bool branch_taken_0x20e468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e468) {
            ctx->pc = 0x20E46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E468u;
            // 0x20e46c: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E484u;
            goto label_20e484;
        }
    }
    ctx->pc = 0x20E470u;
    // 0x20e470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20e470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20e474: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20e474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20e478: 0xc0c31f4  jal         func_30C7D0
    ctx->pc = 0x20E478u;
    SET_GPR_U32(ctx, 31, 0x20E480u);
    ctx->pc = 0x20E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E478u;
    // 0x20e47c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C7D0u, 0x20E478u, 0x20E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E480u;
label_20e480:
    // 0x20e480: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x20e480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
label_20e484:
    // 0x20e484: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x20e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x20e488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e48c: 0xc085ea2  jal         func_217A88
    ctx->pc = 0x20E48Cu;
    SET_GPR_U32(ctx, 31, 0x20E494u);
    ctx->pc = 0x20E490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E48Cu;
    // 0x20e490: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217A88u, 0x20E48Cu, 0x20E494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E494u;
label_20e494:
    // 0x20e494: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x20e494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x20e498: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20e498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e49c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e4a0: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x20E4A0u;
    SET_GPR_U32(ctx, 31, 0x20E4A8u);
    ctx->pc = 0x20E4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4A0u;
    // 0x20e4a4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x20E4A0u, 0x20E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4A8u;
label_20e4a8:
    // 0x20e4a8: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x20e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x20e4ac: 0xc0c32d8  jal         func_30CB60
    ctx->pc = 0x20E4ACu;
    SET_GPR_U32(ctx, 31, 0x20E4B4u);
    ctx->pc = 0x20E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4ACu;
    // 0x20e4b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CB60u, 0x20E4ACu, 0x20E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4B4u;
label_20e4b4:
    // 0x20e4b4: 0x92020116  lbu         $v0, 0x116($s0)
    ctx->pc = 0x20e4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 278)));
    // 0x20e4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4bc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20e4c0: 0xc083892  jal         func_20E248
    ctx->pc = 0x20E4C0u;
    SET_GPR_U32(ctx, 31, 0x20E4C8u);
    ctx->pc = 0x20E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4C0u;
    // 0x20e4c4: 0xa2020116  sb          $v0, 0x116($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 278), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E248u, 0x20E4C0u, 0x20E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4C8u;
label_20e4c8:
    // 0x20e4c8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x20e4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20e4cc:
    // 0x20e4cc: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x20e4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e4d0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20e4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20e4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x20E4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E4D4u;
        // 0x20e4d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E4DCu;
    // 0x20e4dc: 0x0  nop
    ctx->pc = 0x20e4dcu;
    // NOP
    ctx->pc = 0x20e4e0u;
}
