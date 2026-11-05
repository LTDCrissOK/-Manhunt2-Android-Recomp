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

// Function: sub_00163E90
// Address: 0x163e90 - 0x164320
void sub_00163E90_0x163e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163E90_0x163e90");
#endif

    switch (ctx->pc) {
        case 0x163f50u: goto label_163f50;
        case 0x163f64u: goto label_163f64;
        case 0x163fb4u: goto label_163fb4;
        case 0x164008u: goto label_164008;
        case 0x164014u: goto label_164014;
        case 0x16402cu: goto label_16402c;
        case 0x164038u: goto label_164038;
        case 0x164088u: goto label_164088;
        case 0x1640d0u: goto label_1640d0;
        case 0x164120u: goto label_164120;
        case 0x164150u: goto label_164150;
        case 0x164180u: goto label_164180;
        case 0x164198u: goto label_164198;
        case 0x1641b4u: goto label_1641b4;
        case 0x1641c0u: goto label_1641c0;
        case 0x1641d8u: goto label_1641d8;
        case 0x1641f0u: goto label_1641f0;
        case 0x164204u: goto label_164204;
        case 0x164218u: goto label_164218;
        case 0x164220u: goto label_164220;
        case 0x16424cu: goto label_16424c;
        case 0x164260u: goto label_164260;
        case 0x164270u: goto label_164270;
        case 0x164278u: goto label_164278;
        case 0x1642acu: goto label_1642ac;
        case 0x1642d4u: goto label_1642d4;
        case 0x1642ecu: goto label_1642ec;
        default: break;
    }

    ctx->pc = 0x163e90u;

    // 0x163e90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x163e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x163e94: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x163e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x163e98: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x163e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x163e9c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x163e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x163ea0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x163ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x163ea4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x163ea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ea8: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x163ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x163eac: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x163eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x163eb0: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x163eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x163eb4: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x163eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x163eb8: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x163eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x163ebc: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x163ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x163ec0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x163ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x163ec4: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x163ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x163ec8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x163ec8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x163ecc: 0x8e6202e0  lw          $v0, 0x2E0($s3)
    ctx->pc = 0x163eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
    // 0x163ed0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x163ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x163ed4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163ed8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x163ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163edc: 0x8c5e020c  lw          $fp, 0x20C($v0)
    ctx->pc = 0x163edcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x163ee0: 0x13c00103  beqz        $fp, . + 4 + (0x103 << 2)
    ctx->pc = 0x163EE0u;
    {
        const bool branch_taken_0x163ee0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EE0u;
        // 0x163ee4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ee0) {
            ctx->pc = 0x1642F0u;
            goto label_1642f0;
        }
    }
    ctx->pc = 0x163EE8u;
    // 0x163ee8: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x163ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x163eec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163ef0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x163ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163ef4: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x163ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x163ef8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x163EF8u;
    {
        const bool branch_taken_0x163ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163ef8) {
            ctx->pc = 0x163EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163EF8u;
            // 0x163efc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163F08u;
            goto label_163f08;
        }
    }
    ctx->pc = 0x163F00u;
    // 0x163f00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163F00u;
    {
        const bool branch_taken_0x163f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F00u;
        // 0x163f04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f00) {
            ctx->pc = 0x163F10u;
            goto label_163f10;
        }
    }
    ctx->pc = 0x163F08u;
