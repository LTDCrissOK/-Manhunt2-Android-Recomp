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

// Function: sub_001EC140
// Address: 0x1ec140 - 0x1ec300
void sub_001EC140_0x1ec140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC140_0x1ec140");
#endif

    switch (ctx->pc) {
        case 0x1ec1b8u: goto label_1ec1b8;
        case 0x1ec1e0u: goto label_1ec1e0;
        case 0x1ec1f4u: goto label_1ec1f4;
        case 0x1ec22cu: goto label_1ec22c;
        case 0x1ec2bcu: goto label_1ec2bc;
        case 0x1ec2c8u: goto label_1ec2c8;
        default: break;
    }

    ctx->pc = 0x1ec140u;

    // 0x1ec140: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ec140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ec144: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1ec144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1ec148: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1ec148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1ec14c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1ec14cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec150: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1ec150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1ec154: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1ec154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec158: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1ec158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1ec15c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1ec15cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec160: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1ec160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1ec164: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ec164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec168: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1ec168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1ec16c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ec16cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec170: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ec170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1ec174: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1ec174u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec178: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1ec178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1ec17c: 0x2ac20009  slti        $v0, $s6, 0x9
    ctx->pc = 0x1ec17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ec180: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1EC180u;
    {
        const bool branch_taken_0x1ec180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC180u;
        // 0x1ec184: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec180) {
            ctx->pc = 0x1EC268u;
            goto label_1ec268;
        }
    }
    ctx->pc = 0x1EC188u;
    // 0x1ec188: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ec188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ec18c: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC18Cu;
    {
        const bool branch_taken_0x1ec18c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC18Cu;
        // 0x1ec190: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec18c) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC194u;
    // 0x1ec194: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC194u;
    {
        const bool branch_taken_0x1ec194 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC194u;
        // 0x1ec198: 0x93a50028  lbu         $a1, 0x28($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec194) {
            ctx->pc = 0x1EC1BCu;
            goto label_1ec1bc;
        }
    }
    ctx->pc = 0x1EC19Cu;
label_1ec19c:
    // 0x1ec19c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1ec19cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1ec1a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ec1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1a4: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1ec1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1ec1a8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1ec1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1ec1acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1b0: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1EC1B0u;
    SET_GPR_U32(ctx, 31, 0x1EC1B8u);
    ctx->pc = 0x1EC1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1B0u;
    // 0x1ec1b4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1EC1B0u, 0x1EC1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1B8u;
label_1ec1b8:
    // 0x1ec1b8: 0x93a50028  lbu         $a1, 0x28($sp)
    ctx->pc = 0x1ec1b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
label_1ec1bc:
    // 0x1ec1bc: 0x34108420  ori         $s0, $zero, 0x8420
    ctx->pc = 0x1ec1bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1ec1c0: 0x93b10029  lbu         $s1, 0x29($sp)
    ctx->pc = 0x1ec1c0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1ec1c4: 0x131827  nor         $v1, $zero, $s3
    ctx->pc = 0x1ec1c4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
    // 0x1ec1c8: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1ec1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1ec1cc: 0x121027  nor         $v0, $zero, $s2
    ctx->pc = 0x1ec1ccu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
    // 0x1ec1d0: 0x263880b  movn        $s1, $s3, $v1
    ctx->pc = 0x1ec1d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 19));
    // 0x1ec1d4: 0x242280b  movn        $a1, $s2, $v0
    ctx->pc = 0x1ec1d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    // 0x1ec1d8: 0xc07ad44  jal         func_1EB510
    ctx->pc = 0x1EC1D8u;
    SET_GPR_U32(ctx, 31, 0x1EC1E0u);
    ctx->pc = 0x1EC1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1D8u;
    // 0x1ec1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB510u, 0x1EC1D8u, 0x1EC1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1E0u;
label_1ec1e0:
    // 0x1ec1e0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ec1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ec1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ec1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1ec: 0xc07ad4e  jal         func_1EB538
    ctx->pc = 0x1EC1ECu;
    SET_GPR_U32(ctx, 31, 0x1EC1F4u);
    ctx->pc = 0x1EC1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1ECu;
    // 0x1ec1f0: 0x29e03  sra         $s3, $v0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB538u, 0x1EC1ECu, 0x1EC1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1F4u;
label_1ec1f4:
    // 0x1ec1f4: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x1ec1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ec1f8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ec1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ec1fc: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1ec1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec200: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1ec200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ec204: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x1ec204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec208: 0x29603  sra         $s2, $v0, 24
    ctx->pc = 0x1ec208u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1ec20c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1ec20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec210: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ec210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec214: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1ec214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ec218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec21c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1ec21cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ec220: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1ec220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ec224: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1EC224u;
    SET_GPR_U32(ctx, 31, 0x1EC22Cu);
    ctx->pc = 0x1EC228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC224u;
    // 0x1ec228: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1EC224u, 0x1EC22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC22Cu;
