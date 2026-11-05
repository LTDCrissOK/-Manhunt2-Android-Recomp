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

// Function: sub_0024A268
// Address: 0x24a268 - 0x24a4a8
void sub_0024A268_0x24a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A268_0x24a268");
#endif

    switch (ctx->pc) {
        case 0x24a290u: goto label_24a290;
        case 0x24a2ecu: goto label_24a2ec;
        case 0x24a318u: goto label_24a318;
        case 0x24a374u: goto label_24a374;
        case 0x24a384u: goto label_24a384;
        case 0x24a398u: goto label_24a398;
        case 0x24a3bcu: goto label_24a3bc;
        case 0x24a3ccu: goto label_24a3cc;
        case 0x24a3dcu: goto label_24a3dc;
        case 0x24a410u: goto label_24a410;
        case 0x24a428u: goto label_24a428;
        case 0x24a444u: goto label_24a444;
        case 0x24a45cu: goto label_24a45c;
        case 0x24a470u: goto label_24a470;
        case 0x24a484u: goto label_24a484;
        default: break;
    }

    ctx->pc = 0x24a268u;

    // 0x24a268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24a268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24a26c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24a26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24a270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a274: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x24a278: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24a27c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x24a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x24a280: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x24a280u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24a284: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x24a284u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24a288: 0xc0925be  jal         func_2496F8
    ctx->pc = 0x24A288u;
    SET_GPR_U32(ctx, 31, 0x24A290u);
    ctx->pc = 0x24A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A288u;
    // 0x24a28c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2496F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2496F8u, 0x24A288u, 0x24A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A290u;
label_24a290:
    // 0x24a290: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x24A290u;
    {
        const bool branch_taken_0x24a290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a290) {
            ctx->pc = 0x24A294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A290u;
            // 0x24a294: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A488u;
            goto label_24a488;
        }
    }
    ctx->pc = 0x24A298u;
    // 0x24a298: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x24a298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24a29c: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x24a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x24a2a0: 0x8c64014c  lw          $a0, 0x14C($v1)
    ctx->pc = 0x24a2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x24a2a4: 0x10820077  beq         $a0, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x24A2A4u;
    {
        const bool branch_taken_0x24a2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2A4u;
        // 0x24a2a8: 0x24110048  addiu       $s1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2a4) {
            ctx->pc = 0x24A484u;
            goto label_24a484;
        }
    }
    ctx->pc = 0x24A2ACu;
    // 0x24a2ac: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x24a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x24a2b0: 0x50510075  beql        $v0, $s1, . + 4 + (0x75 << 2)
    ctx->pc = 0x24A2B0u;
    {
        const bool branch_taken_0x24a2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x24a2b0) {
            ctx->pc = 0x24A2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A2B0u;
            // 0x24a2b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A488u;
            goto label_24a488;
        }
    }
    ctx->pc = 0x24A2B8u;
    // 0x24a2b8: 0x50800073  beql        $a0, $zero, . + 4 + (0x73 << 2)
    ctx->pc = 0x24A2B8u;
    {
        const bool branch_taken_0x24a2b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a2b8) {
            ctx->pc = 0x24A2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A2B8u;
            // 0x24a2bc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A488u;
            goto label_24a488;
        }
    }
    ctx->pc = 0x24A2C0u;
    // 0x24a2c0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x24a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x24a2c4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x24a2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x24a2c8: 0x5440006f  bnel        $v0, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x24A2C8u;
    {
        const bool branch_taken_0x24a2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a2c8) {
            ctx->pc = 0x24A2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A2C8u;
            // 0x24a2cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A488u;
            goto label_24a488;
        }
    }
    ctx->pc = 0x24A2D0u;
    // 0x24a2d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x24a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x24a2d4: 0x8e0305a0  lw          $v1, 0x5A0($s0)
    ctx->pc = 0x24a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x24a2d8: 0x8c452b00  lw          $a1, 0x2B00($v0)
    ctx->pc = 0x24a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B00u));
    // 0x24a2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a2e0: 0x3902b  sltu        $s2, $zero, $v1
    ctx->pc = 0x24a2e0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24a2e4: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x24A2E4u;
    SET_GPR_U32(ctx, 31, 0x24A2ECu);
    ctx->pc = 0x24A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A2E4u;
    // 0x24a2e8: 0xae05040c  sw          $a1, 0x40C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x24A2E4u, 0x24A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A2ECu;
