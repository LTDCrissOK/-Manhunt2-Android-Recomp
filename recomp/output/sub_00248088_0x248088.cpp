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

// Function: sub_00248088
// Address: 0x248088 - 0x248270
void sub_00248088_0x248088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248088_0x248088");
#endif

    switch (ctx->pc) {
        case 0x248088u: goto label_248088;
        case 0x24808cu: goto label_24808c;
        case 0x248090u: goto label_248090;
        case 0x248094u: goto label_248094;
        case 0x248098u: goto label_248098;
        case 0x24809cu: goto label_24809c;
        case 0x2480a0u: goto label_2480a0;
        case 0x2480a4u: goto label_2480a4;
        case 0x2480a8u: goto label_2480a8;
        case 0x2480acu: goto label_2480ac;
        case 0x2480b0u: goto label_2480b0;
        case 0x2480b4u: goto label_2480b4;
        case 0x2480b8u: goto label_2480b8;
        case 0x2480bcu: goto label_2480bc;
        case 0x2480c0u: goto label_2480c0;
        case 0x2480c4u: goto label_2480c4;
        case 0x2480c8u: goto label_2480c8;
        case 0x2480ccu: goto label_2480cc;
        case 0x2480d0u: goto label_2480d0;
        case 0x2480d4u: goto label_2480d4;
        case 0x2480d8u: goto label_2480d8;
        case 0x2480dcu: goto label_2480dc;
        case 0x2480e0u: goto label_2480e0;
        case 0x2480e4u: goto label_2480e4;
        case 0x2480e8u: goto label_2480e8;
        case 0x2480ecu: goto label_2480ec;
        case 0x2480f0u: goto label_2480f0;
        case 0x2480f4u: goto label_2480f4;
        case 0x2480f8u: goto label_2480f8;
        case 0x2480fcu: goto label_2480fc;
        case 0x248100u: goto label_248100;
        case 0x248104u: goto label_248104;
        case 0x248108u: goto label_248108;
        case 0x24810cu: goto label_24810c;
        case 0x248110u: goto label_248110;
        case 0x248114u: goto label_248114;
        case 0x248118u: goto label_248118;
        case 0x24811cu: goto label_24811c;
        case 0x248120u: goto label_248120;
        case 0x248124u: goto label_248124;
        case 0x248128u: goto label_248128;
        case 0x24812cu: goto label_24812c;
        case 0x248130u: goto label_248130;
        case 0x248134u: goto label_248134;
        case 0x248138u: goto label_248138;
        case 0x24813cu: goto label_24813c;
        case 0x248140u: goto label_248140;
        case 0x248144u: goto label_248144;
        case 0x248148u: goto label_248148;
        case 0x24814cu: goto label_24814c;
        case 0x248150u: goto label_248150;
        case 0x248154u: goto label_248154;
        case 0x248158u: goto label_248158;
        case 0x24815cu: goto label_24815c;
        case 0x248160u: goto label_248160;
        case 0x248164u: goto label_248164;
        case 0x248168u: goto label_248168;
        case 0x24816cu: goto label_24816c;
        case 0x248170u: goto label_248170;
        case 0x248174u: goto label_248174;
        case 0x248178u: goto label_248178;
        case 0x24817cu: goto label_24817c;
        case 0x248180u: goto label_248180;
        case 0x248184u: goto label_248184;
        case 0x248188u: goto label_248188;
        case 0x24818cu: goto label_24818c;
        case 0x248190u: goto label_248190;
        case 0x248194u: goto label_248194;
        case 0x248198u: goto label_248198;
        case 0x24819cu: goto label_24819c;
        case 0x2481a0u: goto label_2481a0;
        case 0x2481a4u: goto label_2481a4;
        case 0x2481a8u: goto label_2481a8;
        case 0x2481acu: goto label_2481ac;
        case 0x2481b0u: goto label_2481b0;
        case 0x2481b4u: goto label_2481b4;
        case 0x2481b8u: goto label_2481b8;
        case 0x2481bcu: goto label_2481bc;
        case 0x2481c0u: goto label_2481c0;
        case 0x2481c4u: goto label_2481c4;
        case 0x2481c8u: goto label_2481c8;
        case 0x2481ccu: goto label_2481cc;
        case 0x2481d0u: goto label_2481d0;
        case 0x2481d4u: goto label_2481d4;
        case 0x2481d8u: goto label_2481d8;
        case 0x2481dcu: goto label_2481dc;
        case 0x2481e0u: goto label_2481e0;
        case 0x2481e4u: goto label_2481e4;
        case 0x2481e8u: goto label_2481e8;
        case 0x2481ecu: goto label_2481ec;
        case 0x2481f0u: goto label_2481f0;
        case 0x2481f4u: goto label_2481f4;
        case 0x2481f8u: goto label_2481f8;
        case 0x2481fcu: goto label_2481fc;
        case 0x248200u: goto label_248200;
        case 0x248204u: goto label_248204;
        case 0x248208u: goto label_248208;
        case 0x24820cu: goto label_24820c;
        case 0x248210u: goto label_248210;
        case 0x248214u: goto label_248214;
        case 0x248218u: goto label_248218;
        case 0x24821cu: goto label_24821c;
        case 0x248220u: goto label_248220;
        case 0x248224u: goto label_248224;
        case 0x248228u: goto label_248228;
        case 0x24822cu: goto label_24822c;
        case 0x248230u: goto label_248230;
        case 0x248234u: goto label_248234;
        case 0x248238u: goto label_248238;
        case 0x24823cu: goto label_24823c;
        case 0x248240u: goto label_248240;
        case 0x248244u: goto label_248244;
        case 0x248248u: goto label_248248;
        case 0x24824cu: goto label_24824c;
        case 0x248250u: goto label_248250;
        case 0x248254u: goto label_248254;
        case 0x248258u: goto label_248258;
        case 0x24825cu: goto label_24825c;
        case 0x248260u: goto label_248260;
        case 0x248264u: goto label_248264;
        case 0x248268u: goto label_248268;
        case 0x24826cu: goto label_24826c;
        default: break;
    }

    ctx->pc = 0x248088u;

