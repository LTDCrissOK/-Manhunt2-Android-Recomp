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

// Function: sub_0031D570
// Address: 0x31d570 - 0x31d760
void sub_0031D570_0x31d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D570_0x31d570");
#endif

    switch (ctx->pc) {
        case 0x31d5b4u: goto label_31d5b4;
        case 0x31d5d8u: goto label_31d5d8;
        case 0x31d5e0u: goto label_31d5e0;
        case 0x31d5f4u: goto label_31d5f4;
        case 0x31d640u: goto label_31d640;
        case 0x31d654u: goto label_31d654;
        case 0x31d6a0u: goto label_31d6a0;
        case 0x31d6b4u: goto label_31d6b4;
        case 0x31d6c8u: goto label_31d6c8;
        case 0x31d6dcu: goto label_31d6dc;
        case 0x31d6e8u: goto label_31d6e8;
        case 0x31d734u: goto label_31d734;
        default: break;
    }

    ctx->pc = 0x31d570u;

    // 0x31d570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31d570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31d574: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31d574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31d578: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31d578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31d57c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31d57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d580: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31d580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d584: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31d584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31d588: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31d588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x31d58c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d590: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x31d590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31d594: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31d594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31d598: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x31d598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x31d59c: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x31d59cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    // 0x31d5a0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x31d5a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x31d5a4: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x31d5a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    // 0x31d5a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31d5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x31d5ac: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31D5ACu;
    SET_GPR_U32(ctx, 31, 0x31D5B4u);
    ctx->pc = 0x31D5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D5ACu;
    // 0x31d5b0: 0x3c130047  lui         $s3, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31D5ACu, 0x31D5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D5B4u;
label_31d5b4:
    // 0x31d5b4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x31d5b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31d5b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x31d5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x31d5bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31d5bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d5c0: 0x3c120047  lui         $s2, 0x47
    ctx->pc = 0x31d5c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)71 << 16));
    // 0x31d5c4: 0xa200009c  sb          $zero, 0x9C($s0)
    ctx->pc = 0x31d5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d5c8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x31d5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x31d5cc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x31d5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x31d5d0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x31D5D0u;
    {
        const bool branch_taken_0x31d5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5D0u;
        // 0x31d5d4: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5d0) {
            ctx->pc = 0x31D6DCu;
            goto label_31d6dc;
        }
    }
    ctx->pc = 0x31D5D8u;
label_31d5d8:
    // 0x31d5d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D5D8u;
    SET_GPR_U32(ctx, 31, 0x31D5E0u);
    ctx->pc = 0x31D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D5D8u;
    // 0x31d5dc: 0x26a544b0  addiu       $a1, $s5, 0x44B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 17584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D5D8u, 0x31D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D5E0u;
label_31d5e0:
    // 0x31d5e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d5e4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31D5E4u;
    {
        const bool branch_taken_0x31d5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D5E4u;
        // 0x31d5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5e4) {
            ctx->pc = 0x31D634u;
            goto label_31d634;
        }
    }
    ctx->pc = 0x31D5ECu;
    // 0x31d5ec: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D5ECu;
    SET_GPR_U32(ctx, 31, 0x31D5F4u);
    ctx->pc = 0x31D5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D5ECu;
    // 0x31d5f0: 0x26050094  addiu       $a1, $s0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D5ECu, 0x31D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D5F4u;
label_31d5f4:
    // 0x31d5f4: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x31d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d5f8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x31d5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x31d5fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31d5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d600: 0x0  nop
    ctx->pc = 0x31d600u;
    // NOP
    // 0x31d604: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31d604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d608: 0x0  nop
    ctx->pc = 0x31d608u;
    // NOP
    // 0x31d60c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31D60Cu;
    {
        const bool branch_taken_0x31d60c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d60c) {
            ctx->pc = 0x31D61Cu;
            goto label_31d61c;
        }
    }
    ctx->pc = 0x31D614u;
    // 0x31d614: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x31D614u;
    {
        const bool branch_taken_0x31d614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D614u;
        // 0x31d618: 0xe6010094  swc1        $f1, 0x94($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d614) {
            ctx->pc = 0x31D6DCu;
            goto label_31d6dc;
        }
    }
    ctx->pc = 0x31D61Cu;