label_24a2ec:
    // 0x24a2ec: 0x50400062  beql        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x24A2ECu;
    {
        const bool branch_taken_0x24a2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a2ec) {
            ctx->pc = 0x24A2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A2ECu;
            // 0x24a2f0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A478u;
            goto label_24a478;
        }
    }
    ctx->pc = 0x24A2F4u;
    // 0x24a2f4: 0x8e0205c8  lw          $v0, 0x5C8($s0)
    ctx->pc = 0x24a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1480)));
    // 0x24a2f8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A2F8u;
    {
        const bool branch_taken_0x24a2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a2f8) {
            ctx->pc = 0x24A2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A2F8u;
            // 0x24a2fc: 0xc6010500  lwc1        $f1, 0x500($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A320u;
            goto label_24a320;
        }
    }
    ctx->pc = 0x24A300u;
    // 0x24a300: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24a304: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x24a304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x24a308: 0x1051005e  beq         $v0, $s1, . + 4 + (0x5E << 2)
    ctx->pc = 0x24A308u;
    {
        const bool branch_taken_0x24a308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x24A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A308u;
        // 0x24a30c: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a308) {
            ctx->pc = 0x24A484u;
            goto label_24a484;
        }
    }
    ctx->pc = 0x24A310u;
    // 0x24a310: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x24A310u;
    SET_GPR_U32(ctx, 31, 0x24A318u);
    ctx->pc = 0x24A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A310u;
    // 0x24a314: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24A310u, 0x24A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A318u;
label_24a318:
    // 0x24a318: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x24A318u;
    {
        const bool branch_taken_0x24a318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A318u;
        // 0x24a31c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a318) {
            ctx->pc = 0x24A488u;
            goto label_24a488;
        }
    }
    ctx->pc = 0x24A320u;
label_24a320:
    // 0x24a320: 0xc60004fc  lwc1        $f0, 0x4FC($s0)
    ctx->pc = 0x24a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a324: 0x46000d45  abs.s       $f21, $f1
    ctx->pc = 0x24a324u;
    ctx->f[21] = FPU_ABS_S(ctx->f[1]);
    // 0x24a328: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x24a328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x24a32c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24a32cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24a330: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24a330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24a334: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x24a334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24a338: 0x46000505  abs.s       $f20, $f0
    ctx->pc = 0x24a338u;
    ctx->f[20] = FPU_ABS_S(ctx->f[0]);
    // 0x24a33c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24a33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24a340: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x24a340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24a344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24a348: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x24a348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x24a34c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x24A34Cu;
    {
        const bool branch_taken_0x24a34c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A34Cu;
        // 0x24a350: 0x8e1100b8  lw          $s1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a34c) {
            ctx->pc = 0x24A37Cu;
            goto label_24a37c;
        }
    }
    ctx->pc = 0x24A354u;
    // 0x24a354: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x24a354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a358: 0x0  nop
    ctx->pc = 0x24a358u;
    // NOP
    // 0x24a35c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24A35Cu;
    {
        const bool branch_taken_0x24a35c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A35Cu;
        // 0x24a360: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a35c) {
            ctx->pc = 0x24A37Cu;
            goto label_24a37c;
        }
    }
    ctx->pc = 0x24A364u;
    // 0x24a364: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24a364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24a368: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x24a368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x24a36c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x24A36Cu;
    SET_GPR_U32(ctx, 31, 0x24A374u);
    ctx->pc = 0x24A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A36Cu;
    // 0x24a370: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24A36Cu, 0x24A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A374u;
