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

// Function: sub_0026DA78
// Address: 0x26da78 - 0x26dd00
void sub_0026DA78_0x26da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DA78_0x26da78");
#endif

    switch (ctx->pc) {
        case 0x26db90u: goto label_26db90;
        case 0x26dba0u: goto label_26dba0;
        case 0x26dbdcu: goto label_26dbdc;
        case 0x26dbe4u: goto label_26dbe4;
        case 0x26dbecu: goto label_26dbec;
        case 0x26dbf4u: goto label_26dbf4;
        case 0x26dc04u: goto label_26dc04;
        case 0x26dc0cu: goto label_26dc0c;
        case 0x26dc28u: goto label_26dc28;
        case 0x26dc44u: goto label_26dc44;
        case 0x26dc70u: goto label_26dc70;
        case 0x26dc80u: goto label_26dc80;
        case 0x26dc98u: goto label_26dc98;
        case 0x26dca8u: goto label_26dca8;
        case 0x26dcb4u: goto label_26dcb4;
        case 0x26dcbcu: goto label_26dcbc;
        case 0x26dcc8u: goto label_26dcc8;
        case 0x26dcd0u: goto label_26dcd0;
        default: break;
    }

    ctx->pc = 0x26da78u;

    // 0x26da78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26da78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26da7c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26da7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da80: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x26da80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x26da84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26da88: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x26da88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x26da8c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x26da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x26da90: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x26da90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x26da94: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x26da94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x26da98: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x26da98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x26da9c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x26da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x26daa0: 0x8ca40190  lw          $a0, 0x190($a1)
    ctx->pc = 0x26daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 400)));
    // 0x26daa4: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DAA4u;
    {
        const bool branch_taken_0x26daa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAA4u;
        // 0x26daa8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26daa4) {
            ctx->pc = 0x26DACCu;
            goto label_26dacc;
        }
    }
    ctx->pc = 0x26DAACu;
    // 0x26daac: 0x8c6295ac  lw          $v0, -0x6A54($v1)
    ctx->pc = 0x26daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940076)));
    // 0x26dab0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26dab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26dab4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DAB4u;
    {
        const bool branch_taken_0x26dab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAB4u;
        // 0x26dab8: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dab4) {
            ctx->pc = 0x26DACCu;
            goto label_26dacc;
        }
    }
    ctx->pc = 0x26DABCu;
    // 0x26dabc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x26dac0: 0x8c4495a8  lw          $a0, -0x6A58($v0)
    ctx->pc = 0x26dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F95A8u));
    // 0x26dac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26dac8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x26dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_26dacc:
    // 0x26dacc: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x26daccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x26dad0: 0x24a40240  addiu       $a0, $a1, 0x240
    ctx->pc = 0x26dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 576));
    // 0x26dad4: 0x8e68bd50  lw          $t0, -0x42B0($s3)
    ctx->pc = 0x26dad4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x26dad8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x26dad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26dadc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x26dadcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26dae0: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x26dae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26dae4: 0x8d020104  lw          $v0, 0x104($t0)
    ctx->pc = 0x26dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 260)));
    // 0x26dae8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x26dae8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26daec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26daecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26daf0: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x26daf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26daf4: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x26daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x26daf8: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x26daf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x26dafc: 0x24660060  addiu       $a2, $v1, 0x60
    ctx->pc = 0x26dafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x26db00: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26db00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26db04: 0x24670070  addiu       $a3, $v1, 0x70
    ctx->pc = 0x26db04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x26db08: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26db08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26db0c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26db0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26db10: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x26db10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26db14: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26db14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26db18: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x26db18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26db1c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x26db1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26db20: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x26db20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26db24: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x26db24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26db28: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x26db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26db2c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x26db2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x26db30: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x26db30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26db34: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x26db34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x26db38: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x26db38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26db3c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x26db3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x26db40: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x26db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26db44: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x26db44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26db48: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x26db48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26db4c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x26db4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x26db50: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x26db50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26db54: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x26db54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x26db58: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x26db58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26db5c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x26db5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x26db60: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x26db60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26db64: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x26db64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26db68: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x26db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26db6c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x26db6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x26db70: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x26db70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26db74: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x26db74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x26db78: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x26db78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26db7c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x26db7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x26db80: 0x8d020104  lw          $v0, 0x104($t0)
    ctx->pc = 0x26db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 260)));
    // 0x26db84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26db84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26db88: 0xc0b1972  jal         func_2C65C8
    ctx->pc = 0x26DB88u;
    SET_GPR_U32(ctx, 31, 0x26DB90u);
    ctx->pc = 0x26DB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB88u;
    // 0x26db8c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x26DB88u, 0x26DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB90u;
