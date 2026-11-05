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

// Function: sub_001981E0
// Address: 0x1981e0 - 0x198590
void sub_001981E0_0x1981e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001981E0_0x1981e0");
#endif

    switch (ctx->pc) {
        case 0x1982a0u: goto label_1982a0;
        case 0x1982c4u: goto label_1982c4;
        case 0x198308u: goto label_198308;
        case 0x19831cu: goto label_19831c;
        case 0x19832cu: goto label_19832c;
        case 0x198348u: goto label_198348;
        case 0x198388u: goto label_198388;
        case 0x1983a0u: goto label_1983a0;
        case 0x1983b0u: goto label_1983b0;
        case 0x1983c8u: goto label_1983c8;
        case 0x1983d8u: goto label_1983d8;
        case 0x1983e8u: goto label_1983e8;
        case 0x198400u: goto label_198400;
        case 0x198418u: goto label_198418;
        case 0x198420u: goto label_198420;
        case 0x1984d0u: goto label_1984d0;
        case 0x1984d8u: goto label_1984d8;
        case 0x198508u: goto label_198508;
        case 0x198510u: goto label_198510;
        default: break;
    }

    ctx->pc = 0x1981e0u;

    // 0x1981e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1981e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1981e4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1981e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1981e8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1981e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1981ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1981ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1981f0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1981f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1981f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1981f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1981f8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1981f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1981fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1981fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198200: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x198200u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x198204: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x198204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x198208: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x198208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x19820c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19820cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198210: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x198210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x198214: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x198214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x198218: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x198218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x19821c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19821cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x198220: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x198220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198224: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x198224u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x198228: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x198228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19822c: 0x0  nop
    ctx->pc = 0x19822cu;
    // NOP
    // 0x198230: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x198230u;
    {
        const bool branch_taken_0x198230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x198234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198230u;
        // 0x198234: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198230) {
            ctx->pc = 0x198268u;
            goto label_198268;
        }
    }
    ctx->pc = 0x198238u;
    // 0x198238: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x198238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19823c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x19823cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x198240: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x198240u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198244: 0x0  nop
    ctx->pc = 0x198244u;
    // NOP
    // 0x198248: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x198248u;
    {
        const bool branch_taken_0x198248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198248) {
            ctx->pc = 0x19824Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198248u;
            // 0x19824c: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19826Cu;
            goto label_19826c;
        }
    }
    ctx->pc = 0x198250u;
    // 0x198250: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x198250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198254: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x198254u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x198258: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x198258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19825c: 0x0  nop
    ctx->pc = 0x19825cu;
    // NOP
    // 0x198260: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x198260u;
    {
        const bool branch_taken_0x198260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x198260) {
            ctx->pc = 0x198264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198260u;
            // 0x198264: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198268u;
            goto label_198268;
        }
    }
    ctx->pc = 0x198268u;
label_198268:
    // 0x198268: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x198268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_19826c:
    // 0x19826c: 0x263000a0  addiu       $s0, $s1, 0xA0
    ctx->pc = 0x19826cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x198270: 0x24443d20  addiu       $a0, $v0, 0x3D20
    ctx->pc = 0x198270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x198274: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x198274u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x198278: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x198278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19827c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19827cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198280: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x198280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x198284: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x198284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x198288: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x198288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x19828c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19828cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x198290: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x198290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x198294: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x198294u;
    {
        const bool branch_taken_0x198294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198294u;
        // 0x198298: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198294) {
            ctx->pc = 0x1982C4u;
            goto label_1982c4;
        }
    }
    ctx->pc = 0x19829Cu;
    // 0x19829c: 0x0  nop
    ctx->pc = 0x19829cu;
    // NOP