label_163f08:
    // 0x163f08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x163f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163f0c: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x163f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_163f10:
    // 0x163f10: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x163f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x163f14: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x163f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x163f18: 0x24559a08  addiu       $s5, $v0, -0x65F8
    ctx->pc = 0x163f18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x163f1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x163f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163f20: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x163f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x163f24: 0x26a3020c  addiu       $v1, $s5, 0x20C
    ctx->pc = 0x163f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 524));
    // 0x163f28: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x163f28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163f2c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x163f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x163f30: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163F30u;
    {
        const bool branch_taken_0x163f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F30u;
        // 0x163f34: 0x26620310  addiu       $v0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f30) {
            ctx->pc = 0x163F50u;
            goto label_163f50;
        }
    }
    ctx->pc = 0x163F38u;
    // 0x163f38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x163f38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163f3c: 0xfa6102c0  sqc2        $vf1, 0x2C0($s3)
    ctx->pc = 0x163f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 704), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163f40: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x163f40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163f44: 0xfa6102b0  sqc2        $vf1, 0x2B0($s3)
    ctx->pc = 0x163f44u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 688), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163f48: 0xc04f6e0  jal         func_13DB80
    ctx->pc = 0x163F48u;
    SET_GPR_U32(ctx, 31, 0x163F50u);
    ctx->pc = 0x163F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163F48u;
    // 0x163f4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DB80u, 0x163F48u, 0x163F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F50u;
label_163f50:
    // 0x163f50: 0x267002f0  addiu       $s0, $s3, 0x2F0
    ctx->pc = 0x163f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 752));
    // 0x163f54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x163f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f5c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x163F5Cu;
    SET_GPR_U32(ctx, 31, 0x163F64u);
    ctx->pc = 0x163F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163F5Cu;
    // 0x163f60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x163F5Cu, 0x163F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F64u;
label_163f64:
    // 0x163f64: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x163f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163f68: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x163f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x163f6c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x163f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x163f70: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x163f70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x163f74: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x163f74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x163f78: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x163f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x163f7c: 0x3c014144  lui         $at, 0x4144
    ctx->pc = 0x163f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16708 << 16));
    // 0x163f80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x163f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x163f84: 0x0  nop
    ctx->pc = 0x163f84u;
    // NOP
    // 0x163f88: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x163f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163f8c: 0x0  nop
    ctx->pc = 0x163f8cu;
    // NOP
    // 0x163f90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x163F90u;
    {
        const bool branch_taken_0x163f90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F90u;
        // 0x163f94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f90) {
            ctx->pc = 0x163FA8u;
            goto label_163fa8;
        }
    }
    ctx->pc = 0x163F98u;
    // 0x163f98: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x163f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163f9c: 0xfa610310  sqc2        $vf1, 0x310($s3)
    ctx->pc = 0x163f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 784), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163fa0: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x163FA0u;
    {
        const bool branch_taken_0x163fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FA0u;
        // 0x163fa4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163fa0) {
            ctx->pc = 0x1642F0u;
            goto label_1642f0;
        }
    }
    ctx->pc = 0x163FA8u;
label_163fa8:
    // 0x163fa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163fac: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x163FACu;
    SET_GPR_U32(ctx, 31, 0x163FB4u);
    ctx->pc = 0x163FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163FACu;
    // 0x163fb0: 0x26660310  addiu       $a2, $s3, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x163FACu, 0x163FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163FB4u;
label_163fb4:
    // 0x163fb4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x163fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163fb8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x163fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x163fbc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x163fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x163fc0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x163fc0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x163fc4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x163fc4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x163fc8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x163fc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x163fcc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x163fccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163fd0: 0xfa610310  sqc2        $vf1, 0x310($s3)
    ctx->pc = 0x163fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 784), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163fd4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x163fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163fd8: 0x0  nop
    ctx->pc = 0x163fd8u;
    // NOP
    // 0x163fdc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x163FDCu;
    {
        const bool branch_taken_0x163fdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163fdc) {
            ctx->pc = 0x164024u;
            goto label_164024;
        }
    }
    ctx->pc = 0x163FE4u;
    // 0x163fe4: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x163fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x163fe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163fec: 0x0  nop
    ctx->pc = 0x163fecu;
    // NOP
    // 0x163ff0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163ff4: 0x0  nop
    ctx->pc = 0x163ff4u;
    // NOP
    // 0x163ff8: 0x450000bd  bc1f        . + 4 + (0xBD << 2)
    ctx->pc = 0x163FF8u;
    {
        const bool branch_taken_0x163ff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FF8u;
        // 0x163ffc: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ff8) {
            ctx->pc = 0x1642F0u;
            goto label_1642f0;
        }
    }
    ctx->pc = 0x164000u;
    // 0x164000: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x164000u;
    SET_GPR_U32(ctx, 31, 0x164008u);
    ctx->pc = 0x164004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164000u;
    // 0x164004: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x164000u, 0x164008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164008u;
