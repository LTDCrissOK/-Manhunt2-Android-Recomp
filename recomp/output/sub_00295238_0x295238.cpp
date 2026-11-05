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

// Function: sub_00295238
// Address: 0x295238 - 0x2956a0
void sub_00295238_0x295238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295238_0x295238");
#endif

    switch (ctx->pc) {
        case 0x2952f0u: goto label_2952f0;
        case 0x295310u: goto label_295310;
        case 0x295338u: goto label_295338;
        case 0x29534cu: goto label_29534c;
        case 0x295380u: goto label_295380;
        case 0x295390u: goto label_295390;
        case 0x2953b0u: goto label_2953b0;
        case 0x2953bcu: goto label_2953bc;
        case 0x2955f8u: goto label_2955f8;
        case 0x295634u: goto label_295634;
        case 0x29564cu: goto label_29564c;
        default: break;
    }

    ctx->pc = 0x295238u;

    // 0x295238: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x295238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x29523c: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x29523cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x295240: 0xc440ac6c  lwc1        $f0, -0x5394($v0)
    ctx->pc = 0x295240u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295244: 0x3c013fe3  lui         $at, 0x3FE3
    ctx->pc = 0x295244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16355 << 16));
    // 0x295248: 0x34218e39  ori         $at, $at, 0x8E39
    ctx->pc = 0x295248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36409);
    // 0x29524c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29524cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x295250: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x295250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x295254: 0xe7be0100  swc1        $f30, 0x100($sp)
    ctx->pc = 0x295254u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x295258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x295258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29525c: 0xe7bc00f0  swc1        $f28, 0xF0($sp)
    ctx->pc = 0x29525cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x295260: 0xe7bb00e8  swc1        $f27, 0xE8($sp)
    ctx->pc = 0x295260u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x295264: 0xe7ba00e0  swc1        $f26, 0xE0($sp)
    ctx->pc = 0x295264u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x295268: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x295268u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x29526c: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x29526cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x295270: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x295270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x295274: 0x46030602  mul.s       $f24, $f0, $f3
    ctx->pc = 0x295274u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x295278: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x295278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x29527c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x29527cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x295280: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x295280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x295284: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x295284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x295288: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x295288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x29528c: 0xe7bd00f8  swc1        $f29, 0xF8($sp)
    ctx->pc = 0x29528cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x295290: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x295290u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x295294: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x295294u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x295298: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x295298u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x29529c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x29529cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2952a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2952a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2952a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2952a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2952a8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2952a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2952ac: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x2952acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x2952b0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2952b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2952b4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2952b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2952b8: 0x4602c182  mul.s       $f6, $f24, $f2
    ctx->pc = 0x2952b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[24], ctx->f[2]);
    // 0x2952bc: 0x460209c2  mul.s       $f7, $f1, $f2
    ctx->pc = 0x2952bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2952c0: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x2952c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2952c4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2952c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2952c8: 0x46040e42  mul.s       $f25, $f1, $f4
    ctx->pc = 0x2952c8u;
    ctx->f[25] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2952cc: 0x46041e82  mul.s       $f26, $f3, $f4
    ctx->pc = 0x2952ccu;
    ctx->f[26] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2952d0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2952d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2952d4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2952d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2952d8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2952d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2952dc: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2952dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2952e0: 0x4602cf82  mul.s       $f30, $f25, $f2
    ctx->pc = 0x2952e0u;
    ctx->f[30] = FPU_MUL_S(ctx->f[25], ctx->f[2]);
    // 0x2952e4: 0x4605d702  mul.s       $f28, $f26, $f5
    ctx->pc = 0x2952e4u;
    ctx->f[28] = FPU_MUL_S(ctx->f[26], ctx->f[5]);
    // 0x2952e8: 0xc0a53b4  jal         func_294ED0
    ctx->pc = 0x2952E8u;
    SET_GPR_U32(ctx, 31, 0x2952F0u);
    ctx->pc = 0x2952ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2952E8u;
    // 0x2952ec: 0x460106c1  sub.s       $f27, $f0, $f1 (Delay Slot)
    ctx->f[27] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x294ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294ED0u, 0x2952E8u, 0x2952F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2952F0u;
