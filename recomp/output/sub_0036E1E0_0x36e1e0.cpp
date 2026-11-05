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

// Function: sub_0036E1E0
// Address: 0x36e1e0 - 0x36e540
void sub_0036E1E0_0x36e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E1E0_0x36e1e0");
#endif

    switch (ctx->pc) {
        case 0x36e238u: goto label_36e238;
        case 0x36e25cu: goto label_36e25c;
        case 0x36e288u: goto label_36e288;
        case 0x36e2c0u: goto label_36e2c0;
        case 0x36e2d8u: goto label_36e2d8;
        case 0x36e2f8u: goto label_36e2f8;
        case 0x36e318u: goto label_36e318;
        case 0x36e328u: goto label_36e328;
        case 0x36e364u: goto label_36e364;
        case 0x36e374u: goto label_36e374;
        case 0x36e384u: goto label_36e384;
        case 0x36e3a0u: goto label_36e3a0;
        case 0x36e3b8u: goto label_36e3b8;
        case 0x36e41cu: goto label_36e41c;
        case 0x36e42cu: goto label_36e42c;
        case 0x36e43cu: goto label_36e43c;
        case 0x36e458u: goto label_36e458;
        case 0x36e474u: goto label_36e474;
        case 0x36e48cu: goto label_36e48c;
        case 0x36e4a8u: goto label_36e4a8;
        case 0x36e4c4u: goto label_36e4c4;
        case 0x36e4dcu: goto label_36e4dc;
        case 0x36e4fcu: goto label_36e4fc;
        case 0x36e504u: goto label_36e504;
        default: break;
    }

    ctx->pc = 0x36e1e0u;

    // 0x36e1e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x36e1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x36e1e4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x36e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x36e1e8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x36e1e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x36e1ec: 0xc44c7d88  lwc1        $f12, 0x7D88($v0)
    ctx->pc = 0x36e1ecu;
    { uint32_t bits = FAST_READ32(0x477D88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36e1f0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x36e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x36e1f4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x36e1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x36e1f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36e1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e1fc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x36e1fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x36e200: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x36e200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36e204: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x36e204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x36e208: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x36e208u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x36e20c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x36e20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x36e210: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x36e210u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x36e214: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x36e214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x36e218: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x36e218u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x36e21c: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x36e21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x36e220: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e224: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x36e224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x36e228: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x36e228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x36e22c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x36e22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x36e230: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x36E230u;
    SET_GPR_U32(ctx, 31, 0x36E238u);
    ctx->pc = 0x36E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E230u;
    // 0x36e234: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x36E230u, 0x36E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E238u;
label_36e238:
    // 0x36e238: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x36e238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x36e23c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x36e23cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e240: 0xc46c7d8c  lwc1        $f12, 0x7D8C($v1)
    ctx->pc = 0x36e240u;
    { uint32_t bits = FAST_READ32(0x477D8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36e244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36e244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e248: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x36e248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x36e24c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x36e24cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x36e250: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x36e250u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x36e254: 0xc0df4ea  jal         func_37D3A8
    ctx->pc = 0x36E254u;
    SET_GPR_U32(ctx, 31, 0x36E25Cu);
    ctx->pc = 0x36E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E254u;
    // 0x36e258: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3A8u, 0x36E254u, 0x36E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E25Cu;
label_36e25c:
    // 0x36e25c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x36e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x36e260: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x36e260u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e264: 0x8c64cbfc  lw          $a0, -0x3404($v1)
    ctx->pc = 0x36e264u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCBFCu));
    // 0x36e268: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x36e268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36e26c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x36e26cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e270: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x36e270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x36e274: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36E274u;
    {
        const bool branch_taken_0x36e274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E274u;
        // 0x36e278: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e274) {
            ctx->pc = 0x36E2ECu;
            goto label_36e2ec;
        }
    }
    ctx->pc = 0x36E27Cu;
    // 0x36e27c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x36e27cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e280: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x36e280u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x36e284: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36e284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36e288:
    // 0x36e288: 0x8ec2cbf8  lw          $v0, -0x3408($s6)
    ctx->pc = 0x36e288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294953976)));
    // 0x36e28c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x36e28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e290: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36e290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e294: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36e294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e298: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x36e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x36e29c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36e29cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36e2a0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x36e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e2a4: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x36e2a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x36e2a8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x36e2a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36e2ac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x36e2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e2b0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x36e2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36e2b4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x36e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e2b8: 0xc0df56d  jal         func_37D5B4
    ctx->pc = 0x36E2B8u;
    SET_GPR_U32(ctx, 31, 0x36E2C0u);
    ctx->pc = 0x36E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E2B8u;
    // 0x36e2bc: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D5B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D5B4u, 0x36E2B8u, 0x36E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E2C0u;
