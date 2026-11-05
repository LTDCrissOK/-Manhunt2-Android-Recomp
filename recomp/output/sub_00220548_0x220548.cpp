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

// Function: sub_00220548
// Address: 0x220548 - 0x2205c8
void sub_00220548_0x220548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220548_0x220548");
#endif

    switch (ctx->pc) {
        case 0x22055cu: goto label_22055c;
        case 0x220570u: goto label_220570;
        case 0x2205b0u: goto label_2205b0;
        default: break;
    }

    ctx->pc = 0x220548u;

    // 0x220548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22054c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22054cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220550: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x220550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x220554: 0xc087e84  jal         func_21FA10
    ctx->pc = 0x220554u;
    SET_GPR_U32(ctx, 31, 0x22055Cu);
    ctx->pc = 0x220558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220554u;
    // 0x220558: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FA10u, 0x220554u, 0x22055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22055Cu;
label_22055c:
    // 0x22055c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x22055cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x220560: 0x26041410  addiu       $a0, $s0, 0x1410
    ctx->pc = 0x220560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5136));
    // 0x220564: 0x246318e8  addiu       $v1, $v1, 0x18E8
    ctx->pc = 0x220564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6376));
    // 0x220568: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x220568u;
    SET_GPR_U32(ctx, 31, 0x220570u);
    ctx->pc = 0x22056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220568u;
    // 0x22056c: 0xae030190  sw          $v1, 0x190($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x220568u, 0x220570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220570u;
label_220570:
    // 0x220570: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x220570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x220574: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x220574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x220578: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x220578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x22057c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22057cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x220580: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x220580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x220584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x220584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220588: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x220588u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x22058c: 0xae001418  sw          $zero, 0x1418($s0)
    ctx->pc = 0x22058cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5144), GPR_U32(ctx, 0));
    // 0x220590: 0xa2001430  sb          $zero, 0x1430($s0)
    ctx->pc = 0x220590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5168), (uint8_t)GPR_U32(ctx, 0));
    // 0x220594: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x220594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x220598: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x220598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22059c: 0xe602142c  swc1        $f2, 0x142C($s0)
    ctx->pc = 0x22059cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5164), bits); }
    // 0x2205a0: 0xe601141c  swc1        $f1, 0x141C($s0)
    ctx->pc = 0x2205a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5148), bits); }
    // 0x2205a4: 0xe6021428  swc1        $f2, 0x1428($s0)
    ctx->pc = 0x2205a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5160), bits); }
    // 0x2205a8: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x2205A8u;
    SET_GPR_U32(ctx, 31, 0x2205B0u);
    ctx->pc = 0x2205ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2205A8u;
    // 0x2205ac: 0xe6001420  swc1        $f0, 0x1420($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x2205A8u, 0x2205B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2205B0u;
label_2205b0:
    // 0x2205b0: 0xe6001424  swc1        $f0, 0x1424($s0)
    ctx->pc = 0x2205b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5156), bits); }
    // 0x2205b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2205b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2205b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2205bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2205bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2205c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2205C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2205C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205C0u;
        // 0x2205c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2205C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2205C8u;
}
