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

// Function: sub_0027FA88
// Address: 0x27fa88 - 0x27fe90
void sub_0027FA88_0x27fa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FA88_0x27fa88");
#endif

    switch (ctx->pc) {
        case 0x27fb34u: goto label_27fb34;
        case 0x27fbccu: goto label_27fbcc;
        case 0x27fbd8u: goto label_27fbd8;
        case 0x27fbe4u: goto label_27fbe4;
        case 0x27fbf0u: goto label_27fbf0;
        case 0x27fbfcu: goto label_27fbfc;
        case 0x27fc08u: goto label_27fc08;
        case 0x27fc14u: goto label_27fc14;
        case 0x27fc20u: goto label_27fc20;
        case 0x27fc2cu: goto label_27fc2c;
        case 0x27fc38u: goto label_27fc38;
        case 0x27fc48u: goto label_27fc48;
        case 0x27fcc4u: goto label_27fcc4;
        case 0x27fd40u: goto label_27fd40;
        case 0x27fdc4u: goto label_27fdc4;
        case 0x27fe48u: goto label_27fe48;
        case 0x27fe50u: goto label_27fe50;
        case 0x27fe58u: goto label_27fe58;
        case 0x27fe60u: goto label_27fe60;
        default: break;
    }

    ctx->pc = 0x27fa88u;

    // 0x27fa88: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x27fa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x27fa8c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x27fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x27fa90: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x27fa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x27fa94: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x27fa94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27fa98: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x27fa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x27fa9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27fa9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27faa0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x27faa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x27faa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27faa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27faa8: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x27faa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x27faac: 0x2412001e  addiu       $s2, $zero, 0x1E
    ctx->pc = 0x27faacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27fab0: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x27fab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x27fab4: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x27fab4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27fab8: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x27fab8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x27fabc: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x27fabcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27fac0: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x27fac0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x27fac4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x27fac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27fac8: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x27fac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x27facc: 0x8c46bd48  lw          $a2, -0x42B8($v0)
    ctx->pc = 0x27faccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x27fad0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x27fad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x27fad4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x27fad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x27fad8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27fad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27fadc: 0x8cc30100  lw          $v1, 0x100($a2)
    ctx->pc = 0x27fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 256)));
    // 0x27fae0: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x27fae0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x27fae4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x27fae4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x27fae8: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x27fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27faec: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x27faecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x27faf0: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x27faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x27faf4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x27faf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27faf8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27faf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fafc: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x27fafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x27fb00: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x27fb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fb04: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x27fb04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x27fb08: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x27fb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fb0c: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x27fb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x27fb10: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x27fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fb14: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x27fb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27fb18: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x27fb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fb1c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x27fb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x27fb20: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x27fb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fb24: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x27fb24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x27fb28: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x27fb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fb2c: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x27FB2Cu;
    SET_GPR_U32(ctx, 31, 0x27FB34u);
    ctx->pc = 0x27FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB2Cu;
    // 0x27fb30: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x27FB2Cu, 0x27FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB34u;
label_27fb34:
    // 0x27fb34: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27fb34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x27fb38: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x27fb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x27fb3c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x27fb3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x27fb40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27fb40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fb44: 0x0  nop
    ctx->pc = 0x27fb44u;
    // NOP
    // 0x27fb48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27fb48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fb4c: 0x0  nop
    ctx->pc = 0x27fb4cu;
    // NOP
    // 0x27fb50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x27FB50u;
    {
        const bool branch_taken_0x27fb50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27fb50) {
            ctx->pc = 0x27FB60u;
            goto label_27fb60;
        }
    }
    ctx->pc = 0x27FB58u;
    // 0x27fb58: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27FB58u;
    {
        const bool branch_taken_0x27fb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB58u;
        // 0x27fb5c: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb58) {
            ctx->pc = 0x27FBB8u;
            goto label_27fbb8;
        }
    }
    ctx->pc = 0x27FB60u;
label_27fb60:
    // 0x27fb60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27fb60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fb64: 0x0  nop
    ctx->pc = 0x27fb64u;
    // NOP
    // 0x27fb68: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x27FB68u;
    {
        const bool branch_taken_0x27fb68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27fb68) {
            ctx->pc = 0x27FB98u;
            goto label_27fb98;
        }
    }
    ctx->pc = 0x27FB70u;
    // 0x27fb70: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x27fb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x27fb74: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x27fb74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x27fb78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27fb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fb7c: 0x0  nop
    ctx->pc = 0x27fb7cu;
    // NOP
    // 0x27fb80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27fb80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fb84: 0x0  nop
    ctx->pc = 0x27fb84u;
    // NOP
    // 0x27fb88: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x27FB88u;
    {
        const bool branch_taken_0x27fb88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27fb88) {
            ctx->pc = 0x27FBA4u;
            goto label_27fba4;
        }
    }
    ctx->pc = 0x27FB90u;
    // 0x27fb90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27FB90u;
    {
        const bool branch_taken_0x27fb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB90u;
        // 0x27fb94: 0x24120017  addiu       $s2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb90) {
            ctx->pc = 0x27FBB8u;
            goto label_27fbb8;
        }
    }
    ctx->pc = 0x27FB98u;