label_36e2c0:
    // 0x36e2c0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x36e2c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e2c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36e2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e2c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x36e2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e2cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x36e2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36e2d0: 0xc0df572  jal         func_37D5C8
    ctx->pc = 0x36E2D0u;
    SET_GPR_U32(ctx, 31, 0x36E2D8u);
    ctx->pc = 0x36E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E2D0u;
    // 0x36e2d4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D5C8u, 0x36E2D0u, 0x36E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E2D8u;
label_36e2d8:
    // 0x36e2d8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x36e2d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e2dc: 0x8e83cbfc  lw          $v1, -0x3404($s4)
    ctx->pc = 0x36e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953980)));
    // 0x36e2e0: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x36e2e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x36e2e4: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x36E2E4u;
    {
        const bool branch_taken_0x36e2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E2E4u;
        // 0x36e2e8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e2e4) {
            ctx->pc = 0x36E288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e288;
        }
    }
    ctx->pc = 0x36E2ECu;
label_36e2ec:
    // 0x36e2ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36e2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e2f0: 0xc0dd74e  jal         func_375D38
    ctx->pc = 0x36E2F0u;
    SET_GPR_U32(ctx, 31, 0x36E2F8u);
    ctx->pc = 0x36E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E2F0u;
    // 0x36e2f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375D38u, 0x36E2F0u, 0x36E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E2F8u;
label_36e2f8:
    // 0x36e2f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x36e2f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e2fc: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x36E2FCu;
    {
        const bool branch_taken_0x36e2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E2FCu;
        // 0x36e300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e2fc) {
            ctx->pc = 0x36E508u;
            goto label_36e508;
        }
    }
    ctx->pc = 0x36E304u;
    // 0x36e304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e308: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E308u;
    {
        const bool branch_taken_0x36e308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36e308) {
            ctx->pc = 0x36E320u;
            goto label_36e320;
        }
    }
    ctx->pc = 0x36E310u;
    // 0x36e310: 0xc0dd1d4  jal         func_374750
    ctx->pc = 0x36E310u;
    SET_GPR_U32(ctx, 31, 0x36E318u);
    ctx->pc = 0x36E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E310u;
    // 0x36e314: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374750u, 0x36E310u, 0x36E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E318u;
label_36e318:
    // 0x36e318: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E318u;
    {
        const bool branch_taken_0x36e318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E318u;
        // 0x36e31c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e318) {
            ctx->pc = 0x36E32Cu;
            goto label_36e32c;
        }
    }
    ctx->pc = 0x36E320u;
label_36e320:
    // 0x36e320: 0xc0dd1d4  jal         func_374750
    ctx->pc = 0x36E320u;
    SET_GPR_U32(ctx, 31, 0x36E328u);
    ctx->pc = 0x36E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E320u;
    // 0x36e324: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374750u, 0x36E320u, 0x36E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E328u;
