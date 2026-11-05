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

// Function: sub_0021E3C8
// Address: 0x21e3c8 - 0x21e658
void sub_0021E3C8_0x21e3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E3C8_0x21e3c8");
#endif

    switch (ctx->pc) {
        case 0x21e444u: goto label_21e444;
        case 0x21e464u: goto label_21e464;
        case 0x21e480u: goto label_21e480;
        case 0x21e48cu: goto label_21e48c;
        case 0x21e5c4u: goto label_21e5c4;
        case 0x21e5d0u: goto label_21e5d0;
        case 0x21e5e4u: goto label_21e5e4;
        case 0x21e5f8u: goto label_21e5f8;
        case 0x21e630u: goto label_21e630;
        default: break;
    }

    ctx->pc = 0x21e3c8u;

    // 0x21e3c8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x21e3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x21e3cc: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x21e3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x21e3d0: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x21e3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x21e3d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21e3d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e3d8: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x21e3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x21e3dc: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x21e3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x21e3e0: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x21e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x21e3e4: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x21e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x21e3e8: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x21e3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x21e3ec: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x21e3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x21e3f0: 0x86820018  lh          $v0, 0x18($s4)
    ctx->pc = 0x21e3f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x21e3f4: 0x1840008f  blez        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x21E3F4u;
    {
        const bool branch_taken_0x21e3f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3F4u;
        // 0x21e3f8: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e3f4) {
            ctx->pc = 0x21E634u;
            goto label_21e634;
        }
    }
    ctx->pc = 0x21E3FCu;
    // 0x21e3fc: 0x8e960014  lw          $s6, 0x14($s4)
    ctx->pc = 0x21e3fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x21e400: 0x12c0008d  beqz        $s6, . + 4 + (0x8D << 2)
    ctx->pc = 0x21E400u;
    {
        const bool branch_taken_0x21e400 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E400u;
        // 0x21e404: 0xdfb100d8  ld          $s1, 0xD8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e400) {
            ctx->pc = 0x21E638u;
            goto label_21e638;
        }
    }
    ctx->pc = 0x21E408u;
    // 0x21e408: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x21e408u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21e40c: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x21E40Cu;
    {
        const bool branch_taken_0x21e40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E40Cu;
        // 0x21e410: 0x2403020f  addiu       $v1, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e40c) {
            ctx->pc = 0x21E638u;
            goto label_21e638;
        }
    }
    ctx->pc = 0x21E414u;
    // 0x21e414: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21e418: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x21e418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x21e41c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E41Cu;
    {
        const bool branch_taken_0x21e41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E41Cu;
        // 0x21e420: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e41c) {
            ctx->pc = 0x21E438u;
            goto label_21e438;
        }
    }
    ctx->pc = 0x21E424u;
    // 0x21e424: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21e424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21e428: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x21e428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x21e42c: 0x24843588  addiu       $a0, $a0, 0x3588
    ctx->pc = 0x21e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13704));
    // 0x21e430: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21E430u;
    {
        const bool branch_taken_0x21e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E430u;
        // 0x21e434: 0x24a595f8  addiu       $a1, $a1, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e430) {
            ctx->pc = 0x21E45Cu;
            goto label_21e45c;
        }
    }
    ctx->pc = 0x21E438u;
label_21e438:
    // 0x21e438: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21e438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e43c: 0xc0c3482  jal         func_30D208
    ctx->pc = 0x21E43Cu;
    SET_GPR_U32(ctx, 31, 0x21E444u);
    ctx->pc = 0x21E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E43Cu;
    // 0x21e440: 0x2484ff68  addiu       $a0, $a0, -0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D208u, 0x21E43Cu, 0x21E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E444u;
label_21e444:
    // 0x21e444: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21e444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e448: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x21E448u;
    {
        const bool branch_taken_0x21e448 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E448u;
        // 0x21e44c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e448) {
            ctx->pc = 0x21E470u;
            goto label_21e470;
        }
    }
    ctx->pc = 0x21E450u;
    // 0x21e450: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21e450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21e454: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21e454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e458: 0x24843578  addiu       $a0, $a0, 0x3578
    ctx->pc = 0x21e458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13688));
label_21e45c:
    // 0x21e45c: 0xc0c3482  jal         func_30D208
    ctx->pc = 0x21E45Cu;
    SET_GPR_U32(ctx, 31, 0x21E464u);
    ctx->pc = 0x30D208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D208u, 0x21E45Cu, 0x21E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E464u;
label_21e464:
    // 0x21e464: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21e464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e468: 0x12400069  beqz        $s2, . + 4 + (0x69 << 2)
    ctx->pc = 0x21E468u;
    {
        const bool branch_taken_0x21e468 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E468u;
        // 0x21e46c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e468) {
            ctx->pc = 0x21E610u;
            goto label_21e610;
        }
    }
    ctx->pc = 0x21E470u;
