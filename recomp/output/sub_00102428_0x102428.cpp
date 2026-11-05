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

// Function: sub_00102428
// Address: 0x102428 - 0x102948
void sub_00102428_0x102428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102428_0x102428");
#endif

    switch (ctx->pc) {
        case 0x1024dcu: goto label_1024dc;
        case 0x102508u: goto label_102508;
        case 0x102514u: goto label_102514;
        case 0x10252cu: goto label_10252c;
        case 0x102540u: goto label_102540;
        case 0x1025b0u: goto label_1025b0;
        case 0x102608u: goto label_102608;
        case 0x102618u: goto label_102618;
        case 0x102624u: goto label_102624;
        case 0x102638u: goto label_102638;
        case 0x102644u: goto label_102644;
        case 0x102650u: goto label_102650;
        case 0x102660u: goto label_102660;
        case 0x10266cu: goto label_10266c;
        case 0x102694u: goto label_102694;
        case 0x1026a4u: goto label_1026a4;
        case 0x1026b0u: goto label_1026b0;
        case 0x1026bcu: goto label_1026bc;
        case 0x1026c8u: goto label_1026c8;
        case 0x1026d8u: goto label_1026d8;
        case 0x1026e8u: goto label_1026e8;
        case 0x102700u: goto label_102700;
        case 0x10270cu: goto label_10270c;
        case 0x102790u: goto label_102790;
        case 0x1027f0u: goto label_1027f0;
        case 0x102810u: goto label_102810;
        case 0x10284cu: goto label_10284c;
        case 0x10285cu: goto label_10285c;
        case 0x102868u: goto label_102868;
        case 0x102874u: goto label_102874;
        case 0x102880u: goto label_102880;
        case 0x102890u: goto label_102890;
        case 0x10289cu: goto label_10289c;
        case 0x1028c8u: goto label_1028c8;
        case 0x1028d8u: goto label_1028d8;
        case 0x1028e0u: goto label_1028e0;
        case 0x1028f0u: goto label_1028f0;
        case 0x102900u: goto label_102900;
        default: break;
    }

    ctx->pc = 0x102428u;

    // 0x102428: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x102428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x10242c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x10242cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x102430: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x102430u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x102434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102438: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x102438u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x10243c: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x10243cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x102440: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x102440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x102444: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x102444u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x102448: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x102448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x10244c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x10244cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x102450: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x102450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x102454: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x102454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x102458: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x102458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x10245c: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x10245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x102460: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x102460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x102464: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x102464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x102468: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x102468u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x10246c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x10246cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x102470: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x102470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x102474: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x102474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x102478: 0x12000121  beqz        $s0, . + 4 + (0x121 << 2)
    ctx->pc = 0x102478u;
    {
        const bool branch_taken_0x102478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102478u;
        // 0x10247c: 0xafa7003c  sw          $a3, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102478) {
            ctx->pc = 0x102900u;
            goto label_102900;
        }
    }
    ctx->pc = 0x102480u;
    // 0x102480: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x102480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x102484: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102488: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102488u;
    {
        const bool branch_taken_0x102488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x102488) {
            ctx->pc = 0x1024ACu;
            goto label_1024ac;
        }
    }
    ctx->pc = 0x102490u;
    // 0x102490: 0x460011b  bltz        $v1, . + 4 + (0x11B << 2)
    ctx->pc = 0x102490u;
    {
        const bool branch_taken_0x102490 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x102494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102490u;
        // 0x102494: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102490) {
            ctx->pc = 0x102900u;
            goto label_102900;
        }
    }
    ctx->pc = 0x102498u;
    // 0x102498: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x102498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10249c: 0x8c620724  lw          $v0, 0x724($v1)
    ctx->pc = 0x10249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1828)));
    // 0x1024a0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1024a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1024a4: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x1024A4u;
    {
        const bool branch_taken_0x1024a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024A4u;
        // 0x1024a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024a4) {
            ctx->pc = 0x102904u;
            goto label_102904;
        }
    }
    ctx->pc = 0x1024ACu;