label_2952f0:
    // 0x2952f0: 0x8e2200ec  lw          $v0, 0xEC($s1)
    ctx->pc = 0x2952f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x2952f4: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2952F4u;
    {
        const bool branch_taken_0x2952f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2952F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952F4u;
        // 0x2952f8: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952f4) {
            ctx->pc = 0x295650u;
            goto label_295650;
        }
    }
    ctx->pc = 0x2952FCu;
    // 0x2952fc: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2952fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x295300: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x295300u;
    {
        const bool branch_taken_0x295300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295300u;
        // 0x295304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295300) {
            ctx->pc = 0x295330u;
            goto label_295330;
        }
    }
    ctx->pc = 0x295308u;
    // 0x295308: 0x26230068  addiu       $v1, $s1, 0x68
    ctx->pc = 0x295308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x29530c: 0x0  nop
    ctx->pc = 0x29530cu;
    // NOP
label_295310:
    // 0x295310: 0x108000ce  beqz        $a0, . + 4 + (0xCE << 2)
    ctx->pc = 0x295310u;
    {
        const bool branch_taken_0x295310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x295314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295310u;
        // 0x295314: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295310) {
            ctx->pc = 0x29564Cu;
            goto label_29564c;
        }
    }
    ctx->pc = 0x295318u;
    // 0x295318: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x295318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x29531c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29531Cu;
    {
        const bool branch_taken_0x29531c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29531Cu;
        // 0x295320: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29531c) {
            ctx->pc = 0x295330u;
            goto label_295330;
        }
    }
    ctx->pc = 0x295324u;
    // 0x295324: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x295324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x295328: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x295328u;
    {
        const bool branch_taken_0x295328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295328) {
            ctx->pc = 0x295310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295310;
        }
    }
    ctx->pc = 0x295330u;
label_295330:
    // 0x295330: 0xc0db198  jal         func_36C660
    ctx->pc = 0x295330u;
    SET_GPR_U32(ctx, 31, 0x295338u);
    ctx->pc = 0x295334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295330u;
    // 0x295334: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x295330u, 0x295338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295338u;
label_295338:
    // 0x295338: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x295338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29533c: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x29533cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x295340: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x295340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x295344: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x295344u;
    SET_GPR_U32(ctx, 31, 0x29534Cu);
    ctx->pc = 0x295348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295344u;
    // 0x295348: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x295344u, 0x29534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29534Cu;
label_29534c:
    // 0x29534c: 0xc62e0014  lwc1        $f14, 0x14($s1)
    ctx->pc = 0x29534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x295350: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x295350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x295354: 0xc62d0010  lwc1        $f13, 0x10($s1)
    ctx->pc = 0x295354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x295358: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x295358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29535c: 0x46187382  mul.s       $f14, $f14, $f24
    ctx->pc = 0x29535cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[24]);
    // 0x295360: 0xc62f0018  lwc1        $f15, 0x18($s1)
    ctx->pc = 0x295360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x295364: 0x8e2800e8  lw          $t0, 0xE8($s1)
    ctx->pc = 0x295364u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x295368: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x295368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29536c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29536cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x295370: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x295370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x295374: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x295374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295378: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x295378u;
    SET_GPR_U32(ctx, 31, 0x295380u);
    ctx->pc = 0x29537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295378u;
    // 0x29537c: 0x241300ff  addiu       $s3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x295378u, 0x295380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295380u;
label_295380:
    // 0x295380: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x295380u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x295384: 0x27b40064  addiu       $s4, $sp, 0x64
    ctx->pc = 0x295384u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x295388: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x295388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x29538c: 0x0  nop
    ctx->pc = 0x29538cu;
    // NOP
label_295390:
    // 0x295390: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x295390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x295394: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x295394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x295398: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x295398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29539c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x29539cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2953a0: 0x506000a5  beql        $v1, $zero, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2953A0u;
    {
        const bool branch_taken_0x2953a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2953a0) {
            ctx->pc = 0x2953A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2953A0u;
            // 0x2953a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295638u;
            goto label_295638;
        }
    }
    ctx->pc = 0x2953A8u;
    // 0x2953a8: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x2953A8u;
    SET_GPR_U32(ctx, 31, 0x2953B0u);
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x2953A8u, 0x2953B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953B0u;
label_2953b0:
    // 0x2953b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2953b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2953b4: 0xc0aa3f2  jal         func_2A8FC8
    ctx->pc = 0x2953B4u;
    SET_GPR_U32(ctx, 31, 0x2953BCu);
    ctx->pc = 0x2953B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2953B4u;
    // 0x2953b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8FC8u, 0x2953B4u, 0x2953BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953BCu;