label_21e470:
    // 0x21e470: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x21e470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e474: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x21e474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21e478: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x21e478u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21e47c: 0x0  nop
    ctx->pc = 0x21e47cu;
    // NOP
label_21e480:
    // 0x21e480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e484: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x21E484u;
    SET_GPR_U32(ctx, 31, 0x21E48Cu);
    ctx->pc = 0x21E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E484u;
    // 0x21e488: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x21E484u, 0x21E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E48Cu;
label_21e48c:
    // 0x21e48c: 0x0  nop
    ctx->pc = 0x21e48cu;
    // NOP
    // 0x21e490: 0x1635fffb  bne         $s1, $s5, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21E490u;
    {
        const bool branch_taken_0x21e490 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x21E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E490u;
        // 0x21e494: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e490) {
            ctx->pc = 0x21E480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e480;
        }
    }
    ctx->pc = 0x21E498u;
    // 0x21e498: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21e49c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x21e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x21e4a0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x21e4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21e4a4: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x21e4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x21e4a8: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E4A8u;
    {
        const bool branch_taken_0x21e4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x21E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4A8u;
        // 0x21e4ac: 0xae82001c  sw          $v0, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4a8) {
            ctx->pc = 0x21E4C0u;
            goto label_21e4c0;
        }
    }
    ctx->pc = 0x21E4B0u;
    // 0x21e4b0: 0x30a3020f  andi        $v1, $a1, 0x20F
    ctx->pc = 0x21e4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)527);
    // 0x21e4b4: 0x2402020f  addiu       $v0, $zero, 0x20F
    ctx->pc = 0x21e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    // 0x21e4b8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E4B8u;
    {
        const bool branch_taken_0x21e4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4B8u;
        // 0x21e4bc: 0x30a31001  andi        $v1, $a1, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4097);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4b8) {
            ctx->pc = 0x21E508u;
            goto label_21e508;
        }
    }
    ctx->pc = 0x21E4C0u;
label_21e4c0:
    // 0x21e4c0: 0x3c013f90  lui         $at, 0x3F90
    ctx->pc = 0x21e4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16272 << 16));
    // 0x21e4c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21e4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e4c8: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x21e4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x21e4cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21e4ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x21e4d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21e4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e4d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x21e4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21e4d8: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x21e4d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x21e4dc: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x21e4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x21e4e0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x21e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x21e4e4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x21e4e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21e4e8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x21e4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21e4ec: 0x3c01bf90  lui         $at, 0xBF90
    ctx->pc = 0x21e4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49040 << 16));
    // 0x21e4f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21e4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e4f4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x21e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x21e4f8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x21e4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21e4fc: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x21e4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x21e500: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x21E500u;
    {
        const bool branch_taken_0x21e500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E500u;
        // 0x21e504: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e500) {
            ctx->pc = 0x21E5B0u;
            goto label_21e5b0;
        }
    }
    ctx->pc = 0x21E508u;
label_21e508:
    // 0x21e508: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x21e508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x21e50c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E50Cu;
    {
        const bool branch_taken_0x21e50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E50Cu;
        // 0x21e510: 0x30a33001  andi        $v1, $a1, 0x3001 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12289);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e50c) {
            ctx->pc = 0x21E520u;
            goto label_21e520;
        }
    }
    ctx->pc = 0x21E514u;
    // 0x21e514: 0x24023001  addiu       $v0, $zero, 0x3001
    ctx->pc = 0x21e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x21e518: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21E518u;
    {
        const bool branch_taken_0x21e518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e518) {
            ctx->pc = 0x21E51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E518u;
            // 0x21e51c: 0xc6410020  lwc1        $f1, 0x20($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E564u;
            goto label_21e564;
        }
    }
    ctx->pc = 0x21E520u;
label_21e520:
    // 0x21e520: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21e520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21e524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21e524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e528: 0x0  nop
    ctx->pc = 0x21e528u;
    // NOP
    // 0x21e52c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x21e52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21e530: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x21e530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x21e534: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x21e534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x21e538: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x21e538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x21e53c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x21e53cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21e540: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x21e540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21e544: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x21e544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x21e548: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21e548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e54c: 0x0  nop
    ctx->pc = 0x21e54cu;
    // NOP
    // 0x21e550: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x21e550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21e554: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x21e554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x21e558: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x21e558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x21e55c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21E55Cu;
    {
        const bool branch_taken_0x21e55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E55Cu;
        // 0x21e560: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e55c) {
            ctx->pc = 0x21E5B0u;
            goto label_21e5b0;
        }
    }
    ctx->pc = 0x21E564u;