label_27fb98:
    // 0x27fb98: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x27fb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x27fb9c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x27fb9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x27fba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27fba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27fba4:
    // 0x27fba4: 0x0  nop
    ctx->pc = 0x27fba4u;
    // NOP
    // 0x27fba8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27fba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fbac: 0x0  nop
    ctx->pc = 0x27fbacu;
    // NOP
    // 0x27fbb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27FBB0u;
    {
        const bool branch_taken_0x27fbb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27fbb0) {
            ctx->pc = 0x27FBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FBB0u;
            // 0x27fbb4: 0x2412001a  addiu       $s2, $zero, 0x1A (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FBB8u;
            goto label_27fbb8;
        }
    }
    ctx->pc = 0x27FBB8u;
label_27fbb8:
    // 0x27fbb8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x27fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fbbc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x27fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fbc0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x27fbc0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27fbc4: 0xc0db198  jal         func_36C660
    ctx->pc = 0x27FBC4u;
    SET_GPR_U32(ctx, 31, 0x27FBCCu);
    ctx->pc = 0x27FBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBC4u;
    // 0x27fbc8: 0x4601ad42  mul.s       $f21, $f21, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x27FBC4u, 0x27FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBCCu;
label_27fbcc:
    // 0x27fbcc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x27fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27fbd0: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27FBD0u;
    SET_GPR_U32(ctx, 31, 0x27FBD8u);
    ctx->pc = 0x27FBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBD0u;
    // 0x27fbd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27FBD0u, 0x27FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBD8u;
label_27fbd8:
    // 0x27fbd8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x27fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x27fbdc: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27FBDCu;
    SET_GPR_U32(ctx, 31, 0x27FBE4u);
    ctx->pc = 0x27FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBDCu;
    // 0x27fbe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27FBDCu, 0x27FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBE4u;
label_27fbe4:
    // 0x27fbe4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x27fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x27fbe8: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27FBE8u;
    SET_GPR_U32(ctx, 31, 0x27FBF0u);
    ctx->pc = 0x27FBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBE8u;
    // 0x27fbec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27FBE8u, 0x27FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBF0u;
label_27fbf0:
    // 0x27fbf0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x27fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27fbf4: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27FBF4u;
    SET_GPR_U32(ctx, 31, 0x27FBFCu);
    ctx->pc = 0x27FBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FBF4u;
    // 0x27fbf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27FBF4u, 0x27FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBFCu;
label_27fbfc:
    // 0x27fbfc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x27fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27fc00: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27FC00u;
    SET_GPR_U32(ctx, 31, 0x27FC08u);
    ctx->pc = 0x27FC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC00u;
    // 0x27fc04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27FC00u, 0x27FC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC08u;
label_27fc08:
    // 0x27fc08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27fc0c: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27FC0Cu;
    SET_GPR_U32(ctx, 31, 0x27FC14u);
    ctx->pc = 0x27FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC0Cu;
    // 0x27fc10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27FC0Cu, 0x27FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC14u;
label_27fc14:
    // 0x27fc14: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x27fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27fc18: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x27FC18u;
    SET_GPR_U32(ctx, 31, 0x27FC20u);
    ctx->pc = 0x27FC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC18u;
    // 0x27fc1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x27FC18u, 0x27FC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC20u;
label_27fc20:
    // 0x27fc20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27fc24: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x27FC24u;
    SET_GPR_U32(ctx, 31, 0x27FC2Cu);
    ctx->pc = 0x27FC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC24u;
    // 0x27fc28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x27FC24u, 0x27FC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC2Cu;
label_27fc2c:
    // 0x27fc2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27fc30: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x27FC30u;
    SET_GPR_U32(ctx, 31, 0x27FC38u);
    ctx->pc = 0x27FC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC30u;
    // 0x27fc34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x27FC30u, 0x27FC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC38u;
label_27fc38:
    // 0x27fc38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27fc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27fc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc40: 0xc0dab74  jal         func_36ADD0
    ctx->pc = 0x27FC40u;
    SET_GPR_U32(ctx, 31, 0x27FC48u);
    ctx->pc = 0x27FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC40u;
    // 0x27fc44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADD0u, 0x27FC40u, 0x27FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC48u;
