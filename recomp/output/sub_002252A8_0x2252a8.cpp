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

// Function: sub_002252A8
// Address: 0x2252a8 - 0x225360
void sub_002252A8_0x2252a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002252A8_0x2252a8");
#endif

    switch (ctx->pc) {
        case 0x2252bcu: goto label_2252bc;
        case 0x225330u: goto label_225330;
        case 0x22533cu: goto label_22533c;
        default: break;
    }

    ctx->pc = 0x2252a8u;

    // 0x2252a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2252a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2252ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2252acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2252b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2252b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2252b4: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x2252B4u;
    SET_GPR_U32(ctx, 31, 0x2252BCu);
    ctx->pc = 0x2252B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2252B4u;
    // 0x2252b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x2252B4u, 0x2252BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252BCu;
label_2252bc:
    // 0x2252bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2252bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2252c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2252c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2252c4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2252c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2252c8: 0x246319e8  addiu       $v1, $v1, 0x19E8
    ctx->pc = 0x2252c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6632));
    // 0x2252cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2252ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2252d0: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x2252d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x2252d4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2252d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2252d8: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x2252d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x2252dc: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x2252dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x2252e0: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x2252e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x2252e4: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x2252e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x2252e8: 0xae00023c  sw          $zero, 0x23C($s0)
    ctx->pc = 0x2252e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 0));
    // 0x2252ec: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x2252ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x2252f0: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x2252f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x2252f4: 0xae00025c  sw          $zero, 0x25C($s0)
    ctx->pc = 0x2252f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
    // 0x2252f8: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x2252f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x2252fc: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x2252fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x225300: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x225300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x225304: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x225304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x225308: 0xa2000270  sb          $zero, 0x270($s0)
    ctx->pc = 0x225308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 624), (uint8_t)GPR_U32(ctx, 0));
    // 0x22530c: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x22530cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x225310: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x225310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x225314: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x225314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x225318: 0xa2000280  sb          $zero, 0x280($s0)
    ctx->pc = 0x225318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 640), (uint8_t)GPR_U32(ctx, 0));
    // 0x22531c: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x22531cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x225320: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x225320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x225324: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x225324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x225328: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x225328u;
    SET_GPR_U32(ctx, 31, 0x225330u);
    ctx->pc = 0x22532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225328u;
    // 0x22532c: 0xae020228  sw          $v0, 0x228($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x225328u, 0x225330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225330u;
label_225330:
    // 0x225330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225334: 0xc0ac896  jal         func_2B2258
    ctx->pc = 0x225334u;
    SET_GPR_U32(ctx, 31, 0x22533Cu);
    ctx->pc = 0x225338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225334u;
    // 0x225338: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2258u, 0x225334u, 0x22533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22533Cu;
label_22533c:
    // 0x22533c: 0xae020224  sw          $v0, 0x224($s0)
    ctx->pc = 0x22533cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
    // 0x225340: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225344: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x225344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x225348: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x225348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x22534c: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x22534cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x225350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225354: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x225354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225358: 0x3e00008  jr          $ra
    ctx->pc = 0x225358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225358u;
        // 0x22535c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225360u;
}