label_21e564:
    // 0x21e564: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x21e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x21e568: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x21e568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21e56c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x21e56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e570: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21e570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21e574: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x21e574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e578: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x21e578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x21e57c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x21e57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e580: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x21e580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x21e584: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x21e584u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21e588: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x21e588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21e58c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x21e58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e590: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x21e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x21e594: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x21e594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21e598: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x21e598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e59c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21e59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21e5a0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x21e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e5a4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x21e5a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x21e5a8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x21e5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e5ac: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x21e5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_21e5b0:
    // 0x21e5b0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x21e5b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21e5b4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x21e5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21e5b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21e5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5bc: 0xc0878a8  jal         func_21E2A0
    ctx->pc = 0x21E5BCu;
    SET_GPR_U32(ctx, 31, 0x21E5C4u);
    ctx->pc = 0x21E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5BCu;
    // 0x21e5c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E2A0u, 0x21E5BCu, 0x21E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E5C4u;
label_21e5c4:
    // 0x21e5c4: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x21e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x21e5c8: 0xc0c2fe2  jal         func_30BF88
    ctx->pc = 0x21E5C8u;
    SET_GPR_U32(ctx, 31, 0x21E5D0u);
    ctx->pc = 0x21E5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5C8u;
    // 0x21e5cc: 0xc68c0100  lwc1        $f12, 0x100($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BF88u, 0x21E5C8u, 0x21E5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E5D0u;
label_21e5d0:
    // 0x21e5d0: 0x8e85018c  lw          $a1, 0x18C($s4)
    ctx->pc = 0x21e5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 396)));
    // 0x21e5d4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E5D4u;
    {
        const bool branch_taken_0x21e5d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5D4u;
        // 0x21e5d8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5d4) {
            ctx->pc = 0x21E5E8u;
            goto label_21e5e8;
        }
    }
    ctx->pc = 0x21E5DCu;
    // 0x21e5dc: 0xc0c3312  jal         func_30CC48
    ctx->pc = 0x21E5DCu;
    SET_GPR_U32(ctx, 31, 0x21E5E4u);
    ctx->pc = 0x21E5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5DCu;
    // 0x21e5e0: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CC48u, 0x21E5DCu, 0x21E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E5E4u;
label_21e5e4:
    // 0x21e5e4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21e5e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e5e8:
    // 0x21e5e8: 0x53a2000a  beql        $sp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21E5E8u;
    {
        const bool branch_taken_0x21e5e8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x21e5e8) {
            ctx->pc = 0x21E5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E5E8u;
            // 0x21e5ec: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E614u;
            goto label_21e614;
        }
    }
    ctx->pc = 0x21E5F0u;
    // 0x21e5f0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x21e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x21e5f4: 0x0  nop
    ctx->pc = 0x21e5f4u;
    // NOP
label_21e5f8:
    // 0x21e5f8: 0x0  nop
    ctx->pc = 0x21e5f8u;
    // NOP
    // 0x21e5fc: 0x0  nop
    ctx->pc = 0x21e5fcu;
    // NOP
    // 0x21e600: 0x0  nop
    ctx->pc = 0x21e600u;
    // NOP
    // 0x21e604: 0x0  nop
    ctx->pc = 0x21e604u;
    // NOP
    // 0x21e608: 0x17a2fffb  bne         $sp, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21E608u;
    {
        const bool branch_taken_0x21e608 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E608u;
        // 0x21e60c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e608) {
            ctx->pc = 0x21E5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e5f8;
        }
    }
    ctx->pc = 0x21E610u;
label_21e610:
    // 0x21e610: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x21e610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_21e614:
    // 0x21e614: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E614u;
    {
        const bool branch_taken_0x21e614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E614u;
        // 0x21e618: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e614) {
            ctx->pc = 0x21E634u;
            goto label_21e634;
        }
    }
    ctx->pc = 0x21E61Cu;
    // 0x21e61c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e620: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x21e620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e624: 0x24a51de0  addiu       $a1, $a1, 0x1DE0
    ctx->pc = 0x21e624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7648));
    // 0x21e628: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x21E628u;
    SET_GPR_U32(ctx, 31, 0x21E630u);
    ctx->pc = 0x21E62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E628u;
    // 0x21e62c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x21E628u, 0x21E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E630u;
label_21e630:
    // 0x21e630: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x21e630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_21e634:
    // 0x21e634: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x21e634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_21e638:
    // 0x21e638: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x21e638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x21e63c: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x21e63cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x21e640: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x21e640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x21e644: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x21e644u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21e648: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x21e648u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21e64c: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x21e64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x21e650: 0x3e00008  jr          $ra
    ctx->pc = 0x21E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E650u;
        // 0x21e654: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E658u;
}
