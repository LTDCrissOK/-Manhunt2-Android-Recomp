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

// Function: sub_0020E5D8
// Address: 0x20e5d8 - 0x20e6b8
void sub_0020E5D8_0x20e5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E5D8_0x20e5d8");
#endif

    switch (ctx->pc) {
        case 0x20e5d8u: goto label_20e5d8;
        case 0x20e5dcu: goto label_20e5dc;
        case 0x20e5e0u: goto label_20e5e0;
        case 0x20e5e4u: goto label_20e5e4;
        case 0x20e5e8u: goto label_20e5e8;
        case 0x20e5ecu: goto label_20e5ec;
        case 0x20e5f0u: goto label_20e5f0;
        case 0x20e5f4u: goto label_20e5f4;
        case 0x20e5f8u: goto label_20e5f8;
        case 0x20e5fcu: goto label_20e5fc;
        case 0x20e600u: goto label_20e600;
        case 0x20e604u: goto label_20e604;
        case 0x20e608u: goto label_20e608;
        case 0x20e60cu: goto label_20e60c;
        case 0x20e610u: goto label_20e610;
        case 0x20e614u: goto label_20e614;
        case 0x20e618u: goto label_20e618;
        case 0x20e61cu: goto label_20e61c;
        case 0x20e620u: goto label_20e620;
        case 0x20e624u: goto label_20e624;
        case 0x20e628u: goto label_20e628;
        case 0x20e62cu: goto label_20e62c;
        case 0x20e630u: goto label_20e630;
        case 0x20e634u: goto label_20e634;
        case 0x20e638u: goto label_20e638;
        case 0x20e63cu: goto label_20e63c;
        case 0x20e640u: goto label_20e640;
        case 0x20e644u: goto label_20e644;
        case 0x20e648u: goto label_20e648;
        case 0x20e64cu: goto label_20e64c;
        case 0x20e650u: goto label_20e650;
        case 0x20e654u: goto label_20e654;
        case 0x20e658u: goto label_20e658;
        case 0x20e65cu: goto label_20e65c;
        case 0x20e660u: goto label_20e660;
        case 0x20e664u: goto label_20e664;
        case 0x20e668u: goto label_20e668;
        case 0x20e66cu: goto label_20e66c;
        case 0x20e670u: goto label_20e670;
        case 0x20e674u: goto label_20e674;
        case 0x20e678u: goto label_20e678;
        case 0x20e67cu: goto label_20e67c;
        case 0x20e680u: goto label_20e680;
        case 0x20e684u: goto label_20e684;
        case 0x20e688u: goto label_20e688;
        case 0x20e68cu: goto label_20e68c;
        case 0x20e690u: goto label_20e690;
        case 0x20e694u: goto label_20e694;
        case 0x20e698u: goto label_20e698;
        case 0x20e69cu: goto label_20e69c;
        case 0x20e6a0u: goto label_20e6a0;
        case 0x20e6a4u: goto label_20e6a4;
        case 0x20e6a8u: goto label_20e6a8;
        case 0x20e6acu: goto label_20e6ac;
        case 0x20e6b0u: goto label_20e6b0;
        case 0x20e6b4u: goto label_20e6b4;
        default: break;
    }

    ctx->pc = 0x20e5d8u;

label_20e5d8:
    // 0x20e5d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20e5dc:
    // 0x20e5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e5e0:
    // 0x20e5e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20e5e4:
    // 0x20e5e4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20e5e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20e5e8:
    // 0x20e5e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e5ec:
    // 0x20e5ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20e5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20e5f0:
    // 0x20e5f0: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x20e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e5f4:
    // 0x20e5f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e5f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e5f8:
    // 0x20e5f8: 0x0  nop
    ctx->pc = 0x20e5f8u;
    // NOP
label_20e5fc:
    // 0x20e5fc: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_20e600:
    if (ctx->pc == 0x20E600u) {
        ctx->pc = 0x20E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5FCu;
        // 0x20e600: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E604u;
        goto label_20e604;
    }
    ctx->pc = 0x20E5FCu;
    {
        const bool branch_taken_0x20e5fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5FCu;
        // 0x20e600: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5fc) {
            ctx->pc = 0x20E6A4u;
            goto label_20e6a4;
        }
    }
    ctx->pc = 0x20E604u;
label_20e604:
    // 0x20e604: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x20e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_20e608:
    // 0x20e608: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x20e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_20e60c:
    // 0x20e60c: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x20e60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_20e610:
    // 0x20e610: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_20e614:
    if (ctx->pc == 0x20E614u) {
        ctx->pc = 0x20E618u;
        goto label_20e618;
    }
    ctx->pc = 0x20E610u;
    {
        const bool branch_taken_0x20e610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e610) {
            ctx->pc = 0x20E644u;
            goto label_20e644;
        }
    }
    ctx->pc = 0x20E618u;
label_20e618:
    // 0x20e618: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x20e618u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e61c:
    // 0x20e61c: 0x0  nop
    ctx->pc = 0x20e61cu;
    // NOP
label_20e620:
    // 0x20e620: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_20e624:
    if (ctx->pc == 0x20E624u) {
        ctx->pc = 0x20E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E620u;
        // 0x20e624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E628u;
        goto label_20e628;
    }
    ctx->pc = 0x20E620u;
    {
        const bool branch_taken_0x20e620 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E620u;
        // 0x20e624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e620) {
            ctx->pc = 0x20E644u;
            goto label_20e644;
        }
    }
    ctx->pc = 0x20E628u;