label_248088:
    // 0x248088: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x248088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24808c:
    // 0x24808c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x24808cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_248090:
    // 0x248090: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x248090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_248094:
    // 0x248094: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x248094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_248098:
    // 0x248098: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x248098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_24809c:
    // 0x24809c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x24809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2480a0:
    // 0x2480a0: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2480a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2480a4:
    // 0x2480a4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2480a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2480a8:
    // 0x2480a8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2480a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2480ac:
    // 0x2480ac: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x2480acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2480b0:
    // 0x2480b0: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2480b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2480b4:
    // 0x2480b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2480b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2480b8:
    // 0x2480b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2480b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2480bc:
    // 0x2480bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2480bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2480c0:
    // 0x2480c0: 0x3884047c  xori        $a0, $a0, 0x47C
    ctx->pc = 0x2480c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1148);
label_2480c4:
    // 0x2480c4: 0x2c920001  sltiu       $s2, $a0, 0x1
    ctx->pc = 0x2480c4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2480c8:
    // 0x2480c8: 0x12400042  beqz        $s2, . + 4 + (0x42 << 2)
label_2480cc:
    if (ctx->pc == 0x2480CCu) {
        ctx->pc = 0x2480CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480C8u;
        // 0x2480cc: 0xc6340374  lwc1        $f20, 0x374($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2480D0u;
        goto label_2480d0;
    }
    ctx->pc = 0x2480C8u;
    {
        const bool branch_taken_0x2480c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2480CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480C8u;
        // 0x2480cc: 0xc6340374  lwc1        $f20, 0x374($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480c8) {
            ctx->pc = 0x2481D4u;
            goto label_2481d4;
        }
    }
    ctx->pc = 0x2480D0u;
label_2480d0:
    // 0x2480d0: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2480d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2480d4:
    // 0x2480d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2480d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2480d8:
    // 0x2480d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2480d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2480dc:
    // 0x2480dc: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2480dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2480e0:
    // 0x2480e0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2480e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2480e4:
    // 0x2480e4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2480e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2480e8:
    // 0x2480e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2480e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2480ec:
    // 0x2480ec: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2480ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2480f0:
    // 0x2480f0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2480f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2480f4:
    // 0x2480f4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2480f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2480f8:
    // 0x2480f8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2480f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2480fc:
    // 0x2480fc: 0xc0f6a96  jal         func_3DAA58
