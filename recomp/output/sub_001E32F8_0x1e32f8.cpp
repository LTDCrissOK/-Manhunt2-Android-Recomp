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

// Function: sub_001E32F8
// Address: 0x1e32f8 - 0x1e3418
void sub_001E32F8_0x1e32f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E32F8_0x1e32f8");
#endif

    switch (ctx->pc) {
        case 0x1e33a0u: goto label_1e33a0;
        case 0x1e33c0u: goto label_1e33c0;
        case 0x1e33dcu: goto label_1e33dc;
        default: break;
    }

    ctx->pc = 0x1e32f8u;

    // 0x1e32f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e32f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e32fc: 0x3c014cbe  lui         $at, 0x4CBE
    ctx->pc = 0x1e32fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19646 << 16));
    // 0x1e3300: 0x3421bc20  ori         $at, $at, 0xBC20
    ctx->pc = 0x1e3300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48160);
    // 0x1e3304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e3304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3308: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e3308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e330c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e330cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e3310: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e3310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e3314: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e3314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3318: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e3318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e331c: 0xe44091cc  swc1        $f0, -0x6E34($v0)
    ctx->pc = 0x1e331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F91CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91CCu, _value); } while (0); }
    // 0x1e3320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e3320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e3324: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e3324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e3328: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e3328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e332c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e3330: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e3330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e3334: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x1e3334u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x1e3338: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1e3338u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x1e333c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1e333cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1e3340: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e3340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e3344: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1e3344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1e3348: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e3348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e334c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1e334cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1e3350: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e3350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3354: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1e3354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1e3358: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e3358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e335c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1e335cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1e3360: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e3360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3364: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1e3364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1e3368: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e3368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e336c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e336cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3370: 0xc440d8d8  lwc1        $f0, -0x2728($v0)
    ctx->pc = 0x1e3370u;
    { uint32_t bits = FAST_READ32(0x45D8D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3374: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1e3374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1e3378: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1e3378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1e337c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1e337cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1e3380: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1e3380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1e3384: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x1e3384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
    // 0x1e3388: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1e3388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1e338c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1e338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1e3390: 0xae070044  sw          $a3, 0x44($s0)
    ctx->pc = 0x1e3390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 7));
    // 0x1e3394: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x1e3394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x1e3398: 0xc07aa02  jal         func_1EA808
    ctx->pc = 0x1E3398u;
    SET_GPR_U32(ctx, 31, 0x1E33A0u);
    ctx->pc = 0x1E339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3398u;
    // 0x1e339c: 0xae050030  sw          $a1, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA808u, 0x1E3398u, 0x1E33A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E33A0u;
label_1e33a0:
    // 0x1e33a0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e33a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e33a4: 0x8c6291f4  lw          $v0, -0x6E0C($v1)
    ctx->pc = 0x1e33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91F4u));
    // 0x1e33a8: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E33A8u;
    {
        const bool branch_taken_0x1e33a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33A8u;
        // 0x1e33ac: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33a8) {
            ctx->pc = 0x1E33ECu;
            goto label_1e33ec;
        }
    }
    ctx->pc = 0x1E33B0u;
    // 0x1e33b0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1e33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1e33b4: 0x3c14001e  lui         $s4, 0x1E
    ctx->pc = 0x1e33b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)30 << 16));
    // 0x1e33b8: 0x2451c758  addiu       $s1, $v0, -0x38A8
    ctx->pc = 0x1e33b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
    // 0x1e33bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1e33bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66C758u));
label_1e33c0:
    // 0x1e33c0: 0x26660050  addiu       $a2, $s3, 0x50
    ctx->pc = 0x1e33c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x1e33c4: 0x26871178  addiu       $a3, $s4, 0x1178
    ctx->pc = 0x1e33c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4472));
    // 0x1e33c8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e33c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33cc: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1e33ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e33d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e33d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e33d4: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x1E33D4u;
    SET_GPR_U32(ctx, 31, 0x1E33DCu);
    ctx->pc = 0x1E33D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E33D4u;
    // 0x1e33d8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x1E33D4u, 0x1E33DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E33DCu;
label_1e33dc:
    // 0x1e33dc: 0x8ea391f4  lw          $v1, -0x6E0C($s5)
    ctx->pc = 0x1e33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939124)));
    // 0x1e33e0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1e33e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e33e4: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E33E4u;
    {
        const bool branch_taken_0x1e33e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e33e4) {
            ctx->pc = 0x1E33E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E33E4u;
            // 0x1e33e8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E33C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e33c0;
        }
    }
    ctx->pc = 0x1E33ECu;
label_1e33ec:
    // 0x1e33ec: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e33f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e33f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e33f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e33f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e33f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e33f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e33fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e33fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3400: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e3400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e3404: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e3404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3408: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e3408u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e340c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e340cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3410: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3410u;
        // 0x1e3414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3418u;
}