label_27fc48:
    // 0x27fc48: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x27fc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27fc4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27fc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc50: 0xc6100004  lwc1        $f16, 0x4($s0)
    ctx->pc = 0x27fc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x27fc54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27fc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc58: 0x46166cc0  add.s       $f19, $f13, $f22
    ctx->pc = 0x27fc58u;
    ctx->f[19] = FPU_ADD_S(ctx->f[13], ctx->f[22]);
    // 0x27fc5c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x27fc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fc60: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x27fc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fc64: 0x46168401  sub.s       $f16, $f16, $f22
    ctx->pc = 0x27fc64u;
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[22]);
    // 0x27fc68: 0x46166b41  sub.s       $f13, $f13, $f22
    ctx->pc = 0x27fc68u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[22]);
    // 0x27fc6c: 0xc60f0000  lwc1        $f15, 0x0($s0)
    ctx->pc = 0x27fc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x27fc70: 0xc6110008  lwc1        $f17, 0x8($s0)
    ctx->pc = 0x27fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x27fc74: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x27fc74u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x27fc78: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x27fc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27fc7c: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x27fc7cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
    // 0x27fc80: 0xafb20038  sw          $s2, 0x38($sp)
    ctx->pc = 0x27fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 18));
    // 0x27fc84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27fc84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc88: 0xafb30050  sw          $s3, 0x50($sp)
    ctx->pc = 0x27fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x27fc8c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x27fc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27fc90: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27fc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x27fc94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27fc94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc98: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x27fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x27fc9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fc9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fca0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x27fca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x27fca4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27fca4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fca8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x27fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x27fcac: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x27fcacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27fcb0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x27fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x27fcb4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x27fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x27fcb8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x27fcbc: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x27FCBCu;
    SET_GPR_U32(ctx, 31, 0x27FCC4u);
    ctx->pc = 0x27FCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FCBCu;
    // 0x27fcc0: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x27FCBCu, 0x27FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCC4u;
label_27fcc4:
    // 0x27fcc4: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x27fcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27fcc8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x27fcc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fccc: 0xc6300004  lwc1        $f16, 0x4($s1)
    ctx->pc = 0x27fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x27fcd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27fcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fcd4: 0x46166cc1  sub.s       $f19, $f13, $f22
    ctx->pc = 0x27fcd4u;
    ctx->f[19] = FPU_SUB_S(ctx->f[13], ctx->f[22]);
    // 0x27fcd8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x27fcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fcdc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27fcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fce0: 0x46168400  add.s       $f16, $f16, $f22
    ctx->pc = 0x27fce0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[22]);
    // 0x27fce4: 0x46166b40  add.s       $f13, $f13, $f22
    ctx->pc = 0x27fce4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[22]);
    // 0x27fce8: 0xc62f0000  lwc1        $f15, 0x0($s1)
    ctx->pc = 0x27fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x27fcec: 0xc6310008  lwc1        $f17, 0x8($s1)
    ctx->pc = 0x27fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x27fcf0: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x27fcf0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x27fcf4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x27fcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27fcf8: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x27fcf8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
    // 0x27fcfc: 0xafb40050  sw          $s4, 0x50($sp)
    ctx->pc = 0x27fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 20));
    // 0x27fd00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27fd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd04: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27fd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x27fd08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27fd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd0c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x27fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x27fd10: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x27fd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27fd14: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x27fd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x27fd18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fd18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd1c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x27fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x27fd20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27fd20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd24: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x27fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x27fd28: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x27fd28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27fd2c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x27fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x27fd30: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x27fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x27fd34: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x27fd38: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x27FD38u;
    SET_GPR_U32(ctx, 31, 0x27FD40u);
    ctx->pc = 0x27FD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD38u;
    // 0x27fd3c: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x27FD38u, 0x27FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD40u;
label_27fd40:
    // 0x27fd40: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x27fd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x27fd44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27fd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd48: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x27fd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fd4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27fd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd50: 0xc60f0000  lwc1        $f15, 0x0($s0)
    ctx->pc = 0x27fd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x27fd54: 0x46157000  add.s       $f0, $f14, $f21
    ctx->pc = 0x27fd54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[14], ctx->f[21]);
    // 0x27fd58: 0xc6110008  lwc1        $f17, 0x8($s0)
    ctx->pc = 0x27fd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x27fd5c: 0x46146480  add.s       $f18, $f12, $f20
    ctx->pc = 0x27fd5cu;
    ctx->f[18] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x27fd60: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x27fd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27fd64: 0x46157381  sub.s       $f14, $f14, $f21
    ctx->pc = 0x27fd64u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[21]);
    // 0x27fd68: 0x46147bc1  sub.s       $f15, $f15, $f20
    ctx->pc = 0x27fd68u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[20]);
    // 0x27fd6c: 0xc6100004  lwc1        $f16, 0x4($s0)
    ctx->pc = 0x27fd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x27fd70: 0x46158c41  sub.s       $f17, $f17, $f21
    ctx->pc = 0x27fd70u;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[21]);
    // 0x27fd74: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x27fd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27fd78: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x27fd78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x27fd7c: 0xafb30050  sw          $s3, 0x50($sp)
    ctx->pc = 0x27fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x27fd80: 0xafb20038  sw          $s2, 0x38($sp)
    ctx->pc = 0x27fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 18));
    // 0x27fd84: 0x46006cc6  mov.s       $f19, $f13
    ctx->pc = 0x27fd84u;
    ctx->f[19] = FPU_MOV_S(ctx->f[13]);
    // 0x27fd88: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x27fd8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27fd8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd90: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x27fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x27fd94: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x27fd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27fd98: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x27fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x27fd9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27fd9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fda0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x27fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x27fda4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fda4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fda8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x27fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x27fdac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27fdacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fdb0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x27fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x27fdb4: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x27fdb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27fdb8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x27fdbc: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x27FDBCu;
    SET_GPR_U32(ctx, 31, 0x27FDC4u);
    ctx->pc = 0x27FDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDBCu;
    // 0x27fdc0: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x27FDBCu, 0x27FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDC4u;
