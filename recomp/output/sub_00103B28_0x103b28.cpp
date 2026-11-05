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

// Function: sub_00103B28
// Address: 0x103b28 - 0x103d90
void sub_00103B28_0x103b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103B28_0x103b28");
#endif

    switch (ctx->pc) {
        case 0x103ba0u: goto label_103ba0;
        case 0x103bf8u: goto label_103bf8;
        case 0x103c20u: goto label_103c20;
        case 0x103c2cu: goto label_103c2c;
        case 0x103c44u: goto label_103c44;
        case 0x103c50u: goto label_103c50;
        case 0x103c60u: goto label_103c60;
        case 0x103c80u: goto label_103c80;
        case 0x103c88u: goto label_103c88;
        case 0x103cb4u: goto label_103cb4;
        case 0x103d1cu: goto label_103d1c;
        case 0x103d38u: goto label_103d38;
        case 0x103d48u: goto label_103d48;
        case 0x103d54u: goto label_103d54;
        default: break;
    }

    ctx->pc = 0x103b28u;

    // 0x103b28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x103b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x103b2c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x103b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x103b30: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x103b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x103b34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b38: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x103b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x103b3c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x103b3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b40: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x103b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x103b44: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x103b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x103b48: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x103b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x103b4c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x103b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x103b50: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x103b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x103b54: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x103b54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x103b58: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x103b58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x103b5c: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x103B5Cu;
    {
        const bool branch_taken_0x103b5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B5Cu;
        // 0x103b60: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b5c) {
            ctx->pc = 0x103C00u;
            goto label_103c00;
        }
    }
    ctx->pc = 0x103B64u;
    // 0x103b64: 0x12a0007c  beqz        $s5, . + 4 + (0x7C << 2)
    ctx->pc = 0x103B64u;
    {
        const bool branch_taken_0x103b64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B64u;
        // 0x103b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b64) {
            ctx->pc = 0x103D58u;
            goto label_103d58;
        }
    }
    ctx->pc = 0x103B6Cu;
    // 0x103b6c: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x103b6cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x103b70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x103b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103b74: 0x0  nop
    ctx->pc = 0x103b74u;
    // NOP
    // 0x103b78: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x103b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103b7c: 0x0  nop
    ctx->pc = 0x103b7cu;
    // NOP
    // 0x103b80: 0x45010076  bc1t        . + 4 + (0x76 << 2)
    ctx->pc = 0x103B80u;
    {
        const bool branch_taken_0x103b80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x103B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B80u;
        // 0x103b84: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b80) {
            ctx->pc = 0x103D5Cu;
            goto label_103d5c;
        }
    }
    ctx->pc = 0x103B88u;
    // 0x103b88: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x103b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x103b8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b90: 0xc45589d0  lwc1        $f21, -0x7630($v0)
    ctx->pc = 0x103b90u;
    { uint32_t bits = FAST_READ32(0x3F89D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x103b94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x103b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b98: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x103B98u;
    SET_GPR_U32(ctx, 31, 0x103BA0u);
    ctx->pc = 0x103B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B98u;
    // 0x103b9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x103B98u, 0x103BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BA0u;
label_103ba0:
    // 0x103ba0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x103ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x103ba4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x103ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x103ba8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x103ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x103bac: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x103bacu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x103bb0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x103bb0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x103bb4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x103bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x103bb8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x103bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103bbc: 0x0  nop
    ctx->pc = 0x103bbcu;
    // NOP
    // 0x103bc0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x103BC0u;
    {
        const bool branch_taken_0x103bc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103bc0) {
            ctx->pc = 0x103BF0u;
            goto label_103bf0;
        }
    }
    ctx->pc = 0x103BC8u;
    // 0x103bc8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x103bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x103bcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103BCCu;
    {
        const bool branch_taken_0x103bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BCCu;
        // 0x103bd0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bcc) {
            ctx->pc = 0x103BDCu;
            goto label_103bdc;
        }
    }
    ctx->pc = 0x103BD4u;
    // 0x103bd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x103BD4u;
    {
        const bool branch_taken_0x103bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BD4u;
        // 0x103bd8: 0xc6200030  lwc1        $f0, 0x30($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bd4) {
            ctx->pc = 0x103BE0u;
            goto label_103be0;
        }
    }
    ctx->pc = 0x103BDCu;
label_103bdc:
    // 0x103bdc: 0xc440a568  lwc1        $f0, -0x5A98($v0)
    ctx->pc = 0x103bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_103be0:
    // 0x103be0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x103be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103be4: 0x0  nop
    ctx->pc = 0x103be4u;
    // NOP
    // 0x103be8: 0x4501005b  bc1t        . + 4 + (0x5B << 2)
    ctx->pc = 0x103BE8u;
    {
        const bool branch_taken_0x103be8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x103BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BE8u;
        // 0x103bec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103be8) {
            ctx->pc = 0x103D58u;
            goto label_103d58;
        }
    }
    ctx->pc = 0x103BF0u;