label_164008:
    // 0x164008: 0x8e6503a0  lw          $a1, 0x3A0($s3)
    ctx->pc = 0x164008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
    // 0x16400c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x16400Cu;
    SET_GPR_U32(ctx, 31, 0x164014u);
    ctx->pc = 0x164010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16400Cu;
    // 0x164010: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x16400Cu, 0x164014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164014u;
label_164014:
    // 0x164014: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x164014u;
    {
        const bool branch_taken_0x164014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164014u;
        // 0x164018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164014) {
            ctx->pc = 0x164144u;
            goto label_164144;
        }
    }
    ctx->pc = 0x16401Cu;
    // 0x16401c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x16401Cu;
    {
        const bool branch_taken_0x16401c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16401Cu;
        // 0x164020: 0xae62039c  sw          $v0, 0x39C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16401c) {
            ctx->pc = 0x164144u;
            goto label_164144;
        }
    }
    ctx->pc = 0x164024u;
label_164024:
    // 0x164024: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x164024u;
    SET_GPR_U32(ctx, 31, 0x16402Cu);
    ctx->pc = 0x164028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164024u;
    // 0x164028: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x164024u, 0x16402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16402Cu;
label_16402c:
    // 0x16402c: 0x8e6503a0  lw          $a1, 0x3A0($s3)
    ctx->pc = 0x16402cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
    // 0x164030: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x164030u;
    SET_GPR_U32(ctx, 31, 0x164038u);
    ctx->pc = 0x164034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164030u;
    // 0x164034: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x164030u, 0x164038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164038u;
label_164038:
    // 0x164038: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x164038u;
    {
        const bool branch_taken_0x164038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164038u;
        // 0x16403c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164038) {
            ctx->pc = 0x164044u;
            goto label_164044;
        }
    }
    ctx->pc = 0x164040u;
    // 0x164040: 0xae62039c  sw          $v0, 0x39C($s3)
    ctx->pc = 0x164040u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 924), GPR_U32(ctx, 2));
label_164044:
    // 0x164044: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x164044u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x164048: 0x1280003f  beqz        $s4, . + 4 + (0x3F << 2)
    ctx->pc = 0x164048u;
    {
        const bool branch_taken_0x164048 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x16404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164048u;
        // 0x16404c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164048) {
            ctx->pc = 0x164148u;
            goto label_164148;
        }
    }
    ctx->pc = 0x164050u;
    // 0x164050: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x164050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x164054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x164054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x164058: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x164058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16405c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x164060: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x164060u;
    {
        const bool branch_taken_0x164060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164060) {
            ctx->pc = 0x164064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164060u;
            // 0x164064: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164070u;
            goto label_164070;
        }
    }
    ctx->pc = 0x164068u;
    // 0x164068: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164068u;
    {
        const bool branch_taken_0x164068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164068u;
        // 0x16406c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164068) {
            ctx->pc = 0x164078u;
            goto label_164078;
        }
    }
    ctx->pc = 0x164070u;
label_164070:
    // 0x164070: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x164070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164074: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x164074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_164078:
    // 0x164078: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x164078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16407c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16407cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x164080: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x164080u;
    SET_GPR_U32(ctx, 31, 0x164088u);
    ctx->pc = 0x164084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164080u;
    // 0x164084: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x164080u, 0x164088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164088u;