label_1982a0:
    // 0x1982a0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1982a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1982a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1982A4u;
    {
        const bool branch_taken_0x1982a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1982A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982A4u;
        // 0x1982a8: 0x26443d20  addiu       $a0, $s2, 0x3D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982a4) {
            ctx->pc = 0x1982C8u;
            goto label_1982c8;
        }
    }
    ctx->pc = 0x1982ACu;
    // 0x1982ac: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x1982acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x1982b0: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1982b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1982b4: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1982B4u;
    {
        const bool branch_taken_0x1982b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1982b4) {
            ctx->pc = 0x1982B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1982B4u;
            // 0x1982b8: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1982CCu;
            goto label_1982cc;
        }
    }
    ctx->pc = 0x1982BCu;
    // 0x1982bc: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x1982BCu;
    SET_GPR_U32(ctx, 31, 0x1982C4u);
    ctx->pc = 0x1982C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982BCu;
    // 0x1982c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x1982BCu, 0x1982C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1982C4u;
label_1982c4:
    // 0x1982c4: 0x26443d20  addiu       $a0, $s2, 0x3D20
    ctx->pc = 0x1982c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15648));
label_1982c8:
    // 0x1982c8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1982c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1982cc:
    // 0x1982cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1982CCu;
    {
        const bool branch_taken_0x1982cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982CCu;
        // 0x1982d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982cc) {
            ctx->pc = 0x1982D8u;
            goto label_1982d8;
        }
    }
    ctx->pc = 0x1982D4u;
    // 0x1982d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1982d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1982d8:
    // 0x1982d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1982D8u;
    {
        const bool branch_taken_0x1982d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1982d8) {
            ctx->pc = 0x1982E8u;
            goto label_1982e8;
        }
    }
    ctx->pc = 0x1982E0u;
    // 0x1982e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1982e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1982e4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1982e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1982e8:
    // 0x1982e8: 0x5460ffed  bnel        $v1, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1982E8u;
    {
        const bool branch_taken_0x1982e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1982e8) {
            ctx->pc = 0x1982ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1982E8u;
            // 0x1982ec: 0x8c6200c0  lw          $v0, 0xC0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1982A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1982a0;
        }
    }
    ctx->pc = 0x1982F0u;
    // 0x1982f0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1982f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1982f4: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1982f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982f8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1982F8u;
    {
        const bool branch_taken_0x1982f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982F8u;
        // 0x1982fc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982f8) {
            ctx->pc = 0x19831Cu;
            goto label_19831c;
        }
    }
    ctx->pc = 0x198300u;
    // 0x198300: 0xc0f62ca  jal         func_3D8B28
    ctx->pc = 0x198300u;
    SET_GPR_U32(ctx, 31, 0x198308u);
    ctx->pc = 0x198304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198300u;
    // 0x198304: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x198300u, 0x198308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198308u;
label_198308:
    // 0x198308: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198308u;
    {
        const bool branch_taken_0x198308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198308u;
        // 0x19830c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198308) {
            ctx->pc = 0x19831Cu;
            goto label_19831c;
        }
    }
    ctx->pc = 0x198310u;
    // 0x198310: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x198310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x198314: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x198314u;
    SET_GPR_U32(ctx, 31, 0x19831Cu);
    ctx->pc = 0x198318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198314u;
    // 0x198318: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x198314u, 0x19831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19831Cu;
label_19831c:
    // 0x19831c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x19831Cu;
    {
        const bool branch_taken_0x19831c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x198320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19831Cu;
        // 0x198320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19831c) {
            ctx->pc = 0x198350u;
            goto label_198350;
        }
    }
    ctx->pc = 0x198324u;
    // 0x198324: 0xc061a12  jal         func_186848
    ctx->pc = 0x198324u;
    SET_GPR_U32(ctx, 31, 0x19832Cu);
    ctx->pc = 0x198328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198324u;
    // 0x198328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x198324u, 0x19832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19832Cu;
label_19832c:
    // 0x19832c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19832cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198330: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x198330u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x198334: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x198334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198338: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x198338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x19833c: 0x26260070  addiu       $a2, $s1, 0x70
    ctx->pc = 0x19833cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x198340: 0xc070946  jal         func_1C2518
    ctx->pc = 0x198340u;
    SET_GPR_U32(ctx, 31, 0x198348u);
    ctx->pc = 0x198344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198340u;
    // 0x198344: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2518u, 0x198340u, 0x198348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198348u;
