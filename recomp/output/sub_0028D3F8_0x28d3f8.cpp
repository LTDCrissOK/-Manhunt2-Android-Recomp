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

// Function: sub_0028D3F8
// Address: 0x28d3f8 - 0x28d5d8
void sub_0028D3F8_0x28d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D3F8_0x28d3f8");
#endif

    switch (ctx->pc) {
        case 0x28d458u: goto label_28d458;
        case 0x28d46cu: goto label_28d46c;
        case 0x28d4d0u: goto label_28d4d0;
        case 0x28d50cu: goto label_28d50c;
        case 0x28d540u: goto label_28d540;
        case 0x28d550u: goto label_28d550;
        case 0x28d5b8u: goto label_28d5b8;
        default: break;
    }

    ctx->pc = 0x28d3f8u;

    // 0x28d3f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28d3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28d3fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28d400: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x28d400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x28d404: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x28d404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x28d408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d40c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x28d40cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x28d410: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28d410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28d414: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x28d414u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28d418: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x28d418u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x28d41c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28d41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28d420: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x28d420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28d424: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x28d424u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x28d428: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x28d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x28d42c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28d430: 0xc46c0070  lwc1        $f12, 0x70($v1)
    ctx->pc = 0x28d430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d434: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x28d434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x28d438: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x28d438u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d43c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x28d43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d440: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28d440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d444: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x28d444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28d448: 0xe7ad0008  swc1        $f13, 0x8($sp)
    ctx->pc = 0x28d448u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d44c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x28d44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d450: 0xc0a2ebc  jal         func_28BAF0
    ctx->pc = 0x28D450u;
    SET_GPR_U32(ctx, 31, 0x28D458u);
    ctx->pc = 0x28D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D450u;
    // 0x28d454: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BAF0u, 0x28D450u, 0x28D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D458u;
label_28d458:
    // 0x28d458: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x28d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28d45c: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x28d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28d460: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x28d460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d464: 0xc0a2ebc  jal         func_28BAF0
    ctx->pc = 0x28D464u;
    SET_GPR_U32(ctx, 31, 0x28D46Cu);
    ctx->pc = 0x28D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D464u;
    // 0x28d468: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BAF0u, 0x28D464u, 0x28D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D46Cu;
label_28d46c:
    // 0x28d46c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d470: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x28d470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28d474: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x28d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d478: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x28d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d47c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d47cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28d480: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x28d480u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x28d484: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x28d484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28d488: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x28d488u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28d48c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x28d48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28d490: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x28d490u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x28d494: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x28d494u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28d498: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x28d498u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d49c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x28d49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28d4a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28d4a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28d4a4: 0x0  nop
    ctx->pc = 0x28d4a4u;
    // NOP
    // 0x28d4a8: 0x0  nop
    ctx->pc = 0x28d4a8u;
    // NOP
    // 0x28d4ac: 0x46010544  c1          0x10544
    ctx->pc = 0x28d4acu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x28d4b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x28D4B0u;
    {
        const bool branch_taken_0x28d4b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4B0u;
        // 0x28d4b4: 0xe7a30024  swc1        $f3, 0x24($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4b0) {
            ctx->pc = 0x28D4C8u;
            goto label_28d4c8;
        }
    }
    ctx->pc = 0x28D4B8u;
    // 0x28d4b8: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x28d4b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d4bc: 0x0  nop
    ctx->pc = 0x28d4bcu;
    // NOP
    // 0x28d4c0: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x28D4C0u;
    {
        const bool branch_taken_0x28d4c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4C0u;
        // 0x28d4c4: 0xc7ae0024  lwc1        $f14, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4c0) {
            ctx->pc = 0x28D4FCu;
            goto label_28d4fc;
        }
    }
    ctx->pc = 0x28D4C8u;
label_28d4c8:
    // 0x28d4c8: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x28D4C8u;
    SET_GPR_U32(ctx, 31, 0x28D4D0u);
    ctx->pc = 0x28D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D4C8u;
    // 0x28d4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x28D4C8u, 0x28D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D4D0u;