label_1024ac:
    // 0x1024ac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1024acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1024b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1024b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1024b4: 0x0  nop
    ctx->pc = 0x1024b4u;
    // NOP
    // 0x1024b8: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x1024b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1024bc: 0x0  nop
    ctx->pc = 0x1024bcu;
    // NOP
    // 0x1024c0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1024C0u;
    {
        const bool branch_taken_0x1024c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1024C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024C0u;
        // 0x1024c4: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024c0) {
            ctx->pc = 0x1024D4u;
            goto label_1024d4;
        }
    }
    ctx->pc = 0x1024C8u;
    // 0x1024c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1024c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1024cc: 0x1062010d  beq         $v1, $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x1024CCu;
    {
        const bool branch_taken_0x1024cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1024D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024CCu;
        // 0x1024d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024cc) {
            ctx->pc = 0x102904u;
            goto label_102904;
        }
    }
    ctx->pc = 0x1024D4u;
label_1024d4:
    // 0x1024d4: 0xc040ff6  jal         func_103FD8
    ctx->pc = 0x1024D4u;
    SET_GPR_U32(ctx, 31, 0x1024DCu);
    ctx->pc = 0x103FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FD8u, 0x1024D4u, 0x1024DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1024DCu;
label_1024dc:
    // 0x1024dc: 0x10400109  beqz        $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x1024DCu;
    {
        const bool branch_taken_0x1024dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024DCu;
        // 0x1024e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024dc) {
            ctx->pc = 0x102904u;
            goto label_102904;
        }
    }
    ctx->pc = 0x1024E4u;
    // 0x1024e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1024e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1024e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1024e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1024ec: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1024ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1024f0: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x1024f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1024f4: 0x0  nop
    ctx->pc = 0x1024f4u;
    // NOP
    // 0x1024f8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1024F8u;
    {
        const bool branch_taken_0x1024f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1024f8) {
            ctx->pc = 0x1024FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1024F8u;
            // 0x1024fc: 0x4615ad82  mul.s       $f22, $f21, $f21 (Delay Slot)
            ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x102500u;
            goto label_102500;
        }
    }
    ctx->pc = 0x102500u;
label_102500:
    // 0x102500: 0xc0f6686  jal         func_3D9A18
    ctx->pc = 0x102500u;
    SET_GPR_U32(ctx, 31, 0x102508u);
    ctx->pc = 0x102504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102500u;
    // 0x102504: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9A18u, 0x102500u, 0x102508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102508u;
label_102508:
    // 0x102508: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x102508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10250c: 0xc0f66a0  jal         func_3D9A80
    ctx->pc = 0x10250Cu;
    SET_GPR_U32(ctx, 31, 0x102514u);
    ctx->pc = 0x102510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10250Cu;
    // 0x102510: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9A80u, 0x10250Cu, 0x102514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102514u;
label_102514:
    // 0x102514: 0x9202003a  lbu         $v0, 0x3A($s0)
    ctx->pc = 0x102514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x102518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10251c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10251cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102520: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x102520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x102524: 0xc0f66bc  jal         func_3D9AF0
    ctx->pc = 0x102524u;
    SET_GPR_U32(ctx, 31, 0x10252Cu);
    ctx->pc = 0x102528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102524u;
    // 0x102528: 0xa202003a  sb          $v0, 0x3A($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9AF0u, 0x102524u, 0x10252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10252Cu;
label_10252c:
    // 0x10252c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x10252cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x102530: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x102530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102534: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x102534u;
    {
        const bool branch_taken_0x102534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102534u;
        // 0x102538: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102534) {
            ctx->pc = 0x1028BCu;
            goto label_1028bc;
        }
    }
    ctx->pc = 0x10253Cu;
    // 0x10253c: 0x0  nop
    ctx->pc = 0x10253cu;
    // NOP
label_102540:
    // 0x102540: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x102540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x102544: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x102544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x102548: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x102548u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x10254c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102550: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x102550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x102554: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x102554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x102558: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x102558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x10255c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102560: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x102560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x102564: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102564u;
    {
        const bool branch_taken_0x102564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102564u;
        // 0x102568: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102564) {
            ctx->pc = 0x102574u;
            goto label_102574;
        }
    }
    ctx->pc = 0x10256Cu;
    // 0x10256c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10256Cu;
    {
        const bool branch_taken_0x10256c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10256Cu;
        // 0x102570: 0xc4740030  lwc1        $f20, 0x30($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10256c) {
            ctx->pc = 0x10257Cu;
            goto label_10257c;
        }
    }
    ctx->pc = 0x102574u;