label_164088:
    // 0x164088: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x164088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16408c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x16408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164090: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x164090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x164094: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x164094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x164098: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x164098u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x16409c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x16409cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1640a0: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x1640a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1640a4: 0x3c0142a2  lui         $at, 0x42A2
    ctx->pc = 0x1640a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17058 << 16));
    // 0x1640a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1640a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1640ac: 0x0  nop
    ctx->pc = 0x1640acu;
    // NOP
    // 0x1640b0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1640b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1640b4: 0x0  nop
    ctx->pc = 0x1640b4u;
    // NOP
    // 0x1640b8: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x1640B8u;
    {
        const bool branch_taken_0x1640b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1640BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640B8u;
        // 0x1640bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640b8) {
            ctx->pc = 0x164148u;
            goto label_164148;
        }
    }
    ctx->pc = 0x1640C0u;
    // 0x1640c0: 0x8e6402e4  lw          $a0, 0x2E4($s3)
    ctx->pc = 0x1640c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 740)));
    // 0x1640c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1640c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1640c8: 0xc040e14  jal         func_103850
    ctx->pc = 0x1640C8u;
    SET_GPR_U32(ctx, 31, 0x1640D0u);
    ctx->pc = 0x1640CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1640C8u;
    // 0x1640cc: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103850u, 0x1640C8u, 0x1640D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1640D0u;
label_1640d0:
    // 0x1640d0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1640d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1640d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1640d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1640d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1640d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1640dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1640dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1640e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1640e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1640e4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1640e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1640e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1640e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1640ec: 0x8e3091c0  lw          $s0, -0x6E40($s1)
    ctx->pc = 0x1640ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939072)));
    // 0x1640f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1640f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1640f4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1640f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1640f8: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x1640f8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1640fc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1640fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x164100: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x164100u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x164104: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x164104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164108: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x164108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x16410c: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x16410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164110: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x164110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x164114: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x164114u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x164118: 0xc041032  jal         func_1040C8
    ctx->pc = 0x164118u;
    SET_GPR_U32(ctx, 31, 0x164120u);
    ctx->pc = 0x16411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164118u;
    // 0x16411c: 0xae2291c0  sw          $v0, -0x6E40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x164118u, 0x164120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164120u;
label_164120:
    // 0x164120: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x164120u;
    {
        const bool branch_taken_0x164120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164120u;
        // 0x164124: 0xae3091c0  sw          $s0, -0x6E40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294939072), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164120) {
            ctx->pc = 0x164298u;
            goto label_164298;
        }
    }
    ctx->pc = 0x164128u;
    // 0x164128: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x164128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x16412c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16412cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164130: 0x0  nop
    ctx->pc = 0x164130u;
    // NOP
    // 0x164134: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x164134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164138: 0x0  nop
    ctx->pc = 0x164138u;
    // NOP
    // 0x16413c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16413Cu;
    {
        const bool branch_taken_0x16413c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x164140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16413Cu;
        // 0x164140: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16413c) {
            ctx->pc = 0x164158u;
            goto label_164158;
        }
    }
    ctx->pc = 0x164144u;
label_164144:
    // 0x164144: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x164144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_164148:
    // 0x164148: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x164148u;
    SET_GPR_U32(ctx, 31, 0x164150u);
    ctx->pc = 0x16414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164148u;
    // 0x16414c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x164148u, 0x164150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164150u;
label_164150:
    // 0x164150: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x164150u;
    {
        const bool branch_taken_0x164150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164150u;
        // 0x164154: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164150) {
            ctx->pc = 0x1642F0u;
            goto label_1642f0;
        }
    }
    ctx->pc = 0x164158u;
label_164158:
    // 0x164158: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x164158u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16415c: 0x245602d8  addiu       $s6, $v0, 0x2D8
    ctx->pc = 0x16415cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x164160: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x164160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x164164: 0xafb60044  sw          $s6, 0x44($sp)
    ctx->pc = 0x164164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 22));
    // 0x164168: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x164168u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16416c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x16416cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x164170: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x164170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x164174: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x164174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x164178: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x164178u;
    SET_GPR_U32(ctx, 31, 0x164180u);
    ctx->pc = 0x16417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164178u;
    // 0x16417c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x164178u, 0x164180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164180u;
