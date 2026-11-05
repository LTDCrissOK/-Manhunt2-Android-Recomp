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

// Function: sub_0015F260
// Address: 0x15f260 - 0x15f470
void sub_0015F260_0x15f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F260_0x15f260");
#endif

    switch (ctx->pc) {
        case 0x15f2bcu: goto label_15f2bc;
        case 0x15f350u: goto label_15f350;
        case 0x15f3d8u: goto label_15f3d8;
        case 0x15f410u: goto label_15f410;
        default: break;
    }

    ctx->pc = 0x15f260u;

    // 0x15f260: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15f260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15f264: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15f264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15f268: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x15f268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x15f26c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15f270: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15f270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f274: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x15f274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x15f278: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x15f278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x15f27c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x15f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x15f280: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x15f280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x15f284: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15f288: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x15f288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x15f28c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x15f28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x15f290: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x15f290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x15f294: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x15f294u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15f298: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x15f298u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15f29c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x15f29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x15f2a0: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x15f2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x15f2a4: 0x12000064  beqz        $s0, . + 4 + (0x64 << 2)
    ctx->pc = 0x15F2A4u;
    {
        const bool branch_taken_0x15f2a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2A4u;
        // 0x15f2a8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2a4) {
            ctx->pc = 0x15F438u;
            goto label_15f438;
        }
    }
    ctx->pc = 0x15F2ACu;
    // 0x15f2ac: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15F2ACu;
    {
        const bool branch_taken_0x15f2ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f2ac) {
            ctx->pc = 0x15F2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F2ACu;
            // 0x15f2b0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F2C8u;
            goto label_15f2c8;
        }
    }
    ctx->pc = 0x15F2B4u;
    // 0x15f2b4: 0xc043958  jal         func_10E560
    ctx->pc = 0x15F2B4u;
    SET_GPR_U32(ctx, 31, 0x15F2BCu);
    ctx->pc = 0x15F2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F2B4u;
    // 0x15f2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x15F2B4u, 0x15F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F2BCu;
label_15f2bc:
    // 0x15f2bc: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x15F2BCu;
    {
        const bool branch_taken_0x15f2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2BCu;
        // 0x15f2c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2bc) {
            ctx->pc = 0x15F43Cu;
            goto label_15f43c;
        }
    }
    ctx->pc = 0x15F2C4u;
    // 0x15f2c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15f2c8:
    // 0x15f2c8: 0x26239a08  addiu       $v1, $s1, -0x65F8
    ctx->pc = 0x15f2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941192));
    // 0x15f2cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15f2d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15f2d4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x15f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x15f2d8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F2D8u;
    {
        const bool branch_taken_0x15f2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f2d8) {
            ctx->pc = 0x15F2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F2D8u;
            // 0x15f2dc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F2E8u;
            goto label_15f2e8;
        }
    }
    ctx->pc = 0x15F2E0u;
    // 0x15f2e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15F2E0u;
    {
        const bool branch_taken_0x15f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2E0u;
        // 0x15f2e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2e0) {
            ctx->pc = 0x15F2F0u;
            goto label_15f2f0;
        }
    }
    ctx->pc = 0x15F2E8u;
label_15f2e8:
    // 0x15f2e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f2ec: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x15f2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15f2f0:
    // 0x15f2f0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x15f2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f2f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15f2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2f8: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x15f2fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x15f2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15f300: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x15f300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f304: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15f304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15f308: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x15f308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f30c: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x15f30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x15f310: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15f310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15f314: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x15f314u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x15f318: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x15f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f31c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x15f31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15f320: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x15f320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f324: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15f324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15f328: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x15F328u;
    {
        const bool branch_taken_0x15f328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F328u;
        // 0x15f32c: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f328) {
            ctx->pc = 0x15F438u;
            goto label_15f438;
        }
    }
    ctx->pc = 0x15F330u;
    // 0x15f330: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15f330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15f334: 0x3c0144c8  lui         $at, 0x44C8
    ctx->pc = 0x15f334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17608 << 16));
    // 0x15f338: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15f338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15f33c: 0x24549c14  addiu       $s4, $v0, -0x63EC
    ctx->pc = 0x15f33cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x15f340: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x15f340u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x15f344: 0x2696fefc  addiu       $s6, $s4, -0x104
    ctx->pc = 0x15f344u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967036));
    // 0x15f348: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x15f348u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15f34c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x15f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_15f350:
    // 0x15f350: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15f354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f35c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x15F35Cu;
    {
        const bool branch_taken_0x15f35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F35Cu;
        // 0x15f360: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f35c) {
            ctx->pc = 0x15F418u;
            goto label_15f418;
        }
    }
    ctx->pc = 0x15F364u;
    // 0x15f364: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x15f364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15f368: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x15f36c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f370: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x15F370u;
    {
        const bool branch_taken_0x15f370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F370u;
        // 0x15f374: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f370) {
            ctx->pc = 0x15F418u;
            goto label_15f418;
        }
    }
    ctx->pc = 0x15F378u;
    // 0x15f378: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15f37c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15f380: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x15f380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x15f384: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15f384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f388: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F388u;
    {
        const bool branch_taken_0x15f388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f388) {
            ctx->pc = 0x15F38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F388u;
            // 0x15f38c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F398u;
            goto label_15f398;
        }
    }
    ctx->pc = 0x15F390u;
    // 0x15f390: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15F390u;
    {
        const bool branch_taken_0x15f390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F390u;
        // 0x15f394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f390) {
            ctx->pc = 0x15F3A0u;
            goto label_15f3a0;
        }
    }
    ctx->pc = 0x15F398u;