label_198348:
    // 0x198348: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x198348u;
    {
        const bool branch_taken_0x198348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198348u;
        // 0x19834c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198348) {
            ctx->pc = 0x1983ECu;
            goto label_1983ec;
        }
    }
    ctx->pc = 0x198350u;
label_198350:
    // 0x198350: 0x12620015  beq         $s3, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x198350u;
    {
        const bool branch_taken_0x198350 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x198354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198350u;
        // 0x198354: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198350) {
            ctx->pc = 0x1983A8u;
            goto label_1983a8;
        }
    }
    ctx->pc = 0x198358u;
    // 0x198358: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x198358u;
    {
        const bool branch_taken_0x198358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198358) {
            ctx->pc = 0x19835Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198358u;
            // 0x19835c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198370u;
            goto label_198370;
        }
    }
    ctx->pc = 0x198360u;
    // 0x198360: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x198360u;
    {
        const bool branch_taken_0x198360 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x198360) {
            ctx->pc = 0x198380u;
            goto label_198380;
        }
    }
    ctx->pc = 0x198368u;
    // 0x198368: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x198368u;
    {
        const bool branch_taken_0x198368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198368) {
            ctx->pc = 0x1983ECu;
            goto label_1983ec;
        }
    }
    ctx->pc = 0x198370u;
label_198370:
    // 0x198370: 0x12620017  beq         $s3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x198370u;
    {
        const bool branch_taken_0x198370 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x198370) {
            ctx->pc = 0x1983D0u;
            goto label_1983d0;
        }
    }
    ctx->pc = 0x198378u;
    // 0x198378: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x198378u;
    {
        const bool branch_taken_0x198378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198378) {
            ctx->pc = 0x1983ECu;
            goto label_1983ec;
        }
    }
    ctx->pc = 0x198380u;
label_198380:
    // 0x198380: 0xc061a12  jal         func_186848
    ctx->pc = 0x198380u;
    SET_GPR_U32(ctx, 31, 0x198388u);
    ctx->pc = 0x198384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198380u;
    // 0x198384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x198380u, 0x198388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198388u;
label_198388:
    // 0x198388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19838c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19838cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x198390: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x198390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x198394: 0x26260070  addiu       $a2, $s1, 0x70
    ctx->pc = 0x198394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x198398: 0xc07091a  jal         func_1C2468
    ctx->pc = 0x198398u;
    SET_GPR_U32(ctx, 31, 0x1983A0u);
    ctx->pc = 0x19839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198398u;
    // 0x19839c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2468u, 0x198398u, 0x1983A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1983A0u;
label_1983a0:
    // 0x1983a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1983A0u;
    {
        const bool branch_taken_0x1983a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983A0u;
        // 0x1983a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983a0) {
            ctx->pc = 0x1983ECu;
            goto label_1983ec;
        }
    }
    ctx->pc = 0x1983A8u;
label_1983a8:
    // 0x1983a8: 0xc061a12  jal         func_186848
    ctx->pc = 0x1983A8u;
    SET_GPR_U32(ctx, 31, 0x1983B0u);
    ctx->pc = 0x1983ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1983A8u;
    // 0x1983ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1983A8u, 0x1983B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1983B0u;
label_1983b0:
    // 0x1983b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1983b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1983b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1983b8: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x1983b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1983bc: 0x26260070  addiu       $a2, $s1, 0x70
    ctx->pc = 0x1983bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1983c0: 0xc0708ee  jal         func_1C23B8
    ctx->pc = 0x1983C0u;
    SET_GPR_U32(ctx, 31, 0x1983C8u);
    ctx->pc = 0x1983C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1983C0u;
    // 0x1983c4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C23B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C23B8u, 0x1983C0u, 0x1983C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1983C8u;
label_1983c8:
    // 0x1983c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1983C8u;
    {
        const bool branch_taken_0x1983c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983C8u;
        // 0x1983cc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983c8) {
            ctx->pc = 0x1983ECu;
            goto label_1983ec;
        }
    }
    ctx->pc = 0x1983D0u;