label_20e628:
    // 0x20e628: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x20e628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_20e62c:
    // 0x20e62c: 0xc04785a  jal         func_11E168
label_20e630:
    if (ctx->pc == 0x20E630u) {
        ctx->pc = 0x20E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E62Cu;
        // 0x20e630: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E634u;
        goto label_20e634;
    }
    ctx->pc = 0x20E62Cu;
    SET_GPR_U32(ctx, 31, 0x20E634u);
    ctx->pc = 0x20E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E62Cu;
    // 0x20e630: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x20E62Cu, 0x20E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E634u;
label_20e634:
    // 0x20e634: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20e634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e638:
    // 0x20e638: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_20e63c:
    if (ctx->pc == 0x20E63Cu) {
        ctx->pc = 0x20E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E638u;
        // 0x20e63c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E640u;
        goto label_20e640;
    }
    ctx->pc = 0x20E638u;
    {
        const bool branch_taken_0x20e638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E638u;
        // 0x20e63c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e638) {
            ctx->pc = 0x20E644u;
            goto label_20e644;
        }
    }
    ctx->pc = 0x20E640u;
label_20e640:
    // 0x20e640: 0xac6202a0  sw          $v0, 0x2A0($v1)
    ctx->pc = 0x20e640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 672), GPR_U32(ctx, 2));
label_20e644:
    // 0x20e644: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x20e644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_20e648:
    // 0x20e648: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x20e648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_20e64c:
    // 0x20e64c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e650:
    // 0x20e650: 0x0  nop
    ctx->pc = 0x20e650u;
    // NOP
label_20e654:
    // 0x20e654: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x20e654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e658:
    // 0x20e658: 0x0  nop
    ctx->pc = 0x20e658u;
    // NOP
label_20e65c:
    // 0x20e65c: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_20e660:
    if (ctx->pc == 0x20E660u) {
        ctx->pc = 0x20E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E65Cu;
        // 0x20e660: 0xe61400d0  swc1        $f20, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E664u;
        goto label_20e664;
    }
    ctx->pc = 0x20E65Cu;
    {
        const bool branch_taken_0x20e65c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e65c) {
            ctx->pc = 0x20E660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E65Cu;
            // 0x20e660: 0xe61400d0  swc1        $f20, 0xD0($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E6A4u;
            goto label_20e6a4;
        }
    }
    ctx->pc = 0x20E664u;
label_20e664:
    // 0x20e664: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20e664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_20e668:
    // 0x20e668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e66c:
    // 0x20e66c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x20e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_20e670:
    // 0x20e670: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x20e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_20e674:
    // 0x20e674: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20e678:
    if (ctx->pc == 0x20E678u) {
        ctx->pc = 0x20E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E674u;
        // 0x20e678: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E67Cu;
        goto label_20e67c;
    }
    ctx->pc = 0x20E674u;
    {
        const bool branch_taken_0x20e674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E674u;
        // 0x20e678: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e674) {
            ctx->pc = 0x20E688u;
            goto label_20e688;
        }
    }
    ctx->pc = 0x20E67Cu;
label_20e67c:
    // 0x20e67c: 0x920211c4  lbu         $v0, 0x11C4($s0)
    ctx->pc = 0x20e67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4548)));
label_20e680:
    // 0x20e680: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
label_20e684:
    if (ctx->pc == 0x20E684u) {
        ctx->pc = 0x20E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E680u;
        // 0x20e684: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E688u;
        goto label_20e688;
    }
    ctx->pc = 0x20E680u;
    {
        const bool branch_taken_0x20e680 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20e680) {
            ctx->pc = 0x20E684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E680u;
            // 0x20e684: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E6A8u;
            goto label_20e6a8;
        }
    }
    ctx->pc = 0x20E688u;
label_20e688:
    // 0x20e688: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x20e688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_20e68c:
    // 0x20e68c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e690:
    // 0x20e690: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x20e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_20e694:
    // 0x20e694: 0x40f809  jalr        $v0
label_20e698:
    if (ctx->pc == 0x20E698u) {
        ctx->pc = 0x20E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E694u;
        // 0x20e698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E69Cu;
        goto label_20e69c;
    }
    ctx->pc = 0x20E694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E69Cu);
        ctx->pc = 0x20E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E694u;
        // 0x20e698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E694u, 0x20E69Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E69Cu;
label_20e69c:
    // 0x20e69c: 0x10000002  b           . + 4 + (0x2 << 2)
label_20e6a0:
    if (ctx->pc == 0x20E6A0u) {
        ctx->pc = 0x20E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E69Cu;
        // 0x20e6a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6A4u;
        goto label_20e6a4;
    }
    ctx->pc = 0x20E69Cu;
    {
        const bool branch_taken_0x20e69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E69Cu;
        // 0x20e6a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e69c) {
            ctx->pc = 0x20E6A8u;
            goto label_20e6a8;
        }
    }
    ctx->pc = 0x20E6A4u;
label_20e6a4:
    // 0x20e6a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e6a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e6a8:
    // 0x20e6a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20e6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20e6ac:
    // 0x20e6ac: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x20e6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20e6b0:
    // 0x20e6b0: 0x3e00008  jr          $ra
label_20e6b4:
    if (ctx->pc == 0x20E6B4u) {
        ctx->pc = 0x20E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6B0u;
        // 0x20e6b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6B8u;
        goto label_fallthrough_0x20e6b0;
    }
    ctx->pc = 0x20E6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6B0u;
        // 0x20e6b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e6b0:
    ctx->pc = 0x20E6B8u;
}