label_102574:
    // 0x102574: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x102574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x102578: 0xc454a568  lwc1        $f20, -0x5A98($v0)
    ctx->pc = 0x102578u;
    { uint32_t bits = FAST_READ32(0x43A568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10257c:
    // 0x10257c: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x10257cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102580: 0x0  nop
    ctx->pc = 0x102580u;
    // NOP
    // 0x102584: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x102584u;
    {
        const bool branch_taken_0x102584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x102584) {
            ctx->pc = 0x102588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102584u;
            // 0x102588: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10258Cu;
            goto label_10258c;
        }
    }
    ctx->pc = 0x10258Cu;
label_10258c:
    // 0x10258c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102590: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x102590u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102594: 0x24540018  addiu       $s4, $v0, 0x18
    ctx->pc = 0x102594u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x102598: 0x82930004  lb          $s3, 0x4($s4)
    ctx->pc = 0x102598u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x10259c: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x10259Cu;
    {
        const bool branch_taken_0x10259c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10259Cu;
        // 0x1025a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10259c) {
            ctx->pc = 0x10267Cu;
            goto label_10267c;
        }
    }
    ctx->pc = 0x1025A4u;
    // 0x1025a4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1025a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1025a8: 0x3c170049  lui         $s7, 0x49
    ctx->pc = 0x1025a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)73 << 16));
    // 0x1025ac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1025acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1025b0:
    // 0x1025b0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1025b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1025b4: 0x8c6495a8  lw          $a0, -0x6A58($v1)
    ctx->pc = 0x1025b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F95A8u));
    // 0x1025b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1025b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1025bc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1025bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1025c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1025c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1025c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1025c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1025c8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1025c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1025cc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1025CCu;
    {
        const bool branch_taken_0x1025cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025CCu;
        // 0x1025d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025cc) {
            ctx->pc = 0x1025E0u;
            goto label_1025e0;
        }
    }
    ctx->pc = 0x1025D4u;
    // 0x1025d4: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x1025d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x1025d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1025d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1025dc: 0x3c2280a  movz        $a1, $fp, $v0
    ctx->pc = 0x1025dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 30));
label_1025e0:
    // 0x1025e0: 0x50a00023  beql        $a1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1025E0u;
    {
        const bool branch_taken_0x1025e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1025e0) {
            ctx->pc = 0x1025E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1025E0u;
            // 0x1025e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102670u;
            goto label_102670;
        }
    }
    ctx->pc = 0x1025E8u;
    // 0x1025e8: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x1025e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x1025ec: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x1025ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1025f0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1025f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1025f4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1025F4u;
    {
        const bool branch_taken_0x1025f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1025f4) {
            ctx->pc = 0x1025F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1025F4u;
            // 0x1025f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102670u;
            goto label_102670;
        }
    }
    ctx->pc = 0x1025FCu;
    // 0x1025fc: 0x2404074a  addiu       $a0, $zero, 0x74A
    ctx->pc = 0x1025fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1866));
    // 0x102600: 0xc040a52  jal         func_102948
    ctx->pc = 0x102600u;
    SET_GPR_U32(ctx, 31, 0x102608u);
    ctx->pc = 0x102604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102600u;
    // 0x102604: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102948u, 0x102600u, 0x102608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102608u;
label_102608:
    // 0x102608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x102608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10260c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10260cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102610: 0xc04008e  jal         func_100238
    ctx->pc = 0x102610u;
    SET_GPR_U32(ctx, 31, 0x102618u);
    ctx->pc = 0x102614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102610u;
    // 0x102614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100238u, 0x102610u, 0x102618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102618u;
label_102618:
    // 0x102618: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x102618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10261c: 0xc04009c  jal         func_100270
    ctx->pc = 0x10261Cu;
    SET_GPR_U32(ctx, 31, 0x102624u);
    ctx->pc = 0x102620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10261Cu;
    // 0x102620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100270u, 0x10261Cu, 0x102624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102624u;
