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

// Function: sub_001863F8
// Address: 0x1863f8 - 0x186540
void sub_001863F8_0x1863f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001863F8_0x1863f8");
#endif

    switch (ctx->pc) {
        case 0x186460u: goto label_186460;
        case 0x18648cu: goto label_18648c;
        case 0x1864dcu: goto label_1864dc;
        case 0x186528u: goto label_186528;
        case 0x186530u: goto label_186530;
        default: break;
    }

    ctx->pc = 0x1863f8u;

    // 0x1863f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1863f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1863fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1863fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186400: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x186400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x186404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186408: 0xae05002c  sw          $a1, 0x2C($s0)
    ctx->pc = 0x186408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 5));
    // 0x18640c: 0x8ca30ff8  lw          $v1, 0xFF8($a1)
    ctx->pc = 0x18640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4088)));
    // 0x186410: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x186410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x186414: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x186414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x186418: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x186418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x18641c: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x18641cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x186420: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x186420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x186424: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x186424u;
    {
        const bool branch_taken_0x186424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186424) {
            ctx->pc = 0x186428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186424u;
            // 0x186428: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18643Cu;
            goto label_18643c;
        }
    }
    ctx->pc = 0x18642Cu;
    // 0x18642c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x18642cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x186430: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x186430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186434: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x186434u;
    {
        const bool branch_taken_0x186434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186434u;
        // 0x186438: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186434) {
            ctx->pc = 0x18647Cu;
            goto label_18647c;
        }
    }
    ctx->pc = 0x18643Cu;
label_18643c:
    // 0x18643c: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x18643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x186440: 0xc46013b8  lwc1        $f0, 0x13B8($v1)
    ctx->pc = 0x186440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186444: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x186444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x186448: 0xc461141c  lwc1        $f1, 0x141C($v1)
    ctx->pc = 0x186448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18644c: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x18644cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x186450: 0xc460141c  lwc1        $f0, 0x141C($v1)
    ctx->pc = 0x186450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186454: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x186454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x186458: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x186458u;
    SET_GPR_U32(ctx, 31, 0x186460u);
    ctx->pc = 0x18645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186458u;
    // 0x18645c: 0xc46c1424  lwc1        $f12, 0x1424($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x186458u, 0x186460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186460u;
label_186460:
    // 0x186460: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x186460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x186464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x186464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186468: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x186468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x18646c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x18646cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x186470: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x186470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x186474: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x186474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x186478: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x186478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_18647c:
    // 0x18647c: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x18647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186484: 0xc0619a4  jal         func_186690
    ctx->pc = 0x186484u;
    SET_GPR_U32(ctx, 31, 0x18648Cu);
    ctx->pc = 0x186488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186484u;
    // 0x186488: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186690u, 0x186484u, 0x18648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18648Cu;
label_18648c:
    // 0x18648c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x18648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186494: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x186494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x186498: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x186498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x18649c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18649cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864a0: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x1864a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x1864a4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1864a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1864a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1864a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1864ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1864acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1864b0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1864b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1864b4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1864b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1864b8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1864b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1864bc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1864bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1864c0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1864c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1864c4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1864c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x1864c8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1864c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1864cc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1864ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1864d0: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1864d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1864d4: 0xc0a21a2  jal         func_288688
    ctx->pc = 0x1864D4u;
    SET_GPR_U32(ctx, 31, 0x1864DCu);
    ctx->pc = 0x1864D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1864D4u;
    // 0x1864d8: 0xe6020004  swc1        $f2, 0x4($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x288688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288688u, 0x1864D4u, 0x1864DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1864DCu;
label_1864dc:
    // 0x1864dc: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x1864dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x1864e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1864e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864e4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1864E4u;
    {
        const bool branch_taken_0x1864e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1864e4) {
            ctx->pc = 0x1864E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1864E4u;
            // 0x1864e8: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1864FCu;
            goto label_1864fc;
        }
    }
    ctx->pc = 0x1864ECu;
    // 0x1864ec: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1864ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1864f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1864f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864f4: 0x0  nop
    ctx->pc = 0x1864f4u;
    // NOP
    // 0x1864f8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1864f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_1864fc:
    // 0x1864fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1864fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186500: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x186500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x186504: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x186504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x186508: 0x8c4500b8  lw          $a1, 0xB8($v0)
    ctx->pc = 0x186508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x18650c: 0x8ca301ac  lw          $v1, 0x1AC($a1)
    ctx->pc = 0x18650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 428)));
    // 0x186510: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x186510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x186514: 0x8ca201b0  lw          $v0, 0x1B0($a1)
    ctx->pc = 0x186514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x186518: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x186518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x18651c: 0x8ca301b4  lw          $v1, 0x1B4($a1)
    ctx->pc = 0x18651cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 436)));
    // 0x186520: 0xc0619d0  jal         func_186740
    ctx->pc = 0x186520u;
    SET_GPR_U32(ctx, 31, 0x186528u);
    ctx->pc = 0x186524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186520u;
    // 0x186524: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186740u, 0x186520u, 0x186528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186528u;
label_186528:
    // 0x186528: 0xc061656  jal         func_185958
    ctx->pc = 0x186528u;
    SET_GPR_U32(ctx, 31, 0x186530u);
    ctx->pc = 0x18652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186528u;
    // 0x18652c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185958u, 0x186528u, 0x186530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186530u;
label_186530:
    // 0x186530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186534: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186538: 0x3e00008  jr          $ra
    ctx->pc = 0x186538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186538u;
        // 0x18653c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186540u;
}
