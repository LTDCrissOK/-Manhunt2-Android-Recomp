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

// Function: sub_00301F90
// Address: 0x301f90 - 0x3022b0
void sub_00301F90_0x301f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301F90_0x301f90");
#endif

    switch (ctx->pc) {
        case 0x301fe0u: goto label_301fe0;
        case 0x302010u: goto label_302010;
        case 0x302030u: goto label_302030;
        case 0x302058u: goto label_302058;
        case 0x302070u: goto label_302070;
        case 0x302084u: goto label_302084;
        case 0x3020a8u: goto label_3020a8;
        case 0x3020b8u: goto label_3020b8;
        case 0x3020c0u: goto label_3020c0;
        case 0x30211cu: goto label_30211c;
        case 0x302130u: goto label_302130;
        case 0x302148u: goto label_302148;
        case 0x3021a4u: goto label_3021a4;
        case 0x3021fcu: goto label_3021fc;
        case 0x302210u: goto label_302210;
        case 0x30224cu: goto label_30224c;
        case 0x302260u: goto label_302260;
        case 0x302274u: goto label_302274;
        default: break;
    }

    ctx->pc = 0x301f90u;

    // 0x301f90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x301f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x301f94: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x301f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x301f98: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x301f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x301f9c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x301f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x301fa0: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x301fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x301fa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x301fa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301fa8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x301fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x301fac: 0x24545870  addiu       $s4, $v0, 0x5870
    ctx->pc = 0x301facu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x301fb0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x301fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x301fb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x301fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301fb8: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x301fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x301fbc: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x301fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x301fc0: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x301fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x301fc4: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x301fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x301fc8: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x301fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x301fcc: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x301fccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x301fd0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x301fd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x301fd4: 0x8e6311d0  lw          $v1, 0x11D0($s3)
    ctx->pc = 0x301fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4560)));
    // 0x301fd8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x301FD8u;
    SET_GPR_U32(ctx, 31, 0x301FE0u);
    ctx->pc = 0x301FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301FD8u;
    // 0x301fdc: 0x8c750100  lw          $s5, 0x100($v1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x301FD8u, 0x301FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301FE0u;
label_301fe0:
    // 0x301fe0: 0xc6a10070  lwc1        $f1, 0x70($s5)
    ctx->pc = 0x301fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301fe4: 0x26b20070  addiu       $s2, $s5, 0x70
    ctx->pc = 0x301fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x301fe8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x301fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x301fec: 0x26b60040  addiu       $s6, $s5, 0x40
    ctx->pc = 0x301fecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x301ff0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x301ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x301ff4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x301ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301ff8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x301ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x301ffc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x301ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302000: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x302000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x302004: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x302004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302008: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x302008u;
    SET_GPR_U32(ctx, 31, 0x302010u);
    ctx->pc = 0x30200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302008u;
    // 0x30200c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x302008u, 0x302010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302010u;
label_302010:
    // 0x302010: 0x928202f0  lbu         $v0, 0x2F0($s4)
    ctx->pc = 0x302010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 752)));
    // 0x302014: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x302014u;
    {
        const bool branch_taken_0x302014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302014u;
        // 0x302018: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302014) {
            ctx->pc = 0x302258u;
            goto label_302258;
        }
    }
    ctx->pc = 0x30201Cu;
    // 0x30201c: 0x928202f1  lbu         $v0, 0x2F1($s4)
    ctx->pc = 0x30201cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 753)));
    // 0x302020: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x302020u;
    {
        const bool branch_taken_0x302020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302020) {
            ctx->pc = 0x302098u;
            goto label_302098;
        }
    }
    ctx->pc = 0x302028u;
    // 0x302028: 0xc0c07a2  jal         func_301E88
    ctx->pc = 0x302028u;
    SET_GPR_U32(ctx, 31, 0x302030u);
    ctx->pc = 0x30202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302028u;
    // 0x30202c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E88u, 0x302028u, 0x302030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302030u;