label_102624:
    // 0x102624: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x102624u;
    {
        const bool branch_taken_0x102624 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x102628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102624u;
        // 0x102628: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102624) {
            ctx->pc = 0x10263Cu;
            goto label_10263c;
        }
    }
    ctx->pc = 0x10262Cu;
    // 0x10262c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10262cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102630: 0xc0400aa  jal         func_1002A8
    ctx->pc = 0x102630u;
    SET_GPR_U32(ctx, 31, 0x102638u);
    ctx->pc = 0x102634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102630u;
    // 0x102634: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002A8u, 0x102630u, 0x102638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102638u;
label_102638:
    // 0x102638: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x102638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10263c:
    // 0x10263c: 0xc0400b6  jal         func_1002D8
    ctx->pc = 0x10263Cu;
    SET_GPR_U32(ctx, 31, 0x102644u);
    ctx->pc = 0x102640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10263Cu;
    // 0x102640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002D8u, 0x10263Cu, 0x102644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102644u;
label_102644:
    // 0x102644: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x102644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x102648: 0xc0f6702  jal         func_3D9C08
    ctx->pc = 0x102648u;
    SET_GPR_U32(ctx, 31, 0x102650u);
    ctx->pc = 0x10264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102648u;
    // 0x10264c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9C08u, 0x102648u, 0x102650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102650u;
label_102650:
    // 0x102650: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x102650u;
    {
        const bool branch_taken_0x102650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102650) {
            ctx->pc = 0x102654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102650u;
            // 0x102654: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102670u;
            goto label_102670;
        }
    }
    ctx->pc = 0x102658u;
    // 0x102658: 0xc040088  jal         func_100220
    ctx->pc = 0x102658u;
    SET_GPR_U32(ctx, 31, 0x102660u);
    ctx->pc = 0x10265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102658u;
    // 0x10265c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100220u, 0x102658u, 0x102660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102660u;
label_102660:
    // 0x102660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102664: 0xc041ec0  jal         func_107B00
    ctx->pc = 0x102664u;
    SET_GPR_U32(ctx, 31, 0x10266Cu);
    ctx->pc = 0x102668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102664u;
    // 0x102668: 0x26e48758  addiu       $a0, $s7, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B00u, 0x102664u, 0x10266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10266Cu;
label_10266c:
    // 0x10266c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10266cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_102670:
    // 0x102670: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x102670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x102674: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x102674u;
    {
        const bool branch_taken_0x102674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102674) {
            ctx->pc = 0x102678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102674u;
            // 0x102678: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1025B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1025b0;
        }
    }
    ctx->pc = 0x10267Cu;
label_10267c:
    // 0x10267c: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x10267Cu;
    {
        const bool branch_taken_0x10267c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x102680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10267Cu;
        // 0x102680: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10267c) {
            ctx->pc = 0x1026ECu;
            goto label_1026ec;
        }
    }
    ctx->pc = 0x102684u;
    // 0x102684: 0x56c0001a  bnel        $s6, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x102684u;
    {
        const bool branch_taken_0x102684 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x102684) {
            ctx->pc = 0x102688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102684u;
            // 0x102688: 0x905e0022  lbu         $fp, 0x22($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1026F0u;
            goto label_1026f0;
        }
    }
    ctx->pc = 0x10268Cu;
    // 0x10268c: 0xc040a52  jal         func_102948
    ctx->pc = 0x10268Cu;
    SET_GPR_U32(ctx, 31, 0x102694u);
    ctx->pc = 0x102690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10268Cu;
    // 0x102690: 0x2404076b  addiu       $a0, $zero, 0x76B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1899));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102948u, 0x10268Cu, 0x102694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102694u;
label_102694:
    // 0x102694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x102694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102698: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x102698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10269c: 0xc04008e  jal         func_100238
    ctx->pc = 0x10269Cu;
    SET_GPR_U32(ctx, 31, 0x1026A4u);
    ctx->pc = 0x1026A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10269Cu;
    // 0x1026a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100238u, 0x10269Cu, 0x1026A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026A4u;
label_1026a4:
    // 0x1026a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1026a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1026a8: 0xc0400aa  jal         func_1002A8
    ctx->pc = 0x1026A8u;
    SET_GPR_U32(ctx, 31, 0x1026B0u);
    ctx->pc = 0x1026ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026A8u;
    // 0x1026ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002A8u, 0x1026A8u, 0x1026B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026B0u;