label_248100:
    if (ctx->pc == 0x248100u) {
        ctx->pc = 0x248100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480FCu;
        // 0x248100: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x248104u;
        goto label_248104;
    }
    ctx->pc = 0x2480FCu;
    SET_GPR_U32(ctx, 31, 0x248104u);
    ctx->pc = 0x248100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2480FCu;
    // 0x248100: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2480FCu, 0x248104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248104u;
label_248104:
    // 0x248104: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x248104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_248108:
    // 0x248108: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x248108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_24810c:
    // 0x24810c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24810cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248110:
    // 0x248110: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x248110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_248114:
    // 0x248114: 0xc0c3290  jal         func_30CA40
label_248118:
    if (ctx->pc == 0x248118u) {
        ctx->pc = 0x248118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248114u;
        // 0x248118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24811Cu;
        goto label_24811c;
    }
    ctx->pc = 0x248114u;
    SET_GPR_U32(ctx, 31, 0x24811Cu);
    ctx->pc = 0x248118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248114u;
    // 0x248118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA40u, 0x248114u, 0x24811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24811Cu;
label_24811c:
    // 0x24811c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x24811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248120:
    // 0x248120: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x248120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_248124:
    // 0x248124: 0x3c013f65  lui         $at, 0x3F65
    ctx->pc = 0x248124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16229 << 16));
label_248128:
    // 0x248128: 0x3421a1cb  ori         $at, $at, 0xA1CB
    ctx->pc = 0x248128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41419);
label_24812c:
    // 0x24812c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24812cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_248130:
    // 0x248130: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x248130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_248134:
    // 0x248134: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x248134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_248138:
    // 0x248138: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x248138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_24813c:
    // 0x24813c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x24813cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_248140:
    // 0x248140: 0x4615a540  add.s       $f21, $f20, $f21
    ctx->pc = 0x248140u;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_248144:
    // 0x248144: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x248144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_248148:
    // 0x248148: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x248148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24814c:
    // 0x24814c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x24814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_248150:
    // 0x248150: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x248150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_248154:
    // 0x248154: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x248154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_248158:
    // 0x248158: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x248158u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_24815c:
    // 0x24815c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24815cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_248160:
    // 0x248160: 0x4604259c  madd.s      $f22, $f4, $f4
    ctx->pc = 0x248160u;
    ctx->f[22] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_248164:
    // 0x248164: 0x46160584  c1          0x160584
    ctx->pc = 0x248164u;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
label_248168:
    // 0x248168: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x248168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_24816c:
    // 0x24816c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x24816cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_248170:
    // 0x248170: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x248170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_248174:
    // 0x248174: 0x0  nop
    ctx->pc = 0x248174u;
    // NOP
label_248178:
    // 0x248178: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x248178u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_24817c:
    // 0x24817c: 0xc0e3f98  jal         func_38FE60
label_248180:
    if (ctx->pc == 0x248180u) {
        ctx->pc = 0x248180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24817Cu;
        // 0x248180: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248184u;
        goto label_248184;
    }
    ctx->pc = 0x24817Cu;
    SET_GPR_U32(ctx, 31, 0x248184u);
    ctx->pc = 0x248180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24817Cu;
    // 0x248180: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x24817Cu, 0x248184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248184u;
label_248184:
    // 0x248184: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x248184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_248188:
    // 0x248188: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x248188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24818c:
    // 0x24818c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24818cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_248190:
    // 0x248190: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x248190u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_248194:
    // 0x248194: 0xc0e3f1c  jal         func_38FC70
label_248198:
    if (ctx->pc == 0x248198u) {
        ctx->pc = 0x248198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248194u;
        // 0x248198: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24819Cu;
        goto label_24819c;
    }
    ctx->pc = 0x248194u;
    SET_GPR_U32(ctx, 31, 0x24819Cu);
    ctx->pc = 0x248198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248194u;
    // 0x248198: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x248194u, 0x24819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24819Cu;
