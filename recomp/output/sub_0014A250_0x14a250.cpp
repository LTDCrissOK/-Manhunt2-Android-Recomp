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

// Function: sub_0014A250
// Address: 0x14a250 - 0x14a2f0
void sub_0014A250_0x14a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A250_0x14a250");
#endif

    switch (ctx->pc) {
        case 0x14a274u: goto label_14a274;
        case 0x14a280u: goto label_14a280;
        case 0x14a2c4u: goto label_14a2c4;
        case 0x14a2ccu: goto label_14a2cc;
        case 0x14a2dcu: goto label_14a2dc;
        default: break;
    }

    ctx->pc = 0x14a250u;

    // 0x14a250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14a25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a260: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14a260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a268: 0xae060468  sw          $a2, 0x468($s0)
    ctx->pc = 0x14a268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 6));
    // 0x14a26c: 0xc046002  jal         func_118008
    ctx->pc = 0x14A26Cu;
    SET_GPR_U32(ctx, 31, 0x14A274u);
    ctx->pc = 0x14A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A26Cu;
    // 0x14a270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x14A26Cu, 0x14A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A274u;
label_14a274:
    // 0x14a274: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x14a274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x14a278: 0xc046086  jal         func_118218
    ctx->pc = 0x14A278u;
    SET_GPR_U32(ctx, 31, 0x14A280u);
    ctx->pc = 0x14A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A278u;
    // 0x14a27c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x14A278u, 0x14A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A280u;
label_14a280:
    // 0x14a280: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x14a280u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a284: 0xfa010570  sqc2        $vf1, 0x570($s0)
    ctx->pc = 0x14a284u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1392), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14a288: 0xc6000574  lwc1        $f0, 0x574($s0)
    ctx->pc = 0x14a288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a28c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x14a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x14a290: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14a290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14a294: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a29c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x14a29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x14a2a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14a2a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14a2a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14a2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14a2a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14a2a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14a2ac: 0xe6000574  swc1        $f0, 0x574($s0)
    ctx->pc = 0x14a2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
    // 0x14a2b0: 0xc441c6a4  lwc1        $f1, -0x395C($v0)
    ctx->pc = 0x14a2b0u;
    { uint32_t bits = FAST_READ32(0x45C6A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a2b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a2b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14a2b8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14a2b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14a2bc: 0xc052d80  jal         func_14B600
    ctx->pc = 0x14A2BCu;
    SET_GPR_U32(ctx, 31, 0x14A2C4u);
    ctx->pc = 0x14A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2BCu;
    // 0x14a2c0: 0xe6000574  swc1        $f0, 0x574($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B600u, 0x14A2BCu, 0x14A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2C4u;
label_14a2c4:
    // 0x14a2c4: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x14A2C4u;
    SET_GPR_U32(ctx, 31, 0x14A2CCu);
    ctx->pc = 0x14A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2C4u;
    // 0x14a2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x14A2C4u, 0x14A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2CCu;
label_14a2cc:
    // 0x14a2cc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x14a2d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2d4: 0xc042136  jal         func_1084D8
    ctx->pc = 0x14A2D4u;
    SET_GPR_U32(ctx, 31, 0x14A2DCu);
    ctx->pc = 0x14A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2D4u;
    // 0x14a2d8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x14A2D4u, 0x14A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2DCu;
label_14a2dc:
    // 0x14a2dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a2e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14a2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a2e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2E8u;
        // 0x14a2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A2F0u;
}