label_1026b0:
    // 0x1026b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1026b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026b4: 0xc0400b6  jal         func_1002D8
    ctx->pc = 0x1026B4u;
    SET_GPR_U32(ctx, 31, 0x1026BCu);
    ctx->pc = 0x1026B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026B4u;
    // 0x1026b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002D8u, 0x1026B4u, 0x1026BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026BCu;
label_1026bc:
    // 0x1026bc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1026bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1026c0: 0xc0f6702  jal         func_3D9C08
    ctx->pc = 0x1026C0u;
    SET_GPR_U32(ctx, 31, 0x1026C8u);
    ctx->pc = 0x1026C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026C0u;
    // 0x1026c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9C08u, 0x1026C0u, 0x1026C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026C8u;
label_1026c8:
    // 0x1026c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1026C8u;
    {
        const bool branch_taken_0x1026c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1026CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026C8u;
        // 0x1026cc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026c8) {
            ctx->pc = 0x1026ECu;
            goto label_1026ec;
        }
    }
    ctx->pc = 0x1026D0u;
    // 0x1026d0: 0xc040088  jal         func_100220
    ctx->pc = 0x1026D0u;
    SET_GPR_U32(ctx, 31, 0x1026D8u);
    ctx->pc = 0x1026D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026D0u;
    // 0x1026d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100220u, 0x1026D0u, 0x1026D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026D8u;
label_1026d8:
    // 0x1026d8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1026d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1026dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1026dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026e0: 0xc041ec0  jal         func_107B00
    ctx->pc = 0x1026E0u;
    SET_GPR_U32(ctx, 31, 0x1026E8u);
    ctx->pc = 0x1026E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026E0u;
    // 0x1026e4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B00u, 0x1026E0u, 0x1026E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1026E8u;
label_1026e8:
    // 0x1026e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1026e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1026ec:
    // 0x1026ec: 0x905e0022  lbu         $fp, 0x22($v0)
    ctx->pc = 0x1026ecu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_1026f0:
    // 0x1026f0: 0x13c00072  beqz        $fp, . + 4 + (0x72 << 2)
    ctx->pc = 0x1026F0u;
    {
        const bool branch_taken_0x1026f0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1026F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026F0u;
        // 0x1026f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026f0) {
            ctx->pc = 0x1028BCu;
            goto label_1028bc;
        }
    }
    ctx->pc = 0x1026F8u;
    // 0x1026f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1026f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1026fc: 0x0  nop
    ctx->pc = 0x1026fcu;
    // NOP
label_102700:
    // 0x102700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x102700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102704: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x102704u;
    SET_GPR_U32(ctx, 31, 0x10270Cu);
    ctx->pc = 0x102708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102704u;
    // 0x102708: 0x26350001  addiu       $s5, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x102704u, 0x10270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10270Cu;
label_10270c:
    // 0x10270c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10270cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102710: 0x92420014  lbu         $v0, 0x14($s2)
    ctx->pc = 0x102710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x102714: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x102714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x102718: 0x50400065  beql        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x102718u;
    {
        const bool branch_taken_0x102718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102718) {
            ctx->pc = 0x10271Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102718u;
            // 0x10271c: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1028B0u;
            goto label_1028b0;
        }
    }
    ctx->pc = 0x102720u;
    // 0x102720: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x102720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x102724: 0x9203003a  lbu         $v1, 0x3A($s0)
    ctx->pc = 0x102724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x102728: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x102728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x10272c: 0x54400060  bnel        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x10272Cu;
    {
        const bool branch_taken_0x10272c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10272c) {
            ctx->pc = 0x102730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10272Cu;
            // 0x102730: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1028B0u;
            goto label_1028b0;
        }
    }
    ctx->pc = 0x102734u;
    // 0x102734: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x102734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x102738: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x102738u;
    {
        const bool branch_taken_0x102738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102738) {
            ctx->pc = 0x10273Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102738u;
            // 0x10273c: 0x2654000c  addiu       $s4, $s2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1027F4u;
            goto label_1027f4;
        }
    }
    ctx->pc = 0x102740u;
    // 0x102740: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x102740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x102744: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102748: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x102748u;
    {
        const bool branch_taken_0x102748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x102748) {
            ctx->pc = 0x102764u;
            goto label_102764;
        }
    }
    ctx->pc = 0x102750u;
    // 0x102750: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x102750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x102754: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102754u;
    {
        const bool branch_taken_0x102754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x102758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102754u;
        // 0x102758: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102754) {
            ctx->pc = 0x102764u;
            goto label_102764;
        }
    }
    ctx->pc = 0x10275Cu;
    // 0x10275c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x10275Cu;
    {
        const bool branch_taken_0x10275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10275Cu;
        // 0x102760: 0xa202003a  sb          $v0, 0x3A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10275c) {
            ctx->pc = 0x1028ACu;
            goto label_1028ac;
        }
    }
    ctx->pc = 0x102764u;
