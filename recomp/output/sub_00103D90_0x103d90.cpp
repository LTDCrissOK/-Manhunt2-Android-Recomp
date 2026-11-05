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

// Function: sub_00103D90
// Address: 0x103d90 - 0x103fd8
void sub_00103D90_0x103d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103D90_0x103d90");
#endif

    switch (ctx->pc) {
        case 0x103de8u: goto label_103de8;
        case 0x103e04u: goto label_103e04;
        case 0x103e14u: goto label_103e14;
        case 0x103e30u: goto label_103e30;
        case 0x103e48u: goto label_103e48;
        case 0x103e50u: goto label_103e50;
        case 0x103e6cu: goto label_103e6c;
        case 0x103e80u: goto label_103e80;
        case 0x103eb4u: goto label_103eb4;
        case 0x103f00u: goto label_103f00;
        case 0x103f08u: goto label_103f08;
        case 0x103f20u: goto label_103f20;
        case 0x103f40u: goto label_103f40;
        case 0x103f68u: goto label_103f68;
        case 0x103f70u: goto label_103f70;
        case 0x103f88u: goto label_103f88;
        case 0x103f94u: goto label_103f94;
        default: break;
    }

    ctx->pc = 0x103d90u;

    // 0x103d90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x103d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x103d94: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x103d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x103d98: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x103d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x103d9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x103d9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103da0: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x103da0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x103da4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x103da4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103da8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x103da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x103dac: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x103dacu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x103db0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x103db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x103db4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x103db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x103db8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x103db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x103dbc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x103dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x103dc0: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x103dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x103dc4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x103dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x103dc8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x103dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x103dcc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x103dccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x103dd0: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x103DD0u;
    {
        const bool branch_taken_0x103dd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DD0u;
        // 0x103dd4: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dd0) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x103DD8u;
    // 0x103dd8: 0x1260006f  beqz        $s3, . + 4 + (0x6F << 2)
    ctx->pc = 0x103DD8u;
    {
        const bool branch_taken_0x103dd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DD8u;
        // 0x103ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dd8) {
            ctx->pc = 0x103F98u;
            goto label_103f98;
        }
    }
    ctx->pc = 0x103DE0u;
    // 0x103de0: 0xc040ff6  jal         func_103FD8
    ctx->pc = 0x103DE0u;
    SET_GPR_U32(ctx, 31, 0x103DE8u);
    ctx->pc = 0x103FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FD8u, 0x103DE0u, 0x103DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DE8u;
label_103de8:
    // 0x103de8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103DE8u;
    {
        const bool branch_taken_0x103de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103de8) {
            ctx->pc = 0x103DF8u;
            goto label_103df8;
        }
    }
    ctx->pc = 0x103DF0u;
label_103df0:
    // 0x103df0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x103DF0u;
    {
        const bool branch_taken_0x103df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DF0u;
        // 0x103df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103df0) {
            ctx->pc = 0x103F98u;
            goto label_103f98;
        }
    }
    ctx->pc = 0x103DF8u;
label_103df8:
    // 0x103df8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x103df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x103dfc: 0xc0f6686  jal         func_3D9A18
    ctx->pc = 0x103DFCu;
    SET_GPR_U32(ctx, 31, 0x103E04u);
    ctx->pc = 0x103E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DFCu;
    // 0x103e00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9A18u, 0x103DFCu, 0x103E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E04u;
label_103e04:
    // 0x103e04: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x103e04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e0c: 0xc0f66a0  jal         func_3D9A80
    ctx->pc = 0x103E0Cu;
    SET_GPR_U32(ctx, 31, 0x103E14u);
    ctx->pc = 0x103E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E0Cu;
    // 0x103e10: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9A80u, 0x103E0Cu, 0x103E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E14u;
label_103e14:
    // 0x103e14: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x103e14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e18: 0x9262003a  lbu         $v0, 0x3A($s3)
    ctx->pc = 0x103e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 58)));
    // 0x103e1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x103e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x103e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x103e28: 0xc0f66bc  jal         func_3D9AF0
    ctx->pc = 0x103E28u;
    SET_GPR_U32(ctx, 31, 0x103E30u);
    ctx->pc = 0x103E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E28u;
    // 0x103e2c: 0xa262003a  sb          $v0, 0x3A($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 58), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9AF0u, 0x103E28u, 0x103E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E30u;
label_103e30:
    // 0x103e30: 0x9262003a  lbu         $v0, 0x3A($s3)
    ctx->pc = 0x103e30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 58)));
    // 0x103e34: 0x27b70034  addiu       $s7, $sp, 0x34
    ctx->pc = 0x103e34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x103e38: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x103e38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x103e3c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x103e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x103e40: 0xa262003a  sb          $v0, 0x3A($s3)
    ctx->pc = 0x103e40u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x103e44: 0x0  nop
    ctx->pc = 0x103e44u;
    // NOP