label_27fdc4:
    // 0x27fdc4: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x27fdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x27fdc8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x27fdc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fdcc: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x27fdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27fdd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27fdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fdd4: 0xc62f0000  lwc1        $f15, 0x0($s1)
    ctx->pc = 0x27fdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x27fdd8: 0x46157001  sub.s       $f0, $f14, $f21
    ctx->pc = 0x27fdd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[21]);
    // 0x27fddc: 0xc6310008  lwc1        $f17, 0x8($s1)
    ctx->pc = 0x27fddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x27fde0: 0x46146481  sub.s       $f18, $f12, $f20
    ctx->pc = 0x27fde0u;
    ctx->f[18] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x27fde4: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x27fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27fde8: 0x46157380  add.s       $f14, $f14, $f21
    ctx->pc = 0x27fde8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[21]);
    // 0x27fdec: 0x46158c40  add.s       $f17, $f17, $f21
    ctx->pc = 0x27fdecu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[21]);
    // 0x27fdf0: 0xc6300004  lwc1        $f16, 0x4($s1)
    ctx->pc = 0x27fdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x27fdf4: 0x46147bc0  add.s       $f15, $f15, $f20
    ctx->pc = 0x27fdf4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[20]);
    // 0x27fdf8: 0xafb40050  sw          $s4, 0x50($sp)
    ctx->pc = 0x27fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 20));
    // 0x27fdfc: 0x46146300  add.s       $f12, $f12, $f20
    ctx->pc = 0x27fdfcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x27fe00: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x27fe00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27fe04: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x27fe08: 0x46006cc6  mov.s       $f19, $f13
    ctx->pc = 0x27fe08u;
    ctx->f[19] = FPU_MOV_S(ctx->f[13]);
    // 0x27fe0c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x27fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x27fe10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27fe10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe14: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x27fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x27fe18: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x27fe18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27fe1c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x27fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x27fe20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fe20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe24: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x27fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x27fe28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27fe28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe2c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x27fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x27fe30: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x27fe30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27fe34: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x27fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x27fe38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27fe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe3c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x27fe40: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x27FE40u;
    SET_GPR_U32(ctx, 31, 0x27FE48u);
    ctx->pc = 0x27FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE40u;
    // 0x27fe44: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x27FE40u, 0x27FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE48u;
label_27fe48:
    // 0x27fe48: 0xc0dab7e  jal         func_36ADF8
    ctx->pc = 0x27FE48u;
    SET_GPR_U32(ctx, 31, 0x27FE50u);
    ctx->pc = 0x27FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE48u;
    // 0x27fe4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADF8u, 0x27FE48u, 0x27FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE50u;
label_27fe50:
    // 0x27fe50: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x27FE50u;
    SET_GPR_U32(ctx, 31, 0x27FE58u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x27FE50u, 0x27FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE58u;
label_27fe58:
    // 0x27fe58: 0xc0db20a  jal         func_36C828
    ctx->pc = 0x27FE58u;
    SET_GPR_U32(ctx, 31, 0x27FE60u);
    ctx->pc = 0x36C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C828u, 0x27FE58u, 0x27FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE60u;
label_27fe60:
    // 0x27fe60: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x27fe60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27fe64: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x27fe64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x27fe68: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x27fe68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27fe6c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x27fe6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x27fe70: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x27fe70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27fe74: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x27fe74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x27fe78: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x27fe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27fe7c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x27fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27fe80: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x27fe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27fe84: 0x3e00008  jr          $ra
    ctx->pc = 0x27FE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE84u;
        // 0x27fe88: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FE8Cu;
    // 0x27fe8c: 0x0  nop
    ctx->pc = 0x27fe8cu;
    // NOP
    ctx->pc = 0x27fe90u;
}