label_164180:
    // 0x164180: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x164180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x164184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164188: 0xaee30010  sw          $v1, 0x10($s7)
    ctx->pc = 0x164188u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 3));
    // 0x16418c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16418cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164190: 0xc043920  jal         func_10E480
    ctx->pc = 0x164190u;
    SET_GPR_U32(ctx, 31, 0x164198u);
    ctx->pc = 0x164194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164190u;
    // 0x164194: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x164190u, 0x164198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164198u;
label_164198:
    // 0x164198: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164198u;
    {
        const bool branch_taken_0x164198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164198u;
        // 0x16419c: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164198) {
            ctx->pc = 0x1641ACu;
            goto label_1641ac;
        }
    }
    ctx->pc = 0x1641A0u;
    // 0x1641a0: 0x8c42107c  lw          $v0, 0x107C($v0)
    ctx->pc = 0x1641a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4220)));
    // 0x1641a4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1641a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1641a8: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x1641a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
label_1641ac:
    // 0x1641ac: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x1641ACu;
    SET_GPR_U32(ctx, 31, 0x1641B4u);
    ctx->pc = 0x1641B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1641ACu;
    // 0x1641b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x1641ACu, 0x1641B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1641B4u;
label_1641b4:
    // 0x1641b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1641b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1641b8: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x1641B8u;
    SET_GPR_U32(ctx, 31, 0x1641C0u);
    ctx->pc = 0x1641BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1641B8u;
    // 0x1641bc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x1641B8u, 0x1641C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1641C0u;
label_1641c0:
    // 0x1641c0: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x1641c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1641c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1641c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1641c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1641c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1641cc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1641ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1641d0: 0xc0406d4  jal         func_101B50
    ctx->pc = 0x1641D0u;
    SET_GPR_U32(ctx, 31, 0x1641D8u);
    ctx->pc = 0x1641D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1641D0u;
    // 0x1641d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B50u, 0x1641D0u, 0x1641D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1641D8u;
label_1641d8:
    // 0x1641d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1641d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1641dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1641dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1641e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1641e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1641e4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1641e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1641e8: 0xc0411ac  jal         func_1046B0
    ctx->pc = 0x1641E8u;
    SET_GPR_U32(ctx, 31, 0x1641F0u);
    ctx->pc = 0x1641ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1641E8u;
    // 0x1641ec: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046B0u, 0x1641E8u, 0x1641F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1641F0u;
label_1641f0:
    // 0x1641f0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1641F0u;
    {
        const bool branch_taken_0x1641f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1641F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641F0u;
        // 0x1641f4: 0xafb60044  sw          $s6, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641f0) {
            ctx->pc = 0x164254u;
            goto label_164254;
        }
    }
    ctx->pc = 0x1641F8u;
    // 0x1641f8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1641f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1641fc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1641FCu;
    SET_GPR_U32(ctx, 31, 0x164204u);
    ctx->pc = 0x164200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1641FCu;
    // 0x164200: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1641FCu, 0x164204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164204u;
label_164204:
    // 0x164204: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x164204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x164208: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164208u;
    {
        const bool branch_taken_0x164208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164208u;
        // 0x16420c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164208) {
            ctx->pc = 0x164230u;
            goto label_164230;
        }
    }
    ctx->pc = 0x164210u;
    // 0x164210: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x164210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x164214: 0x0  nop
    ctx->pc = 0x164214u;
    // NOP
label_164218:
    // 0x164218: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x164218u;
    SET_GPR_U32(ctx, 31, 0x164220u);
    ctx->pc = 0x16421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164218u;
    // 0x16421c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x164218u, 0x164220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164220u;
label_164220:
    // 0x164220: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x164220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x164224: 0x0  nop
    ctx->pc = 0x164224u;
    // NOP
    // 0x164228: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x164228u;
    {
        const bool branch_taken_0x164228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164228u;
        // 0x16422c: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164228) {
            ctx->pc = 0x164218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164218;
        }
    }
    ctx->pc = 0x164230u;