label_24819c:
    // 0x24819c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x24819cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_2481a0:
    // 0x2481a0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2481a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2481a4:
    // 0x2481a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2481a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2481a8:
    // 0x2481a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2481a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2481ac:
    // 0x2481ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2481acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2481b0:
    // 0x2481b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2481b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2481b4:
    // 0x2481b4: 0xc09568e  jal         func_255A38
label_2481b8:
    if (ctx->pc == 0x2481B8u) {
        ctx->pc = 0x2481B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481B4u;
        // 0x2481b8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2481BCu;
        goto label_2481bc;
    }
    ctx->pc = 0x2481B4u;
    SET_GPR_U32(ctx, 31, 0x2481BCu);
    ctx->pc = 0x2481B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481B4u;
    // 0x2481b8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A38u, 0x2481B4u, 0x2481BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481BCu;
label_2481bc:
    // 0x2481bc: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2481bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2481c0:
    // 0x2481c0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2481c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2481c4:
    // 0x2481c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2481c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2481c8:
    // 0x2481c8: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x2481c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_2481cc:
    // 0x2481cc: 0x40f809  jalr        $v0
label_2481d0:
    if (ctx->pc == 0x2481D0u) {
        ctx->pc = 0x2481D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481CCu;
        // 0x2481d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2481D4u;
        goto label_2481d4;
    }
    ctx->pc = 0x2481CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2481D4u);
        ctx->pc = 0x2481D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481CCu;
        // 0x2481d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2481CCu, 0x2481D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2481D4u;
label_2481d4:
    // 0x2481d4: 0x8e250334  lw          $a1, 0x334($s1)
    ctx->pc = 0x2481d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2481d8:
    // 0x2481d8: 0x2402047a  addiu       $v0, $zero, 0x47A
    ctx->pc = 0x2481d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1146));
label_2481dc:
    // 0x2481dc: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2481dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_2481e0:
    // 0x2481e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2481e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2481e4:
    // 0x2481e4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2481e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2481e8:
    // 0x2481e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2481e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2481ec:
    // 0x2481ec: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_2481f0:
    if (ctx->pc == 0x2481F0u) {
        ctx->pc = 0x2481F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481ECu;
        // 0x2481f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2481F4u;
        goto label_2481f4;
    }
    ctx->pc = 0x2481ECu;
    {
        const bool branch_taken_0x2481ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2481F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481ECu;
        // 0x2481f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481ec) {
            ctx->pc = 0x248204u;
            goto label_248204;
        }
    }
    ctx->pc = 0x2481F4u;
label_2481f4:
    // 0x2481f4: 0xc06974a  jal         func_1A5D28
label_2481f8:
    if (ctx->pc == 0x2481F8u) {
        ctx->pc = 0x2481F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481F4u;
        // 0x2481f8: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2481FCu;
        goto label_2481fc;
    }
    ctx->pc = 0x2481F4u;
    SET_GPR_U32(ctx, 31, 0x2481FCu);
    ctx->pc = 0x2481F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481F4u;
    // 0x2481f8: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x2481F4u, 0x2481FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481FCu;
label_2481fc:
    // 0x2481fc: 0x1000000c  b           . + 4 + (0xC << 2)
label_248200:
    if (ctx->pc == 0x248200u) {
        ctx->pc = 0x248204u;
        goto label_248204;
    }
    ctx->pc = 0x2481FCu;
    {
        const bool branch_taken_0x2481fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2481fc) {
            ctx->pc = 0x248230u;
            goto label_248230;
        }
    }
    ctx->pc = 0x248204u;
label_248204:
    // 0x248204: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_248208:
    if (ctx->pc == 0x248208u) {
        ctx->pc = 0x24820Cu;
        goto label_24820c;
    }
    ctx->pc = 0x248204u;
    {
        const bool branch_taken_0x248204 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x248204) {
            ctx->pc = 0x248228u;
            goto label_248228;
        }
    }
    ctx->pc = 0x24820Cu;
label_24820c:
    // 0x24820c: 0xc06974a  jal         func_1A5D28