label_2953bc:
    // 0x2953bc: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x2953bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x2953c0: 0x22e3a  dsrl        $a1, $v0, 24
    ctx->pc = 0x2953c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 24);
    // 0x2953c4: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x2953c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x2953c8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2953c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2953cc: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x2953ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2953d0: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x2953d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2953d4: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x2953d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x2953d8: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x2953d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2953dc: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x2953dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2953e0: 0xaba20023  swl         $v0, 0x23($sp)
    ctx->pc = 0x2953e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2953e4: 0xbba20020  swr         $v0, 0x20($sp)
    ctx->pc = 0x2953e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2953e8: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x2953e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2953ec: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x2953ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2953f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2953f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2953f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2953f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2953f8: 0x2c430100  sltiu       $v1, $v0, 0x100
    ctx->pc = 0x2953f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2953fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2953FCu;
    {
        const bool branch_taken_0x2953fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x295400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953FCu;
        // 0x295400: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2953fc) {
            ctx->pc = 0x29540Cu;
            goto label_29540c;
        }
    }
    ctx->pc = 0x295404u;
    // 0x295404: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295404u;
    {
        const bool branch_taken_0x295404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295404u;
        // 0x295408: 0xa3a20030  sb          $v0, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295404) {
            ctx->pc = 0x295410u;
            goto label_295410;
        }
    }
    ctx->pc = 0x29540Cu;
label_29540c:
    // 0x29540c: 0xa0d30010  sb          $s3, 0x10($a2)
    ctx->pc = 0x29540cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 19));
label_295410:
    // 0x295410: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x295410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x295414: 0x93a20021  lbu         $v0, 0x21($sp)
    ctx->pc = 0x295414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
    // 0x295418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x295418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29541c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29541cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x295420: 0x2c430100  sltiu       $v1, $v0, 0x100
    ctx->pc = 0x295420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x295424: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x295424u;
    {
        const bool branch_taken_0x295424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295424) {
            ctx->pc = 0x295428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295424u;
            // 0x295428: 0xa0d30011  sb          $s3, 0x11($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 17), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295430u;
            goto label_295430;
        }
    }
    ctx->pc = 0x29542Cu;
    // 0x29542c: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x29542cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
label_295430:
    // 0x295430: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x295430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x295434: 0x93a20022  lbu         $v0, 0x22($sp)
    ctx->pc = 0x295434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x295438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x295438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29543c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x295440: 0x2c430100  sltiu       $v1, $v0, 0x100
    ctx->pc = 0x295440u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x295444: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x295444u;
    {
        const bool branch_taken_0x295444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295444) {
            ctx->pc = 0x295448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295444u;
            // 0x295448: 0xa0d30012  sb          $s3, 0x12($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 18), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295450u;
            goto label_295450;
        }
    }
    ctx->pc = 0x29544Cu;
    // 0x29544c: 0xa3a20032  sb          $v0, 0x32($sp)
    ctx->pc = 0x29544cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 2));