label_102764:
    // 0x102764: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x102764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x102768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x102768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10276c: 0x0  nop
    ctx->pc = 0x10276cu;
    // NOP
    // 0x102770: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x102770u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x102774: 0x0  nop
    ctx->pc = 0x102774u;
    // NOP
    // 0x102778: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
    ctx->pc = 0x102778u;
    {
        const bool branch_taken_0x102778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x102778) {
            ctx->pc = 0x10277Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102778u;
            // 0x10277c: 0x9203003a  lbu         $v1, 0x3A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1027D0u;
            goto label_1027d0;
        }
    }
    ctx->pc = 0x102780u;
    // 0x102780: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x102780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x102784: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x102784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x102788: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x102788u;
    SET_GPR_U32(ctx, 31, 0x102790u);
    ctx->pc = 0x10278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102788u;
    // 0x10278c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x102788u, 0x102790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102790u;
label_102790:
    // 0x102790: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x102790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x102794: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x102794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x102798: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x102798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10279c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x10279cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1027a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1027a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1027a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1027a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1027a8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1027a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1027ac: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1027acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1027b0: 0x0  nop
    ctx->pc = 0x1027b0u;
    // NOP
    // 0x1027b4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1027B4u;
    {
        const bool branch_taken_0x1027b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1027B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027B4u;
        // 0x1027b8: 0x26350001  addiu       $s5, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027b4) {
            ctx->pc = 0x1027CCu;
            goto label_1027cc;
        }
    }
    ctx->pc = 0x1027BCu;
    // 0x1027bc: 0x9202003a  lbu         $v0, 0x3A($s0)
    ctx->pc = 0x1027bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x1027c0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1027c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1027c4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1027C4u;
    {
        const bool branch_taken_0x1027c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1027C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027C4u;
        // 0x1027c8: 0xa202003a  sb          $v0, 0x3A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027c4) {
            ctx->pc = 0x1028ACu;
            goto label_1028ac;
        }
    }
    ctx->pc = 0x1027CCu;
label_1027cc:
    // 0x1027cc: 0x9203003a  lbu         $v1, 0x3A($s0)
    ctx->pc = 0x1027ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
label_1027d0:
    // 0x1027d0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1027d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1027d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1027D4u;
    {
        const bool branch_taken_0x1027d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1027D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027D4u;
        // 0x1027d8: 0x2654000c  addiu       $s4, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027d4) {
            ctx->pc = 0x1027F4u;
            goto label_1027f4;
        }
    }
    ctx->pc = 0x1027DCu;
    // 0x1027dc: 0x34620004  ori         $v0, $v1, 0x4
    ctx->pc = 0x1027dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1027e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1027e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1027e4: 0xa202003a  sb          $v0, 0x3A($s0)
    ctx->pc = 0x1027e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1027e8: 0xc0f66bc  jal         func_3D9AF0
    ctx->pc = 0x1027E8u;
    SET_GPR_U32(ctx, 31, 0x1027F0u);
    ctx->pc = 0x1027ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027E8u;
    // 0x1027ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9AF0u, 0x1027E8u, 0x1027F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027F0u;
