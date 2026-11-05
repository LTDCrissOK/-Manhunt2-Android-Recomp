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

// Function: sub_0027D418
// Address: 0x27d418 - 0x27d670
void sub_0027D418_0x27d418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D418_0x27d418");
#endif

    switch (ctx->pc) {
        case 0x27d488u: goto label_27d488;
        case 0x27d4b0u: goto label_27d4b0;
        case 0x27d524u: goto label_27d524;
        case 0x27d54cu: goto label_27d54c;
        case 0x27d578u: goto label_27d578;
        case 0x27d5a0u: goto label_27d5a0;
        case 0x27d5c8u: goto label_27d5c8;
        case 0x27d5f4u: goto label_27d5f4;
        case 0x27d61cu: goto label_27d61c;
        default: break;
    }

    ctx->pc = 0x27d418u;

    // 0x27d418: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27d418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27d41c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x27d420: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27d424: 0xe7bb0068  swc1        $f27, 0x68($sp)
    ctx->pc = 0x27d424u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27d428: 0x2454cb28  addiu       $s4, $v0, -0x34D8
    ctx->pc = 0x27d428u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x27d42c: 0xe7ba0060  swc1        $f26, 0x60($sp)
    ctx->pc = 0x27d42cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27d430: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x27d430u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27d434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27d434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27d438: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27d438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27d43c: 0x269103d8  addiu       $s1, $s4, 0x3D8
    ctx->pc = 0x27d43cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 984));
    // 0x27d440: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27d440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27d444: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27d444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d44c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27d44cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d450: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x27d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x27d454: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x27d454u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27d458: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x27d458u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27d45c: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x27d45cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27d460: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x27d460u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27d464: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x27d464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27d468: 0x3c013d1b  lui         $at, 0x3D1B
    ctx->pc = 0x27d468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15643 << 16));
    // 0x27d46c: 0x3421a5e3  ori         $at, $at, 0xA5E3
    ctx->pc = 0x27d46cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42467);
    // 0x27d470: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x27d470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x27d474: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x27d474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x27d478: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x27d478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x27d47c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x27d47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x27d480: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27d480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27d484: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x27d484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_27d488:
    // 0x27d488: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x27d488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x27d48c: 0x8c4302a0  lw          $v1, 0x2A0($v0)
    ctx->pc = 0x27d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
    // 0x27d490: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x27D490u;
    {
        const bool branch_taken_0x27d490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D490u;
        // 0x27d494: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d490) {
            ctx->pc = 0x27D61Cu;
            goto label_27d61c;
        }
    }
    ctx->pc = 0x27D498u;
    // 0x27d498: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27d498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27d49c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x27d49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x27d4a0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x27d4a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x27d4a4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27d4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27d4a8: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x27D4A8u;
    SET_GPR_U32(ctx, 31, 0x27D4B0u);
    ctx->pc = 0x27D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D4A8u;
    // 0x27d4ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x27D4A8u, 0x27D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D4B0u;
label_27d4b0:
    // 0x27d4b0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x27d4b0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x27d4b4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x27d4b4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d4b8: 0x0  nop
    ctx->pc = 0x27d4b8u;
    // NOP
    // 0x27d4bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27d4bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27d4c0: 0x4619b842  mul.s       $f1, $f23, $f25
    ctx->pc = 0x27d4c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[25]);
    // 0x27d4c4: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x27d4c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x27d4c8: 0x4601cd81  sub.s       $f22, $f25, $f1
    ctx->pc = 0x27d4c8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[25], ctx->f[1]);
    // 0x27d4cc: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x27D4CCu;
    {
        const bool branch_taken_0x27d4cc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x27D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4CCu;
        // 0x27d4d0: 0x46150600  add.s       $f24, $f0, $f21 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4cc) {
            ctx->pc = 0x27D50Cu;
            goto label_27d50c;
        }
    }
    ctx->pc = 0x27D4D4u;
    // 0x27d4d4: 0x8e82029c  lw          $v0, 0x29C($s4)
    ctx->pc = 0x27d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 668)));
    // 0x27d4d8: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x27D4D8u;
    {
        const bool branch_taken_0x27d4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4D8u;
        // 0x27d4dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4d8) {
            ctx->pc = 0x27D634u;
            goto label_27d634;
        }
    }
    ctx->pc = 0x27D4E0u;
    // 0x27d4e0: 0x8e22ff98  lw          $v0, -0x68($s1)
    ctx->pc = 0x27d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967192)));
    // 0x27d4e4: 0x3c013f74  lui         $at, 0x3F74
    ctx->pc = 0x27d4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16244 << 16));
    // 0x27d4e8: 0x34213958  ori         $at, $at, 0x3958
    ctx->pc = 0x27d4e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14680);
    // 0x27d4ec: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27d4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27d4f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D4F0u;
    {
        const bool branch_taken_0x27d4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D4F0u;
        // 0x27d4f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d4f0) {
            ctx->pc = 0x27D510u;
            goto label_27d510;
        }
    }
    ctx->pc = 0x27D4F8u;
    // 0x27d4f8: 0x3c013d2c  lui         $at, 0x3D2C
    ctx->pc = 0x27d4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15660 << 16));
    // 0x27d4fc: 0x34210831  ori         $at, $at, 0x831
    ctx->pc = 0x27d4fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2097);
    // 0x27d500: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27d500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27d504: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27D504u;
    {
        const bool branch_taken_0x27d504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D504u;
        // 0x27d508: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d504) {
            ctx->pc = 0x27D514u;
            goto label_27d514;
        }
    }
    ctx->pc = 0x27D50Cu;