label_28d4d0:
    // 0x28d4d0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x28d4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d4d4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x28d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d4d8: 0x0  nop
    ctx->pc = 0x28d4d8u;
    // NOP
    // 0x28d4dc: 0x0  nop
    ctx->pc = 0x28d4dcu;
    // NOP
    // 0x28d4e0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x28d4e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28d4e4: 0x0  nop
    ctx->pc = 0x28d4e4u;
    // NOP
    // 0x28d4e8: 0x0  nop
    ctx->pc = 0x28d4e8u;
    // NOP
    // 0x28d4ec: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x28d4ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x28d4f0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x28d4f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28d4f4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x28d4f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28d4f8: 0xc7ae0024  lwc1        $f14, 0x24($sp)
    ctx->pc = 0x28d4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_28d4fc:
    // 0x28d4fc: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x28d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d500: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x28d500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28d504: 0xc0a2f26  jal         func_28BC98
    ctx->pc = 0x28D504u;
    SET_GPR_U32(ctx, 31, 0x28D50Cu);
    ctx->pc = 0x28D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D504u;
    // 0x28d508: 0x46007387  neg.s       $f14, $f14 (Delay Slot)
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BC98u, 0x28D504u, 0x28D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D50Cu;
label_28d50c:
    // 0x28d50c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x28d50cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x28d510: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x28d510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x28d514: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d518: 0x2610c9f0  addiu       $s0, $s0, -0x3610
    ctx->pc = 0x28d518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953456));
    // 0x28d51c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x28d51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x28d520: 0x3421f998  ori         $at, $at, 0xF998
    ctx->pc = 0x28d520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63896);
    // 0x28d524: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28d524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d528: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x28d528u;
    { uint32_t bits = FAST_READ32(0x6BCA0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d52c: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x28d52cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28d530: 0x4603a500  add.s       $f20, $f20, $f3
    ctx->pc = 0x28d530u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x28d534: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x28d534u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x28d538: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x28D538u;
    SET_GPR_U32(ctx, 31, 0x28D540u);
    ctx->pc = 0x28D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D538u;
    // 0x28d53c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x28D538u, 0x28D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D540u;
label_28d540:
    // 0x28d540: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x28d540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x28d544: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28d544u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28d548: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x28D548u;
    SET_GPR_U32(ctx, 31, 0x28D550u);
    ctx->pc = 0x28D54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D548u;
    // 0x28d54c: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x28D548u, 0x28D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D550u;
label_28d550:
    // 0x28d550: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x28d550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x28d554: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x28d554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28d558: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x28d558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d560: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x28d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d564: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x28d564u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x28d568: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x28d568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x28d56c: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x28d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28d570: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28d570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28d574: 0xc6050014  lwc1        $f5, 0x14($s0)
    ctx->pc = 0x28d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28d578: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x28d578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28d57c: 0x0  nop
    ctx->pc = 0x28d57cu;
    // NOP
    // 0x28d580: 0x0  nop
    ctx->pc = 0x28d580u;
    // NOP
    // 0x28d584: 0x46036b43  div.s       $f13, $f13, $f3
    ctx->pc = 0x28d584u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[3]); }
    // 0x28d588: 0x0  nop
    ctx->pc = 0x28d588u;
    // NOP
    // 0x28d58c: 0x0  nop
    ctx->pc = 0x28d58cu;
    // NOP
    // 0x28d590: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x28d590u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x28d594: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x28d594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d598: 0x0  nop
    ctx->pc = 0x28d598u;
    // NOP
    // 0x28d59c: 0x0  nop
    ctx->pc = 0x28d59cu;
    // NOP
    // 0x28d5a0: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x28d5a0u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[5]); }
    // 0x28d5a4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x28d5a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x28d5a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28d5a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28d5ac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28d5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28d5b0: 0xc0a3576  jal         func_28D5D8
    ctx->pc = 0x28D5B0u;
    SET_GPR_U32(ctx, 31, 0x28D5B8u);
    ctx->pc = 0x28D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D5B0u;
    // 0x28d5b4: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D5D8u, 0x28D5B0u, 0x28D5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D5B8u;
label_28d5b8:
    // 0x28d5b8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x28d5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d5bc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x28d5bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28d5c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28d5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d5c4: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x28d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28d5c8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x28d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28d5cc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x28d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28d5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x28D5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5D0u;
        // 0x28d5d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D5D8u;
}