label_1027f0:
    // 0x1027f0: 0x2654000c  addiu       $s4, $s2, 0xC
    ctx->pc = 0x1027f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1027f4:
    // 0x1027f4: 0x26350001  addiu       $s5, $s1, 0x1
    ctx->pc = 0x1027f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1027f8: 0x82930004  lb          $s3, 0x4($s4)
    ctx->pc = 0x1027f8u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1027fc: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x1027FCu;
    {
        const bool branch_taken_0x1027fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x102800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027FCu;
        // 0x102800: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027fc) {
            ctx->pc = 0x1028ACu;
            goto label_1028ac;
        }
    }
    ctx->pc = 0x102804u;
    // 0x102804: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x102804u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x102808: 0x3c160049  lui         $s6, 0x49
    ctx->pc = 0x102808u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)73 << 16));
    // 0x10280c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x10280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_102810:
    // 0x102810: 0x8ee495a8  lw          $a0, -0x6A58($s7)
    ctx->pc = 0x102810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294940072)));
    // 0x102814: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x102814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x102818: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x102818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10281c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10281cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x102820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102824: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x102824u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102828: 0x5220001d  beql        $s1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x102828u;
    {
        const bool branch_taken_0x102828 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x102828) {
            ctx->pc = 0x10282Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102828u;
            // 0x10282c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1028A0u;
            goto label_1028a0;
        }
    }
    ctx->pc = 0x102830u;
    // 0x102830: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x102830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x102834: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x102834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x102838: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x102838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x10283c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x10283Cu;
    {
        const bool branch_taken_0x10283c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10283c) {
            ctx->pc = 0x102840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10283Cu;
            // 0x102840: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1028A0u;
            goto label_1028a0;
        }
    }
    ctx->pc = 0x102844u;
    // 0x102844: 0xc040a52  jal         func_102948
    ctx->pc = 0x102844u;
    SET_GPR_U32(ctx, 31, 0x10284Cu);
    ctx->pc = 0x102848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102844u;
    // 0x102848: 0x240407bf  addiu       $a0, $zero, 0x7BF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1983));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102948u, 0x102844u, 0x10284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10284Cu;
label_10284c:
    // 0x10284c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10284cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102850: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x102850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102854: 0xc04008e  jal         func_100238
    ctx->pc = 0x102854u;
    SET_GPR_U32(ctx, 31, 0x10285Cu);
    ctx->pc = 0x102858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102854u;
    // 0x102858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100238u, 0x102854u, 0x10285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10285Cu;
label_10285c:
    // 0x10285c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10285cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102860: 0xc04009c  jal         func_100270
    ctx->pc = 0x102860u;
    SET_GPR_U32(ctx, 31, 0x102868u);
    ctx->pc = 0x102864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102860u;
    // 0x102864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100270u, 0x102860u, 0x102868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102868u;
label_102868:
    // 0x102868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10286c: 0xc0400b6  jal         func_1002D8
    ctx->pc = 0x10286Cu;
    SET_GPR_U32(ctx, 31, 0x102874u);
    ctx->pc = 0x102870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10286Cu;
    // 0x102870: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002D8u, 0x10286Cu, 0x102874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102874u;
label_102874:
    // 0x102874: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x102874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x102878: 0xc0f6702  jal         func_3D9C08
    ctx->pc = 0x102878u;
    SET_GPR_U32(ctx, 31, 0x102880u);
    ctx->pc = 0x10287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102878u;
    // 0x10287c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9C08u, 0x102878u, 0x102880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102880u;
label_102880:
    // 0x102880: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x102880u;
    {
        const bool branch_taken_0x102880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102880) {
            ctx->pc = 0x102884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102880u;
            // 0x102884: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1028A0u;
            goto label_1028a0;
        }
    }
    ctx->pc = 0x102888u;
    // 0x102888: 0xc040088  jal         func_100220
    ctx->pc = 0x102888u;
    SET_GPR_U32(ctx, 31, 0x102890u);
    ctx->pc = 0x10288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102888u;
    // 0x10288c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100220u, 0x102888u, 0x102890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102890u;
label_102890:
    // 0x102890: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102894: 0xc041ec0  jal         func_107B00
    ctx->pc = 0x102894u;
    SET_GPR_U32(ctx, 31, 0x10289Cu);
    ctx->pc = 0x102898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102894u;
    // 0x102898: 0x26c48758  addiu       $a0, $s6, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B00u, 0x102894u, 0x10289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10289Cu;