label_36e328:
    // 0x36e328: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x36e328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_36e32c:
    // 0x36e32c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36e330: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x36e330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x36e334: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x36e334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x36e338: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x36e338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x36e33c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x36e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x36e340: 0x16020024  bne         $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x36E340u;
    {
        const bool branch_taken_0x36e340 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x36E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E340u;
        // 0x36e344: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e340) {
            ctx->pc = 0x36E3D4u;
            goto label_36e3d4;
        }
    }
    ctx->pc = 0x36E348u;
    // 0x36e348: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x36e348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x36e34c: 0x8e85cbfc  lw          $a1, -0x3404($s4)
    ctx->pc = 0x36e34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953980)));
    // 0x36e350: 0x2450f910  addiu       $s0, $v0, -0x6F0
    ctx->pc = 0x36e350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965520));
    // 0x36e354: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x36e354u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36e358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e35c: 0xc0dc4a0  jal         func_371280
    ctx->pc = 0x36E35Cu;
    SET_GPR_U32(ctx, 31, 0x36E364u);
    ctx->pc = 0x36E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E35Cu;
    // 0x36e360: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371280u, 0x36E35Cu, 0x36E364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E364u;
label_36e364:
    // 0x36e364: 0x8e85cbfc  lw          $a1, -0x3404($s4)
    ctx->pc = 0x36e364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953980)));
    // 0x36e368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36e368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e36c: 0xc0dc4a0  jal         func_371280
    ctx->pc = 0x36E36Cu;
    SET_GPR_U32(ctx, 31, 0x36E374u);
    ctx->pc = 0x36E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E36Cu;
    // 0x36e370: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371280u, 0x36E36Cu, 0x36E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E374u;
label_36e374:
    // 0x36e374: 0x8e85cbfc  lw          $a1, -0x3404($s4)
    ctx->pc = 0x36e374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953980)));
    // 0x36e378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36e378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e37c: 0xc0dc4a0  jal         func_371280
    ctx->pc = 0x36E37Cu;
    SET_GPR_U32(ctx, 31, 0x36E384u);
    ctx->pc = 0x36E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E37Cu;
    // 0x36e380: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371280u, 0x36E37Cu, 0x36E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E384u;
label_36e384:
    // 0x36e384: 0x8e83cbfc  lw          $v1, -0x3404($s4)
    ctx->pc = 0x36e384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953980)));
    // 0x36e388: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x36e388u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36e38c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x36E38Cu;
    {
        const bool branch_taken_0x36e38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E38Cu;
        // 0x36e390: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e38c) {
            ctx->pc = 0x36E3C8u;
            goto label_36e3c8;
        }
    }
    ctx->pc = 0x36E394u;
    // 0x36e394: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x36e394u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x36e398: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e39c: 0x0  nop
    ctx->pc = 0x36e39cu;
    // NOP
label_36e3a0:
    // 0x36e3a0: 0x8e44cbf8  lw          $a0, -0x3408($s2)
    ctx->pc = 0x36e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953976)));
    // 0x36e3a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36e3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e3a8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x36e3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e3ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36e3acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36e3b0: 0xc0db844  jal         func_36E110
    ctx->pc = 0x36E3B0u;
    SET_GPR_U32(ctx, 31, 0x36E3B8u);
    ctx->pc = 0x36E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E3B0u;
    // 0x36e3b4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E110u, 0x36E3B0u, 0x36E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E3B8u;
label_36e3b8:
    // 0x36e3b8: 0x8e82cbfc  lw          $v0, -0x3404($s4)
    ctx->pc = 0x36e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953980)));
    // 0x36e3bc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x36e3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36e3c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36E3C0u;
    {
        const bool branch_taken_0x36e3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E3C0u;
        // 0x36e3c4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e3c0) {
            ctx->pc = 0x36E3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e3a0;
        }
    }
    ctx->pc = 0x36E3C8u;
label_36e3c8:
    // 0x36e3c8: 0x8e85cbfc  lw          $a1, -0x3404($s4)
    ctx->pc = 0x36e3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953980)));
    // 0x36e3cc: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x36E3CCu;
    {
        const bool branch_taken_0x36e3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E3CCu;
        // 0x36e3d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e3cc) {
            ctx->pc = 0x36E4F4u;
            goto label_36e4f4;
        }
    }
    ctx->pc = 0x36E3D4u;
