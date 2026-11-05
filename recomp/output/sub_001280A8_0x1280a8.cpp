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

// Function: sub_001280A8
// Address: 0x1280a8 - 0x128188
void sub_001280A8_0x1280a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001280A8_0x1280a8");
#endif

    switch (ctx->pc) {
        case 0x1280ccu: goto label_1280cc;
        case 0x1280e4u: goto label_1280e4;
        case 0x1280ecu: goto label_1280ec;
        case 0x1280f8u: goto label_1280f8;
        case 0x128170u: goto label_128170;
        default: break;
    }

    ctx->pc = 0x1280a8u;

    // 0x1280a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1280a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1280ac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1280acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1280b0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1280b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1280b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1280b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280b8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1280b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1280bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1280bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280c0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1280c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1280c4: 0xc049fde  jal         func_127F78
    ctx->pc = 0x1280C4u;
    SET_GPR_U32(ctx, 31, 0x1280CCu);
    ctx->pc = 0x1280C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280C4u;
    // 0x1280c8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F78u, 0x1280C4u, 0x1280CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1280CCu;
label_1280cc:
    // 0x1280cc: 0x92030e80  lbu         $v1, 0xE80($s0)
    ctx->pc = 0x1280ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x1280d0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1280d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1280d4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1280D4u;
    {
        const bool branch_taken_0x1280d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1280D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280D4u;
        // 0x1280d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280d4) {
            ctx->pc = 0x1280E4u;
            goto label_1280e4;
        }
    }
    ctx->pc = 0x1280DCu;
    // 0x1280dc: 0xc04a062  jal         func_128188
    ctx->pc = 0x1280DCu;
    SET_GPR_U32(ctx, 31, 0x1280E4u);
    ctx->pc = 0x1280E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280DCu;
    // 0x1280e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128188u, 0x1280DCu, 0x1280E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1280E4u;
label_1280e4:
    // 0x1280e4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1280E4u;
    SET_GPR_U32(ctx, 31, 0x1280ECu);
    ctx->pc = 0x1280E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280E4u;
    // 0x1280e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1280E4u, 0x1280ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1280ECu;
label_1280ec:
    // 0x1280ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1280ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280f0: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1280F0u;
    SET_GPR_U32(ctx, 31, 0x1280F8u);
    ctx->pc = 0x1280F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280F0u;
    // 0x1280f4: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1280F0u, 0x1280F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1280F8u;
label_1280f8:
    // 0x1280f8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1280f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1280fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1280fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x128100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128104: 0x92040e80  lbu         $a0, 0xE80($s0)
    ctx->pc = 0x128104u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x128108: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x128108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12810c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x12810cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128110: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x128110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x128114: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x128114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x128118: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x128118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12811c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x12811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x128120: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x128120u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x128124: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x128124u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x128128: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x128128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x12812c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12812cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x128130: 0xac920a80  sw          $s2, 0xA80($a0)
    ctx->pc = 0x128130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2688), GPR_U32(ctx, 18));
    // 0x128134: 0x92030e80  lbu         $v1, 0xE80($s0)
    ctx->pc = 0x128134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x128138: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x128138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12813c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x12813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x128140: 0xac620a84  sw          $v0, 0xA84($v1)
    ctx->pc = 0x128140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2692), GPR_U32(ctx, 2));
    // 0x128144: 0x92020e80  lbu         $v0, 0xE80($s0)
    ctx->pc = 0x128144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x128148: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x128148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12814c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x128150: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x128150u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x128154: 0xf8410a90  sqc2        $vf1, 0xA90($v0)
    ctx->pc = 0x128154u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2704), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x128158: 0x92030e80  lbu         $v1, 0xE80($s0)
    ctx->pc = 0x128158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3712)));
    // 0x12815c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12815cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128160: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x128160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128164: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x128164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x128168: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x128168u;
    SET_GPR_U32(ctx, 31, 0x128170u);
    ctx->pc = 0x12816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128168u;
    // 0x12816c: 0xa2030e80  sb          $v1, 0xE80($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3712), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x128168u, 0x128170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128170u;
label_128170:
    // 0x128170: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x128170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128174: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x128174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x128178: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x128178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12817c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x12817cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x128180: 0x3e00008  jr          $ra
    ctx->pc = 0x128180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128180u;
        // 0x128184: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128188u;
}