label_103e48:
    // 0x103e48: 0xc0f6772  jal         func_3D9DC8
    ctx->pc = 0x103E48u;
    SET_GPR_U32(ctx, 31, 0x103E50u);
    ctx->pc = 0x103E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E48u;
    // 0x103e4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DC8u, 0x103E48u, 0x103E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E50u;
label_103e50:
    // 0x103e50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103E50u;
    {
        const bool branch_taken_0x103e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E50u;
        // 0x103e54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e50) {
            ctx->pc = 0x103E60u;
            goto label_103e60;
        }
    }
    ctx->pc = 0x103E58u;
    // 0x103e58: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x103E58u;
    {
        const bool branch_taken_0x103e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E58u;
        // 0x103e5c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e58) {
            ctx->pc = 0x103F5Cu;
            goto label_103f5c;
        }
    }
    ctx->pc = 0x103E60u;
label_103e60:
    // 0x103e60: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x103e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x103e64: 0xc0f66dc  jal         func_3D9B70
    ctx->pc = 0x103E64u;
    SET_GPR_U32(ctx, 31, 0x103E6Cu);
    ctx->pc = 0x103E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E64u;
    // 0x103e68: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9B70u, 0x103E64u, 0x103E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E6Cu;
label_103e6c:
    // 0x103e6c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x103e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103e70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x103e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x103e74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x103e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e78: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x103E78u;
    SET_GPR_U32(ctx, 31, 0x103E80u);
    ctx->pc = 0x103E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E78u;
    // 0x103e7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x103E78u, 0x103E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E80u;
label_103e80:
    // 0x103e80: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x103e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x103e84: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x103e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x103e88: 0xc7c40008  lwc1        $f4, 0x8($fp)
    ctx->pc = 0x103e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x103e8c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x103e8cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x103e90: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x103e90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x103e94: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x103e94u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x103e98: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x103e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103e9c: 0x0  nop
    ctx->pc = 0x103e9cu;
    // NOP
    // 0x103ea0: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x103EA0u;
    {
        const bool branch_taken_0x103ea0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x103EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EA0u;
        // 0x103ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ea0) {
            ctx->pc = 0x103F5Cu;
            goto label_103f5c;
        }
    }
    ctx->pc = 0x103EA8u;
    // 0x103ea8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x103ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103eac: 0xc041032  jal         func_1040C8
    ctx->pc = 0x103EACu;
    SET_GPR_U32(ctx, 31, 0x103EB4u);
    ctx->pc = 0x103EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103EACu;
    // 0x103eb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x103EACu, 0x103EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103EB4u;
label_103eb4:
    // 0x103eb4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x103EB4u;
    {
        const bool branch_taken_0x103eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EB4u;
        // 0x103eb8: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103eb4) {
            ctx->pc = 0x103EECu;
            goto label_103eec;
        }
    }
    ctx->pc = 0x103EBCu;
    // 0x103ebc: 0x2ec20001  sltiu       $v0, $s6, 0x1
    ctx->pc = 0x103ebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x103ec0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x103EC0u;
    {
        const bool branch_taken_0x103ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103ec0) {
            ctx->pc = 0x103EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103EC0u;
            // 0x103ec4: 0x8fb60030  lw          $s6, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103EE4u;
            goto label_103ee4;
        }
    }
    ctx->pc = 0x103EC8u;
    // 0x103ec8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x103ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103ecc: 0x0  nop
    ctx->pc = 0x103eccu;
    // NOP
    // 0x103ed0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x103ED0u;
    {
        const bool branch_taken_0x103ed0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x103ed0) {
            ctx->pc = 0x103ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103ED0u;
            // 0x103ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103ED8u;
            goto label_103ed8;
        }
    }
    ctx->pc = 0x103ED8u;
label_103ed8:
    // 0x103ed8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103ED8u;
    {
        const bool branch_taken_0x103ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103ED8u;
        // 0x103edc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ed8) {
            ctx->pc = 0x103EECu;
            goto label_103eec;
        }
    }
    ctx->pc = 0x103EE0u;
    // 0x103ee0: 0x8fb60030  lw          $s6, 0x30($sp)
    ctx->pc = 0x103ee0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_103ee4:
    // 0x103ee4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x103ee4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x103ee8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x103ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_103eec:
    // 0x103eec: 0x90520022  lbu         $s2, 0x22($v0)
    ctx->pc = 0x103eecu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x103ef0: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x103EF0u;
    {
        const bool branch_taken_0x103ef0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EF0u;
        // 0x103ef4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ef0) {
            ctx->pc = 0x103F5Cu;
            goto label_103f5c;
        }
    }
    ctx->pc = 0x103EF8u;
    // 0x103ef8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x103ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103efc: 0x0  nop
    ctx->pc = 0x103efcu;
    // NOP