label_248210:
    if (ctx->pc == 0x248210u) {
        ctx->pc = 0x248210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24820Cu;
        // 0x248210: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248214u;
        goto label_248214;
    }
    ctx->pc = 0x24820Cu;
    SET_GPR_U32(ctx, 31, 0x248214u);
    ctx->pc = 0x248210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24820Cu;
    // 0x248210: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x24820Cu, 0x248214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248214u;
label_248214:
    // 0x248214: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x248214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_248218:
    // 0x248218: 0xc06a05e  jal         func_1A8178
label_24821c:
    if (ctx->pc == 0x24821Cu) {
        ctx->pc = 0x24821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248218u;
        // 0x24821c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248220u;
        goto label_248220;
    }
    ctx->pc = 0x248218u;
    SET_GPR_U32(ctx, 31, 0x248220u);
    ctx->pc = 0x24821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248218u;
    // 0x24821c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x248218u, 0x248220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248220u;
label_248220:
    // 0x248220: 0x10000003  b           . + 4 + (0x3 << 2)
label_248224:
    if (ctx->pc == 0x248224u) {
        ctx->pc = 0x248228u;
        goto label_248228;
    }
    ctx->pc = 0x248220u;
    {
        const bool branch_taken_0x248220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248220) {
            ctx->pc = 0x248230u;
            goto label_248230;
        }
    }
    ctx->pc = 0x248228u;
label_248228:
    // 0x248228: 0xc06974a  jal         func_1A5D28
label_24822c:
    if (ctx->pc == 0x24822Cu) {
        ctx->pc = 0x24822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248228u;
        // 0x24822c: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248230u;
        goto label_248230;
    }
    ctx->pc = 0x248228u;
    SET_GPR_U32(ctx, 31, 0x248230u);
    ctx->pc = 0x24822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248228u;
    // 0x24822c: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x248228u, 0x248230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248230u;
label_248230:
    // 0x248230: 0xc06a328  jal         func_1A8CA0
label_248234:
    if (ctx->pc == 0x248234u) {
        ctx->pc = 0x248234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248230u;
        // 0x248234: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248238u;
        goto label_248238;
    }
    ctx->pc = 0x248230u;
    SET_GPR_U32(ctx, 31, 0x248238u);
    ctx->pc = 0x248234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248230u;
    // 0x248234: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x248230u, 0x248238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248238u;
label_248238:
    // 0x248238: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x248238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_24823c:
    // 0x24823c: 0xc0757d2  jal         func_1D5F48
label_248240:
    if (ctx->pc == 0x248240u) {
        ctx->pc = 0x248240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24823Cu;
        // 0x248240: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248244u;
        goto label_248244;
    }
    ctx->pc = 0x24823Cu;
    SET_GPR_U32(ctx, 31, 0x248244u);
    ctx->pc = 0x248240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24823Cu;
    // 0x248240: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x24823Cu, 0x248244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248244u;
label_248244:
    // 0x248244: 0xc092000  jal         func_248000
label_248248:
    if (ctx->pc == 0x248248u) {
        ctx->pc = 0x248248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248244u;
        // 0x248248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24824Cu;
        goto label_24824c;
    }
    ctx->pc = 0x248244u;
    SET_GPR_U32(ctx, 31, 0x24824Cu);
    ctx->pc = 0x248248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248244u;
    // 0x248248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248000u, 0x248244u, 0x24824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24824Cu;
label_24824c:
    // 0x24824c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24824cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_248250:
    // 0x248250: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x248250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_248254:
    // 0x248254: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x248254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_248258:
    // 0x248258: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x248258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_24825c:
    // 0x24825c: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x24825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_248260:
    // 0x248260: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x248260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_248264:
    // 0x248264: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x248264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_248268:
    // 0x248268: 0x3e00008  jr          $ra
label_24826c:
    if (ctx->pc == 0x24826Cu) {
        ctx->pc = 0x24826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248268u;
        // 0x24826c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248270u;
        goto label_fallthrough_0x248268;
    }
    ctx->pc = 0x248268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248268u;
        // 0x24826c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x248268:
    ctx->pc = 0x248270u;
}