label_31d61c:
    // 0x31d61c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x31d61cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d620: 0x0  nop
    ctx->pc = 0x31d620u;
    // NOP
    // 0x31d624: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
    ctx->pc = 0x31D624u;
    {
        const bool branch_taken_0x31d624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d624) {
            ctx->pc = 0x31D628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D624u;
            // 0x31d628: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D6DCu;
            goto label_31d6dc;
        }
    }
    ctx->pc = 0x31D62Cu;
    // 0x31d62c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x31D62Cu;
    {
        const bool branch_taken_0x31d62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D62Cu;
        // 0x31d630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d62c) {
            ctx->pc = 0x31D6E0u;
            goto label_31d6e0;
        }
    }
    ctx->pc = 0x31D634u;
label_31d634:
    // 0x31d634: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d638: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D638u;
    SET_GPR_U32(ctx, 31, 0x31D640u);
    ctx->pc = 0x31D63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D638u;
    // 0x31d63c: 0x268544b8  addiu       $a1, $s4, 0x44B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 17592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D638u, 0x31D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D640u;
label_31d640:
    // 0x31d640: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d644: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31D644u;
    {
        const bool branch_taken_0x31d644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D644u;
        // 0x31d648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d644) {
            ctx->pc = 0x31D694u;
            goto label_31d694;
        }
    }
    ctx->pc = 0x31D64Cu;
    // 0x31d64c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D64Cu;
    SET_GPR_U32(ctx, 31, 0x31D654u);
    ctx->pc = 0x31D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D64Cu;
    // 0x31d650: 0x26050098  addiu       $a1, $s0, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D64Cu, 0x31D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D654u;
label_31d654:
    // 0x31d654: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x31d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d658: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x31d658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x31d65c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31d65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d660: 0x0  nop
    ctx->pc = 0x31d660u;
    // NOP
    // 0x31d664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31d664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d668: 0x0  nop
    ctx->pc = 0x31d668u;
    // NOP
    // 0x31d66c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31D66Cu;
    {
        const bool branch_taken_0x31d66c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d66c) {
            ctx->pc = 0x31D67Cu;
            goto label_31d67c;
        }
    }
    ctx->pc = 0x31D674u;
    // 0x31d674: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x31D674u;
    {
        const bool branch_taken_0x31d674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D674u;
        // 0x31d678: 0xe6010098  swc1        $f1, 0x98($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d674) {
            ctx->pc = 0x31D6DCu;
            goto label_31d6dc;
        }
    }
    ctx->pc = 0x31D67Cu;
label_31d67c:
    // 0x31d67c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x31d67cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d680: 0x0  nop
    ctx->pc = 0x31d680u;
    // NOP
    // 0x31d684: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
    ctx->pc = 0x31D684u;
    {
        const bool branch_taken_0x31d684 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d684) {
            ctx->pc = 0x31D688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D684u;
            // 0x31d688: 0xae000098  sw          $zero, 0x98($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D6DCu;
            goto label_31d6dc;
        }
    }
    ctx->pc = 0x31D68Cu;
    // 0x31d68c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31D68Cu;
    {
        const bool branch_taken_0x31d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D68Cu;
        // 0x31d690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d68c) {
            ctx->pc = 0x31D6E0u;
            goto label_31d6e0;
        }
    }
    ctx->pc = 0x31D694u;
label_31d694:
    // 0x31d694: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d698: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D698u;
    SET_GPR_U32(ctx, 31, 0x31D6A0u);
    ctx->pc = 0x31D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D698u;
    // 0x31d69c: 0x266544c8  addiu       $a1, $s3, 0x44C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 17608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D698u, 0x31D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6A0u;