label_103bf0:
    // 0x103bf0: 0xc040ff6  jal         func_103FD8
    ctx->pc = 0x103BF0u;
    SET_GPR_U32(ctx, 31, 0x103BF8u);
    ctx->pc = 0x103FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FD8u, 0x103BF0u, 0x103BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BF8u;
label_103bf8:
    // 0x103bf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103BF8u;
    {
        const bool branch_taken_0x103bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BF8u;
        // 0x103bfc: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bf8) {
            ctx->pc = 0x103C08u;
            goto label_103c08;
        }
    }
    ctx->pc = 0x103C00u;
label_103c00:
    // 0x103c00: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x103C00u;
    {
        const bool branch_taken_0x103c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C00u;
        // 0x103c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c00) {
            ctx->pc = 0x103D58u;
            goto label_103d58;
        }
    }
    ctx->pc = 0x103C08u;
label_103c08:
    // 0x103c08: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x103c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x103c0c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x103c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x103c10: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x103c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x103c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c18: 0xc0f6686  jal         func_3D9A18
    ctx->pc = 0x103C18u;
    SET_GPR_U32(ctx, 31, 0x103C20u);
    ctx->pc = 0x103C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C18u;
    // 0x103c1c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9A18u, 0x103C18u, 0x103C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C20u;
label_103c20:
    // 0x103c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c24: 0xc0f66a0  jal         func_3D9A80
    ctx->pc = 0x103C24u;
    SET_GPR_U32(ctx, 31, 0x103C2Cu);
    ctx->pc = 0x103C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C24u;
    // 0x103c28: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9A80u, 0x103C24u, 0x103C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C2Cu;
label_103c2c:
    // 0x103c2c: 0x9222003a  lbu         $v0, 0x3A($s1)
    ctx->pc = 0x103c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x103c30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x103c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c38: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x103c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x103c3c: 0xc0f66bc  jal         func_3D9AF0
    ctx->pc = 0x103C3Cu;
    SET_GPR_U32(ctx, 31, 0x103C44u);
    ctx->pc = 0x103C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C3Cu;
    // 0x103c40: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9AF0u, 0x103C3Cu, 0x103C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C44u;
label_103c44:
    // 0x103c44: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x103C44u;
    {
        const bool branch_taken_0x103c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C44u;
        // 0x103c48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c44) {
            ctx->pc = 0x103D30u;
            goto label_103d30;
        }
    }
    ctx->pc = 0x103C4Cu;
    // 0x103c4c: 0x0  nop
    ctx->pc = 0x103c4cu;
    // NOP
label_103c50:
    // 0x103c50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c54: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x103c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x103c58: 0xc0f66dc  jal         func_3D9B70
    ctx->pc = 0x103C58u;
    SET_GPR_U32(ctx, 31, 0x103C60u);
    ctx->pc = 0x103C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C58u;
    // 0x103c5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9B70u, 0x103C58u, 0x103C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C60u;
label_103c60:
    // 0x103c60: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x103c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x103c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103c68: 0x90520022  lbu         $s2, 0x22($v0)
    ctx->pc = 0x103c68u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x103c6c: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x103c6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x103c70: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x103C70u;
    {
        const bool branch_taken_0x103c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C70u;
        // 0x103c74: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c70) {
            ctx->pc = 0x103D30u;
            goto label_103d30;
        }
    }
    ctx->pc = 0x103C78u;
    // 0x103c78: 0x3c140044  lui         $s4, 0x44
    ctx->pc = 0x103c78u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)68 << 16));
    // 0x103c7c: 0x0  nop
    ctx->pc = 0x103c7cu;
    // NOP
label_103c80:
    // 0x103c80: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x103C80u;
    SET_GPR_U32(ctx, 31, 0x103C88u);
    ctx->pc = 0x103C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C80u;
    // 0x103c84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x103C80u, 0x103C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C88u;
label_103c88:
    // 0x103c88: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x103c88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103c8c: 0x9203003a  lbu         $v1, 0x3A($s0)
    ctx->pc = 0x103c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x103c90: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x103c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x103c94: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x103C94u;
    {
        const bool branch_taken_0x103c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C94u;
        // 0x103c98: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c94) {
            ctx->pc = 0x103D20u;
            goto label_103d20;
        }
    }
    ctx->pc = 0x103C9Cu;
    // 0x103c9c: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x103c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x103ca0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ca4: 0xa202003a  sb          $v0, 0x3A($s0)
    ctx->pc = 0x103ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x103ca8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x103ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103cac: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x103CACu;
    SET_GPR_U32(ctx, 31, 0x103CB4u);
    ctx->pc = 0x103CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CACu;
    // 0x103cb0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x103CACu, 0x103CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CB4u;
