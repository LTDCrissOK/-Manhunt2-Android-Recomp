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

// Function: sub_00390258
// Address: 0x390258 - 0x3903d0
void sub_00390258_0x390258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390258_0x390258");
#endif

    switch (ctx->pc) {
        case 0x39027cu: goto label_39027c;
        case 0x390294u: goto label_390294;
        case 0x3902d4u: goto label_3902d4;
        case 0x390348u: goto label_390348;
        case 0x390368u: goto label_390368;
        case 0x390378u: goto label_390378;
        case 0x390394u: goto label_390394;
        case 0x3903a4u: goto label_3903a4;
        default: break;
    }

    ctx->pc = 0x390258u;

    // 0x390258: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x390258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x39025c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x39025cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x390260: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x390260u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x390264: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x390264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x390268: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x390268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x39026c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x39026cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x390270: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x390270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x390274: 0xc0e44ea  jal         func_3913A8
    ctx->pc = 0x390274u;
    SET_GPR_U32(ctx, 31, 0x39027Cu);
    ctx->pc = 0x390278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390274u;
    // 0x390278: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3913A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3913A8u, 0x390274u, 0x39027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39027Cu;
label_39027c:
    // 0x39027c: 0x8e30a478  lw          $s0, -0x5B88($s1)
    ctx->pc = 0x39027cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943864)));
    // 0x390280: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x390280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x390284: 0x1202004a  beq         $s0, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x390284u;
    {
        const bool branch_taken_0x390284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x390288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390284u;
        // 0x390288: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390284) {
            ctx->pc = 0x3903B0u;
            goto label_3903b0;
        }
    }
    ctx->pc = 0x39028Cu;
    // 0x39028c: 0xc0e4ed6  jal         func_393B58
    ctx->pc = 0x39028Cu;
    SET_GPR_U32(ctx, 31, 0x390294u);
    ctx->pc = 0x390290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39028Cu;
    // 0x390290: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B58u, 0x39028Cu, 0x390294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390294u;
label_390294:
    // 0x390294: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x390294u;
    {
        const bool branch_taken_0x390294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390294u;
        // 0x390298: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390294) {
            ctx->pc = 0x3903B0u;
            goto label_3903b0;
        }
    }
    ctx->pc = 0x39029Cu;
    // 0x39029c: 0x3c0142b1  lui         $at, 0x42B1
    ctx->pc = 0x39029cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17073 << 16));
    // 0x3902a0: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x3902a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x3902a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3902a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3902a8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3902a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3902ac: 0x0  nop
    ctx->pc = 0x3902acu;
    // NOP
    // 0x3902b0: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x3902B0u;
    {
        const bool branch_taken_0x3902b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3902B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3902B0u;
        // 0x3902b4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3902b0) {
            ctx->pc = 0x390314u;
            goto label_390314;
        }
    }
    ctx->pc = 0x3902B8u;
    // 0x3902b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3902b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3902bc: 0x24429900  addiu       $v0, $v0, -0x6700
    ctx->pc = 0x3902bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940928));
    // 0x3902c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3902c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3902c4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3902c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3902c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3902c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3902cc: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x3902CCu;
    SET_GPR_U32(ctx, 31, 0x3902D4u);
    ctx->pc = 0x3902D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3902CCu;
    // 0x3902d0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3902CCu, 0x3902D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3902D4u;
label_3902d4:
    // 0x3902d4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3902d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3902d8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3902D8u;
    {
        const bool branch_taken_0x3902d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3902DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3902D8u;
        // 0x3902dc: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3902d8) {
            ctx->pc = 0x3902F0u;
            goto label_3902f0;
        }
    }
    ctx->pc = 0x3902E0u;
    // 0x3902e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x3902e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x3902e4: 0xdc229908  ld          $v0, -0x66F8($at)
    ctx->pc = 0x3902e4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x479908u));
    // 0x3902e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3902E8u;
    {
        const bool branch_taken_0x3902e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3902ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3902E8u;
        // 0x3902ec: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3902e8) {
            ctx->pc = 0x3902FCu;
            goto label_3902fc;
        }
    }
    ctx->pc = 0x3902F0u;