label_36e3d4:
    // 0x36e3d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36e3d8: 0x5602004b  bnel        $s0, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x36E3D8u;
    {
        const bool branch_taken_0x36e3d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x36e3d8) {
            ctx->pc = 0x36E3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E3D8u;
            // 0x36e3dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E508u;
            goto label_36e508;
        }
    }
    ctx->pc = 0x36E3E0u;
    // 0x36e3e0: 0x8e83cbfc  lw          $v1, -0x3404($s4)
    ctx->pc = 0x36e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953980)));
    // 0x36e3e4: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x36e3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x36e3e8: 0x24b1f910  addiu       $s1, $a1, -0x6F0
    ctx->pc = 0x36e3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
    // 0x36e3ec: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x36e3ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e3f0: 0x70001b  divu        $zero, $v1, $s0
    ctx->pc = 0x36e3f0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x36e3f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36e3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e3f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36E3F8u;
    {
        const bool branch_taken_0x36e3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e3f8) {
            ctx->pc = 0x36E3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E3F8u;
            // 0x36e3fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E400u;
            goto label_36e400;
        }
    }
    ctx->pc = 0x36E400u;
label_36e400:
    // 0x36e400: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36e400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e404: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x36e404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e408: 0xa012  mflo        $s4
    ctx->pc = 0x36e408u;
    SET_GPR_U64(ctx, 20, ctx->lo);
    // 0x36e40c: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x36e40cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x36e410: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x36e410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x36e414: 0xc0dc4a0  jal         func_371280
    ctx->pc = 0x36E414u;
    SET_GPR_U32(ctx, 31, 0x36E41Cu);
    ctx->pc = 0x36E418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E414u;
    // 0x36e418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371280u, 0x36E414u, 0x36E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E41Cu;
label_36e41c:
    // 0x36e41c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x36e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x36e420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36e420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e424: 0xc0dc4a0  jal         func_371280
    ctx->pc = 0x36E424u;
    SET_GPR_U32(ctx, 31, 0x36E42Cu);
    ctx->pc = 0x36E428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E424u;
    // 0x36e428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371280u, 0x36E424u, 0x36E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E42Cu;
label_36e42c:
    // 0x36e42c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x36e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x36e430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36e430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e434: 0xc0dc4a0  jal         func_371280
    ctx->pc = 0x36E434u;
    SET_GPR_U32(ctx, 31, 0x36E43Cu);
    ctx->pc = 0x36E438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E434u;
    // 0x36e438: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371280u, 0x36E434u, 0x36E43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E43Cu;
label_36e43c:
    // 0x36e43c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x36e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x36e440: 0x12800029  beqz        $s4, . + 4 + (0x29 << 2)
    ctx->pc = 0x36E440u;
    {
        const bool branch_taken_0x36e440 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E440u;
        // 0x36e444: 0x27b60040  addiu       $s6, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e440) {
            ctx->pc = 0x36E4E8u;
            goto label_36e4e8;
        }
    }
    ctx->pc = 0x36E448u;
    // 0x36e448: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x36e448u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x36e44c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x36e44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e450: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e454: 0x0  nop
    ctx->pc = 0x36e454u;
    // NOP
label_36e458:
    // 0x36e458: 0x8e64cbf8  lw          $a0, -0x3408($s3)
    ctx->pc = 0x36e458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953976)));
    // 0x36e45c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36e45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e460: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36e460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e464: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36e464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36e468: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x36e468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x36e46c: 0xc0db844  jal         func_36E110
    ctx->pc = 0x36E46Cu;
    SET_GPR_U32(ctx, 31, 0x36E474u);
    ctx->pc = 0x36E470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E46Cu;
    // 0x36e470: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E110u, 0x36E46Cu, 0x36E474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E474u;