label_164230:
    // 0x164230: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x164230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x164234: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x164234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164238: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x164238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x16423c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164240: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x164240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x164244: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x164244u;
    SET_GPR_U32(ctx, 31, 0x16424Cu);
    ctx->pc = 0x164248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164244u;
    // 0x164248: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x164244u, 0x16424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16424Cu;
label_16424c:
    // 0x16424c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x16424Cu;
    {
        const bool branch_taken_0x16424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16424Cu;
        // 0x164250: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16424c) {
            ctx->pc = 0x1642F0u;
            goto label_1642f0;
        }
    }
    ctx->pc = 0x164254u;
label_164254:
    // 0x164254: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x164254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x164258: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x164258u;
    SET_GPR_U32(ctx, 31, 0x164260u);
    ctx->pc = 0x16425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164258u;
    // 0x16425c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x164258u, 0x164260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164260u;
label_164260:
    // 0x164260: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x164260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x164264: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x164264u;
    {
        const bool branch_taken_0x164264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164264u;
        // 0x164268: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164264) {
            ctx->pc = 0x164288u;
            goto label_164288;
        }
    }
    ctx->pc = 0x16426Cu;
    // 0x16426c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x16426cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_164270:
    // 0x164270: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x164270u;
    SET_GPR_U32(ctx, 31, 0x164278u);
    ctx->pc = 0x164274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164270u;
    // 0x164274: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x164270u, 0x164278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164278u;
label_164278:
    // 0x164278: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x164278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x16427c: 0x0  nop
    ctx->pc = 0x16427cu;
    // NOP
    // 0x164280: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x164280u;
    {
        const bool branch_taken_0x164280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164280) {
            ctx->pc = 0x164284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164280u;
            // 0x164284: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164270;
        }
    }
    ctx->pc = 0x164288u;
label_164288:
    // 0x164288: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x164288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x16428c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x16428cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x164290: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x164290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x164294: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x164294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_164298:
    // 0x164298: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x164298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16429c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642a0: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1642a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1642a4: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x1642A4u;
    SET_GPR_U32(ctx, 31, 0x1642ACu);
    ctx->pc = 0x1642A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642A4u;
    // 0x1642a8: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x1642A4u, 0x1642ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642ACu;
label_1642ac:
    // 0x1642ac: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1642acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1642b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1642b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1642b4: 0x24629a08  addiu       $v0, $v1, -0x65F8
    ctx->pc = 0x1642b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1642b8: 0x8e6702e0  lw          $a3, 0x2E0($s3)
    ctx->pc = 0x1642b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
    // 0x1642bc: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x1642bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1642c0: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x1642c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x1642c4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1642c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1642c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1642c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1642cc: 0xc04668a  jal         func_119A28
    ctx->pc = 0x1642CCu;
    SET_GPR_U32(ctx, 31, 0x1642D4u);
    ctx->pc = 0x1642D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642CCu;
    // 0x1642d0: 0x8c460108  lw          $a2, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x1642CCu, 0x1642D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642D4u;
label_1642d4:
    // 0x1642d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1642d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1642d8: 0xae60039c  sw          $zero, 0x39C($s3)
    ctx->pc = 0x1642d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 924), GPR_U32(ctx, 0));
    // 0x1642dc: 0xae6203a4  sw          $v0, 0x3A4($s3)
    ctx->pc = 0x1642dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 932), GPR_U32(ctx, 2));
    // 0x1642e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1642e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642e4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1642E4u;
    SET_GPR_U32(ctx, 31, 0x1642ECu);
    ctx->pc = 0x1642E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642E4u;
    // 0x1642e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1642E4u, 0x1642ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642ECu;
label_1642ec:
    // 0x1642ec: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1642ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1642f0:
    // 0x1642f0: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1642f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1642f4: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1642f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1642f8: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1642f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1642fc: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1642fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x164300: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x164300u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x164304: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x164304u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x164308: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x164308u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16430c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x16430cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x164310: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x164310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x164314: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x164314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x164318: 0x3e00008  jr          $ra
    ctx->pc = 0x164318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164318u;
        // 0x16431c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164320u;
}