label_10289c:
    // 0x10289c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10289cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1028a0:
    // 0x1028a0: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x1028a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1028a4: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1028A4u;
    {
        const bool branch_taken_0x1028a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1028a4) {
            ctx->pc = 0x1028A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1028A4u;
            // 0x1028a8: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102810;
        }
    }
    ctx->pc = 0x1028ACu;
label_1028ac:
    // 0x1028ac: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1028acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1028b0:
    // 0x1028b0: 0x23e102b  sltu        $v0, $s1, $fp
    ctx->pc = 0x1028b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1028b4: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x1028B4u;
    {
        const bool branch_taken_0x1028b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1028B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028B4u;
        // 0x1028b8: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028b4) {
            ctx->pc = 0x102700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102700;
        }
    }
    ctx->pc = 0x1028BCu;
label_1028bc:
    // 0x1028bc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1028bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1028c0: 0xc0f66dc  jal         func_3D9B70
    ctx->pc = 0x1028C0u;
    SET_GPR_U32(ctx, 31, 0x1028C8u);
    ctx->pc = 0x1028C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028C0u;
    // 0x1028c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9B70u, 0x1028C0u, 0x1028C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028C8u;
label_1028c8:
    // 0x1028c8: 0x1440ff1d  bnez        $v0, . + 4 + (-0xE3 << 2)
    ctx->pc = 0x1028C8u;
    {
        const bool branch_taken_0x1028c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1028CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028C8u;
        // 0x1028cc: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028c8) {
            ctx->pc = 0x102540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102540;
        }
    }
    ctx->pc = 0x1028D0u;
    // 0x1028d0: 0xc0f6726  jal         func_3D9C98
    ctx->pc = 0x1028D0u;
    SET_GPR_U32(ctx, 31, 0x1028D8u);
    ctx->pc = 0x1028D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028D0u;
    // 0x1028d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9C98u, 0x1028D0u, 0x1028D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028D8u;
label_1028d8:
    // 0x1028d8: 0xc0f6730  jal         func_3D9CC0
    ctx->pc = 0x1028D8u;
    SET_GPR_U32(ctx, 31, 0x1028E0u);
    ctx->pc = 0x1028DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028D8u;
    // 0x1028dc: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9CC0u, 0x1028D8u, 0x1028E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028E0u;
label_1028e0:
    // 0x1028e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1028E0u;
    {
        const bool branch_taken_0x1028e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1028E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028E0u;
        // 0x1028e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028e0) {
            ctx->pc = 0x1028F8u;
            goto label_1028f8;
        }
    }
    ctx->pc = 0x1028E8u;
    // 0x1028e8: 0xc0f6676  jal         func_3D99D8
    ctx->pc = 0x1028E8u;
    SET_GPR_U32(ctx, 31, 0x1028F0u);
    ctx->pc = 0x1028ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028E8u;
    // 0x1028ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D99D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D99D8u, 0x1028E8u, 0x1028F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028F0u;
label_1028f0:
    // 0x1028f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1028F0u;
    {
        const bool branch_taken_0x1028f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1028F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028F0u;
        // 0x1028f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028f0) {
            ctx->pc = 0x102904u;
            goto label_102904;
        }
    }
    ctx->pc = 0x1028F8u;
label_1028f8:
    // 0x1028f8: 0xc0f6676  jal         func_3D99D8
    ctx->pc = 0x1028F8u;
    SET_GPR_U32(ctx, 31, 0x102900u);
    ctx->pc = 0x1028FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028F8u;
    // 0x1028fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D99D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D99D8u, 0x1028F8u, 0x102900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102900u;
label_102900:
    // 0x102900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102904:
    // 0x102904: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x102904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102908: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x102908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10290c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x10290cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x102910: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x102910u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x102914: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x102914u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x102918: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x102918u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x10291c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x10291cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x102920: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x102920u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x102924: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x102924u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x102928: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x102928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x10292c: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x10292cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x102930: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x102930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x102934: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x102934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x102938: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x102938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10293c: 0x3e00008  jr          $ra
    ctx->pc = 0x10293Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10293Cu;
        // 0x102940: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10293Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102944u;
    // 0x102944: 0x0  nop
    ctx->pc = 0x102944u;
    // NOP
    ctx->pc = 0x102948u;
}