label_103f00:
    // 0x103f00: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x103F00u;
    SET_GPR_U32(ctx, 31, 0x103F08u);
    ctx->pc = 0x103F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F00u;
    // 0x103f04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x103F00u, 0x103F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F08u;
label_103f08:
    // 0x103f08: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x103f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x103f0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x103f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x103f10: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x103F10u;
    {
        const bool branch_taken_0x103f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F10u;
        // 0x103f14: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f10) {
            ctx->pc = 0x103F4Cu;
            goto label_103f4c;
        }
    }
    ctx->pc = 0x103F18u;
    // 0x103f18: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x103F18u;
    SET_GPR_U32(ctx, 31, 0x103F20u);
    ctx->pc = 0x103F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F18u;
    // 0x103f1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x103F18u, 0x103F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F20u;
label_103f20:
    // 0x103f20: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x103f20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103f24: 0x9202003a  lbu         $v0, 0x3A($s0)
    ctx->pc = 0x103f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x103f28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x103f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x103f2c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x103F2Cu;
    {
        const bool branch_taken_0x103f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103f2c) {
            ctx->pc = 0x103F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103F2Cu;
            // 0x103f30: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103F50u;
            goto label_103f50;
        }
    }
    ctx->pc = 0x103F34u;
    // 0x103f34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103f38: 0xc0f66bc  jal         func_3D9AF0
    ctx->pc = 0x103F38u;
    SET_GPR_U32(ctx, 31, 0x103F40u);
    ctx->pc = 0x103F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F38u;
    // 0x103f3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9AF0u, 0x103F38u, 0x103F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F40u;
label_103f40:
    // 0x103f40: 0x9203003a  lbu         $v1, 0x3A($s0)
    ctx->pc = 0x103f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x103f44: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x103f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x103f48: 0xa203003a  sb          $v1, 0x3A($s0)
    ctx->pc = 0x103f48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
label_103f4c:
    // 0x103f4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x103f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_103f50:
    // 0x103f50: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x103f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x103f54: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x103F54u;
    {
        const bool branch_taken_0x103f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F54u;
        // 0x103f58: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f54) {
            ctx->pc = 0x103F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103f00;
        }
    }
    ctx->pc = 0x103F5Cu;
label_103f5c:
    // 0x103f5c: 0x12a0ffba  beqz        $s5, . + 4 + (-0x46 << 2)
    ctx->pc = 0x103F5Cu;
    {
        const bool branch_taken_0x103f5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F5Cu;
        // 0x103f60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f5c) {
            ctx->pc = 0x103E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103e48;
        }
    }
    ctx->pc = 0x103F64u;
    // 0x103f64: 0x0  nop
    ctx->pc = 0x103f64u;
    // NOP
label_103f68:
    // 0x103f68: 0xc0f66dc  jal         func_3D9B70
    ctx->pc = 0x103F68u;
    SET_GPR_U32(ctx, 31, 0x103F70u);
    ctx->pc = 0x103F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F68u;
    // 0x103f6c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9B70u, 0x103F68u, 0x103F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F70u;
label_103f70:
    // 0x103f70: 0x0  nop
    ctx->pc = 0x103f70u;
    // NOP
    // 0x103f74: 0x0  nop
    ctx->pc = 0x103f74u;
    // NOP
    // 0x103f78: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x103F78u;
    {
        const bool branch_taken_0x103f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F78u;
        // 0x103f7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f78) {
            ctx->pc = 0x103F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103f68;
        }
    }
    ctx->pc = 0x103F80u;
    // 0x103f80: 0xc0f6726  jal         func_3D9C98
    ctx->pc = 0x103F80u;
    SET_GPR_U32(ctx, 31, 0x103F88u);
    ctx->pc = 0x103F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F80u;
    // 0x103f84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9C98u, 0x103F80u, 0x103F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F88u;
label_103f88:
    // 0x103f88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103f8c: 0xc0f6676  jal         func_3D99D8
    ctx->pc = 0x103F8Cu;
    SET_GPR_U32(ctx, 31, 0x103F94u);
    ctx->pc = 0x103F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F8Cu;
    // 0x103f90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D99D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D99D8u, 0x103F8Cu, 0x103F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F94u;
label_103f94:
    // 0x103f94: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x103f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_103f98:
    // 0x103f98: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x103f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103f9c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x103f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x103fa0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x103fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103fa4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x103fa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x103fa8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x103fa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103fac: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x103facu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x103fb0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x103fb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103fb4: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x103fb4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x103fb8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x103fb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x103fbc: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x103fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x103fc0: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x103fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x103fc4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x103fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x103fc8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x103fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x103FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FCCu;
        // 0x103fd0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103FD4u;
    // 0x103fd4: 0x0  nop
    ctx->pc = 0x103fd4u;
    // NOP
    ctx->pc = 0x103fd8u;
}