label_103cb4:
    // 0x103cb4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x103cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x103cb8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x103cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x103cbc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x103cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x103cc0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x103cc0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x103cc4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x103cc4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x103cc8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x103cc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x103ccc: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x103cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103cd0: 0x0  nop
    ctx->pc = 0x103cd0u;
    // NOP
    // 0x103cd4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x103CD4u;
    {
        const bool branch_taken_0x103cd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x103CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CD4u;
        // 0x103cd8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103cd4) {
            ctx->pc = 0x103D20u;
            goto label_103d20;
        }
    }
    ctx->pc = 0x103CDCu;
    // 0x103cdc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x103cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x103ce0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x103CE0u;
    {
        const bool branch_taken_0x103ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CE0u;
        // 0x103ce4: 0xc680a568  lwc1        $f0, -0x5A98($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ce0) {
            ctx->pc = 0x103CECu;
            goto label_103cec;
        }
    }
    ctx->pc = 0x103CE8u;
    // 0x103ce8: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x103ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_103cec:
    // 0x103cec: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x103cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103cf0: 0x0  nop
    ctx->pc = 0x103cf0u;
    // NOP
    // 0x103cf4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x103CF4u;
    {
        const bool branch_taken_0x103cf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x103CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CF4u;
        // 0x103cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103cf4) {
            ctx->pc = 0x103D14u;
            goto label_103d14;
        }
    }
    ctx->pc = 0x103CFCu;
    // 0x103cfc: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x103cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103d00: 0x0  nop
    ctx->pc = 0x103d00u;
    // NOP
    // 0x103d04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x103D04u;
    {
        const bool branch_taken_0x103d04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x103d04) {
            ctx->pc = 0x103D14u;
            goto label_103d14;
        }
    }
    ctx->pc = 0x103D0Cu;
    // 0x103d0c: 0x46000d86  mov.s       $f22, $f1
    ctx->pc = 0x103d0cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[1]);
    // 0x103d10: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x103d10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103d14:
    // 0x103d14: 0xc0f66bc  jal         func_3D9AF0
    ctx->pc = 0x103D14u;
    SET_GPR_U32(ctx, 31, 0x103D1Cu);
    ctx->pc = 0x103D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D14u;
    // 0x103d18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9AF0u, 0x103D14u, 0x103D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D1Cu;
label_103d1c:
    // 0x103d1c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x103d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_103d20:
    // 0x103d20: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x103d20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x103d24: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x103d24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x103d28: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x103D28u;
    {
        const bool branch_taken_0x103d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x103D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D28u;
        // 0x103d2c: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d28) {
            ctx->pc = 0x103C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103c80;
        }
    }
    ctx->pc = 0x103D30u;
label_103d30:
    // 0x103d30: 0xc0f6772  jal         func_3D9DC8
    ctx->pc = 0x103D30u;
    SET_GPR_U32(ctx, 31, 0x103D38u);
    ctx->pc = 0x103D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D30u;
    // 0x103d34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DC8u, 0x103D30u, 0x103D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D38u;
label_103d38:
    // 0x103d38: 0x5440ffc5  bnel        $v0, $zero, . + 4 + (-0x3B << 2)
    ctx->pc = 0x103D38u;
    {
        const bool branch_taken_0x103d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103d38) {
            ctx->pc = 0x103D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103D38u;
            // 0x103d3c: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103c50;
        }
    }
    ctx->pc = 0x103D40u;
    // 0x103d40: 0xc0f6726  jal         func_3D9C98
    ctx->pc = 0x103D40u;
    SET_GPR_U32(ctx, 31, 0x103D48u);
    ctx->pc = 0x103D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D40u;
    // 0x103d44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9C98u, 0x103D40u, 0x103D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D48u;
label_103d48:
    // 0x103d48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d4c: 0xc0f6676  jal         func_3D99D8
    ctx->pc = 0x103D4Cu;
    SET_GPR_U32(ctx, 31, 0x103D54u);
    ctx->pc = 0x103D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D4Cu;
    // 0x103d50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D99D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D99D8u, 0x103D4Cu, 0x103D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D54u;
label_103d54:
    // 0x103d54: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x103d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_103d58:
    // 0x103d58: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x103d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_103d5c:
    // 0x103d5c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x103d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x103d60: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x103d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103d64: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x103d64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x103d68: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x103d68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103d6c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x103d6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x103d70: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x103d70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103d74: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x103d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x103d78: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x103d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x103d7c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x103d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x103d80: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x103d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103d84: 0x3e00008  jr          $ra
    ctx->pc = 0x103D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D84u;
        // 0x103d88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103D8Cu;
    // 0x103d8c: 0x0  nop
    ctx->pc = 0x103d8cu;
    // NOP
    ctx->pc = 0x103d90u;
}