label_24a374:
    // 0x24a374: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x24A374u;
    {
        const bool branch_taken_0x24a374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A374u;
        // 0x24a378: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a374) {
            ctx->pc = 0x24A460u;
            goto label_24a460;
        }
    }
    ctx->pc = 0x24A37Cu;
label_24a37c:
    // 0x24a37c: 0xc0bf868  jal         func_2FE1A0
    ctx->pc = 0x24A37Cu;
    SET_GPR_U32(ctx, 31, 0x24A384u);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x24A37Cu, 0x24A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A384u;
label_24a384:
    // 0x24a384: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A384u;
    {
        const bool branch_taken_0x24a384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A384u;
        // 0x24a388: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a384) {
            ctx->pc = 0x24A398u;
            goto label_24a398;
        }
    }
    ctx->pc = 0x24A38Cu;
    // 0x24a38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a390: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x24A390u;
    SET_GPR_U32(ctx, 31, 0x24A398u);
    ctx->pc = 0x24A394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A390u;
    // 0x24a394: 0xc44c532c  lwc1        $f12, 0x532C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x24A390u, 0x24A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A398u;
label_24a398:
    // 0x24a398: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x24a398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a39c: 0x0  nop
    ctx->pc = 0x24a39cu;
    // NOP
    // 0x24a3a0: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
    ctx->pc = 0x24A3A0u;
    {
        const bool branch_taken_0x24a3a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a3a0) {
            ctx->pc = 0x24A3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A3A0u;
            // 0x24a3a4: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A430u;
            goto label_24a430;
        }
    }
    ctx->pc = 0x24A3A8u;
    // 0x24a3a8: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x24A3A8u;
    {
        const bool branch_taken_0x24a3a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3A8u;
        // 0x24a3ac: 0xc7b40004  lwc1        $f20, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3a8) {
            ctx->pc = 0x24A3E4u;
            goto label_24a3e4;
        }
    }
    ctx->pc = 0x24A3B0u;
    // 0x24a3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a3b4: 0xc08fc7c  jal         func_23F1F0
    ctx->pc = 0x24A3B4u;
    SET_GPR_U32(ctx, 31, 0x24A3BCu);
    ctx->pc = 0x24A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A3B4u;
    // 0x24a3b8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F1F0u, 0x24A3B4u, 0x24A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A3BCu;
label_24a3bc:
    // 0x24a3bc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A3BCu;
    {
        const bool branch_taken_0x24a3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a3bc) {
            ctx->pc = 0x24A3E4u;
            goto label_24a3e4;
        }
    }
    ctx->pc = 0x24A3C4u;
    // 0x24a3c4: 0xc092aa2  jal         func_24AA88
    ctx->pc = 0x24A3C4u;
    SET_GPR_U32(ctx, 31, 0x24A3CCu);
    ctx->pc = 0x24A3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A3C4u;
    // 0x24a3c8: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA88u, 0x24A3C4u, 0x24A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A3CCu;
label_24a3cc:
    // 0x24a3cc: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x24A3CCu;
    {
        const bool branch_taken_0x24a3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a3cc) {
            ctx->pc = 0x24A3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A3CCu;
            // 0x24a3d0: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A460u;
            goto label_24a460;
        }
    }
    ctx->pc = 0x24A3D4u;
    // 0x24a3d4: 0xc0927dc  jal         func_249F70
    ctx->pc = 0x24A3D4u;
    SET_GPR_U32(ctx, 31, 0x24A3DCu);
    ctx->pc = 0x249F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249F70u, 0x24A3D4u, 0x24A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A3DCu;
label_24a3dc:
    // 0x24a3dc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x24A3DCu;
    {
        const bool branch_taken_0x24a3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3DCu;
        // 0x24a3e0: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3dc) {
            ctx->pc = 0x24A460u;
            goto label_24a460;
        }
    }
    ctx->pc = 0x24A3E4u;
