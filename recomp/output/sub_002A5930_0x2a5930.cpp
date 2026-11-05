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

// Function: sub_002A5930
// Address: 0x2a5930 - 0x2a5a00
void sub_002A5930_0x2a5930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5930_0x2a5930");
#endif

    switch (ctx->pc) {
        case 0x2a598cu: goto label_2a598c;
        case 0x2a59a4u: goto label_2a59a4;
        case 0x2a59bcu: goto label_2a59bc;
        case 0x2a59d4u: goto label_2a59d4;
        default: break;
    }

    ctx->pc = 0x2a5930u;

    // 0x2a5930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a5934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5938: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2a5938u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2a593c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a5940: 0x9202a988  lbu         $v0, -0x5678($s0)
    ctx->pc = 0x2a5940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FA988u));
    // 0x2a5944: 0xe7b70028  swc1        $f23, 0x28($sp)
    ctx->pc = 0x2a5944u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a5948: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2a5948u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a594c: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2a594cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a5950: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A5950u;
    {
        const bool branch_taken_0x2a5950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5950u;
        // 0x2a5954: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5950) {
            ctx->pc = 0x2A59DCu;
            goto label_2a59dc;
        }
    }
    ctx->pc = 0x2A5958u;
    // 0x2a5958: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a5958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a595c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2a595cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2a5960: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2a5960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2a5964: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a5964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a5968: 0x24842330  addiu       $a0, $a0, 0x2330
    ctx->pc = 0x2a5968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9008));
    // 0x2a596c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x2a596cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x2a5970: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2a5970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2a5974: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a5974u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a5978: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2a5978u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x2a597c: 0x3c01c0e0  lui         $at, 0xC0E0
    ctx->pc = 0x2a597cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49376 << 16));
    // 0x2a5980: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a5980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a5984: 0xc0a949a  jal         func_2A5268
    ctx->pc = 0x2A5984u;
    SET_GPR_U32(ctx, 31, 0x2A598Cu);
    ctx->pc = 0x2A5988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5984u;
    // 0x2a5988: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5268u, 0x2A5984u, 0x2A598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A598Cu;
label_2a598c:
    // 0x2a598c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2a598cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2a5990: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2a5990u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2a5994: 0x24842348  addiu       $a0, $a0, 0x2348
    ctx->pc = 0x2a5994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9032));
    // 0x2a5998: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2a5998u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2a599c: 0xc0a9572  jal         func_2A55C8
    ctx->pc = 0x2A599Cu;
    SET_GPR_U32(ctx, 31, 0x2A59A4u);
    ctx->pc = 0x2A59A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A599Cu;
    // 0x2a59a0: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A55C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A55C8u, 0x2A599Cu, 0x2A59A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A59A4u;
label_2a59a4:
    // 0x2a59a4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2a59a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2a59a8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2a59a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2a59ac: 0x24842360  addiu       $a0, $a0, 0x2360
    ctx->pc = 0x2a59acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9056));
    // 0x2a59b0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2a59b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2a59b4: 0xc0a9572  jal         func_2A55C8
    ctx->pc = 0x2A59B4u;
    SET_GPR_U32(ctx, 31, 0x2A59BCu);
    ctx->pc = 0x2A59B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A59B4u;
    // 0x2a59b8: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A55C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A55C8u, 0x2A59B4u, 0x2A59BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A59BCu;
label_2a59bc:
    // 0x2a59bc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2a59bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2a59c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a59c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a59c4: 0x24842378  addiu       $a0, $a0, 0x2378
    ctx->pc = 0x2a59c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9080));
    // 0x2a59c8: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2a59c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x2a59cc: 0xc0a949a  jal         func_2A5268
    ctx->pc = 0x2A59CCu;
    SET_GPR_U32(ctx, 31, 0x2A59D4u);
    ctx->pc = 0x2A59D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A59CCu;
    // 0x2a59d0: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5268u, 0x2A59CCu, 0x2A59D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A59D4u;
label_2a59d4:
    // 0x2a59d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a59d8: 0xa202a988  sb          $v0, -0x5678($s0)
    ctx->pc = 0x2a59d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294945160), (uint8_t)GPR_U32(ctx, 2));
label_2a59dc:
    // 0x2a59dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a59dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a59e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a59e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a59e4: 0xc7b70028  lwc1        $f23, 0x28($sp)
    ctx->pc = 0x2a59e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a59e8: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x2a59e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a59ec: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2a59ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a59f0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2a59f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a59f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A59F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A59F4u;
        // 0x2a59f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A59F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A59FCu;
    // 0x2a59fc: 0x0  nop
    ctx->pc = 0x2a59fcu;
    // NOP
    ctx->pc = 0x2a5a00u;
}