label_295450:
    // 0x295450: 0x93a40023  lbu         $a0, 0x23($sp)
    ctx->pc = 0x295450u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x295454: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x295454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x295458: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x295458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29545c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x29545cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x295460: 0x352900ff  ori         $t1, $t1, 0xFF
    ctx->pc = 0x295460u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)255);
    // 0x295464: 0xa3a40033  sb          $a0, 0x33($sp)
    ctx->pc = 0x295464u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 4));
    // 0x295468: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x295468u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x29546c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x29546cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x295470: 0x8ba60033  lwl         $a2, 0x33($sp)
    ctx->pc = 0x295470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x295474: 0x9ba60030  lwr         $a2, 0x30($sp)
    ctx->pc = 0x295474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x295478: 0xaba60043  swl         $a2, 0x43($sp)
    ctx->pc = 0x295478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29547c: 0xbba60040  swr         $a2, 0x40($sp)
    ctx->pc = 0x29547cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x295480: 0x3c0a807f  lui         $t2, 0x807F
    ctx->pc = 0x295480u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32895 << 16));
    // 0x295484: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x295484u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x295488: 0xa5078  dsll        $t2, $t2, 1
    ctx->pc = 0x295488u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 1);
    // 0x29548c: 0x354a0001  ori         $t2, $t2, 0x1
    ctx->pc = 0x29548cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)1);
    // 0x295490: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x295490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x295494: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x295494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295498: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x295498u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29549c: 0x93a20041  lbu         $v0, 0x41($sp)
    ctx->pc = 0x29549cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 65)));
    // 0x2954a0: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x2954a0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2954a4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2954a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2954a8: 0x93a40042  lbu         $a0, 0x42($sp)
    ctx->pc = 0x2954a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x2954ac: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2954acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2954b0: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2954b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2954b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2954b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2954b8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2954b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2954bc: 0x93a20043  lbu         $v0, 0x43($sp)
    ctx->pc = 0x2954bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
    // 0x2954c0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x2954c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x2954c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2954c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2954c8: 0xa2060010  sb          $a2, 0x10($s0)
    ctx->pc = 0x2954c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x2954cc: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x2954ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x2954d0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2954d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2954d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2954d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2954d8: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2954d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2954dc: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x2954dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x2954e0: 0x22e3a  dsrl        $a1, $v0, 24
    ctx->pc = 0x2954e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 24);
    // 0x2954e4: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x2954e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x2954e8: 0xa3a30051  sb          $v1, 0x51($sp)
    ctx->pc = 0x2954e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 3));
    // 0x2954ec: 0xa3a40052  sb          $a0, 0x52($sp)
    ctx->pc = 0x2954ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 82), (uint8_t)GPR_U32(ctx, 4));
    // 0x2954f0: 0xa3a50053  sb          $a1, 0x53($sp)
    ctx->pc = 0x2954f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 83), (uint8_t)GPR_U32(ctx, 5));
    // 0x2954f4: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x2954f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x2954f8: 0x8ba20053  lwl         $v0, 0x53($sp)
    ctx->pc = 0x2954f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2954fc: 0x9ba20050  lwr         $v0, 0x50($sp)
    ctx->pc = 0x2954fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x295500: 0xaba20013  swl         $v0, 0x13($sp)
    ctx->pc = 0x295500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x295504: 0xbba20010  swr         $v0, 0x10($sp)
    ctx->pc = 0x295504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x295508: 0x8ba20013  lwl         $v0, 0x13($sp)
    ctx->pc = 0x295508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x29550c: 0x9ba20010  lwr         $v0, 0x10($sp)
    ctx->pc = 0x29550cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x295510: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x295510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x295514: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x295514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x295518: 0x8cc20048  lw          $v0, 0x48($a2)
    ctx->pc = 0x295518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x29551c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x29551cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x295520: 0x8cc3004c  lw          $v1, 0x4C($a2)
    ctx->pc = 0x295520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x295524: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x295524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x295528: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x295528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x29552c: 0x2a2380a  movz        $a3, $s5, $v0
    ctx->pc = 0x29552cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 21));
    // 0x295530: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x295530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x295534: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x295534u;
    {
        const bool branch_taken_0x295534 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x295538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295534u;
        // 0x295538: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295534) {
            ctx->pc = 0x295550u;
            goto label_295550;
        }
    }
    ctx->pc = 0x29553Cu;
    // 0x29553c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29553cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295540: 0x0  nop
    ctx->pc = 0x295540u;
    // NOP
    // 0x295544: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x295544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x295548: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x295548u;
    {
        const bool branch_taken_0x295548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295548) {
            ctx->pc = 0x295568u;
            goto label_295568;
        }
    }
    ctx->pc = 0x295550u;
label_295550:
    // 0x295550: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x295550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x295554: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295558: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x295558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29555c: 0x0  nop
    ctx->pc = 0x29555cu;
    // NOP
    // 0x295560: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x295560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x295564: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x295564u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_295568:
    // 0x295568: 0x3c013acc  lui         $at, 0x3ACC
    ctx->pc = 0x295568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15052 << 16));
    // 0x29556c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29556cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x295570: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x295570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295574: 0x4619f0c0  add.s       $f3, $f30, $f25
    ctx->pc = 0x295574u;
    ctx->f[3] = FPU_ADD_S(ctx->f[30], ctx->f[25]);
    // 0x295578: 0x461ae100  add.s       $f4, $f28, $f26
    ctx->pc = 0x295578u;
    ctx->f[4] = FPU_ADD_S(ctx->f[28], ctx->f[26]);
    // 0x29557c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x29557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295580: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x295580u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x295584: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x295584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x295588: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x295588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29558c: 0x46190302  mul.s       $f12, $f0, $f25
    ctx->pc = 0x29558cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x295590: 0x461d18c2  mul.s       $f3, $f3, $f29
    ctx->pc = 0x295590u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[29]);
    // 0x295594: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x295594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295598: 0x0  nop
    ctx->pc = 0x295598u;
    // NOP
    // 0x29559c: 0x0  nop
    ctx->pc = 0x29559cu;
    // NOP
    // 0x2955a0: 0x4602e083  div.s       $f2, $f28, $f2
    ctx->pc = 0x2955a0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[28], ctx->f[2]); }
    // 0x2955a4: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x2955a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2955a8: 0x461a0842  mul.s       $f1, $f1, $f26
    ctx->pc = 0x2955a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
    // 0x2955ac: 0x461d2102  mul.s       $f4, $f4, $f29
    ctx->pc = 0x2955acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[29]);
    // 0x2955b0: 0x46036580  add.s       $f22, $f12, $f3
    ctx->pc = 0x2955b0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x2955b4: 0x46040dc0  add.s       $f23, $f1, $f4
    ctx->pc = 0x2955b4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2955b8: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x2955b8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2955bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2955BCu;
    {
        const bool branch_taken_0x2955bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2955C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955BCu;
        // 0x2955c0: 0x46022d02  mul.s       $f20, $f5, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2955bc) {
            ctx->pc = 0x2955F8u;
            goto label_2955f8;
        }
    }
    ctx->pc = 0x2955C4u;
    // 0x2955c4: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x2955c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x2955c8: 0xc62d0010  lwc1        $f13, 0x10($s1)
    ctx->pc = 0x2955c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2955cc: 0x4618cb82  mul.s       $f14, $f25, $f24
    ctx->pc = 0x2955ccu;
    ctx->f[14] = FPU_MUL_S(ctx->f[25], ctx->f[24]);
    // 0x2955d0: 0x8e2800e4  lw          $t0, 0xE4($s1)
    ctx->pc = 0x2955d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x2955d4: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x2955d4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x2955d8: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x2955d8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x2955dc: 0x460cdb00  add.s       $f12, $f27, $f12
    ctx->pc = 0x2955dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[27], ctx->f[12]);
    // 0x2955e0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2955e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2955e4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2955e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2955e8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2955e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2955ec: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2955ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2955f0: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2955F0u;
    SET_GPR_U32(ctx, 31, 0x2955F8u);
    ctx->pc = 0x2955F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2955F0u;
    // 0x2955f4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2955F0u, 0x2955F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2955F8u;