label_3902f0:
    // 0x3902f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3902f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3902f4: 0xdc43a470  ld          $v1, -0x5B90($v0)
    ctx->pc = 0x3902f4u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47A470u));
    // 0x3902f8: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x3902f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_3902fc:
    // 0x3902fc: 0x8e23a478  lw          $v1, -0x5B88($s1)
    ctx->pc = 0x3902fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943864)));
    // 0x390300: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x390300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x390304: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x390304u;
    {
        const bool branch_taken_0x390304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x390304) {
            ctx->pc = 0x390370u;
            goto label_390370;
        }
    }
    ctx->pc = 0x39030Cu;
    // 0x39030c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x39030Cu;
    {
        const bool branch_taken_0x39030c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39030c) {
            ctx->pc = 0x390360u;
            goto label_390360;
        }
    }
    ctx->pc = 0x390314u;
label_390314:
    // 0x390314: 0x3c01c2cf  lui         $at, 0xC2CF
    ctx->pc = 0x390314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49871 << 16));
    // 0x390318: 0x3421f1b5  ori         $at, $at, 0xF1B5
    ctx->pc = 0x390318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61877);
    // 0x39031c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39031cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x390320: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x390320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x390324: 0x0  nop
    ctx->pc = 0x390324u;
    // NOP
    // 0x390328: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x390328u;
    {
        const bool branch_taken_0x390328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390328u;
        // 0x39032c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390328) {
            ctx->pc = 0x3903ACu;
            goto label_3903ac;
        }
    }
    ctx->pc = 0x390330u;
    // 0x390330: 0x24429900  addiu       $v0, $v0, -0x6700
    ctx->pc = 0x390330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940928));
    // 0x390334: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x390334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x390338: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x390338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x39033c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39033cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x390340: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390340u;
    SET_GPR_U32(ctx, 31, 0x390348u);
    ctx->pc = 0x390344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390340u;
    // 0x390344: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390340u, 0x390348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390348u;
label_390348:
    // 0x390348: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x390348u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39034c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x39034cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x390350: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x390350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x390354: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x390354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x390358: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x390358u;
    {
        const bool branch_taken_0x390358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x39035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390358u;
        // 0x39035c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390358) {
            ctx->pc = 0x390370u;
            goto label_390370;
        }
    }
    ctx->pc = 0x390360u;
label_390360:
    // 0x390360: 0xc0e4e4a  jal         func_393928
    ctx->pc = 0x390360u;
    SET_GPR_U32(ctx, 31, 0x390368u);
    ctx->pc = 0x390364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390360u;
    // 0x390364: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393928u, 0x390360u, 0x390368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390368u;
label_390368:
    // 0x390368: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x390368u;
    {
        const bool branch_taken_0x390368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390368u;
        // 0x39036c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390368) {
            ctx->pc = 0x390384u;
            goto label_390384;
        }
    }
    ctx->pc = 0x390370u;
label_390370:
    // 0x390370: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390370u;
    SET_GPR_U32(ctx, 31, 0x390378u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390370u, 0x390378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390378u;
label_390378:
    // 0x390378: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x390378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x39037c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39037cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x390380: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x390380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_390384:
    // 0x390384: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390384u;
    {
        const bool branch_taken_0x390384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x390384) {
            ctx->pc = 0x39039Cu;
            goto label_39039c;
        }
    }
    ctx->pc = 0x39038Cu;
    // 0x39038c: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x39038Cu;
    SET_GPR_U32(ctx, 31, 0x390394u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x39038Cu, 0x390394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390394u;
label_390394:
    // 0x390394: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x390394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390398: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x390398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_39039c:
    // 0x39039c: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x39039Cu;
    SET_GPR_U32(ctx, 31, 0x3903A4u);
    ctx->pc = 0x3903A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39039Cu;
    // 0x3903a0: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x39039Cu, 0x3903A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3903A4u;
label_3903a4:
    // 0x3903a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3903A4u;
    {
        const bool branch_taken_0x3903a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3903A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3903A4u;
        // 0x3903a8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3903a4) {
            ctx->pc = 0x3903B4u;
            goto label_3903b4;
        }
    }
    ctx->pc = 0x3903ACu;
label_3903ac:
    // 0x3903ac: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x3903acu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_3903b0:
    // 0x3903b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3903b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3903b4:
    // 0x3903b4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x3903b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3903b8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3903b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3903bc: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x3903bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3903c0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3903c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3903c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3903C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3903C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3903C4u;
        // 0x3903c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3903C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3903CCu;
    // 0x3903cc: 0x0  nop
    ctx->pc = 0x3903ccu;
    // NOP
    ctx->pc = 0x3903d0u;
}