label_24a3e4:
    // 0x24a3e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a3e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a3e8: 0x0  nop
    ctx->pc = 0x24a3e8u;
    // NOP
    // 0x24a3ec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24a3ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a3f0: 0x0  nop
    ctx->pc = 0x24a3f0u;
    // NOP
    // 0x24a3f4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x24A3F4u;
    {
        const bool branch_taken_0x24a3f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a3f4) {
            ctx->pc = 0x24A3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A3F4u;
            // 0x24a3f8: 0xc6361440  lwc1        $f22, 0x1440($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A400u;
            goto label_24a400;
        }
    }
    ctx->pc = 0x24A3FCu;
    // 0x24a3fc: 0xc636143c  lwc1        $f22, 0x143C($s1)
    ctx->pc = 0x24a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_24a400:
    // 0x24a400: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24a404: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x24a404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x24a408: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x24A408u;
    SET_GPR_U32(ctx, 31, 0x24A410u);
    ctx->pc = 0x24A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A408u;
    // 0x24a40c: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24A408u, 0x24A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A410u;
label_24a410:
    // 0x24a410: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x24a410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24a414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a41c: 0xac620160  sw          $v0, 0x160($v1)
    ctx->pc = 0x24a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 2));
    // 0x24a420: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x24A420u;
    SET_GPR_U32(ctx, 31, 0x24A428u);
    ctx->pc = 0x24A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A420u;
    // 0x24a424: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x24A420u, 0x24A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A428u;
label_24a428:
    // 0x24a428: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24A428u;
    {
        const bool branch_taken_0x24a428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A428u;
        // 0x24a42c: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a428) {
            ctx->pc = 0x24A460u;
            goto label_24a460;
        }
    }
    ctx->pc = 0x24A430u;
label_24a430:
    // 0x24a430: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x24a430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x24a434: 0xc6361444  lwc1        $f22, 0x1444($s1)
    ctx->pc = 0x24a434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24a438: 0x240607ee  addiu       $a2, $zero, 0x7EE
    ctx->pc = 0x24a438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2030));
    // 0x24a43c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x24A43Cu;
    SET_GPR_U32(ctx, 31, 0x24A444u);
    ctx->pc = 0x24A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A43Cu;
    // 0x24a440: 0xc7b40000  lwc1        $f20, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24A43Cu, 0x24A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A444u;
label_24a444:
    // 0x24a444: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x24a444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24a448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a44c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a450: 0xac620160  sw          $v0, 0x160($v1)
    ctx->pc = 0x24a450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 2));
    // 0x24a454: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x24A454u;
    SET_GPR_U32(ctx, 31, 0x24A45Cu);
    ctx->pc = 0x24A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A454u;
    // 0x24a458: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x24A454u, 0x24A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A45Cu;
label_24a45c:
    // 0x24a45c: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x24a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24a460:
    // 0x24a460: 0x4616a302  mul.s       $f12, $f20, $f22
    ctx->pc = 0x24a460u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x24a464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a468: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x24A468u;
    SET_GPR_U32(ctx, 31, 0x24A470u);
    ctx->pc = 0x24A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A468u;
    // 0x24a46c: 0x8c4401e4  lw          $a0, 0x1E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x24A468u, 0x24A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A470u;
label_24a470:
    // 0x24a470: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24A470u;
    {
        const bool branch_taken_0x24a470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A470u;
        // 0x24a474: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a470) {
            ctx->pc = 0x24A488u;
            goto label_24a488;
        }
    }
    ctx->pc = 0x24A478u;
label_24a478:
    // 0x24a478: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x24a478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x24a47c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x24A47Cu;
    SET_GPR_U32(ctx, 31, 0x24A484u);
    ctx->pc = 0x24A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A47Cu;
    // 0x24a480: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24A47Cu, 0x24A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A484u;
label_24a484:
    // 0x24a484: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24a484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a488:
    // 0x24a488: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24a488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24a48c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24a48cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a490: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24a490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24a494: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x24a494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24a498: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x24a498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24a49c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x24a49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24a4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x24A4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4A0u;
        // 0x24a4a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A4A8u;
}