label_302030:
    // 0x302030: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302034: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x302034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x302038: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x302038u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30203c: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x30203cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302040: 0x0  nop
    ctx->pc = 0x302040u;
    // NOP
    // 0x302044: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x302044u;
    {
        const bool branch_taken_0x302044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302044) {
            ctx->pc = 0x302048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302044u;
            // 0x302048: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30204Cu;
            goto label_30204c;
        }
    }
    ctx->pc = 0x30204Cu;
label_30204c:
    // 0x30204c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30204cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302050: 0xc0c07b4  jal         func_301ED0
    ctx->pc = 0x302050u;
    SET_GPR_U32(ctx, 31, 0x302058u);
    ctx->pc = 0x302054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302050u;
    // 0x302054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301ED0u, 0x302050u, 0x302058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302058u;
label_302058:
    // 0x302058: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x302058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30205c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30205cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302060: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x302060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302068: 0xc0c0752  jal         func_301D48
    ctx->pc = 0x302068u;
    SET_GPR_U32(ctx, 31, 0x302070u);
    ctx->pc = 0x30206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302068u;
    // 0x30206c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301D48u, 0x302068u, 0x302070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302070u;
label_302070:
    // 0x302070: 0x8e8502f8  lw          $a1, 0x2F8($s4)
    ctx->pc = 0x302070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 760)));
    // 0x302074: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302078: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x302078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30207c: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x30207Cu;
    SET_GPR_U32(ctx, 31, 0x302084u);
    ctx->pc = 0x302080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30207Cu;
    // 0x302080: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x30207Cu, 0x302084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302084u;
label_302084:
    // 0x302084: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x302084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x302088: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x302088u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30208c: 0xfaa10070  sqc2        $vf1, 0x70($s5)
    ctx->pc = 0x30208cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302090: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x302090u;
    {
        const bool branch_taken_0x302090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302090u;
        // 0x302094: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302090) {
            ctx->pc = 0x302278u;
            goto label_302278;
        }
    }
    ctx->pc = 0x302098u;
label_302098:
    // 0x302098: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x302098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x30209c: 0x24845ad0  addiu       $a0, $a0, 0x5AD0
    ctx->pc = 0x30209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    // 0x3020a0: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x3020A0u;
    SET_GPR_U32(ctx, 31, 0x3020A8u);
    ctx->pc = 0x3020A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3020A0u;
    // 0x3020a4: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x3020A0u, 0x3020A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3020A8u;
label_3020a8:
    // 0x3020a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3020a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3020ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3020acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3020b0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3020B0u;
    SET_GPR_U32(ctx, 31, 0x3020B8u);
    ctx->pc = 0x3020B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3020B0u;
    // 0x3020b4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3020B0u, 0x3020B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3020B8u;
label_3020b8:
    // 0x3020b8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3020B8u;
    SET_GPR_U32(ctx, 31, 0x3020C0u);
    ctx->pc = 0x3020BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3020B8u;
    // 0x3020bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3020B8u, 0x3020C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3020C0u;
label_3020c0:
    // 0x3020c0: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x3020c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3020c4: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3020c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3020c8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x3020c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3020cc: 0x26b70050  addiu       $s7, $s5, 0x50
    ctx->pc = 0x3020ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x3020d0: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x3020d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x3020d4: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x3020d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3020d8: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x3020d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3020dc: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x3020dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3020e0: 0x26b00060  addiu       $s0, $s5, 0x60
    ctx->pc = 0x3020e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x3020e4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3020e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x3020e8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3020e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3020ec: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x3020ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3020f0: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x3020f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3020f4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3020f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x3020f8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x3020f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3020fc: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x3020fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302100: 0x92820350  lbu         $v0, 0x350($s4)
    ctx->pc = 0x302100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 848)));
    // 0x302104: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x302104u;
    {
        const bool branch_taken_0x302104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302104u;
        // 0x302108: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302104) {
            ctx->pc = 0x302194u;
            goto label_302194;
        }
    }
    ctx->pc = 0x30210Cu;
    // 0x30210c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30210cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302110: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302114: 0xc0c07b4  jal         func_301ED0
    ctx->pc = 0x302114u;
    SET_GPR_U32(ctx, 31, 0x30211Cu);
    ctx->pc = 0x302118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302114u;
    // 0x302118: 0xa2800350  sb          $zero, 0x350($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 848), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301ED0u, 0x302114u, 0x30211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30211Cu;