label_1ec22c:
    // 0x1ec22c: 0x2521018  mult        $v0, $s2, $s2
    ctx->pc = 0x1ec22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ec230: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1ec230u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ec234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec238: 0x0  nop
    ctx->pc = 0x1ec238u;
    // NOP
    // 0x1ec23c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec23cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec240: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1ec240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec244: 0x0  nop
    ctx->pc = 0x1ec244u;
    // NOP
    // 0x1ec248: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC248u;
    {
        const bool branch_taken_0x1ec248 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC248u;
        // 0x1ec24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec248) {
            ctx->pc = 0x1EC270u;
            goto label_1ec270;
        }
    }
    ctx->pc = 0x1EC250u;
    // 0x1ec250: 0x34028d90  ori         $v0, $zero, 0x8D90
    ctx->pc = 0x1ec250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36240);
    // 0x1ec254: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1ec254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ec258: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ec258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec25c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1ec25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ec260: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC260u;
    {
        const bool branch_taken_0x1ec260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC260u;
        // 0x1ec264: 0x34108000  ori         $s0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec260) {
            ctx->pc = 0x1EC274u;
            goto label_1ec274;
        }
    }
    ctx->pc = 0x1EC268u;
label_1ec268:
    // 0x1ec268: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EC268u;
    {
        const bool branch_taken_0x1ec268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC268u;
        // 0x1ec26c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec268) {
            ctx->pc = 0x1EC2C8u;
            goto label_1ec2c8;
        }
    }
    ctx->pc = 0x1EC270u;
label_1ec270:
    // 0x1ec270: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1ec270u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1ec274:
    // 0x1ec274: 0x34028db0  ori         $v0, $zero, 0x8DB0
    ctx->pc = 0x1ec274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36272);
    // 0x1ec278: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1ec278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1ec27c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1ec27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ec280: 0xae170d98  sw          $s7, 0xD98($s0)
    ctx->pc = 0x1ec280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3480), GPR_U32(ctx, 23));
    // 0x1ec284: 0xae160d9c  sw          $s6, 0xD9C($s0)
    ctx->pc = 0x1ec284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 22));
    // 0x1ec288: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1ec288u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ec28c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ec28cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec290: 0x0  nop
    ctx->pc = 0x1ec290u;
    // NOP
    // 0x1ec294: 0x0  nop
    ctx->pc = 0x1ec294u;
    // NOP
    // 0x1ec298: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1ec298u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ec29c: 0x34118420  ori         $s1, $zero, 0x8420
    ctx->pc = 0x1ec29cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1ec2a0: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x1ec2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ec2a4: 0xa2130dc8  sb          $s3, 0xDC8($s0)
    ctx->pc = 0x1ec2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3528), (uint8_t)GPR_U32(ctx, 19));
    // 0x1ec2a8: 0xa2120dc9  sb          $s2, 0xDC9($s0)
    ctx->pc = 0x1ec2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3529), (uint8_t)GPR_U32(ctx, 18));
    // 0x1ec2ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2b0: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x1ec2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1ec2b4: 0xc07ad58  jal         func_1EB560
    ctx->pc = 0x1EC2B4u;
    SET_GPR_U32(ctx, 31, 0x1EC2BCu);
    ctx->pc = 0x1EC2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC2B4u;
    // 0x1ec2b8: 0x324600ff  andi        $a2, $s2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB560u, 0x1EC2B4u, 0x1EC2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC2BCu;
label_1ec2bc:
    // 0x1ec2bc: 0xe6000dc4  swc1        $f0, 0xDC4($s0)
    ctx->pc = 0x1ec2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3524), bits); }
    // 0x1ec2c0: 0xc07acd4  jal         func_1EB350
    ctx->pc = 0x1EC2C0u;
    SET_GPR_U32(ctx, 31, 0x1EC2C8u);
    ctx->pc = 0x1EC2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC2C0u;
    // 0x1ec2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB350u, 0x1EC2C0u, 0x1EC2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC2C8u;
label_1ec2c8:
    // 0x1ec2c8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1ec2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec2cc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1ec2ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec2d0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1ec2d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec2d4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1ec2d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ec2d8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1ec2d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec2dc: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1ec2dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec2e0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ec2e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ec2e4: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1ec2e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ec2e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ec2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ec2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2ECu;
        // 0x1ec2f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC2F4u;
    // 0x1ec2f4: 0x0  nop
    ctx->pc = 0x1ec2f4u;
    // NOP
    // 0x1ec2f8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1ec2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ec2fc: 0x0  nop
    ctx->pc = 0x1ec2fcu;
    // NOP
    ctx->pc = 0x1ec300u;
}