label_1983d0:
    // 0x1983d0: 0xc061a12  jal         func_186848
    ctx->pc = 0x1983D0u;
    SET_GPR_U32(ctx, 31, 0x1983D8u);
    ctx->pc = 0x1983D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1983D0u;
    // 0x1983d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1983D0u, 0x1983D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1983D8u;
label_1983d8:
    // 0x1983d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1983d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983dc: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x1983dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1983e0: 0xc0709a0  jal         func_1C2680
    ctx->pc = 0x1983E0u;
    SET_GPR_U32(ctx, 31, 0x1983E8u);
    ctx->pc = 0x1983E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1983E0u;
    // 0x1983e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2680u, 0x1983E0u, 0x1983E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1983E8u;
label_1983e8:
    // 0x1983e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1983e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1983ec:
    // 0x1983ec: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1983ECu;
    {
        const bool branch_taken_0x1983ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983ECu;
        // 0x1983f0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983ec) {
            ctx->pc = 0x198404u;
            goto label_198404;
        }
    }
    ctx->pc = 0x1983F4u;
    // 0x1983f4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1983f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1983f8: 0xc0f62da  jal         func_3D8B68
    ctx->pc = 0x1983F8u;
    SET_GPR_U32(ctx, 31, 0x198400u);
    ctx->pc = 0x1983FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1983F8u;
    // 0x1983fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B68u, 0x1983F8u, 0x198400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198400u;
label_198400:
    // 0x198400: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x198400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_198404:
    // 0x198404: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x198404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198408: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x198408u;
    {
        const bool branch_taken_0x198408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198408u;
        // 0x19840c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198408) {
            ctx->pc = 0x198430u;
            goto label_198430;
        }
    }
    ctx->pc = 0x198410u;
    // 0x198410: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x198410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x198414: 0x0  nop
    ctx->pc = 0x198414u;
    // NOP
label_198418:
    // 0x198418: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x198418u;
    SET_GPR_U32(ctx, 31, 0x198420u);
    ctx->pc = 0x19841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198418u;
    // 0x19841c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x198418u, 0x198420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198420u;
label_198420:
    // 0x198420: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x198420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x198424: 0x0  nop
    ctx->pc = 0x198424u;
    // NOP
    // 0x198428: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x198428u;
    {
        const bool branch_taken_0x198428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198428) {
            ctx->pc = 0x19842Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198428u;
            // 0x19842c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198418;
        }
    }
    ctx->pc = 0x198430u;
label_198430:
    // 0x198430: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x198430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x198434: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x198434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x198438: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x198438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x19843c: 0x1280002d  beqz        $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x19843Cu;
    {
        const bool branch_taken_0x19843c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x198440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19843Cu;
        // 0x198440: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19843c) {
            ctx->pc = 0x1984F4u;
            goto label_1984f4;
        }
    }
    ctx->pc = 0x198444u;
    // 0x198444: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x198444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x198448: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x198448u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19844c: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x19844cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x198450: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x198450u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198454: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x198454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x198458: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x198458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19845c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x19845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x198460: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x198460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198464: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x198464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198468: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x198468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19846c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x19846cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x198470: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x198470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x198474: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x198474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x198478: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x198478u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x19847c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198480: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x198480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x198484: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x198484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x198488: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x198488u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x19848c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x19848cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x198490: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x198490u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x198494: 0x46010044  c1          0x10044
    ctx->pc = 0x198494u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x198498: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x198498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19849c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19849cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1984a0: 0x0  nop
    ctx->pc = 0x1984a0u;
    // NOP
    // 0x1984a4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1984A4u;
    {
        const bool branch_taken_0x1984a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1984A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984A4u;
        // 0x1984a8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984a4) {
            ctx->pc = 0x1984F8u;
            goto label_1984f8;
        }
    }
    ctx->pc = 0x1984ACu;
    // 0x1984ac: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1984acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1984b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1984b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1984b4: 0x0  nop
    ctx->pc = 0x1984b4u;
    // NOP
    // 0x1984b8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1984B8u;
    {
        const bool branch_taken_0x1984b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1984BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984B8u;
        // 0x1984bc: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984b8) {
            ctx->pc = 0x1984F8u;
            goto label_1984f8;
        }
    }
    ctx->pc = 0x1984C0u;
    // 0x1984c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1984C0u;
    {
        const bool branch_taken_0x1984c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1984C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984C0u;
        // 0x1984c4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984c0) {
            ctx->pc = 0x1984E8u;
            goto label_1984e8;
        }
    }
    ctx->pc = 0x1984C8u;
    // 0x1984c8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1984c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1984cc: 0x0  nop
    ctx->pc = 0x1984ccu;
    // NOP