label_30211c:
    // 0x30211c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30211cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302120: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302124: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x302124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302128: 0xc0c0752  jal         func_301D48
    ctx->pc = 0x302128u;
    SET_GPR_U32(ctx, 31, 0x302130u);
    ctx->pc = 0x30212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302128u;
    // 0x30212c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301D48u, 0x302128u, 0x302130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302130u;
label_302130:
    // 0x302130: 0x8e8502f8  lw          $a1, 0x2F8($s4)
    ctx->pc = 0x302130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 760)));
    // 0x302134: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302138: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30213c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30213cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x302140: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x302140u;
    SET_GPR_U32(ctx, 31, 0x302148u);
    ctx->pc = 0x302144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302140u;
    // 0x302144: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x302140u, 0x302148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302148u;
label_302148:
    // 0x302148: 0x8e8202f8  lw          $v0, 0x2F8($s4)
    ctx->pc = 0x302148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 760)));
    // 0x30214c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x30214cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x302150: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x302150u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302154: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x302154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x302158: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x302158u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30215c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30215cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x302160: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x302160u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302164: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x302164u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x302168: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x302168u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30216c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x30216cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x302170: 0xc6810354  lwc1        $f1, 0x354($s4)
    ctx->pc = 0x302170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302174: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x302174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x302178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30217c: 0x0  nop
    ctx->pc = 0x30217cu;
    // NOP
    // 0x302180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x302180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x302184: 0xae8202e8  sw          $v0, 0x2E8($s4)
    ctx->pc = 0x302184u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 744), GPR_U32(ctx, 2));
    // 0x302188: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x302188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30218c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30218cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x302190: 0xe68102ec  swc1        $f1, 0x2EC($s4)
    ctx->pc = 0x302190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 748), bits); }
label_302194:
    // 0x302194: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302198: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x302198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x30219c: 0xc0c07a2  jal         func_301E88
    ctx->pc = 0x30219Cu;
    SET_GPR_U32(ctx, 31, 0x3021A4u);
    ctx->pc = 0x3021A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30219Cu;
    // 0x3021a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E88u, 0x30219Cu, 0x3021A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3021A4u;
label_3021a4:
    // 0x3021a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3021a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3021a8: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x3021a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3021ac: 0x0  nop
    ctx->pc = 0x3021acu;
    // NOP
    // 0x3021b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3021B0u;
    {
        const bool branch_taken_0x3021b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3021b0) {
            ctx->pc = 0x3021B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3021B0u;
            // 0x3021b4: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3021B8u;
            goto label_3021b8;
        }
    }
    ctx->pc = 0x3021B8u;
label_3021b8:
    // 0x3021b8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3021b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3021bc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x3021bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3021c0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x3021c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3021c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3021c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3021c8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x3021c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3021cc: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x3021ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x3021d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3021d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3021d4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x3021d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3021d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3021d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3021dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3021dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3021e0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3021e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3021e4: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3021E4u;
    {
        const bool branch_taken_0x3021e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3021e4) {
            ctx->pc = 0x3021E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3021E4u;
            // 0x3021e8: 0x8e8502f8  lw          $a1, 0x2F8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302200u;
            goto label_302200;
        }
    }
    ctx->pc = 0x3021ECu;
    // 0x3021ec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x3021ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x3021f0: 0x24845ad0  addiu       $a0, $a0, 0x5AD0
    ctx->pc = 0x3021f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    // 0x3021f4: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x3021F4u;
    SET_GPR_U32(ctx, 31, 0x3021FCu);
    ctx->pc = 0x3021F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3021F4u;
    // 0x3021f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x3021F4u, 0x3021FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3021FCu;
