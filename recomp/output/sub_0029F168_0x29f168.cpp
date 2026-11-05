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

// Function: sub_0029F168
// Address: 0x29f168 - 0x29f288
void sub_0029F168_0x29f168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F168_0x29f168");
#endif

    switch (ctx->pc) {
        case 0x29f1dcu: goto label_29f1dc;
        case 0x29f1f0u: goto label_29f1f0;
        case 0x29f204u: goto label_29f204;
        case 0x29f22cu: goto label_29f22c;
        case 0x29f23cu: goto label_29f23c;
        default: break;
    }

    ctx->pc = 0x29f168u;

    // 0x29f168: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29f168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29f16c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29f170: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29f170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29f174: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x29f174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x29f178: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x29f178u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29f17c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29f17cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f180: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x29f180u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x29f184: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x29f184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x29f188: 0x2443a950  addiu       $v1, $v0, -0x56B0
    ctx->pc = 0x29f188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945104));
    // 0x29f18c: 0x9044a950  lbu         $a0, -0x56B0($v0)
    ctx->pc = 0x29f18cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3FA950u));
    // 0x29f190: 0xc4b5a940  lwc1        $f21, -0x56C0($a1)
    ctx->pc = 0x29f190u;
    { uint32_t bits = FAST_READ32(0x3FA940u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29f194: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29f194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29f198: 0xc4d6a944  lwc1        $f22, -0x56BC($a2)
    ctx->pc = 0x29f198u;
    { uint32_t bits = FAST_READ32(0x3FA944u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29f19c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x29f19cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x29f1a0: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x29f1a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29f1a4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x29f1a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29f1a8: 0x90670003  lbu         $a3, 0x3($v1)
    ctx->pc = 0x29f1a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x3FA953u));
    // 0x29f1ac: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x29f1acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x3FA951u));
    // 0x29f1b0: 0x90660002  lbu         $a2, 0x2($v1)
    ctx->pc = 0x29f1b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x3FA952u));
    // 0x29f1b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29f1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29f1b8: 0xc457a93c  lwc1        $f23, -0x56C4($v0)
    ctx->pc = 0x29f1b8u;
    { uint32_t bits = FAST_READ32(0x3FA93Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29f1bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29f1bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f1c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29f1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29f1c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29f1cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29f1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29f1d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29f1d4: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x29F1D4u;
    SET_GPR_U32(ctx, 31, 0x29F1DCu);
    ctx->pc = 0x29F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1D4u;
    // 0x29f1d8: 0xc514a938  lwc1        $f20, -0x56C8($t0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294945080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x29F1D4u, 0x29F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1DCu;
label_29f1dc:
    // 0x29f1dc: 0x8e620260  lw          $v0, 0x260($s3)
    ctx->pc = 0x29f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x29f1e0: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x29F1E0u;
    {
        const bool branch_taken_0x29f1e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1E0u;
        // 0x29f1e4: 0x3c150057  lui         $s5, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f1e0) {
            ctx->pc = 0x29F254u;
            goto label_29f254;
        }
    }
    ctx->pc = 0x29F1E8u;
    // 0x29f1e8: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x29f1e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x29f1ec: 0x26710240  addiu       $s1, $s3, 0x240
    ctx->pc = 0x29f1ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
label_29f1f0:
    // 0x29f1f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x29f1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29f1f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1f8: 0x26a44ec0  addiu       $a0, $s5, 0x4EC0
    ctx->pc = 0x29f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20160));
    // 0x29f1fc: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x29F1FCu;
    SET_GPR_U32(ctx, 31, 0x29F204u);
    ctx->pc = 0x29F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1FCu;
    // 0x29f200: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x29F1FCu, 0x29F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F204u;
label_29f204:
    // 0x29f204: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x29f204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x29f208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f20c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x29f20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x29f210: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29f210u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29f214: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x29f214u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x29f218: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x29f218u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x29f21c: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x29f21cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x29f220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f224: 0xc09f662  jal         func_27D988
    ctx->pc = 0x29F224u;
    SET_GPR_U32(ctx, 31, 0x29F22Cu);
    ctx->pc = 0x29F228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F224u;
    // 0x29f228: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x29F224u, 0x29F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F22Cu;
label_29f22c:
    // 0x29f22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f230: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29f230u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29f234: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x29F234u;
    SET_GPR_U32(ctx, 31, 0x29F23Cu);
    ctx->pc = 0x29F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F234u;
    // 0x29f238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x29F234u, 0x29F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F23Cu;
label_29f23c:
    // 0x29f23c: 0xc681a948  lwc1        $f1, -0x56B8($s4)
    ctx->pc = 0x29f23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294945096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f240: 0x8e620260  lw          $v0, 0x260($s3)
    ctx->pc = 0x29f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x29f244: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29f244u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29f248: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x29f248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29f24c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x29F24Cu;
    {
        const bool branch_taken_0x29f24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F24Cu;
        // 0x29f250: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f24c) {
            ctx->pc = 0x29F1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f1f0;
        }
    }
    ctx->pc = 0x29F254u;
label_29f254:
    // 0x29f254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29f258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29f25c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29f25cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f260: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29f260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f264: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29f264u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f268: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29f268u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29f26c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29f26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29f270: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x29f270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29f274: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x29f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29f278: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x29f278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29f27c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x29f27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29f280: 0x3e00008  jr          $ra
    ctx->pc = 0x29F280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F280u;
        // 0x29f284: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F288u;
}