label_1984d0:
    // 0x1984d0: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1984D0u;
    SET_GPR_U32(ctx, 31, 0x1984D8u);
    ctx->pc = 0x1984D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1984D0u;
    // 0x1984d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1984D0u, 0x1984D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984D8u;
label_1984d8:
    // 0x1984d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1984d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1984dc: 0x0  nop
    ctx->pc = 0x1984dcu;
    // NOP
    // 0x1984e0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1984E0u;
    {
        const bool branch_taken_0x1984e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1984e0) {
            ctx->pc = 0x1984E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1984E0u;
            // 0x1984e4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1984D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1984d0;
        }
    }
    ctx->pc = 0x1984E8u;
label_1984e8:
    // 0x1984e8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1984e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1984ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1984ECu;
    {
        const bool branch_taken_0x1984ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1984F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984ECu;
        // 0x1984f0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984ec) {
            ctx->pc = 0x198528u;
            goto label_198528;
        }
    }
    ctx->pc = 0x1984F4u;
label_1984f4:
    // 0x1984f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1984f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1984f8:
    // 0x1984f8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1984f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1984FCu;
    {
        const bool branch_taken_0x1984fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984FCu;
        // 0x198500: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984fc) {
            ctx->pc = 0x198520u;
            goto label_198520;
        }
    }
    ctx->pc = 0x198504u;
    // 0x198504: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x198504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_198508:
    // 0x198508: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x198508u;
    SET_GPR_U32(ctx, 31, 0x198510u);
    ctx->pc = 0x19850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198508u;
    // 0x19850c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x198508u, 0x198510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198510u;
label_198510:
    // 0x198510: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x198510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x198514: 0x0  nop
    ctx->pc = 0x198514u;
    // NOP
    // 0x198518: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x198518u;
    {
        const bool branch_taken_0x198518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198518) {
            ctx->pc = 0x19851Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198518u;
            // 0x19851c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198508;
        }
    }
    ctx->pc = 0x198520u;
label_198520:
    // 0x198520: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x198520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x198524: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198528:
    // 0x198528: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x198528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x19852c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19852cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x198530: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x198530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x198534: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x198534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198538: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x198538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19853c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x19853cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198540: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x198540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x198544: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x198544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198548: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x198548u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19854c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19854cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198550: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x198550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x198554: 0x3e00008  jr          $ra
    ctx->pc = 0x198554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198554u;
        // 0x198558: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19855Cu;
    // 0x19855c: 0x0  nop
    ctx->pc = 0x19855cu;
    // NOP
    // 0x198560: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x198560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x198564: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x198564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x198568: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198568u;
    {
        const bool branch_taken_0x198568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198568u;
        // 0x19856c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198568) {
            ctx->pc = 0x198584u;
            goto label_198584;
        }
    }
    ctx->pc = 0x198570u;
    // 0x198570: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x198570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x198574: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x198574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x198578: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x198578u;
    {
        const bool branch_taken_0x198578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198578u;
        // 0x19857c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198578) {
            ctx->pc = 0x198584u;
            goto label_198584;
        }
    }
    ctx->pc = 0x198580u;
    // 0x198580: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198584:
    // 0x198584: 0x3e00008  jr          $ra
    ctx->pc = 0x198584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19858Cu;
    // 0x19858c: 0x0  nop
    ctx->pc = 0x19858cu;
    // NOP
    ctx->pc = 0x198590u;
}