label_26db90:
    // 0x26db90: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x26db90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x26db94: 0x24542508  addiu       $s4, $v0, 0x2508
    ctx->pc = 0x26db94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x26db98: 0xc086c66  jal         func_21B198
    ctx->pc = 0x26DB98u;
    SET_GPR_U32(ctx, 31, 0x26DBA0u);
    ctx->pc = 0x26DB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB98u;
    // 0x26db9c: 0x268458f0  addiu       $a0, $s4, 0x58F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B198u, 0x26DB98u, 0x26DBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBA0u;
label_26dba0:
    // 0x26dba0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x26dba4: 0x8e64bd50  lw          $a0, -0x42B0($s3)
    ctx->pc = 0x26dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950224)));
    // 0x26dba8: 0xa05595f1  sb          $s5, -0x6A0F($v0)
    ctx->pc = 0x26dba8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x3F95F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F95F1u, _value); } while (0);
    // 0x26dbac: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x26dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x26dbb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26dbb4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26dbb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26dbb8: 0xf8410040  sqc2        $vf1, 0x40($v0)
    ctx->pc = 0x26dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26dbbc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x26dbbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26dbc0: 0xf8410050  sqc2        $vf1, 0x50($v0)
    ctx->pc = 0x26dbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26dbc4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x26dbc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26dbc8: 0xf8410060  sqc2        $vf1, 0x60($v0)
    ctx->pc = 0x26dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26dbcc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x26dbccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26dbd0: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x26dbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26dbd4: 0xc0b9426  jal         func_2E5098
    ctx->pc = 0x26DBD4u;
    SET_GPR_U32(ctx, 31, 0x26DBDCu);
    ctx->pc = 0x26DBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DBD4u;
    // 0x26dbd8: 0x8e64bd50  lw          $a0, -0x42B0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5098u, 0x26DBD4u, 0x26DBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBDCu;
label_26dbdc:
    // 0x26dbdc: 0xc0c1346  jal         func_304D18
    ctx->pc = 0x26DBDCu;
    SET_GPR_U32(ctx, 31, 0x26DBE4u);
    ctx->pc = 0x304D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304D18u, 0x26DBDCu, 0x26DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBE4u;
label_26dbe4:
    // 0x26dbe4: 0xc0ab320  jal         func_2ACC80
    ctx->pc = 0x26DBE4u;
    SET_GPR_U32(ctx, 31, 0x26DBECu);
    ctx->pc = 0x2ACC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACC80u, 0x26DBE4u, 0x26DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBECu;
label_26dbec:
    // 0x26dbec: 0xc0accd0  jal         func_2B3340
    ctx->pc = 0x26DBECu;
    SET_GPR_U32(ctx, 31, 0x26DBF4u);
    ctx->pc = 0x26DBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DBECu;
    // 0x26dbf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3340u, 0x26DBECu, 0x26DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBF4u;
label_26dbf4:
    // 0x26dbf4: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x26dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x26dbf8: 0x348408f0  ori         $a0, $a0, 0x8F0
    ctx->pc = 0x26dbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2288);
    // 0x26dbfc: 0xc0ab29a  jal         func_2ACA68
    ctx->pc = 0x26DBFCu;
    SET_GPR_U32(ctx, 31, 0x26DC04u);
    ctx->pc = 0x26DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DBFCu;
    // 0x26dc00: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACA68u, 0x26DBFCu, 0x26DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC04u;
label_26dc04:
    // 0x26dc04: 0xc0cda86  jal         func_336A18
    ctx->pc = 0x26DC04u;
    SET_GPR_U32(ctx, 31, 0x26DC0Cu);
    ctx->pc = 0x336A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A18u, 0x26DC04u, 0x26DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC0Cu;
label_26dc0c:
    // 0x26dc0c: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x26dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x26dc10: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x26dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x26dc14: 0x34840998  ori         $a0, $a0, 0x998
    ctx->pc = 0x26dc14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2456);
    // 0x26dc18: 0x24a5a358  addiu       $a1, $a1, -0x5CA8
    ctx->pc = 0x26dc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943576));
    // 0x26dc1c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x26dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x26dc20: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x26DC20u;
    SET_GPR_U32(ctx, 31, 0x26DC28u);
    ctx->pc = 0x26DC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC20u;
    // 0x26dc24: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x26DC20u, 0x26DC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC28u;