label_2955f8:
    // 0x2955f8: 0x4614b301  sub.s       $f12, $f22, $f20
    ctx->pc = 0x2955f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x2955fc: 0xc62d0010  lwc1        $f13, 0x10($s1)
    ctx->pc = 0x2955fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x295600: 0x4618a382  mul.s       $f14, $f20, $f24
    ctx->pc = 0x295600u;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x295604: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x295604u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x295608: 0x46176b40  add.s       $f13, $f13, $f23
    ctx->pc = 0x295608u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[23]);
    // 0x29560c: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x29560cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x295610: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x295610u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x295614: 0x93a70003  lbu         $a3, 0x3($sp)
    ctx->pc = 0x295614u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x295618: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x295618u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29561c: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x29561cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x295620: 0x46156b41  sub.s       $f13, $f13, $f21
    ctx->pc = 0x295620u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
    // 0x295624: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x295624u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295628: 0x460cdb00  add.s       $f12, $f27, $f12
    ctx->pc = 0x295628u;
    ctx->f[12] = FPU_ADD_S(ctx->f[27], ctx->f[12]);
    // 0x29562c: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x29562Cu;
    SET_GPR_U32(ctx, 31, 0x295634u);
    ctx->pc = 0x295630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29562Cu;
    // 0x295630: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x29562Cu, 0x295634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295634u;
label_295634:
    // 0x295634: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x295634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_295638:
    // 0x295638: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x295638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x29563c: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x29563Cu;
    {
        const bool branch_taken_0x29563c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29563Cu;
        // 0x295640: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29563c) {
            ctx->pc = 0x295390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295390;
        }
    }
    ctx->pc = 0x295644u;
    // 0x295644: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x295644u;
    SET_GPR_U32(ctx, 31, 0x29564Cu);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x295644u, 0x29564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29564Cu;
label_29564c:
    // 0x29564c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x29564cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_295650:
    // 0x295650: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x295650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x295654: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x295654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x295658: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x295658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x29565c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x29565cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x295660: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x295660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x295664: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x295664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x295668: 0xc7be0100  lwc1        $f30, 0x100($sp)
    ctx->pc = 0x295668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x29566c: 0xc7bd00f8  lwc1        $f29, 0xF8($sp)
    ctx->pc = 0x29566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x295670: 0xc7bc00f0  lwc1        $f28, 0xF0($sp)
    ctx->pc = 0x295670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x295674: 0xc7bb00e8  lwc1        $f27, 0xE8($sp)
    ctx->pc = 0x295674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x295678: 0xc7ba00e0  lwc1        $f26, 0xE0($sp)
    ctx->pc = 0x295678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x29567c: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x29567cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x295680: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x295680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x295684: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x295684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x295688: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x295688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29568c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x29568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x295690: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x295690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x295694: 0x3e00008  jr          $ra
    ctx->pc = 0x295694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295694u;
        // 0x295698: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29569Cu;
    // 0x29569c: 0x0  nop
    ctx->pc = 0x29569cu;
    // NOP
    ctx->pc = 0x2956a0u;
}