label_36e474:
    // 0x36e474: 0x8e64cbf8  lw          $a0, -0x3408($s3)
    ctx->pc = 0x36e474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953976)));
    // 0x36e478: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36e478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e47c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36e47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e480: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36e480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36e484: 0xc0db844  jal         func_36E110
    ctx->pc = 0x36E484u;
    SET_GPR_U32(ctx, 31, 0x36E48Cu);
    ctx->pc = 0x36E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E484u;
    // 0x36e488: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E110u, 0x36E484u, 0x36E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E48Cu;
label_36e48c:
    // 0x36e48c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x36e48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x36e490: 0x8e64cbf8  lw          $a0, -0x3408($s3)
    ctx->pc = 0x36e490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953976)));
    // 0x36e494: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36e494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e498: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36e498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e49c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36e49cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36e4a0: 0xc0db844  jal         func_36E110
    ctx->pc = 0x36E4A0u;
    SET_GPR_U32(ctx, 31, 0x36E4A8u);
    ctx->pc = 0x36E4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E4A0u;
    // 0x36e4a4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E110u, 0x36E4A0u, 0x36E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E4A8u;
label_36e4a8:
    // 0x36e4a8: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x36e4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x36e4ac: 0x8e64cbf8  lw          $a0, -0x3408($s3)
    ctx->pc = 0x36e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953976)));
    // 0x36e4b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36e4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e4b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36e4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e4b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36e4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36e4bc: 0xc0db844  jal         func_36E110
    ctx->pc = 0x36E4BCu;
    SET_GPR_U32(ctx, 31, 0x36E4C4u);
    ctx->pc = 0x36E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E4BCu;
    // 0x36e4c0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E110u, 0x36E4BCu, 0x36E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E4C4u;
label_36e4c4:
    // 0x36e4c4: 0x8e64cbf8  lw          $a0, -0x3408($s3)
    ctx->pc = 0x36e4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953976)));
    // 0x36e4c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36e4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e4cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36e4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e4d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36e4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36e4d4: 0xc0db844  jal         func_36E110
    ctx->pc = 0x36E4D4u;
    SET_GPR_U32(ctx, 31, 0x36E4DCu);
    ctx->pc = 0x36E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E4D4u;
    // 0x36e4d8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E110u, 0x36E4D4u, 0x36E4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E4DCu;
label_36e4dc:
    // 0x36e4dc: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x36e4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x36e4e0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x36E4E0u;
    {
        const bool branch_taken_0x36e4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E4E0u;
        // 0x36e4e4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e4e0) {
            ctx->pc = 0x36E458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e458;
        }
    }
    ctx->pc = 0x36E4E8u;
label_36e4e8:
    // 0x36e4e8: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x36e4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x36e4ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x36e4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e4f0: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x36e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_36e4f4:
    // 0x36e4f4: 0xc0dd910  jal         func_376440
    ctx->pc = 0x36E4F4u;
    SET_GPR_U32(ctx, 31, 0x36E4FCu);
    ctx->pc = 0x36E4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E4F4u;
    // 0x36e4f8: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376440u, 0x36E4F4u, 0x36E4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E4FCu;
label_36e4fc:
    // 0x36e4fc: 0xc0dc4f6  jal         func_3713D8
    ctx->pc = 0x36E4FCu;
    SET_GPR_U32(ctx, 31, 0x36E504u);
    ctx->pc = 0x36E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E4FCu;
    // 0x36e500: 0x26e4f910  addiu       $a0, $s7, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3713D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3713D8u, 0x36E4FCu, 0x36E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E504u;
label_36e504:
    // 0x36e504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36e508:
    // 0x36e508: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x36e508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36e50c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x36e50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36e510: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x36e510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36e514: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x36e514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x36e518: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x36e518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36e51c: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x36e51cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36e520: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x36e520u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36e524: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x36e524u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x36e528: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x36e528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36e52c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x36e52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36e530: 0x3e00008  jr          $ra
    ctx->pc = 0x36E530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E530u;
        // 0x36e534: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E538u;
    // 0x36e538: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36e538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36e53c: 0x0  nop
    ctx->pc = 0x36e53cu;
    // NOP
    ctx->pc = 0x36e540u;
}