label_31d6a0:
    // 0x31d6a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d6a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D6A4u;
    {
        const bool branch_taken_0x31d6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6A4u;
        // 0x31d6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6a4) {
            ctx->pc = 0x31D6BCu;
            goto label_31d6bc;
        }
    }
    ctx->pc = 0x31D6ACu;
    // 0x31d6ac: 0xc09dee4  jal         func_277B90
    ctx->pc = 0x31D6ACu;
    SET_GPR_U32(ctx, 31, 0x31D6B4u);
    ctx->pc = 0x31D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6ACu;
    // 0x31d6b0: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B90u, 0x31D6ACu, 0x31D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6B4u;
label_31d6b4:
    // 0x31d6b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31D6B4u;
    {
        const bool branch_taken_0x31d6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6B4u;
        // 0x31d6b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6b4) {
            ctx->pc = 0x31D6E0u;
            goto label_31d6e0;
        }
    }
    ctx->pc = 0x31D6BCu;
label_31d6bc:
    // 0x31d6bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d6c0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D6C0u;
    SET_GPR_U32(ctx, 31, 0x31D6C8u);
    ctx->pc = 0x31D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6C0u;
    // 0x31d6c4: 0x264544e0  addiu       $a1, $s2, 0x44E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 17632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D6C0u, 0x31D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6C8u;
label_31d6c8:
    // 0x31d6c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d6cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D6CCu;
    {
        const bool branch_taken_0x31d6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6CCu;
        // 0x31d6d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6cc) {
            ctx->pc = 0x31D6DCu;
            goto label_31d6dc;
        }
    }
    ctx->pc = 0x31D6D4u;
    // 0x31d6d4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31D6D4u;
    SET_GPR_U32(ctx, 31, 0x31D6DCu);
    ctx->pc = 0x31D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6D4u;
    // 0x31d6d8: 0x260500a4  addiu       $a1, $s0, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31D6D4u, 0x31D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6DCu;
label_31d6dc:
    // 0x31d6dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d6e0:
    // 0x31d6e0: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x31D6E0u;
    SET_GPR_U32(ctx, 31, 0x31D6E8u);
    ctx->pc = 0x31D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6E0u;
    // 0x31d6e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x31D6E0u, 0x31D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6E8u;
label_31d6e8:
    // 0x31d6e8: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x31D6E8u;
    {
        const bool branch_taken_0x31d6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6E8u;
        // 0x31d6ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6e8) {
            ctx->pc = 0x31D5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d5d8;
        }
    }
    ctx->pc = 0x31D6F0u;
    // 0x31d6f0: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x31d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d6f4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x31d6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x31d6f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31d6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d6fc: 0x0  nop
    ctx->pc = 0x31d6fcu;
    // NOP
    // 0x31d700: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x31d700u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d704: 0x0  nop
    ctx->pc = 0x31d704u;
    // NOP
    // 0x31d708: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x31D708u;
    {
        const bool branch_taken_0x31d708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d708) {
            ctx->pc = 0x31D72Cu;
            goto label_31d72c;
        }
    }
    ctx->pc = 0x31D710u;
    // 0x31d710: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x31d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d714: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x31d714u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d718: 0x0  nop
    ctx->pc = 0x31d718u;
    // NOP
    // 0x31d71c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x31D71Cu;
    {
        const bool branch_taken_0x31d71c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D71Cu;
        // 0x31d720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d71c) {
            ctx->pc = 0x31D72Cu;
            goto label_31d72c;
        }
    }
    ctx->pc = 0x31D724u;
    // 0x31d724: 0xa202009c  sb          $v0, 0x9C($s0)
    ctx->pc = 0x31d724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    // 0x31d728: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31d72c:
    // 0x31d72c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31D72Cu;
    SET_GPR_U32(ctx, 31, 0x31D734u);
    ctx->pc = 0x31D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D72Cu;
    // 0x31d730: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31D72Cu, 0x31D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D734u;
label_31d734:
    // 0x31d734: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31d734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d738: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31d738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31d73c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31d73cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d740: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x31d740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31d744: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x31d744u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d748: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x31d748u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31d74c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31d74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d750: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x31d750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31d754: 0x3e00008  jr          $ra
    ctx->pc = 0x31D754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D754u;
        // 0x31d758: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D75Cu;
    // 0x31d75c: 0x0  nop
    ctx->pc = 0x31d75cu;
    // NOP
    ctx->pc = 0x31d760u;
}