label_3021fc:
    // 0x3021fc: 0x8e8502f8  lw          $a1, 0x2F8($s4)
    ctx->pc = 0x3021fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 760)));
label_302200:
    // 0x302200: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302204: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x302204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302208: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x302208u;
    SET_GPR_U32(ctx, 31, 0x302210u);
    ctx->pc = 0x30220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302208u;
    // 0x30220c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x302208u, 0x302210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302210u;
label_302210:
    // 0x302210: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x302210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x302214: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x302214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x302218: 0xfaa10070  sqc2        $vf1, 0x70($s5)
    ctx->pc = 0x302218u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30221c: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x30221cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302220: 0x0  nop
    ctx->pc = 0x302220u;
    // NOP
    // 0x302224: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x302224u;
    {
        const bool branch_taken_0x302224 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x302228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302224u;
        // 0x302228: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302224) {
            ctx->pc = 0x302278u;
            goto label_302278;
        }
    }
    ctx->pc = 0x30222Cu;
    // 0x30222c: 0x8e8502f8  lw          $a1, 0x2F8($s4)
    ctx->pc = 0x30222cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 760)));
    // 0x302230: 0xa28002f0  sb          $zero, 0x2F0($s4)
    ctx->pc = 0x302230u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 752), (uint8_t)GPR_U32(ctx, 0));
    // 0x302234: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x302234u;
    {
        const bool branch_taken_0x302234 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x302238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302234u;
        // 0x302238: 0xa28002f2  sb          $zero, 0x2F2($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 754), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302234) {
            ctx->pc = 0x30224Cu;
            goto label_30224c;
        }
    }
    ctx->pc = 0x30223Cu;
    // 0x30223c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x30223cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x302240: 0x24845ad0  addiu       $a0, $a0, 0x5AD0
    ctx->pc = 0x302240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    // 0x302244: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x302244u;
    SET_GPR_U32(ctx, 31, 0x30224Cu);
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x302244u, 0x30224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30224Cu;
label_30224c:
    // 0x30224c: 0xa28002f1  sb          $zero, 0x2F1($s4)
    ctx->pc = 0x30224cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 753), (uint8_t)GPR_U32(ctx, 0));
    // 0x302250: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x302250u;
    {
        const bool branch_taken_0x302250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302250u;
        // 0x302254: 0xae8002f8  sw          $zero, 0x2F8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302250) {
            ctx->pc = 0x302274u;
            goto label_302274;
        }
    }
    ctx->pc = 0x302258u;
label_302258:
    // 0x302258: 0xc0c07b4  jal         func_301ED0
    ctx->pc = 0x302258u;
    SET_GPR_U32(ctx, 31, 0x302260u);
    ctx->pc = 0x30225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302258u;
    // 0x30225c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301ED0u, 0x302258u, 0x302260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302260u;
label_302260:
    // 0x302260: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302264: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x302264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302268: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x302268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30226c: 0xc0c0752  jal         func_301D48
    ctx->pc = 0x30226Cu;
    SET_GPR_U32(ctx, 31, 0x302274u);
    ctx->pc = 0x302270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30226Cu;
    // 0x302270: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301D48u, 0x30226Cu, 0x302274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302274u;
label_302274:
    // 0x302274: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x302274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_302278:
    // 0x302278: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x302278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30227c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x30227cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x302280: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x302280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x302284: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x302284u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x302288: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x302288u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30228c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x30228cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x302290: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x302290u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x302294: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x302294u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x302298: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x302298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30229c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x30229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3022a0: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3022a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3022a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3022A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3022A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3022A4u;
        // 0x3022a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3022A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3022ACu;
    // 0x3022ac: 0x0  nop
    ctx->pc = 0x3022acu;
    // NOP
    ctx->pc = 0x3022b0u;
}