label_27d50c:
    // 0x27d50c: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x27d50cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_27d510:
    // 0x27d510: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27d510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27d514:
    // 0x27d514: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x27d514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27d518: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x27d518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27d51c: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x27D51Cu;
    SET_GPR_U32(ctx, 31, 0x27D524u);
    ctx->pc = 0x27D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D51Cu;
    // 0x27d520: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x27D51Cu, 0x27D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D524u;
label_27d524:
    // 0x27d524: 0x8e22ff98  lw          $v0, -0x68($s1)
    ctx->pc = 0x27d524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967192)));
    // 0x27d528: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27D528u;
    {
        const bool branch_taken_0x27d528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D528u;
        // 0x27d52c: 0x4615ad00  add.s       $f20, $f21, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d528) {
            ctx->pc = 0x27D5A8u;
            goto label_27d5a8;
        }
    }
    ctx->pc = 0x27D530u;
    // 0x27d530: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x27d530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x27d534: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x27d534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x27d538: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27d538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d53c: 0x4615b541  sub.s       $f21, $f22, $f21
    ctx->pc = 0x27d53cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x27d540: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d544: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x27D544u;
    SET_GPR_U32(ctx, 31, 0x27D54Cu);
    ctx->pc = 0x27D548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D544u;
    // 0x27d548: 0x4614bd00  add.s       $f20, $f23, $f20 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x27D544u, 0x27D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D54Cu;
label_27d54c:
    // 0x27d54c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27d54cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27d550: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x27d550u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    // 0x27d554: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x27d554u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x27d558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d55c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x27d55cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x27d560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27d560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27d564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d568: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x27d568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x27d56c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27d56cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d570: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x27D570u;
    SET_GPR_U32(ctx, 31, 0x27D578u);
    ctx->pc = 0x27D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D570u;
    // 0x27d574: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x27D570u, 0x27D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D578u;
label_27d578:
    // 0x27d578: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x27d578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x27d57c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x27d57cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x27d580: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x27d580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x27d584: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x27d584u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x27d588: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27d588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27d58c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x27d58cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x27d590: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x27d590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x27d594: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x27d594u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x27d598: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x27D598u;
    SET_GPR_U32(ctx, 31, 0x27D5A0u);
    ctx->pc = 0x27D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D598u;
    // 0x27d59c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x27D598u, 0x27D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5A0u;
label_27d5a0:
    // 0x27d5a0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x27D5A0u;
    {
        const bool branch_taken_0x27d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D5A0u;
        // 0x27d5a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5a0) {
            ctx->pc = 0x27D620u;
            goto label_27d620;
        }
    }
    ctx->pc = 0x27D5A8u;
label_27d5a8:
    // 0x27d5a8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x27d5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x27d5ac: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x27d5acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x27d5b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27d5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27d5b4: 0x4615b541  sub.s       $f21, $f22, $f21
    ctx->pc = 0x27d5b4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x27d5b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d5bc: 0x4614bd00  add.s       $f20, $f23, $f20
    ctx->pc = 0x27d5bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
    // 0x27d5c0: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x27D5C0u;
    SET_GPR_U32(ctx, 31, 0x27D5C8u);
    ctx->pc = 0x27D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D5C0u;
    // 0x27d5c4: 0x4617ad41  sub.s       $f21, $f21, $f23 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x27D5C0u, 0x27D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5C8u;
label_27d5c8:
    // 0x27d5c8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x27d5c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x27d5cc: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x27d5ccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    // 0x27d5d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27d5d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27d5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5d8: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x27d5d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x27d5dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27d5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27d5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5e4: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x27d5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x27d5e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27d5e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5ec: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x27D5ECu;
    SET_GPR_U32(ctx, 31, 0x27D5F4u);
    ctx->pc = 0x27D5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D5ECu;
    // 0x27d5f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x27D5ECu, 0x27D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D5F4u;
label_27d5f4:
    // 0x27d5f4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x27d5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x27d5f8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x27d5f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x27d5fc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x27d5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x27d600: 0x4617b301  sub.s       $f12, $f22, $f23
    ctx->pc = 0x27d600u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x27d604: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27d604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27d608: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x27d608u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x27d60c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x27d60cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x27d610: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x27d610u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x27d614: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x27D614u;
    SET_GPR_U32(ctx, 31, 0x27D61Cu);
    ctx->pc = 0x27D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D614u;
    // 0x27d618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x27D614u, 0x27D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D61Cu;
label_27d61c:
    // 0x27d61c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27d61cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27d620:
    // 0x27d620: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x27d620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x27d624: 0x2a42001a  slti        $v0, $s2, 0x1A
    ctx->pc = 0x27d624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x27d628: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x27D628u;
    {
        const bool branch_taken_0x27d628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D628u;
        // 0x27d62c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d628) {
            ctx->pc = 0x27D488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d488;
        }
    }
    ctx->pc = 0x27D630u;
    // 0x27d630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27d634:
    // 0x27d634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27d634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27d638: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27d638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d63c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27d63cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27d640: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27d640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d644: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27d644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27d648: 0xc7bb0068  lwc1        $f27, 0x68($sp)
    ctx->pc = 0x27d648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x27d64c: 0xc7ba0060  lwc1        $f26, 0x60($sp)
    ctx->pc = 0x27d64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x27d650: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x27d650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x27d654: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x27d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27d658: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x27d658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27d65c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x27d65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27d660: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x27d660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27d664: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x27d664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27d668: 0x3e00008  jr          $ra
    ctx->pc = 0x27D668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D668u;
        // 0x27d66c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D670u;
}