label_26dc28:
    // 0x26dc28: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x26dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x26dc2c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x26dc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x26dc30: 0x34840d98  ori         $a0, $a0, 0xD98
    ctx->pc = 0x26dc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3480);
    // 0x26dc34: 0x24a5a758  addiu       $a1, $a1, -0x58A8
    ctx->pc = 0x26dc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944600));
    // 0x26dc38: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x26dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x26dc3c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x26DC3Cu;
    SET_GPR_U32(ctx, 31, 0x26DC44u);
    ctx->pc = 0x26DC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC3Cu;
    // 0x26dc40: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x26DC3Cu, 0x26DC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC44u;
label_26dc44:
    // 0x26dc44: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x26dc48: 0x928258ec  lbu         $v0, 0x58EC($s4)
    ctx->pc = 0x26dc48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 22764)));
    // 0x26dc4c: 0x8c639160  lw          $v1, -0x6EA0($v1)
    ctx->pc = 0x26dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9160u));
    // 0x26dc50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DC50u;
    {
        const bool branch_taken_0x26dc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC50u;
        // 0x26dc54: 0xae830094  sw          $v1, 0x94($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc50) {
            ctx->pc = 0x26DC64u;
            goto label_26dc64;
        }
    }
    ctx->pc = 0x26DC58u;
    // 0x26dc58: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x26dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26dc5c: 0xae830090  sw          $v1, 0x90($s4)
    ctx->pc = 0x26dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 3));
    // 0x26dc60: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x26dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
label_26dc64:
    // 0x26dc64: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x26dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x26dc68: 0xc0ae338  jal         func_2B8CE0
    ctx->pc = 0x26DC68u;
    SET_GPR_U32(ctx, 31, 0x26DC70u);
    ctx->pc = 0x26DC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC68u;
    // 0x26dc6c: 0x2484ac80  addiu       $a0, $a0, -0x5380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8CE0u, 0x26DC68u, 0x26DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC70u;
label_26dc70:
    // 0x26dc70: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26DC70u;
    {
        const bool branch_taken_0x26dc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC70u;
        // 0x26dc74: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc70) {
            ctx->pc = 0x26DCDCu;
            goto label_26dcdc;
        }
    }
    ctx->pc = 0x26DC78u;
    // 0x26dc78: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x26DC78u;
    SET_GPR_U32(ctx, 31, 0x26DC80u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x26DC78u, 0x26DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC80u;
label_26dc80:
    // 0x26dc80: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x26dc80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26dc84: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26dc88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26dc88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc8c: 0x24a57be0  addiu       $a1, $a1, 0x7BE0
    ctx->pc = 0x26dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31712));
    // 0x26dc90: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x26DC90u;
    SET_GPR_U32(ctx, 31, 0x26DC98u);
    ctx->pc = 0x26DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC90u;
    // 0x26dc94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x26DC90u, 0x26DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC98u;
label_26dc98:
    // 0x26dc98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26dc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26dc9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26dc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dca0: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x26DCA0u;
    SET_GPR_U32(ctx, 31, 0x26DCA8u);
    ctx->pc = 0x26DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DCA0u;
    // 0x26dca4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x26DCA0u, 0x26DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCA8u;
label_26dca8:
    // 0x26dca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dcac: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x26DCACu;
    SET_GPR_U32(ctx, 31, 0x26DCB4u);
    ctx->pc = 0x26DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DCACu;
    // 0x26dcb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x26DCACu, 0x26DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCB4u;
label_26dcb4:
    // 0x26dcb4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x26DCB4u;
    SET_GPR_U32(ctx, 31, 0x26DCBCu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x26DCB4u, 0x26DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCBCu;
label_26dcbc:
    // 0x26dcbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26dcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dcc0: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x26DCC0u;
    SET_GPR_U32(ctx, 31, 0x26DCC8u);
    ctx->pc = 0x26DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DCC0u;
    // 0x26dcc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x26DCC0u, 0x26DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCC8u;
label_26dcc8:
    // 0x26dcc8: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x26DCC8u;
    SET_GPR_U32(ctx, 31, 0x26DCD0u);
    ctx->pc = 0x26DCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DCC8u;
    // 0x26dccc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x26DCC8u, 0x26DCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCD0u;
label_26dcd0:
    // 0x26dcd0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26dcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x26dcd4: 0xac75aa88  sw          $s5, -0x5578($v1)
    ctx->pc = 0x26dcd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x3FAA88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAA88u, _value); } while (0);
    // 0x26dcd8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x26dcd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26dcdc:
    // 0x26dcdc: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x26dcdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26dce0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x26dce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26dce4: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x26dce4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x26dce8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x26dce8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26dcec: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x26dcecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x26dcf0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26dcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26dcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x26DCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCF4u;
        // 0x26dcf8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DCFCu;
    // 0x26dcfc: 0x0  nop
    ctx->pc = 0x26dcfcu;
    // NOP
    ctx->pc = 0x26dd00u;
}
