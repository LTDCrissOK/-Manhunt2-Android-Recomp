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

// Function: sub_001B68D0
// Address: 0x1b68d0 - 0x1b69b8
void sub_001B68D0_0x1b68d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B68D0_0x1b68d0");
#endif

    switch (ctx->pc) {
        case 0x1b695cu: goto label_1b695c;
        case 0x1b69a4u: goto label_1b69a4;
        default: break;
    }

    ctx->pc = 0x1b68d0u;

    // 0x1b68d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b68d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b68d4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b68d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1b68d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b68d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b68dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b68dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b68e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b68e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b68e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b68e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b68e8: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x1b68e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b68ec: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1b68ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b68f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b68f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b68f4: 0x0  nop
    ctx->pc = 0x1b68f4u;
    // NOP
    // 0x1b68f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B68F8u;
    {
        const bool branch_taken_0x1b68f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68F8u;
        // 0x1b68fc: 0x8c420ff4  lw          $v0, 0xFF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68f8) {
            ctx->pc = 0x1B6914u;
            goto label_1b6914;
        }
    }
    ctx->pc = 0x1B6900u;
    // 0x1b6900: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b6900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b6904: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b6904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b6908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b690c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B690Cu;
    {
        const bool branch_taken_0x1b690c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B690Cu;
        // 0x1b6910: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b690c) {
            ctx->pc = 0x1B6968u;
            goto label_1b6968;
        }
    }
    ctx->pc = 0x1B6914u;
label_1b6914:
    // 0x1b6914: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x1b6914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6918: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b6918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b691c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b691cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b6920: 0x0  nop
    ctx->pc = 0x1b6920u;
    // NOP
    // 0x1b6924: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1b6924u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6928: 0x0  nop
    ctx->pc = 0x1b6928u;
    // NOP
    // 0x1b692c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1B692Cu;
    {
        const bool branch_taken_0x1b692c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b692c) {
            ctx->pc = 0x1B6930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B692Cu;
            // 0x1b6930: 0x8e040230  lw          $a0, 0x230($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B694Cu;
            goto label_1b694c;
        }
    }
    ctx->pc = 0x1B6934u;
    // 0x1b6934: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1b6934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6938: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1b6938u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b693c: 0x0  nop
    ctx->pc = 0x1b693cu;
    // NOP
    // 0x1b6940: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6940u;
    {
        const bool branch_taken_0x1b6940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6940) {
            ctx->pc = 0x1B6944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6940u;
            // 0x1b6944: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6964u;
            goto label_1b6964;
        }
    }
    ctx->pc = 0x1B6948u;
    // 0x1b6948: 0x8e040230  lw          $a0, 0x230($s0)
    ctx->pc = 0x1b6948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
label_1b694c:
    // 0x1b694c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b694cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6950: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x1b6950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1b6954: 0xc072704  jal         func_1C9C10
    ctx->pc = 0x1B6954u;
    SET_GPR_U32(ctx, 31, 0x1B695Cu);
    ctx->pc = 0x1B6958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6954u;
    // 0x1b6958: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9C10u, 0x1B6954u, 0x1B695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B695Cu;
label_1b695c:
    // 0x1b695c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B695Cu;
    {
        const bool branch_taken_0x1b695c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B695Cu;
        // 0x1b6960: 0x8e020228  lw          $v0, 0x228($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b695c) {
            ctx->pc = 0x1B6970u;
            goto label_1b6970;
        }
    }
    ctx->pc = 0x1B6964u;
label_1b6964:
    // 0x1b6964: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1b6964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b6968:
    // 0x1b6968: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b6968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b696c: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x1b696cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_1b6970:
    // 0x1b6970: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B6970u;
    {
        const bool branch_taken_0x1b6970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6970u;
        // 0x1b6974: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6970) {
            ctx->pc = 0x1B6998u;
            goto label_1b6998;
        }
    }
    ctx->pc = 0x1B6978u;
    // 0x1b6978: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1b6978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1b697c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b697cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b6980: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b6980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b6984: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1b6984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6988: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b6988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b698c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b698cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b6990: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b6990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b6994: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b6994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b6998:
    // 0x1b6998: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x1b6998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b699c: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1B699Cu;
    SET_GPR_U32(ctx, 31, 0x1B69A4u);
    ctx->pc = 0x1B69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B699Cu;
    // 0x1b69a0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1B699Cu, 0x1B69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69A4u;
label_1b69a4:
    // 0x1b69a4: 0xe6000150  swc1        $f0, 0x150($s0)
    ctx->pc = 0x1b69a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1b69a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b69a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b69ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b69acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b69b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B69B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69B0u;
        // 0x1b69b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B69B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B69B8u;
}