label_15f398:
    // 0x15f398: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15f398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f39c: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x15f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15f3a0:
    // 0x15f3a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15f3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f3a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15f3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f3a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15f3ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15f3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f3b0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15f3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15f3b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f3b8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15f3b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15f3bc: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x15f3bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x15f3c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f3c4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x15f3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15f3c8: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x15f3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f3cc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15f3ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15f3d0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15F3D0u;
    SET_GPR_U32(ctx, 31, 0x15F3D8u);
    ctx->pc = 0x15F3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F3D0u;
    // 0x15f3d4: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15F3D0u, 0x15F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F3D8u;
label_15f3d8:
    // 0x15f3d8: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x15f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f3dc: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x15f3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15f3e0: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x15f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15f3e4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15f3e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15f3e8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15f3e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15f3ec: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x15f3ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15f3f0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x15f3f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f3f4: 0x0  nop
    ctx->pc = 0x15f3f4u;
    // NOP
    // 0x15f3f8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x15F3F8u;
    {
        const bool branch_taken_0x15f3f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3F8u;
        // 0x15f3fc: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3f8) {
            ctx->pc = 0x15F41Cu;
            goto label_15f41c;
        }
    }
    ctx->pc = 0x15F400u;
    // 0x15f400: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15f400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f404: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15f404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15f408: 0xc041032  jal         func_1040C8
    ctx->pc = 0x15F408u;
    SET_GPR_U32(ctx, 31, 0x15F410u);
    ctx->pc = 0x15F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F408u;
    // 0x15f40c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x15F408u, 0x15F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F410u;
label_15f410:
    // 0x15f410: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15F410u;
    {
        const bool branch_taken_0x15f410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F410u;
        // 0x15f414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f410) {
            ctx->pc = 0x15F43Cu;
            goto label_15f43c;
        }
    }
    ctx->pc = 0x15F418u;
label_15f418:
    // 0x15f418: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x15f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15f41c:
    // 0x15f41c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15f41cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15f420: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x15f420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15f424: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F424u;
    {
        const bool branch_taken_0x15f424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F424u;
        // 0x15f428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f424) {
            ctx->pc = 0x15F43Cu;
            goto label_15f43c;
        }
    }
    ctx->pc = 0x15F42Cu;
    // 0x15f42c: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x15f42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x15f430: 0x5622ffc7  bnel        $s1, $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x15F430u;
    {
        const bool branch_taken_0x15f430 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15f430) {
            ctx->pc = 0x15F434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F430u;
            // 0x15f434: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f350;
        }
    }
    ctx->pc = 0x15F438u;
label_15f438:
    // 0x15f438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f43c:
    // 0x15f43c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x15f43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f440: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x15f440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15f444: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x15f444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f448: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x15f448u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15f44c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x15f44cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15f450: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x15f450u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15f454: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x15f454u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15f458: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x15f458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15f45c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x15f45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15f460: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x15f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15f464: 0x3e00008  jr          $ra
    ctx->pc = 0x15F464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F464u;
        // 0x15f468: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F46Cu;
    // 0x15f46c: 0x0  nop
    ctx->pc = 0x15f46cu;
    // NOP
    ctx->pc = 0x15f470u;
}
